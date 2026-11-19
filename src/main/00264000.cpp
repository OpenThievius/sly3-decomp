// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0025FBF8(s32, s32, s32);
f32 func_00265DE0(s32, s32);

s32 func_002643C8(void) {
    return 0;
}

void func_002643D0(s32 arg0, s32 arg1) {
    func_0025FBF8(arg1, 2, arg0 + 0x100);
}

f32 func_00264E78(char* self, s32 value)
{
    return func_00265DE0(*(s32*)(self + 0x8), value & 0xFFFF) * *(f32*)(self + 0x88);
}

struct P_264B70 { u32 x; } __attribute__((packed));

struct P_264B18 { u32 x; } __attribute__((packed));

extern void func_00264F10(void*);

void func_00264B18(u8* self, s32 arg1) { if (arg1) *(s32*)(self + 0x0) = arg1; *(s32*)(self + 0x4) = *(s32*)(self + 0x0); *(s32*)(self + 0x8) = *(s32*)(self + 0xC); *(P_264B18*)(self + 0x14) = *(P_264B18*)(self + 0x18); *(s32*)(self + 0x1C) = (s32)0x80000000; *(u8*)(self + 0x1F) = *(u8*)(self + 0x17); func_00264F10(self); }

void func_00264B70(u8* self, u8* src) { *(P_264B70*)(self + 0x18) = *(P_264B70*)src; *(P_264B70*)(self + 0x14) = *(P_264B70*)(self + 0x18); func_00264F10(self); }
