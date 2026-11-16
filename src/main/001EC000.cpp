// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001EB4C8(s32);
s32 func_001ECBB8(s32);
s32 func_001EB7A0(s32);
s32 func_001EBCD0(s32);
s32 func_001EF6E0(s32, s32);
s32 func_001EFD00(s32, s32);
s32 func_00152448();
s32 func_001C8970(s32, s32, s32 *, s32);
extern s32 D_003468A0;

s32 func_001ED170(s32 arg0) {
    return func_001EB4C8(arg0 + 0xD0) != 0;
}

void func_001ED190(s32 arg0) {
    func_001ECBB8(arg0 + 0xD0);
}

void func_001ED1B0(s32 arg0) {
    func_001EB7A0(arg0 + 0xD0);
}

void func_001ED1D0(s32 arg0) {
    func_001EBCD0(arg0 + 0xD0);
}

void func_001EF818(void) {
    func_001EF6E0(1, 0xFFFF);
}

void func_001EFE38(void) {
    func_001EFD00(1, 0xFFFF);
}

void func_001EFF30(s32 arg0) {
    func_00152448();
    func_001C8970(arg0, 0x35, &D_003468A0, 0);
}
