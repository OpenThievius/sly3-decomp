// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00168E88(s32, s32);
s32 func_00169558(s32, s32);
s32 func_00169AA0(s32, s32);
s32 func_0011E118(s32 *);
extern s32 D_0047931C;
s32 func_0011E1F0(s32 *, s32);
s32 func_00169CB0(s32, s32);
s32 func_00169D98(s32);
s32 func_0011B0C0(s32, s32 *);

void func_00168FC0(void) {
    func_00168E88(1, 0xFFFF);
}

void func_001696B0(void) {
    func_00169558(1, 0xFFFF);
}

void func_001696D0(void) {
    func_00169558(0, 0xFFFF);
}

void func_00169BD8(void) {
    func_00169AA0(1, 0xFFFF);
}

void func_00169BF8(void) {
    func_0011E118(&D_0047931C);
}

void func_00169C18(s32 arg0) {
    func_0011E1F0(&D_0047931C, arg0);
}

void func_00169C40(s32 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        func_00169D98(temp_a0);
        temp_a0_2 = *arg0;
        if (temp_a0_2 != 0) {
            func_00169CB0(temp_a0_2, 3);
        }
        *arg0 = 0;
    }
}

void func_00169E78(void) {

}

s32 func_00169E88(s32 *arg0) {
    return func_0011B0C0(*arg0 + 0x300, arg0) == 0;
}
