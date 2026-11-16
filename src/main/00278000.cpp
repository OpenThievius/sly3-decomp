// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00276DF8();
s32 func_002788F0(s32, s32);
s32 func_001FC8F8();
s32 func_00278E58(s32, s32);
s32 func_001FCAC8();
s32 func_00278D68(s32);
s32 func_001FC968();
s32 func_00279998(s32);
s32 func_00279C80(s32, s32);
s32 func_001CBAA0(s32 *, s32);
s32 func_001F3C80();
s32 func_0027C860(void *, s32);
extern s32 D_00475480;

void func_002782C0(void) {
    func_00276DF8();
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
