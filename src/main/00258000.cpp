// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00258010(s32, s32);
s32 func_0011FB88(s32);
s32 func_0011E118(s32 *);
extern s32 D_0047A2E0;
s32 func_0011E1F0(s32 *, s32);
s32 func_00259890(s32, s32);
s32 func_00259A08();
s32 func_00259D80();
s32 func_0025A048(s32, s32);
s32 func_0025A4D0(s32, s32);

void func_00258910(void) {
    func_00258010(1, 0xFFFF);
}

void func_002591E8(s32 arg0) {
    func_0011FB88(arg0 + 0x70);
}

void func_00259590(void) {
    func_0011E118(&D_0047A2E0);
}

void func_002595B0(s32 arg0) {
    func_0011E1F0(&D_0047A2E0, arg0);
}

void func_002599C8(void) {
    func_00259890(1, 0xFFFF);
}

void func_002599E8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00259A08();
}

void func_00259D60(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00259D80();
}

void func_0025A180(void) {
    func_0025A048(1, 0xFFFF);
}

void func_0025A608(void) {
    func_0025A4D0(1, 0xFFFF);
}
