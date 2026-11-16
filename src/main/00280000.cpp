// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0025D350(s32 *, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00475480;
s32 func_001858D0(s32 *, s32, s32, s32, s32, s32);
extern s32 D_0036C700;
s32 func_002802D8(s32, s32);
s32 func_0013BEC0();
s32 func_0023E290();
s32 func_0011E118(s32);
s32 func_00240850();
s32 func_00281978(s32, s32);
s32 func_00282F78(s32, s32);

void func_002801C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg1 != 0) {
        func_0025D350(&D_00475480, arg0 + 0xD4, 4, arg0 + 0xD0, arg1, arg2, arg3, arg4);
    }
}

void func_00280208(s32 arg0, s32 arg1, s32 arg2) {
    func_001858D0(&D_0036C700, arg0 + 0x118, 4, arg0 + 0x114, arg1, arg2);
}

void func_00280410(void) {
    func_002802D8(1, 0xFFFF);
}

void func_00280E88(void) {
    func_0013BEC0();
}

void func_00281138(void) {
    func_0023E290();
}

void func_00281158(s32 arg0) {
    func_0011E118(arg0 + 0x48F4);
}

void func_002812A8(void) {

}

void func_00281868(void) {
    func_00240850();
}

void func_00281AB0(void) {
    func_00281978(1, 0xFFFF);
}

void func_002830B0(void) {
    func_00282F78(1, 0xFFFF);
}
