// Per-game constants for Gunblade NY & L.A. Machineguns: Arcade Hits Pack (Wii disc, NTSC-U, SQDE8P, Sega / Hudson, 2010).
// main.dol plus two RSO modules (files/NY_RSOF.rso, LA_RSOF.rso) linked against files/RVL_RSOF.sel, which also
// names ~9,100 of main.dol's functions. Statics placed against Lost in Shadow (identical Dec 11 2009 SDK, IOS56).
// r13 = 0x8047A540, r2 = 0x8047CCE0.
#pragma once
#define GAME_NAME        "Gunblade NY & L.A. Machineguns"
#define GAME_EXE         "gunblade"
#define GAME_INI         "gunblade.ini"
#define GAME_SETUP_WHAT  "Gunblade NY & L.A. Machineguns disc image (.iso, .ciso or .wbfs)"

#define G_AX_RESUME_CB          0x80098D60u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x8007AD40u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x800D63D0u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x80083710u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x66A0u       // __OSGetInterruptHandler: lwz r4,-0x66A0(r13)
#define G_SDA_IOS_HEAP          0x7A5Cu       // __ios_Ipc2: lwz r3,-0x7A5C(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_80083710
#define G_FN_IOS_FREE           f_800D63D0
#define G_KPAD_STATUS_SIZE      0xF0u         // KPADStatus (Dec 2009 KPAD, MotionPlus fields); game calls KPADReadEx
#define G_FN_OS_DISABLE_SCHEDULER f_80082EE0  // interrupt handlers run with the scheduler off (hle_thread.cpp irq_check)
#define G_FN_OS_ENABLE_SCHEDULER  f_80082F20
#define G_FN_OS_RESCHEDULE        f_80083440  // __OSReschedule after the handlers
#define G_IOS_ASYNC_DELAY_US    2000u         // async IOS requests (disc reads) complete 2 ms later (hle_ios.cpp)
#define G_MOUSE_SWAP_DEFAULT    1             // mouse: left button = B (the trigger), right = A
#define G_RELOAD_OFFSCREEN      1             // reload = aim off the picture: middle mouse / V / LB / LT
#define G_DISC_BYTES_PER_SEC    8000000u      // async disc reads complete after len / 8 MB/s (hle_ios.cpp)
