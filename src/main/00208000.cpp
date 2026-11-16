// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00208090(s32, s32);
s32 func_00209640(s32, s32);
s32 func_00209D58(s32, s32);
s32 func_001F3BF8();
s32 func_001F4670(s32, s32);
s32 func_001F3C80();
s32 func_0020ADE0(s32);
s32 func_0020AE68(s32, s32);
s32 func_0011E118(s32 *);
extern s32 D_00479CB0;
s32 func_0011E1F0(s32 *, s32);
extern s32 D_00479CC8;

void func_002081C8(void) {
    func_00208090(1, 0xFFFF);
}

void func_00209778(void) {
    func_00209640(1, 0xFFFF);
}

void func_00209E90(void) {
    func_00209D58(1, 0xFFFF);
}

void func_00209FA0(s32 arg0) {
    func_001F3BF8();
    func_001F4670(arg0, 1);
}

void func_0020A6A0(s32 arg0) {
    func_001F3C80();
    func_0020ADE0(arg0);
}

f32 func_0020AC38(f32 fparg0) {
    return fparg0;
}

void func_0020AFA0(void) {
    func_0020AE68(1, 0xFFFF);
}

void func_0020BB90(void) {
    func_0011E118(&D_00479CB0);
}

void func_0020BBB0(s32 arg0) {
    func_0011E1F0(&D_00479CB0, arg0);
}

void func_0020BBD8(void) {
    func_0011E118(&D_00479CC8);
}

void func_0020BBF8(s32 arg0) {
    func_0011E1F0(&D_00479CC8, arg0);
}

void func_0020BDA8(void) {

}

void func_0020BDB0(s32 *arg0) {
    *arg0 += 1;
}

s32 func_0020BEC8(void) {
    return 1;
}
