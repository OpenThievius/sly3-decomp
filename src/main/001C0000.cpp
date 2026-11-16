// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001BFFD8(s32, s32);
s32 func_001C0218(s32, s32);
s32 func_0011AF60(s32 *, s32 *);
extern s32 D_00479BC8;
s32 func_001C12B8(s32, s32);
s32 func_001C1EC0(s32, s32);
s32 func_001C0538(s32, s32);
s32 func_001C21F0(s32 *, s32);
s32 func_001F43C8(s32);

void func_001C0110(void) {
    func_001BFFD8(1, 0xFFFF);
}

void func_001C0350(void) {
    func_001C0218(1, 0xFFFF);
}

void func_001C0370(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0011AF60(&D_00479BC8, arg0);
}

void func_001C13F0(void) {
    func_001C12B8(1, 0xFFFF);
}

void func_001C1FF8(void) {
    func_001C1EC0(1, 0xFFFF);
}

void func_001C2FE8(s32 *arg0) {
    func_001C0538(*arg0, 0);
}

void func_001C3AE8(s32 *arg0) {
    if (func_001F43C8(*arg0) > 0) {
        func_001C21F0(arg0, 0);
        return;
    }
    func_001C21F0(arg0, 9);
}

void func_001C3CD0(s32 *arg0) {
    if (func_001F43C8(*arg0) > 0) {
        func_001C21F0(arg0, 7);
        return;
    }
    func_001C21F0(arg0, 9);
}
