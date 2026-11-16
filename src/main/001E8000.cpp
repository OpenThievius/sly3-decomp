// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001E82E0(s32, s32);
s32 func_00165DF0();
extern s32 D_0047937C;
s32 func_00165FC0();
s32 func_00168CC0();
s32 func_001E8B18(s32, s32);
s32 func_001F3BF8();
s32 func_001F4670(s32, s32);
s32 func_001E8E60(s32, s32);
s32 func_001F3C48();
s32 func_001F3C80();
s32 func_001E91D8(s32, s32);
s32 func_00152448();
s32 func_001C8970(s32, s32, s32 *, s32);
extern s32 D_00346650;
s32 func_001EB370(s32, s32);

void func_001E8418(void) {
    func_001E82E0(1, 0xFFFF);
}

void func_001E84B8(void) {
    func_00165DF0();
    D_0047937C = 1;
}

void func_001E84E0(void) {
    func_00165FC0();
    D_0047937C = 1;
}

void func_001E8A18(void) {
    func_00168CC0();
}

void func_001E8C50(void) {
    func_001E8B18(1, 0xFFFF);
}

void func_001E8CF0(s32 arg0) {
    func_001F3BF8();
    func_001F4670(arg0, 1);
}

void func_001E8D20(s32 arg0) {
    func_001F3C48();
    func_001E8E60(arg0, 1);
}

void func_001E8D50(s32 arg0) {
    func_001F3C80();
    func_001E8E60(arg0, -1);
}

void func_001E9310(void) {
    func_001E91D8(1, 0xFFFF);
}

void func_001E9438(s32 arg0) {
    func_00152448();
    func_001C8970(arg0, 0x31, &D_00346650, 0);
}

void func_001EB4A8(void) {
    func_001EB370(1, 0xFFFF);
}
