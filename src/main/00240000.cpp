// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0011E118(s32 *);
extern s32 D_00479DB4;
s32 func_0011E1F0(s32 *, s32);
s32 func_0025DEF8(s32 *, s32);
extern s32 D_00475480;
s32 func_00150690(s32, s32, s32, s32);
s32 func_0017E1B8(s32 *, s32, s32, s32);
s32 func_001D27F0(s32);
s32 func_00241AA0();
s32 func_00256278(s32, s32);
s32 func_00242830(s32, s32);

void func_002409E0(void) {
    func_0011E118(&D_00479DB4);
}

void func_00240A00(s32 arg0) {
    func_0011E1F0(&D_00479DB4, arg0);
}

void func_00240DB0(s32 arg0) {
    func_0025DEF8(&D_00475480, arg0);
}

void func_00241268(s32 arg0) {
    if (func_0017E1B8(&D_00475480, 2, 0x1A6, arg0) == 0) {
        func_00150690(0x11, arg0, 0x1A6, -1);
    }
}

void func_00241AD8(s32 arg0) {
    if (func_00241AA0() == 0) {
        func_00256278(func_001D27F0(0xAC), arg0);
    }
}

void func_002429A8(void) {
    func_00242830(1, 0xFFFF);
}
