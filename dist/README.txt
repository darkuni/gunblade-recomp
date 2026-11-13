Ghost Squad (Wii) - native Windows and Linux build (static recompilation)  @VERSION@
https://github.com/darkuni/ghost-squad-recomp

No game data is included. You need your own Ghost Squad disc image (Wii, NTSC-U, RGSE8P)
as .iso, .ciso or .wbfs.

Setup
  Put your disc image (.iso, .ciso or .wbfs) in this folder and run ghostsquad.exe (Windows) or
  ghostsquad (Linux / Steam Deck: ./ghostsquad, or add it to Steam as a non-Steam game). On the
  first start it builds the "game" folder from it (a minute or two); after that the disc image isn't
  needed any more.

Requirements: 64-bit Windows 10/11, or 64-bit Linux with SDL2 (SteamOS has it; elsewhere install
libsdl2 / sdl2 from your package manager); a GPU with OpenGL 3.3.

Controls (Wii Remote / Wii Zapper)
  The mouse is the gun: the crosshair follows it one to one. Shoot and pick menu items with B
  (left mouse button). + starts ("PRESS THE + BUTTON" on the title screen) and is the Shot
  Selector in game (3-shot burst / semi-auto / full auto). A is the Action button (used at
  events, and to skip scenes). Reload by aiming off the picture and shooting: move the mouse off the
  picture, or hold the middle mouse button / V (LB / LT on a gamepad) to aim off it.

                 Mouse + keyboard        Gamepad                 Wii
  aim            mouse (or I/J/K/L)      left stick              pointer
  B (fire)       left button, Space      RT, RB, B               B / Zapper trigger
  A (action)     right button, X         A                       A
  aim off screen middle button, V        LB / LT                 reload
  d-pad          arrow keys              d-pad                   d-pad
  1 / 2          1 / 2                   X / Y                   1 / 2
  + (selector)   Enter                   Start                   + (start, shot selector)
  - / HOME       Backspace / H           Back / Guide            - / HOME

  "Mouse buttons" in the settings menu (or controls = mouse / mouse_swap in
  ghostsquad.ini) swaps the left and right mouse buttons. "Capture mouse"
  (capture_mouse = 1) keeps the cursor inside the window while you play.

Real Wii Remote (optional)
  Pair it with Windows: Settings > Bluetooth > Add device, press the red SYNC button under the
  battery cover, pick "Nintendo RVL-CNT-01" (skip/leave the PIN empty). A Mayflash DolphinBar
  in mode 4 works too. Linux: pair it in the Bluetooth settings; reading it needs access to its
  /dev/hidraw device (a udev rule, e.g. KERNEL=="hidraw*", ATTRS{idVendor}=="057e", MODE="0666").
  Its buttons, motion and (with a sensor bar) pointer are used. wiimote = 0 in ghostsquad.ini
  turns it off.

Keys
  F1 / Esc (or Start+Back on a gamepad)  settings menu (resolution, widescreen, vsync, MSAA,
                                         texture filtering, mouse buttons, game speed)
  F11 / Alt+Enter                        fullscreen
  Hold Tab (or click the right stick)    fast-forward

Files
  ghostsquad.ini        settings (created on first run)
  ghostsquad.log        log of the last run - include it with bug reports
  ghostsquad_hang.txt   written if no frame is shown for 8 seconds - include it too
  nand\                 saves


Unofficial fan project, not affiliated with Sega, Polygon Magic or Nintendo.
The exe contains code machine-translated from the game's executable; game data comes from your
own disc image.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
