"""RSO (Revolution shared object) parsing, presented with the same interface as rel.Rel so relgen can recompile
RSO modules like REL ones.

Header (0x58 bytes): next, prev, nsec, section table offset, name offset, name size, version, bss size,
prolog/epilog/unresolved/bss section (u8 x4), prolog, epilog, unresolved, internal reloc table offset/size,
external reloc table offset/size, export table offset/size/names, import table offset/size/names.
Relocation entries are ELF-style (offset in the module file, info = index << 8 | type, addend). Internal entries
index a section of the module; external ones an import, resolved against the static module (.sel) that lists
main.dol's exports by name.
"""
import struct

MAIN_ID = 0          # relocations against main.dol
SELF_ID = 1


def sel_exports(path, sec_base):
    """name -> absolute address from a .sel (static RSO of main.dol); sec_base maps .sel section -> address"""
    d = open(path, 'rb').read()
    h = struct.unpack('>23I', d[:0x5C])
    xo, xs, xn = h[16:19]
    out = {}
    for k in range(xs // 16):
        no, v, sec, _ = struct.unpack('>4I', d[xo + 16 * k:xo + 16 * k + 16])
        nm = d[xn + no:d.index(b'\0', xn + no)].decode()
        if sec in sec_base:
            out.setdefault(nm, sec_base[sec] + v)
        elif sec == 0xFFF1:                     # absolute
            out.setdefault(nm, v)
    return out


class Rso:
    def __init__(self, path, exports):
        d = self.d = open(path, 'rb').read()
        self.path = path
        self.id = SELF_ID
        h = struct.unpack('>23I', d[:0x5C])
        self.nsec, so = h[2], h[3]
        self.bss_size = h[7]
        self.prolog_sec, self.epilog_sec, self.unres_sec, self.bss_sec = d[0x20:0x24]
        self.prolog, self.epilog, self.unresolved = h[9], h[10], h[11]
        iro, irs, ero, ers = h[12], h[13], h[14], h[15]
        mo, ms, mn = h[19], h[20], h[21]
        self.secs = []          # (file offset or 0, size, exec)
        for i in range(self.nsec):
            o, s = struct.unpack('>II', d[so + i * 8:so + i * 8 + 8])
            self.secs.append((o & ~3, s, i == 1 and s > 0))
        xo, xs, xn = h[16], h[17], h[18]
        self.exports = []       # (name, section, offset): main.dol calls these through RSO-linked branches
        for k in range(xs // 16):
            no, v, sec, _ = struct.unpack('>4I', d[xo + 16 * k:xo + 16 * k + 16])
            self.exports.append((d[xn + no:d.index(b'\0', xn + no)].decode(), sec, v))
        imports = []
        for k in range(ms // 12):
            no, _, _ = struct.unpack('>3I', d[mo + 12 * k:mo + 12 * k + 12])
            imports.append(d[mn + no:d.index(b'\0', mn + no)].decode())
        self.imports = imports
        self.unresolved_imports = sorted({n for n in imports if n not in exports})
        self.relocs = []        # (module, patch_sec, patch_off, type, target_sec, addend) as in rel.Rel
        for k in range(irs // 12):
            off, info, add = struct.unpack('>3I', d[iro + 12 * k:iro + 12 * k + 12])
            ps, po = self._where(off)
            self.relocs.append((SELF_ID, ps, po, info & 0xFF, info >> 8, add))
        for k in range(ers // 12):
            off, info, add = struct.unpack('>3I', d[ero + 12 * k:ero + 12 * k + 12])
            ps, po = self._where(off)
            name = imports[info >> 8]
            if name not in exports:
                continue
            self.relocs.append((MAIN_ID, ps, po, info & 0xFF, 0, (exports[name] + add) & 0xFFFFFFFF))

    def _where(self, off):
        for i, (o, s, x) in enumerate(self.secs):
            if o and o <= off < o + s:
                return i, off - o
        raise ValueError(f'{self.path}: relocation at file offset {off:X} is outside every section')

    def word(self, sec, off):
        o, s, x = self.secs[sec]
        if not o or off < 0 or off + 4 > s: return None
        return struct.unpack('>I', self.d[o + off:o + off + 4])[0]

    def sig(self):
        return tuple(s for o, s, x in self.secs) + (self.bss_size,)
