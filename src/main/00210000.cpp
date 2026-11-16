// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0020EE28();
s32 func_00210410(s32, s32);
s32 func_001F3C80();
s32 func_0020EE58();
s32 func_002100E8(s32);
s32 func_00166548(s32);
s32 func_00169E40();
s32 func_002108A0(s32, s32);
s32 func_00210FB8(s32, s32);
s32 func_00212328(s32, s32);
s32 func_00213098(s32, s32);
s32 func_001F3BF8();
s32 func_001F4670(s32, s32);
s32 func_00213830(s32, s32);
s32 func_00150690(s32, s32, s32, s32);
extern s32 D_00468D24;
s32 func_0011B028(s32 *, s32);
s32 func_0023CE08();
extern s32 D_00479BEC;
s32 func_0011AF60(s32 *, s32);
s32 func_0023CEC0();

void func_00210008(s32 arg0) {
    func_0020EE28();
    func_00210410(arg0, 0);
}

void func_00210038(s32 arg0) {
    func_001F3C80();
    func_00210410(arg0, -1);
}

void func_002100B8(s32 arg0) {
    func_0020EE58();
    func_002100E8(arg0);
}

void func_00210760(s32 *arg0) {
    func_00169E40();
    func_00166548(*arg0);
}

void func_002109D8(void) {
    func_002108A0(1, 0xFFFF);
}

void func_002110F0(void) {
    func_00210FB8(1, 0xFFFF);
}

s32 *func_00211110(s32 *arg0) {
    *arg0 = 0;
    return arg0;
}

void func_00212460(void) {
    func_00212328(1, 0xFFFF);
}

void func_002131D0(void) {
    func_00213098(1, 0xFFFF);
}

void func_00213220(s32 arg0) {
    func_001F3BF8();
    func_001F4670(arg0, 1);
}

void func_00213968(void) {
    func_00213830(1, 0xFFFF);
}

void func_00213988(void) {
    if (D_00468D24 == 0) {
        D_00468D24 = func_00150690(0x9B, 0, 0x797, -1);
    }
}

void func_00213E20(s32 arg0) {
    func_0023CE08();
    func_0011B028(&D_00479BEC, arg0);
}

void func_00213E58(s32 arg0) {
    func_0023CEC0();
    func_0011AF60(&D_00479BEC, arg0);
}
