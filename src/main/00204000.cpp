// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00205198();
s32 func_002051F0(s32);
s32 func_00205A38();
s32 func_0023E130(s32);

void func_00205168(s32 arg0) {
    func_00205198();
    func_002051F0(arg0);
}

s32 func_002058D8(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (func_00205A38() == 0) {
        var_v0 = func_0023E130(arg0) == 0;
    }
    return var_v0;
}

void func_00207598(char *self, s32 value) { u32 count = *(u32 *)(self + 0x3AC); if (count < 4) { *(s32 *)(self + (count << 2) + 0x3B0) = value; *(u32 *)(self + 0x3AC) = count + 1; } }

typedef s32 (*Fn_CB)(u8*);

extern s32 func_001F42E8(u8*, ...);

struct State_F43F8 { u8 pad0[0x16C]; s32 x16C; s32 x170; };

extern s32 func_001F43C8(u8*);

extern void func_001F43D0(u8*, s32);

extern s32 func_001F4430(u8*);

extern void func_001F4438(u8*, s32);

extern void func_001F48A0(u8*, s32, s32);

extern void func_001F48F8();

extern s32 func_0019B6E0(u8*, u8*);

extern void func_0019DC10(u8*, s32);

extern void func_001C21F0(u8*, s32);

extern s32 func_0013B500(u8*, s32);

s32 func_00207DD8(u8* self) ;

void func_002075C0(u8* a, s32 v) { u32 n = *(u32*)(a+0x3C4); if (n < 0x4) { *(s32*)(a + (n<<2) + 0x3C8) = v; *(u32*)(a+0x3C4) = n + 1; } }

s32 func_00207D68(u8* self, u32 a1) { u32 obj = *(u32*)(self + 0xC); s16 off = *(s16*)(obj + 0x288); obj = *(u32*)(obj + 0x28C); if (((Fn_CB)obj)(self + off)) return 1; if (*(u32*)(self + 0x380) == 4) return 1; return func_001F42E8(self, a1); }

s32 func_00207DD8(u8* self) { if (!(*(f32*)(self + 0x39C) > 0.0f)) { return func_001F43C8(self) > 0 ? 0 : 2; } return 1; }
