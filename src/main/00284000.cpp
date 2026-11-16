// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_002852C0(s32, s32);
s32 func_001854C8(s32 *, s32, s32);
s32 func_00286360(s32, s32);
extern s32 D_0036C700;
s32 func_0023AE08();
s32 func_00240E58(s32, s32, s32);

void func_00285418(void) {
    func_002852C0(1, 0xFFFF);
}

void func_00285438(void) {
    func_002852C0(0, 0xFFFF);
}

void func_00287740(s32 arg0) {
    func_001854C8(&D_0036C700, 0x60, arg0);
    func_00286360(arg0, -1);
}

void func_00287A70(s32 arg0) {
    func_0023AE08();
    func_00240E58(arg0, 0x03FFFFFF, 2);
    func_00240E58(arg0, 0x03D88001, 0);
}
