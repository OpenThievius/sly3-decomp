// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00276DF8();
void func_002788F0(s32,s32);
s32 func_001FC8F8();
s32 func_00278E58(s32, s32);
s32 func_001FCAC8();
s32 func_00278D68(s32);
s32 func_001FC968();
s32 func_00279998(s32);
void func_00279C80(s32,s32);
s32 func_001CBAA0(s32 *, s32);
s32 func_001F3C80();
s32 func_0027C860(void *, s32);
extern s32 D_00475480;
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

void func_002782C0(void) {
    func_00276DF8();
}

void func_002788F0(s32 arg0, s32 arg1) {
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

void func_00278A28(void) {
    func_002788F0(1, 0xFFFF);
}

void func_00278D00(s32 arg0) {
    func_001FC8F8();
    func_00278E58(arg0, 0);
}

void func_00278D30(s32 arg0) {
    func_001FCAC8();
    func_00278D68(arg0);
    func_00278E58(arg0, -1);
}

void func_00279160(char* self, s32 value)
{
    u32 count = *(u32*)(self + 0x54);
    if (count < 0x20) {
        *(u32*)(self + 0x54) = count + 1;
        u32* p = (u32*)(self + ((count * 8) + 0x58));
        p[0] = value;
        p[1] = 0;
    }
}

void func_002797C0(s32 arg0) {
    func_001FC968();
    func_00279998(arg0);
}

s32 func_002799A0(char* self, s32 n)
{
    s32 v = *(s32*)(self + 0x134) - n;
    v = (v > -1) ? v : 0;
    *(s32*)(self + 0x134) = v;
    return v;
}

void func_00279C80(s32 arg0, s32 arg1) {
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

void func_00279DB8(void) {
    func_00279C80(1, 0xFFFF);
}

void func_0027A068(void *pgoal)
{
    s32 temp_a1;

    func_001F3C80();
    temp_a1 = *(s32 *)((char *)pgoal + 0x358);
    if (temp_a1 != 0) {
        func_001CBAA0(&D_00475480, temp_a1);
        *(s32 *)((char *)pgoal + 0x358) = 0;
    }
    func_0027C860(pgoal, 0);
}
