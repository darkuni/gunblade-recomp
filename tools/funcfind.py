#!/usr/bin/env python3
"""Find function boundaries in a main.dol without dtk and write a dtk-style symbols.txt.

usage: funcfind.py [--starts addrs.txt] main.dol out_symbols.txt [ref.dol ref_symbols.txt ...]

Starts come from: the entry point, every bl target, code pointers in data (not switch-table entries),
non-link branches that leave their function, unreachable code after a function's last reachable
instruction, and exact matches of functions from already-split games (ref pairs). A function runs to
the next start, minus trailing zero padding. Switch tables (lis/addi base + lwzx + mtctr + bctr) are
written as jumptable_ objects.
"""
import sys, os, struct, bisect, hashlib, collections
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'src'))
from dol import Dol, load_symbols
from ppcdec import decode


def main():
    args = sys.argv[1:]
    extra = []
    if '--starts' in args:            # file of known function addresses (hex, first column), e.g. from an RSO .sel
        i = args.index('--starts'); extra = [int(l.split()[0], 16) for l in open(args[i + 1]) if l.strip()]
        del args[i:i + 2]
    dolp, outp = args[:2]
    refs = args[2:]
    D = Dol(dolp)
    text = [(a, a + s, i) for i, (o, a, s, t) in enumerate(D.sections) if t]
    data = [(a, a + s) for (o, a, s, t) in D.sections if not t]
    W = {}
    for a, e, _ in text:
        for p in range(a, e, 4):
            W[p] = D.word(p)
    in_text = lambda t: t in W
    dec = {p: decode(w) for p, w in W.items()}

    def tgt(p):
        m, f = dec[p]
        if m == 'b':
            return (f['li'] if f['aa'] else p + f['li']) & 0xffffffff
        if m == 'bc':
            return (f['bd'] if f['aa'] else p + f['bd']) & 0xffffffff
        return None

    def term(p):  # unconditional end of straight-line flow
        m, f = dec[p]
        if m == 'b' and not f['lk']:
            return True
        if m in ('bclr', 'bcctr') and not f['lk'] and (f['bo'] & 0x14) == 0x14:
            return True
        if m == 'rfi':
            return True
        return False

    # ---- switch tables
    jt = {}          # table address -> (bctr pc, [targets])
    jt_words = set()
    for p in W:
        m, f = dec[p]
        if m != 'bcctr' or f['lk']:
            continue
        hi = {}
        base = None
        for q in range(max(p - 0x4000, text[0][0]), p, 4):
            if q not in dec:
                continue
            mm, ff = dec[q]
            if mm == 'addis' and ff['ra'] == 0:
                hi[ff['rd']] = (ff['simm'] << 16) & 0xffffffff
            elif mm == 'addi' and ff['ra'] in hi and q >= p - 64:
                base = (hi[ff['ra']] + ff['simm']) & 0xffffffff
            elif mm == 'lwzx' and base is None:
                pass
        if base is None or any(base in r for r in []):
            continue
        # bound: the cmplwi rX,N / bgt default before the table load gives N+1 entries
        lim = 1024
        for q in range(p - 4, max(p - 4 * 24, text[0][0]), -4):
            mm, ff = dec[q]
            if mm == 'cmpli':
                lim = ff['uimm'] + 1
                break
        ts = []
        k = 0
        while k < lim:
            t = D.word(base + 4 * k)
            if t is None or t & 3 or not in_text(t) or abs(t - p) > 0x20000:
                break
            ts.append(t)
            k += 1
        if len(ts) >= 2:
            jt[base] = (p, ts)
            for k in range(len(ts)):
                jt_words.add(base + 4 * k)

    jt_targets_pre = {t for _, ts in jt.values() for t in ts}
    starts = {D.entry}
    starts.update(a for a in extra if a in W)
    # ---- bl targets
    for p in W:
        m, f = dec[p]
        if m in ('b', 'bc') and f['lk']:
            t = tgt(p)
            if in_text(t):
                starts.add(t)

    def prev_ends(t):
        q = t - 4
        return q not in W or W[q] in (0, 0x60000000) or term(q)

    # ---- code pointers in data (vtables, callbacks)
    ptr_targets = collections.Counter()
    for a, e in data:
        for p in range(a, e, 4):
            if p in jt_words:
                continue
            t = D.word(p)
            if t is not None and in_text(t) and W[t] != 0:
                ptr_targets[t] += 1
    jt_targets = {t for _, ts in jt.values() for t in ts}
    def is_prologue(t):
        m, f = dec[t]
        return (m == 'stwu' and f['rd'] == 1 and f['ra'] == 1) or W[t] == 0x7C0802A6
    # address constants in code: lis rX,hi ... addi/ori rY,rX,lo (callbacks, handlers)
    hi = {}
    for p in sorted(W):
        m, f = dec[p]
        if m == 'addis' and f['ra'] == 0:
            hi[f['rd']] = ((f['simm'] << 16) & 0xffffffff, p)
            continue
        if m in ('addi', 'ori'):
            src = f['ra'] if m == 'addi' else f['rd']
            if src in hi and p - hi[src][1] <= 4 * 64:
                lo = f['simm'] if m == 'addi' else f['uimm']
                t = (hi[src][0] + lo) & 0xffffffff
                if in_text(t) and t not in jt_targets_pre and W[t] != 0 and (is_prologue(t) or prev_ends(t)):
                    starts.add(t)
    for t, n in ptr_targets.items():
        if t in jt_targets:
            continue
        m, f = dec[t]
        prologue = (m == 'stwu' and f['rd'] == 1 and f['ra'] == 1) or (m == 'mfspr' and W[t] == 0x7C0802A6)
        if prologue or prev_ends(t):
            starts.add(t)

    # ---- exact matches from reference games
    def masked(w):
        op = w >> 26
        if op == 18: return w & 0xFC000003
        if op == 16: return w & 0xFFFF0003
        if op in (14, 15, 24, 25, 26, 27, 28, 29, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
                  48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 10, 11, 12, 13, 7, 8):
            return w & 0xFFFF0000
        return w
    ref_sizes = {}
    if refs:
        mw = {p: masked(w) for p, w in W.items()}
        # index our text by 4-word masked windows
        idx = collections.defaultdict(list)
        addrs = sorted(W)
        for i in range(len(addrs) - 3):
            if addrs[i + 3] - addrs[i] == 12:
                idx[tuple(mw[addrs[i + k]] for k in range(4))].append(addrs[i])
        seen = set()
        for k in range(0, len(refs), 2):
            R = Dol(refs[k]); rf, _ = load_symbols(refs[k + 1])
            for a, s, n in rf:
                if s < 16 or n.startswith(('fn_', 'lbl_')) and s < 0x40:
                    continue
                ws = [R.word(a + i) for i in range(0, s, 4)]
                if None in ws:
                    continue
                mws = [masked(w) for w in ws]
                cands = idx.get(tuple(mws[:4]), [])
                hits = [c for c in cands if all(mw.get(c + 4 * i) == mws[i] for i in range(len(mws)))]
                if len(hits) == 1:
                    c = hits[0]
                    if c not in seen:
                        seen.add(c)
                        ref_sizes[c] = s
                        starts.add(c)
                        if term(c + s - 4) and in_text(c + s) and W[c + s] != 0:
                            pass
        print('ref exact matches', len(ref_sizes), file=sys.stderr)

    # ---- iterate: branches leaving their function, unreachable tails
    sec_end = {}
    for a, e, _ in text:
        for p in range(a, e, 4):
            sec_end[p] = e
    for it in range(50):
        S = sorted(s for s in starts if in_text(s))
        added = 0
        for i, s in enumerate(S):
            e = S[i + 1] if i + 1 < len(S) and S[i + 1] < sec_end[s] else sec_end[s]
            # flow from s
            reach = set(); work = [s]
            while work:
                p = work.pop()
                while s <= p < e and p not in reach:
                    reach.add(p)
                    m, f = dec[p]
                    if m in ('b', 'bc') and not f['lk']:
                        t = tgt(p)
                        if m == 'b' and t != s and t != p + 4 and is_prologue(t) and t not in starts:
                            starts.add(t); added += 1    # tail call to a function that opens a frame
                        elif s <= t < e:
                            work.append(t)
                        elif in_text(t) and t not in starts:
                            starts.add(t); added += 1
                    if m == 'bcctr' and not f['lk']:
                        for base, (bp, ts) in jt.items():
                            if bp == p:
                                for t in ts:
                                    if s <= t < e:
                                        work.append(t)
                                    elif t not in starts:
                                        starts.add(t); added += 1
                    if term(p):
                        break
                    p += 4
                    continue
            if reach:
                last = max(reach) + 4
                q = last
                while q < e and W[q] in (0, 0x60000000):
                    q += 4
                # unreachable code after the last reachable instruction is a separate function only when it
                # follows padding or opens a stack frame (dtk keeps dead blr's after a tail bctr in the function)
                if q < e and q not in starts and q not in reach and (q != last or is_prologue(q)):
                    starts.add(q); added += 1
        if not added:
            break
    # CodeWarrior _savegpr_N / _restgpr_N entry points: runs of r11 loads/stores; the recompiler inlines
    # calls to them, so only keep the run that ends in blr
    def lsr11(p):
        m, f = dec[p]
        return m in ('stw', 'lwz', 'stfd', 'lfd', 'psq_st', 'psq_l') and f['ra'] == 11
    S = sorted(s for s in starts if in_text(s))
    for i, s in enumerate(S[:-1]):
        if s != D.entry and all(lsr11(p) for p in range(s, S[i + 1], 4)):
            starts.discard(s)
    S = sorted(s for s in starts if in_text(s))
    out = []
    secname = {}
    for a, e, i in text:
        secname[(a, e)] = '.init' if i == 0 else '.text'
    for i, s in enumerate(S):
        e = S[i + 1] if i + 1 < len(S) and S[i + 1] < sec_end[s] else sec_end[s]
        # trailing alignment padding stays in the function, as dtk does
        sn = next(v for (a, b), v in secname.items() if a <= s < b)
        nm = '__start' if s == D.entry else f'fn_{s:08X}'
        out.append(f'{nm} = {sn}:0x{s:08X}; // type:function size:0x{e - s:X}\n')
    for base, (p, ts) in sorted(jt.items()):
        sec = '.data'
        out.append(f'jumptable_{base:08X} = {sec}:0x{base:08X}; // type:object size:0x{4 * len(ts):X} scope:local\n')
    open(outp, 'w').writelines(out)
    print('functions', len(S), 'jumptables', len(jt), file=sys.stderr)


if __name__ == '__main__':
    main()
