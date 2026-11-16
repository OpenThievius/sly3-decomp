// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_002491A0(s32, s32);
s32 func_0011AF60(s32 *, s32);
extern s32 D_00479AFC;
s32 func_0011B028(s32 *, s32);
s32 func_0015CE68(s32);
s32 func_001C81B8();
s32 func_002496D0(s32, s32);
s32 func_00249828(s32, s32);
s32 func_00249BA0(s32, s32);
s32 func_0024B420(s32, s32);
s32 func_0024B940(s32, s32);

void func_002492F8(void) {
    func_002491A0(1, 0xFFFF);
}

void func_00249318(void) {
    func_002491A0(0, 0xFFFF);
}

void func_00249468(s32 arg0) {
    func_0011AF60(&D_00479AFC, arg0);
}

void func_00249490(s32 arg0) {
    func_0011B028(&D_00479AFC, arg0);
}

void func_00249558(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xF8);
}

void func_00249808(void) {
    func_002496D0(1, 0xFFFF);
}

void func_00249960(void) {
    func_00249828(1, 0xFFFF);
}

void func_00249CD8(void) {
    func_00249BA0(1, 0xFFFF);
}

void func_0024B558(void) {
    func_0024B420(1, 0xFFFF);
}

void func_0024BC50(void) {
    func_0024B940(1, 0xFFFF);
}
