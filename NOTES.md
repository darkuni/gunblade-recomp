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

## Runtime fixes
- CRI ADX: `adxt_auto_pause_wii` pauses the renderer on an output underrun while PLAYING and only un-pauses while
  PLAYING. If DECEND follows right after the pause, the tail is never played, ADXT never reaches PLAYEND and Sofdec's
  audio-mastered clock stops ~1 s past the audio. Gunblade's CRIWARE logo movie (movie/US_HD.sfd: 2 s of audio,
  121 frames) then never ended. `runtime/hle_cri.cpp` resumes playback at DECEND (G_FN_ADXRNA_SETPLAYSW).
- KPADReadEx hooked; reports KPAD_READ_ERR_NO_CONTROLLER (-2) for channels 1-3 (a phantom Player 2 otherwise).
- RSO exports are function starts in the recompiled modules (main.dol calls NY_get_object_index_max etc. through
  RSO-linked branches).
- The thread dump only follows MEM1/MEM2 addresses (a corrupt thread link crashed it).
- Debug: CRILOG=1 logs ADXT_GetStat and criFsBinder_GetStatus changes.

## Status
- Boots through strap / Zapper / save / online notice (text renders as boxes) / ESRB / SEGA / CRIWARE movie to the
  title, PRESS ANY BUTTON, ID select and name entry, main menu (Gunblade NY / L.A. Machineguns / Rankings /
  Options), the options and difficulty menus.
- Gunblade NY: NY_RSOF.rso links (bss 0x806F4FE0 in the test runs); the arcade game runs on vm2::VirtualModel2:
  title (PRESS THE A BUTTON), the attract demo with full Model 2 3D, mission select (shoot with B).
- Blocker: after choosing EASY / Free UN Headquarters the mission briefing panel never ends. NY::proc_main mode
  (bss+0x3F848) stays 2; bss+0x3F84C counts up and bss+0x3F854, a countdown decremented once per frame, runs past
  0 and keeps going negative. Whatever is meant to act at 0 does not. vm2::SoundDriver is ready (binder 4 status
  2); no ADXT/movie activity in this state.
- L.A. Machineguns: not tried yet.
