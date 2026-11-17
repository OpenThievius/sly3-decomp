// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_0020EBD0(s32,s32);
s32 func_001C8970(s32, s32, s32 *, s32);
s32 func_001F3BF8();
s32 func_001F4670(s32, s32);
extern s32 D_00347FF0;
s32 func_001F3C48();
s32 func_0020F820(s32);
s32 func_0020BDA8();
s32 func_001F4548(s32, s32);
s32 func_0020F868(s32, s32);
s32 func_0011E100(s32 *, s32, s32, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;

void func_0020E2E8(void* self, s32 a, s32 b)
{
    func_0020BDA8();
    *(s32*)((char*)self + 0xF4) = b;
}

void func_0020EBD0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        temp_v0 = D_0036AE78 + 1;
        D_0036AE78 = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0_2 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_3 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_4 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_5 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_6 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_6;
        if (temp_v0_6 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
}

void func_0020ED08(void) {
    func_0020EBD0(1, 0xFFFF);
}

void func_0020EDE0(s32 arg0) {
    func_001F3BF8();
    func_001C8970(arg0, 3, &D_00347FF0, 0);
    func_001F4670(arg0, 1);
}

void func_0020EE28(s32 arg0) {
    func_001F3C48();
    func_0020F820(arg0);
}

void func_0020F738(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 == -1) {
        temp_v0 = func_0020F868(arg0, 1);
    } else {
        temp_v0 = func_0020F868(arg0, 2);
    }
    func_001F4548(arg0, arg1);
}
