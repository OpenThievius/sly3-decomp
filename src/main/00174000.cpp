// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001742B0(s32, s32);
s32 func_001749A8(s32, s32);
s32 func_00174B00(s32, s32);
s32 func_00175678(s32, s32);
s32 func_00176210(s32, s32);
s32 func_00177098(s32, s32);
s32 func_001C7340();
s32 func_001C9118(s32, s32);
s32 func_0011AF60(s32 *, s32);
s32 func_001C78A0();
extern s32 D_00479B98;
s32 func_0011B028(s32 *, s32);
s32 func_001C7938();
s32 func_00177330(s32, s32);
s32 func_001F4950(s32 *, s32);
extern s32 D_00475480;

void func_001743E8(void) {
    func_001742B0(1, 0xFFFF);
}

void func_001746A8(void) {

}

void func_001749A0(void) {

}

void func_00174AE0(void) {
    func_001749A8(1, 0xFFFF);
}

void func_00174C38(void) {
    func_00174B00(1, 0xFFFF);
}

s32 func_00174FF0(s32 arg0, s32 arg1) {
    return arg0 + arg1;
}

s32 func_00174FF8(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 0x10);
}

void func_001757B0(void) {
    func_00175678(1, 0xFFFF);
}

void func_00176348(void) {
    func_00176210(1, 0xFFFF);
}

void func_001771D0(void) {
    func_00177098(1, 0xFFFF);
}

void func_001771F0(s32 arg0) {
    func_001C7340();
    func_001C9118(arg0, 1);
}

void func_00177220(s32 arg0) {
    func_001C78A0();
    func_0011AF60(&D_00479B98, arg0);
}

void func_00177258(s32 arg0) {
    func_001C7938();
    func_0011B028(&D_00479B98, arg0);
}

void func_00177468(void) {
    func_00177330(1, 0xFFFF);
}

void func_00177838(s32 arg0) {
    func_001F4950(&D_00475480, arg0);
}
