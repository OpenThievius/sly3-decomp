// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001F1180(s32, s32);
s32 func_001F12D8(s32, s32);
s32 func_001F1430(s32);
s32 func_001F15E0(s32, s32);
s32 func_001F1F88(s32, s32);
s32 func_001F2F08(s32, s32);
s32 func_0011AF60(s32 *, s32);
extern s32 D_00479AE4;
s32 func_0011B028(s32 *, s32);
s32 func_0015CE68(s32);
s32 func_0022DCC8();
s32 func_001F39F8(s32, s32);

void func_001F12B8(void) {
    func_001F1180(1, 0xFFFF);
}

void func_001F1410(void) {
    func_001F12D8(1, 0xFFFF);
}

void func_001F15C0(void) {
    func_001F1430(0);
}

void func_001F1718(void) {
    func_001F15E0(1, 0xFFFF);
}

void func_001F2390(void) {
    func_001F1F88(1, 0xFFFF);
}

void func_001F3040(void) {
    func_001F2F08(1, 0xFFFF);
}

void func_001F3160(s32 arg0) {
    func_0011AF60(&D_00479AE4, arg0);
}

void func_001F3188(s32 arg0) {
    func_0011B028(&D_00479AE4, arg0);
}

void func_001F32B8(s32 arg0) {
    func_0022DCC8();
    func_0015CE68(arg0 + 0x1A8);
}

void func_001F3B30(void) {
    func_001F39F8(1, 0xFFFF);
}
