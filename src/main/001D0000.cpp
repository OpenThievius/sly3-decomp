// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0021C0F0(s32 *);
extern s32 D_004793C8;
s32 func_001CEFC8(s32, s32, s32, s32);
s32 func_002A2648(s32);
s32 func_002A27B8(s32, s32, s32);
s32 func_002A28D0(s32, s32, s32);
s32 func_0021EB88();
s32 func_00150630(s32 *, s32);
s32 func_00271730(s32, s32);
extern s32 D_00375220;
extern s32 D_00475480;
s32 func_001D45B0(s32 *);
extern s32 D_0046F550;
s32 func_001D2228(s32, s32);
extern s32 D_00388C44;
extern s32 D_00388C48;
s32 func_001D26D0();
s32 func_001D2720();
s32 func_001D2818(s32);
extern f32 D_0036BBD8;

s32 func_001D0630(void) {
    func_0021C0F0(&D_004793C8);
    return 0;
}

void func_001D08C8(s32 arg0, s32 arg1) {
    func_001CEFC8(arg0 + 0x13960, func_002A2648(arg1), 3, 0);
}

void func_001D0918(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_001CEFC8(arg0 + 0x13960, func_002A27B8(arg1, arg2, arg3), 5, arg4);
}

void func_001D0970(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_001CEFC8(arg0 + 0x13960, func_002A28D0(arg1, arg2, arg3), 6, arg4);
}

void func_001D0BB0(void) {
    func_0021EB88();
}

void func_001D0D10(void* p, s32 value)
{
    if (value != *(s32*)((char*)p + 0x38)) {
        *(s32*)((char*)p + 0x38) = value;
        *(f32*)((char*)p + 0x3C) = D_0036BBD8;
    }
}

void func_001D1A70(s32 arg0) {
    func_00271730(arg0, func_00150630(&D_00475480, D_00375220));
}

void func_001D1B98(s32 arg0) {
    func_00271730(arg0, func_00150630(&D_00475480, func_001D45B0(&D_0046F550)));
}

void func_001D2208(void* self, s32 value)
{
    s32 old = *(s32*)((char*)self + 0x38);
    if (value != old) {
        *(s32*)((char*)self + 0x38) = value;
        *(f32*)((char*)self + 0x3C) = D_0036BBD8;
    }
}

void func_001D23A0(void) {
    func_001D2228(1, 0xFFFF);
}

void func_001D23C0(void) {
    func_001D2228(0, 0xFFFF);
}

s32 func_001D23E0(void) {
    return D_00388C48 - D_00388C44;
}

void func_001D2468(void) {

}

s32 func_001D2770(s32 arg0) {
    func_001D26D0();
    return arg0;
}

void func_001D2798(s32 arg0, s32 arg1) {
    func_001D2720();
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

s32 func_001D27E0(void) {
    return 0;
}

void func_001D27E8(void) {

}
