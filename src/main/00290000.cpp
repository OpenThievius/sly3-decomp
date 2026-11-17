// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0028FFD8();
void func_00290560(s32,s32);
s32 func_002914C0(s32, s32, s32, s32, s32);
s32 func_00291290(s32, s32, s32);
s32 func_0011E100(s32 *, s32, s32, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;

s32 func_002900D0(s32 arg0) {
    func_0028FFD8();
    return arg0 + 0x90;
}

void func_00290560(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        temp_v0 = D_0036AE78 + 1;
        D_0036AE78 = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0_2 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_3 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_4 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_5 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_6 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_6;
        if (temp_v0_6 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
}

void func_00290698(void) {
    func_00290560(1, 0xFFFF);
}

void func_00290E38(void) {
    func_002914C0(8, 0, 0, 0, 0);
}

void func_00290FA0(s32 arg0) {
    func_002914C0(0x5C, 0x30, arg0, 0, 0);
}

void func_00290FD0(s32 arg0, s32 arg1, s32 arg2) {
    func_002914C0(0x5C, 0x30, arg0, arg1, arg2);
}

void func_002910B8(void) {
    func_002914C0(0x18, 0, 0, 0, 0);
}

void func_00291B88(void) {
    func_00291290(0x3D, 0, 0);
}

void func_00291BC0(void) {
    func_00291290(0x3C, 0, 0);
}

void func_00291C20(void) {
    func_00291290(0x40, 0, 0);
}

void func_00291C78(void) {
    func_00291290(0x5B, 0, 0);
}
