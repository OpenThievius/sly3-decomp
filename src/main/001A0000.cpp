// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern u8 D_00479B50[];
void func_0011B028(void* a, void* b);
s32 func_001A05B0(s32, s32);
s32 func_0011AF60(s32 *, s32);
extern s32 D_00479B14;
s32 func_0015CE68(s32);
s32 func_0022DCC8();
extern s32 D_00479B20;
s32 func_001C81B8();
extern s32 D_00479B2C;
extern s32 D_00479B08;
extern s32 D_00479B38;
s32 func_0025D350(s32 *, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00475480;
s32 func_001858D0(s32 *, s32, s32, s32, s32, s32);
extern s32 D_0036C700;
s32 func_0013B500(s32, s32);
s32 func_001A20F8();
s32 func_001DF7E8(s32, s32);
extern s32 D_00479BA4;
s32 func_001A2B30(s32, s32);
s32 func_001A31B0(s32, s32);
extern s32 D_00479B44;
s32 func_001A35B0(s32, s32);
s32 func_001A3860(s32, s32);
s32 func_00238978();

void func_001A06E8(void) {
    func_001A05B0(1, 0xFFFF);
}

s32 func_001A0730(void) {
    return 0;
}

void func_001A0830(void) {

}

s32 func_001A0948(void) {
    return 0;
}

void func_001A0A28(s32 arg0) {
    func_0011AF60(&D_00479B14, arg0);
}

void func_001A0BA0(s32 arg0) {
    func_0022DCC8();
    func_0015CE68(arg0 + 0x1A8);
}

void func_001A0FF8(s32 arg0) {
    func_0011AF60(&D_00479B20, arg0);
}

void func_001A1160(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xF8);
}

void func_001A14B0(s32 arg0) {
    func_0011AF60(&D_00479B2C, arg0);
}

void func_001A1610(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xF8);
}

void func_001A1800(s32 arg0) {
    func_0011AF60(&D_00479B08, arg0);
}

void func_001A1ED0(s32 arg0) {
    func_0011AF60(&D_00479B38, arg0);
}

void func_001A1FC0(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xF8);
}

void func_001A2080(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0025D350(&D_00475480, arg0 + 0x12C, 4, arg0 + 0x128, 1, arg1, arg2, arg3);
}

void func_001A20C0(s32 arg0, s32 arg1, s32 arg2) {
    func_001858D0(&D_0036C700, arg0 + 0x170, 4, arg0 + 0x16C, arg1, arg2);
}

void func_001A22A8(s32 arg0, s32 arg1) {
    func_001A20F8();
    if (func_0013B500(arg1, 0x35) != 0) {
        func_001DF7E8(arg1, arg0);
    }
}

void func_001A24E8(void* item)
{
    func_0011B028(D_00479B50, item);
}

void func_001A25B0(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0x148);
}

void func_001A27D8(s32 arg0) {
    func_0011AF60(&D_00479BA4, arg0);
}

void func_001A2C68(void) {
    func_001A2B30(1, 0xFFFF);
}

void func_001A32E8(void) {
    func_001A31B0(1, 0xFFFF);
}

void func_001A34D8(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xD0);
}

void func_001A3530(s32 arg0) {
    func_0011AF60(&D_00479B44, arg0);
}

void func_001A36E8(void) {
    func_001A35B0(1, 0xFFFF);
}

void func_001A3740(s32 arg0) {
    func_00238978();
    func_001A3860(arg0, 0);
}
