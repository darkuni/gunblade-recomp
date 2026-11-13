// Tracks which REL module the game linked where, so recompiled module code can form its addresses and
// dispatch() can find module functions called through pointers.
#include "ppc.h"
#include "rel_rt.h"
#include <cstdio>
extern FILE* g_log;
#define LOG g_log

static int identify(uint32_t m) {
    uint32_t n = R32(m + 0xC), si = R32(m + 0x10), bss = R32(m + 0x20);
    if (si < 0x80000000u) si += m;
    for (unsigned k = 0; k < REL_COUNT; k++) {
        const RelDesc& d = REL_DESC[k];
        if (d.nsec != n || d.bss != bss) continue;
        bool ok = true;
        for (uint32_t i = 0; i < n && ok; i++) ok = R32(si + i * 8 + 4) == d.size[i];
        if (ok) return (int)k;
    }
    return -1;
}

// Link(module, bss, fixed): after the game's own linker ran, record where each section went
void hle_wrap_OSLink_Link(Ctx* c, GuestFn orig) {
    uint32_t m = c->r[3];
    orig(c);
    if (!c->r[3]) return;
    int k = identify(m);
    if (k < 0) { fprintf(LOG, "[rel] linked unknown module at %08X\n", m); fflush(LOG); return; }
    uint32_t n = R32(m + 0xC), si = R32(m + 0x10);
    if (si < 0x80000000u) si += m;
    for (uint32_t i = 0; i < n && i < REL_MAXSEC; i++) g_relsec[k][i] = R32(si + i * 8) & ~3u;
    fprintf(LOG, "[rel] %s linked at %08X (code %08X)\n", REL_DESC[k].name, m, g_relsec[k][1]);
}

void hle_wrap_OSUnlink(Ctx* c, GuestFn orig) {
    int k = identify(c->r[3]);
    orig(c);
    if (k >= 0 && c->r[3]) {
        fprintf(LOG, "[rel] %s unlinked\n", REL_DESC[k].name);
        for (unsigned i = 0; i < REL_MAXSEC; i++) g_relsec[k][i] = 0;
    }
}

// ---- RSO modules (Gunblade NY / L.A. Machineguns: files/NY_RSOF.rso, LA_RSOF.rso)
// In-memory header: +0x08 section count, +0x0C section table, +0x1C bss size. RSOLinkList(rso, bss) locates the
// module (section offsets become addresses) and links it against the static module and the other modules.
static int identify_rso(uint32_t m) {
    uint32_t n = R32(m + 0x8), si = R32(m + 0xC), bss = R32(m + 0x1C);
    if (si < 0x80000000u) si += m;
    for (unsigned k = 0; k < REL_COUNT; k++) {
        const RelDesc& d = REL_DESC[k];
        if (d.nsec != n || d.bss != bss) continue;
        bool ok = true;
        for (uint32_t i = 0; i < n && ok; i++) ok = R32(si + i * 8 + 4) == d.size[i];
        if (ok) return (int)k;
    }
    return -1;
}

void hle_wrap_RSOLinkList(Ctx* c, GuestFn orig) {
    uint32_t m = c->r[3];
    orig(c);
    int k = identify_rso(m);
    if (k < 0) { fprintf(LOG, "[rso] linked unknown module at %08X\n", m); fflush(LOG); return; }
    uint32_t n = R32(m + 0x8), si = R32(m + 0xC);
    if (si < 0x80000000u) si += m;
    for (uint32_t i = 0; i < n && i < REL_MAXSEC; i++) {
        uint32_t a = R32(si + i * 8) & ~3u;
        if (a && a < 0x80000000u) a += m;     // still an offset
        g_relsec[k][i] = a;
    }
    fprintf(LOG, "[rso] %s linked at %08X (result %u) sections:", REL_DESC[k].name, m, c->r[3]);
    for (uint32_t i = 0; i < n && i < REL_MAXSEC; i++) if (g_relsec[k][i]) fprintf(LOG, " %u=%08X", i, g_relsec[k][i]);
    fprintf(LOG, "\n");
    fflush(LOG);
}

void hle_wrap_RSOUnLinkList(Ctx* c, GuestFn orig) {
    int k = identify_rso(c->r[3]);
    orig(c);
    if (k >= 0) {
        fprintf(LOG, "[rso] %s unlinked\n", REL_DESC[k].name);
        for (unsigned i = 0; i < REL_MAXSEC; i++) g_relsec[k][i] = 0;
    }
}

uint32_t rel_virtual(uint32_t a) {
    for (unsigned k = 0; k < REL_COUNT; k++) {
        uint32_t b = g_relsec[k][1];
        if (b && a >= b && a - b < REL_DESC[k].size[1]) return REL_DESC[k].vbase + (a - b);
    }
    return 0;
}

// debug: log Sofdec player status changes (MWE_PLY_STAT_*: 0 stop, 1 prep, 2 playing, 3 play end, 4 error)
void hle_wrap_mwPlyGetStat(Ctx* c, GuestFn orig) {
    static uint32_t last = 0xFFFFFFFFu;
    uint32_t ply = c->r[3];
    orig(c);
    if (c->r[3] != last) { fprintf(LOG, "[sofdec] mwPlyGetStat(%08X) = %u\n", ply, c->r[3]); fflush(LOG); last = c->r[3]; }
}
