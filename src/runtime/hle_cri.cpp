// CRI ADX (ADXT) fix for Sofdec movies whose audio track is shorter than the video.
//
// adxt_auto_pause_wii(adxt) pauses the AX renderer (ADXRNA_SetPlaySw(rna, 0), flag adxt+0x73) when, while
// PLAYING (stat 3), the input buffer holds <= 1 sector and the output buffer < 16 samples, and un-pauses it when
// data is back - but only while the stat is still PLAYING. If the decoder reaches DECEND (stat 4) right after an
// underrun pause, nothing un-pauses the renderer: the buffered tail is never played, ADXT never reaches PLAYEND
// (5), Sofdec never marks the audio stream terminated, and its audio-mastered clock stops ~1 s past the end of
// the audio. Gunblade's attract logo movie (movie/US_HD.sfd: 2 s of audio, 4 s of video) then never ends.
// Here: once the stream is in DECEND with the auto-pause still set, resume playback so the tail drains.
#include "hle.h"
#include "game.h"
#include <cstdio>
#include <cstdlib>
extern FILE* g_log;

#ifdef G_FN_ADXRNA_SETPLAYSW
void hle_wrap_adxt_auto_pause_wii(Ctx* c, GuestFn orig) {
    uint32_t adxt = c->r[3];
    orig(c);
    if (R8(adxt + 1) == 4 && R8(adxt + 0x73) != 0) {
        guest_call(c, G_FN_ADXRNA_SETPLAYSW, {R32(adxt + 0xC), 1u});
        W8(adxt + 0x73, 0);
        static int n = 0;
        if (n++ < 8) { fprintf(g_log, "[cri] ADXT %08X reached DECEND while auto-paused: resumed playback\n", adxt); fflush(g_log); }
    }
}
#endif

// debug (CRILOG=1): ADXT_GetStat result changes per handle
void hle_wrap_ADXT_GetStat(Ctx* c, GuestFn orig) {
    static bool on = getenv("CRILOG") != nullptr;
    uint32_t h = c->r[3];
    orig(c);
    if (!on) return;
    static uint32_t hs[16], st[16]; static int n = 0;
    int i = 0; while (i < n && hs[i] != h) i++;
    if (i == n && n < 16) { hs[n] = h; st[n] = 0xFFFFFFFFu; n++; }
    if (i < 16 && st[i] != c->r[3]) { extern uint64_t g_vi_count; fprintf(g_log, "[cri] VI %llu ADXT %08X stat %u\n", (unsigned long long)g_vi_count, h, c->r[3]); st[i] = c->r[3]; }
}

// debug (CRILOG=1): criFsBinder_GetStatus(binder, &status) changes
void hle_wrap_criFsBinder_GetStatus(Ctx* c, GuestFn orig) {
    static bool on = getenv("CRILOG") != nullptr;
    uint32_t b = c->r[3], out = c->r[4];
    orig(c);
    if (!on || !out) return;
    static uint32_t bs[16], st[16]; static int n = 0;
    uint32_t s = R32(out);
    int i = 0; while (i < n && bs[i] != b) i++;
    if (i == n && n < 16) { bs[n] = b; st[n] = 0xFFFFFFFFu; n++; }
    if (i < 16 && st[i] != s) { extern uint64_t g_vi_count; fprintf(g_log, "[cri] VI %llu binder %08X status %u (ret %d)\n", (unsigned long long)g_vi_count, b, s, (int)c->r[3]); st[i] = s; }
}
