// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_001B7038(s32,s32);
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
s32 func_00147E08(s32, s32, s32, void *, s32, s32, s32, void *);
s32 func_00273E48(s32, s32, s32, s32);

s32 func_001B6798(const float* a, const float* b)
{
    if (a[2] < b[2]) return -1;
    return 1;
}

void func_001B7038(s32 arg0, s32 arg1) {
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

void func_001B7170(void) {
    func_001B7038(1, 0xFFFF);
}

s32 func_001B71D8(char *self)
{
    s32 r;
    if (*(s32 *)(self + 0x134))
        r = func_00273E48(*(s32 *)(self + 0x134), 0, 0, 0);
    else
        r = 0;
    if (*(s32 *)(self + 0x138))
        r = func_00273E48(*(s32 *)(self + 0x138), 0, 0, 0);
    else
        r = 0;
    if (*(s32 *)(self + 0x184))
        r = func_00273E48(*(s32 *)(self + 0x184), 0, 0, 0);
    else
        r = 0;
    func_00147E08(*(s32 *)(self + 0x0), 0xC, 5, (char *)self + 0x144, 0, 0, 0, (char *)self + 0x180);
}
