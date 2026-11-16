// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00195278(s32, s32);
s32 func_002362D0(s32, s32, s32);
s32 func_00196FC0(s32, s32);
s32 func_0011AD60(s32, s32);
s32 func_001C7340();
s32 func_001971C8(s32);
s32 func_001C7DC8();
s32 func_00198540(s32, s32);

void func_001953B0(void) {
    func_00195278(1, 0xFFFF);
}

void func_00196F00(s32 arg0) {
    func_002362D0(1, arg0, 0);
}

void func_001970F8(void) {
    func_00196FC0(1, 0xFFFF);
}

void func_00197168(s32 arg0) {
    func_001C7340();
    func_0011AD60(arg0 + 0x40, 0x1C);
}

void func_00197198(s32 arg0) {
    func_001C7DC8();
    func_001971C8(arg0);
}

void func_00197690(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_00198540(arg1, arg0);
    }
}
