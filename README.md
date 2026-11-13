# Gunblade NY & L.A. Machineguns: Arcade Hits Pack (Wii, NTSC-U) - native recompilation

A static recompilation of **Gunblade NY & L.A. Machineguns: Arcade Hits Pack** for Wii (disc, NTSC-U, `SQDE8P`,
Sega / Hudson, 2010) to native code for Windows and Linux (SteamOS / Steam Deck). The main program and both games'
RSO modules (`NY_RSOF.rso`, `LA_RSOF.rso`) are translated to C++ and run on a small runtime that replaces the Wii
hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso`, `.ciso` or `.wbfs`).

## Status

Work in progress, not released. Boots through the intro, menus, ID and name entry into Gunblade NY: title, attract
demo with full 3D, mission select. Starting a mission currently stops at the briefing screen. L.A. Machineguns is
untested. See [NOTES.md](NOTES.md).

## Download

Build artifacts of each [Actions](https://github.com/darkuni/gunblade-recomp/actions) run: Windows zip and Linux
tar.gz. Unpack, put your disc image in the same folder and run `gunblade.exe` (Windows) or `./gunblade` (Linux /
Steam Deck): the first start builds the `game` folder from it. The package's `README.txt` has the controls.

## Building

Same tool chain as the other Wii recomps (Ghost Squad, Umbrella Chronicles, Lost in Shadow): the generated C++ is in
`src/gen`; GitHub Actions cross-compiles the Windows exe with mingw-w64 and SDL2 and builds the Linux one with
`-DUSE_SDL=ON`. Regenerating needs `main.dol` and `files/NY_RSOF.rso`, `LA_RSOF.rso`, `RVL_RSOF.sel` from your disc
(copy them to `orig/` and `rsos/`). Function boundaries come from `tools/funcfind.py` (no dtk), names from the
disc's own RSO static export list.

## Disclaimer

Unofficial fan project, **not affiliated with, endorsed by, or sponsored by** Sega, Hudson or Nintendo. *Gunblade NY*,
*L.A. Machineguns* and all related names and marks belong to their respective owners. This repository and its
builds contain no game data; `src/gen` and the exe contain code machine-translated from the game's executables.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components keep their own
licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
