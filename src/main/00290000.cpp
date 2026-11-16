// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0028FFD8();
s32 func_00290560(s32, s32);
s32 func_002914C0(s32, s32, s32, s32, s32);
s32 func_00291290(s32, s32, s32);

s32 func_002900D0(s32 arg0) {
    func_0028FFD8();
    return arg0 + 0x90;
}

void func_00290698(void) {
    func_00290560(1, 0xFFFF);
}

void func_00290E38(void) {
    func_002914C0(8, 0, 0, 0, 0);
}

void func_00290FA0(s32 arg0) {
    func_002914C0(0x5C, 0x30, arg0, 0, 0);
}

void func_00290FD0(s32 arg0, s32 arg1, s32 arg2) {
    func_002914C0(0x5C, 0x30, arg0, arg1, arg2);
}

void func_002910B8(void) {
    func_002914C0(0x18, 0, 0, 0, 0);
}

void func_00291B88(void) {
    func_00291290(0x3D, 0, 0);
}

void func_00291BC0(void) {
    func_00291290(0x3C, 0, 0);
}

void func_00291C20(void) {
    func_00291290(0x40, 0, 0);
}

void func_00291C78(void) {
    func_00291290(0x5B, 0, 0);
}
