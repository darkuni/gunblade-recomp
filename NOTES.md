# Gunblade NY & L.A. Machineguns: Arcade Hits Pack (SQDE8P, Wii disc, NTSC-U) - native recomp notes

Runtime and recompiler from the Ghost Squad / Umbrella Chronicles recomps (which already carry Lost in Shadow's
Dec 2009 SDK fixes); module support adapted from Lost in Shadow's REL code.

## Source
- main.dol sha1 (see config.yml), entry 0x80004050, r13 0x8047A540, r2 0x8047CCE0. RVL SDK Dec 11 2009 (IOS56),
  identical build to Lost in Shadow. Sega "Alice" framework, Hudson port, CRI ADX2 / Sofdec, NW4R HBM, DWC.
- The two games are RSO modules: files/NY_RSOF.rso (Gunblade NY) and files/LA_RSOF.rso (L.A. Machineguns), linked
  against files/RVL_RSOF.sel, the static module that exports main.dol's symbols by name (10,595 symbols, 9,178
  functions). The D/R variants on the disc are unused. Copy the F files to `rsos/` before running `src/recomp.py`.

## Splitting and names
- `tools/funcfind.py --starts tools/sel_funcs.txt` (no dtk): every .sel function is a start; exact matches against
  Lost in Shadow and Martian Panic add more. 10,399 functions, 145 jump tables.
- `tools/apply_sel.py` names 9,145 functions from the .sel; xmatch vs Lost in Shadow / Martian Panic 510 more;
  statics by offset from an exported neighbour in the same SDK object (`tools/manual_names.txt`).
- .sel section numbers -> main.dol: 1 .init 2 .text 3 .ctors 4 .dtors 5 .rodata 6 .data 7 .bss 8 .sdata 9 .sdata2
  11 .sbss 12 .sbss2 (checked against r13/r2 accesses). `src/relgen.py` SEL_SECTIONS.

## RSO modules (src/rso.py, src/relgen.py, runtime/rel_rt.cpp)
- `rso.Rso` presents an RSO like `rel.Rel`: internal relocations (file offset, section << 8 | type, addend) and
  external ones (import index << 8 | type) resolved to absolute main.dol addresses through the .sel. All imports of
  both modules resolve.
- Modules are recompiled at virtual 0xC0000000 (LA) / 0xC0100000 (NY) like Lost in Shadow's RELs. RSO code carries
  REL24 relocations for calls inside the module too (target = virtual base + addend); the recompiler applies
  br_reloc when collecting labels as well. Branches that leave a piece add a piece start (iterated).
- RSOLinkList (wrapped) records each section's runtime address in g_relsec after the game's RSOLocateObject;
  RSOUnLinkList clears it.

## game.h
- __AXDSPResumeCallback 0x80098D60, DecrementerExceptionCallback 0x8007AD40, iosFree 0x800D63D0, OSExitThread
  0x80083710, OSDisable/EnableScheduler 0x80082EE0 / 0x80082F20, __OSReschedule 0x80083440, SelectThread idle
  0x80083368, interrupt table r13-0x66A0, IOS heap r13-0x7A5C, KPADStatus 0xF0 (KPADReadEx).

## Status
- Boots: strap screens, Wii Zapper screen, save (NAND gbla.bin, banner), an online notice whose text renders as
  boxes (font), "Online Interactions Not Rated by the ESRB", SEGA logo, then the attract movie (movie/US_HD.sfd).
- Blocker: the attract movie never ends. mwPlyGetStat stays 2 (playing); 91 frames are decoded and released, then
  none. The whole file is read. The CRI sound renderer's two PCM16 ring voices (PBs 80377F20 / 80378060) run until
  shortly after the movie starts, then stop. The movie class (Sega::Media::Movie::calc) only waits for
  movieState() == 4 (no skip), so the game sits on a black screen. Ghost Squad's title movie (Sofdec) also shows
  grey; likely the same CRI movie/audio path. Umbrella Chronicles' Sofdec (2007, Capcom) works.
