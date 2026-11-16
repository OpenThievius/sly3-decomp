// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0019DC10(s32, s32);
s32 func_001F3C80();
s32 func_0019B420();
s32 func_0019B940(s32, s32, s32);
s32 func_0019B968(s32, s32, s32);
s32 func_001F3BF8();
s32 func_0019E060(s32, s32);
s32 func_0025D350(s32 *, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00475480;
s32 func_0011AF60(s32);
s32 func_0011B028(s32);
s32 func_0019FF00(s32, s32);
s32 func_002614B0();

void func_0019C998(char* self, s32 a, s32 b)
{
    u32 n = *(u32*)(self + 0x28C);
    if (n < 4) {
        *(u32*)(self + 0x28C) = n + 1;
        u32* p = (u32*)(self + (n * 0x18 + 0x290));
        p[0] = a;
        p[1] = b;
    }
}

void func_0019CF10(s32 arg0) {
    func_001F3C80();
    func_0019DC10(arg0, -1);
}

void func_0019DE10(s32 arg0) {
    func_0019B420();
    func_0019B940(arg0, 3, arg0 + 0x200);
}

void func_0019DE48(s32 arg0) {
    func_001F3BF8();
    func_0019B968(arg0, 3, arg0 + 0x200);
}

void func_0019E030(s32 arg0) {
    func_001F3C80();
    func_0019E060(arg0, 0);
}

void func_0019E160(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0025D350(&D_00475480, arg0 + 0x234, 4, arg0 + 0x230, arg1, arg2, arg3, arg4);
}

s32 func_0019F230(void) {
    return 1;
}

void func_0019F5D8(s32 arg0) {
    func_0011AF60(arg0 + 0x490C);
}

void func_0019F5F8(s32 arg0) {
    func_0011B028(arg0 + 0x490C);
}

void func_0019FC50(s32 arg0) {
    func_002614B0();
    func_0019FF00(arg0, 0);
}
