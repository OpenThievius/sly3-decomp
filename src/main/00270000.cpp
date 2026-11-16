// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_002719C8(s32, s32);
s32 func_00271CE0(s32, s32);
s32 func_002738C0(s32, s32);
s32 func_0011AF60(s32 *, s32);
s32 func_001C85E8();
extern s32 D_00479370;

void func_00271B00(void) {
    func_002719C8(1, 0xFFFF);
}

void func_00271E18(void) {
    func_00271CE0(1, 0xFFFF);
}

void func_002739F8(void) {
    func_002738C0(1, 0xFFFF);
}

void func_00273CC0(s32 arg0) {
    func_001C85E8();
    func_0011AF60(&D_00479370, arg0);
}
