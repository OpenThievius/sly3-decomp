// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00155CE0();
s32 func_00208B20(s32, s32);
s32 func_0013BD00(s32, s32);
s32 func_0013BD88(s32, s32);

void func_001AF120(s32 arg0) {
    func_00155CE0();
    func_00208B20(arg0 + 0x18F0, -1);
}

s32 func_001AF298(void* p)
{
    s32 v = *(s32*)((char*)p + 0x19e0);
    return v == 2;
}

void func_001AF2A8(s32 arg0, s32 *arg1, s32 arg2) {
    if (*(s32 *)((char *)arg1 + 8) != 0) {
        func_0013BD88(*(s32 *)((char *)arg1 + 8), arg0);
        *(s32 *)((char *)arg1 + 8) = 0;
    }
    if (arg2 != 0) {
        *(s32 *)((char *)arg1 + 8) = arg2;
        func_0013BD00(arg2, arg0);
    }
}

typedef void (*Cb_154B48)(u8*, s32);

typedef long long v2l __attribute__((vector_size(16)));

extern f32 D_003212DC;

extern u8 D_00322AA0[];

extern void func_001B40F0(void*, s32, s32, s32);

void func_001AFAA8(u8* self, s32 a1) ;

void* func_001AFA98() { return &D_00322AA0; }

void func_001AFAA8(u8* self, s32 a1) { if (a1) { *(s32*)(self + 0xA00) = 1; func_001B40F0(self + 0x500, 6, a1, 0); } else if (*(s32*)(self + 0x508) == 6) { u32 p = *(u32*)(self + 0xC); s16 off = *(s16*)(p + 0x318); p = *(u32*)(p + 0x31C); ((Cb_154B48)p)(self + off, 0); } }

void func_001AFBE0(u8* o, v2l v) { *(v2l*)(o+0x1E60) = v; }
