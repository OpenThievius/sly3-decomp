// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_001A4CD0(s32, s32);
s32 func_00238978();
s32 func_001A5038(s32, s32);
s32 func_001A5810(s32, s32);
s32 func_00238980();
s32 func_001A59C8(s32, s32);
s32 func_001A5B58(s32, s32);
s32 func_001A6350(s32, s32);
s32 func_001A6850(s32, s32);
s32 func_001A75E8(s32, s32);
s32 func_00170500(s32, s32);
s32 func_002564C8(s32);
s32 func_00238AD8(void *, s32, void *);
s32 func_00257CF0(s32);

struct T_1A5CB0 { u8 pad0[0xA8]; s32 xA8; };
struct S_1A5CB0 { u8 pad0[0x8]; T_1A5CB0* x8; u8 padC[0x1C-0xC]; s32 x1C; };
extern void func_0012F378(void*, void*, void*, void*);
struct Data_A37 { s32 x0; u8 pad4[0x8 - 0x4]; s32 x8; };
struct Inner_A57 { u8 pad0[0x10CC]; s32 x10CC; };
struct Mid_A57 { u8 pad0[0x40]; void* x40; };
struct Self_A57 { u8 pad0[0x10]; Inner_A57* x10; u8 pad14[0x18 - 0x14]; Mid_A57* x18; u8 pad1C[0x30 - 0x1C]; s32 x30; };
extern s32 func_00254F80(void* a0);
extern s32 func_00238AD8(s32 a0);
extern s32 func_00238AD8(s32 a0, s32 a1, s32 a2);
extern s32 func_001A4800(void* a0, s32 a1, void* a2);
extern s32 func_00238AA8(void* a0);
extern void func_00252E40(void*, s32);
extern f32 D_003222A0;
extern void func_00238970(void*);
extern u8 D_00345098[];
extern void func_0012F288();
extern void func_00238970();
void func_001A4F90(u8* s);
void func_001A58D0(s32 p0);
void func_001A5CB0(S_1A5CB0* a0, void* a1, void* a2, void* a3);
void func_001A5650(s32 p0);
s32 func_001A4B28(void* a0, s32 a1, void* a2);
void func_001A5CE0(s32 p0);
void func_001A4C28(u8* s);
void func_001A64A8(u8* s);
u8* func_001A7B20(s32 i);
s32 func_001A5750(Self_A57* a0, s32 a1, Data_A37* a2);
s32 func_001A4390(char *self)
{
    if (*(char **)(self + 0x40) != 0) return 0;
    char *v = *(char **)(self + 0x10);
    if (*(char **)(v + 0x3E0) != 0) return 0;
    if (func_00170500(*(s32 *)(v + 0x10D0), *(s32 *)(self + 0x30)) == 0) return 1;
    if (*(s32 *)(*(char **)(self + 0x10) + 0x3D8) == 0) return 1;
    return func_002564C8(*(s32 *)(*(char **)(self + 0x10) + 0x3D8));
}

void func_001A4C60(s32 arg0) {
    func_00238978();
    func_001A4CD0(arg0, 0);
}

s32 func_001A4F08(char *self, s32 value, void *arg)
{
    if (value == 12 && *(s32 *)arg == *(s32 *)(self + 0x30)) {
        s32 result = func_00257CF0(*(s32 *)((char *)arg + 4));
        if (result == *(s32 *)(self + 0x10)) {
            *(s32 *)(self + 0x40) = 1;
            return 1;
        }
    }
    return func_00238AD8(self, value, arg);
}

void func_001A4FC8(s32 arg0) {
    func_00238978();
    func_001A5038(arg0, 0);
}

void func_001A5680(s32 arg0) {
    func_00238978();
    func_001A5810(arg0, 0);
}

void func_001A56B0(s32 arg0) {
    func_00238980();
    func_001A5810(arg0, -1);
}

void func_001A5900(s32 arg0) {
    func_00238978();
    func_001A59C8(arg0, 0);
}

void func_001A5930(s32 arg0) {
    func_00238980();
    func_001A59C8(arg0, -1);
}

void func_001A5C90(void) {
    func_001A5B58(1, 0xFFFF);
}

void func_001A6488(void) {
    func_001A6350(1, 0xFFFF);
}

void func_001A64F0(s32 arg0) {
    func_00238978();
    func_001A6850(arg0, 0);
}

s32 func_001A6DD0(const float* a, const float* b)
{
    return a[4] < b[4] ? 1 : 0;
}

void func_001A7720(void) {
    func_001A75E8(1, 0xFFFF);
}

s32 func_001A7C58(void) {
    return 0;
}

s32 func_001A7C60(void) {
    return 0;
}


s32 func_001A4B28(void* a0, s32 a1, void* a2) { s32 v1; if (a1 == 0x11) goto L78; if (a1 < 0x12) goto L68; if (a1 == 0x13) goto LDC; goto fail; L68: if (a1 >= 0x10) goto fail; if (a1 < 0xE) goto fail; L78: if (a1 == 0xF) goto Lset6; if (a1 >= 0x10) goto L9C; if (a1 == 0xE) goto Lset7; goto call; L9C: if (a1 == 0x11) goto Lset8; goto call; Lset6: v1 = 6; goto call; Lset7: v1 = 7; goto call; Lset8: v1 = 8; call: func_001A4800(a0, v1, a2); goto done; LDC: if (func_00238AA8(a0) != 0) goto done; func_001A4800(a0, 9, a2); done: return 1; fail: return func_00238AD8((s32)a0, a1, (s32)a2); }
void func_001A4C28(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x2C); *(s32*)(s+0x34) = -1; }
void func_001A4F90(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x34); *(s32*)(s+0x30) = -1; }
void func_001A5650(s32 p0) { func_00238970(); *(s32*)((u8*)(p0) + 0x30) = -0x1; }
s32 func_001A5750(Self_A57* a0, s32 a1, Data_A37* a2) { if (a1 == 0xA) { if (a0->x30 != 0) goto fail; void* p = a0->x18->x40; if (p == 0) goto fail; s32 r = func_00254F80(p); if (r != a2->x0) goto fail; switch (a2->x8) { case 0x4E: a0->x10->x10CC = 1; return 1; case 0x4F: a0->x10->x10CC = 0; return 1; } } fail: a0 = (Self_A57*)a0; call: return func_00238AD8((s32)a0, a1, (s32)a2); }
void func_001A58D0(s32 p0) { func_00238970(); *(s32*)((u8*)(p0) + 0x34) = -0x1; }
void func_001A5CB0(S_1A5CB0* a0, void* a1, void* a2, void* a3) { func_0012F378(a0, a1, a2, a3); a0->x1C = a0->x8->xA8; }
void func_001A5CE0(s32 p0) { func_0012F288(); *(s32*)((u8*)(*(s32*)((u8*)(p0) + 0x8)) + 0xA8) = *(s32*)((u8*)(p0) + 0x1C); }
void func_001A64A8(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x33); f32 f = D_003222A0; *(s32*)(s+0x30) = -1; *(f32*)(s+0x38) = f; *(f32*)(s+0x40) = f; }
u8* func_001A7B20(s32 i) { return D_00345098 + (i << 4); }
