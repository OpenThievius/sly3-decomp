// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00159A88(s32, s32);
void func_0015ABC0(s32,s32);
void func_0015BCA0(s32,s32);
s32 func_00158CE8(void *, s32);
s32 func_00238980();
s32 func_001591E8(void *, s32);
s32 func_001599E0(void *, s32);
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

void func_00158910(char *self) {
    func_00238980();
    func_00158CE8(self, -1);
    *(s32 *)(*(char **)(self + 0x10) + 0x11B8) &= -2;
}

void func_00158E10(void *pgoal)
{
    func_00238980();
    func_001591E8(pgoal, -1);
    char *pobject = *(char **)((char *)pgoal + 0x10);
    *(s32 *)(pobject + 0x11B8) &= -2;
}

void func_00159310(char *arg0)
{
    func_00238980();
    func_001599E0(arg0, -1);
    char *target = *(char **)(arg0 + 0x10);
    *(s32 *)(target + 0x11B8) &= -2;
}

void func_00159DD0(void) {
    func_00159A88(1, 0xFFFF);
}

s32 func_0015A5D8(char* self)
{
    s32 v = *(s32*)(self + 0x130);
    if (v < 4) {
        if (v >= 2) {
            return 0;
        }
    }
    return 1;
}

void func_0015ABC0(s32 arg0, s32 arg1) {
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

void func_0015ACF8(void) {
    func_0015ABC0(1, 0xFFFF);
}

void func_0015AF48(void* self)
{
    *(int*)((char*)self + 0x3DF4) = 0;
    *(int*)((char*)self + 0x3E04) = 0;
    *(int*)((char*)self + 0x3E08) = 0;
}

void func_0015B780(char* self)
{
    *(int*)(self + 0x3E5C) = 0;
    *(int*)(self + 0x3E60) = 0;
    *(int*)(self + 0x3E64) = 0;
}

void func_0015BCA0(s32 arg0, s32 arg1) {
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

void func_0015BDD8(void) {
    func_0015BCA0(1, 0xFFFF);
}
