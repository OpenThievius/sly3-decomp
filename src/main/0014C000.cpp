// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0014D1F0(s32, s32);
s32 func_0023F400();
void func_0014D230(s32,s32);
s32 func_0014DC98(s32, s32);
s32 func_0023C580();
s32 func_001FCB20();
void func_0014EDF8(s32,s32);
void func_0014F2E8(s32,s32);
s32 func_0013B500(s32, s32);
s32 func_0023E178(void *, void *);
s32 func_001A1D70();
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

void func_0014C040(s32 arg0) {
    func_0023F400();
    func_0014D1F0(arg0, arg0);
}

s32 func_0014CD60(s32 arg0, s32 arg1) {
    return (s32) ((arg1 - arg0) * 0x286BCA1B) >> 4;
}

void func_0014D228(void* self, s32 value)
{
    *(s32*)((char*)self + 0x1D4) = value;
}

void func_0014D230(s32 arg0, s32 arg1) {
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

void func_0014D368(void) {
    func_0014D230(1, 0xFFFF);
}

void func_0014D498(s32 arg0) {
    func_0023C580();
    func_0014DC98(arg0, 0);
}

void func_0014D4C8(s32 arg0) {
    func_001FCB20();
    func_0014DC98(arg0, 0);
}

s32 func_0014D9A8(char *self, char *other)
{
    if (*(s32 *)(self + 0x164) == 5) {
        if (func_0013B500(*(s32 *)(*(char **)(other + 0x14)), 0x33) != 0) {
            return 3;
        }
    }
    return func_0023E178(self, other);
}

void func_0014DB68(void* pobject)
{
    *(int*)((char*)pobject + 0x138) = 0;
}

void func_0014DB70(char *self, s32 value)
{
    char *dst = *(char **)(self + 0x138);
    s32 size = *(s32 *)(dst + 0x1C);
    if ((u32)size < 3) {
        *(s32 *)(dst + (size << 2) + 0x20) = value;
        *(s32 *)(dst + 0x1C) = size + 1;
    }
}

s32 func_0014DBA0(char* self)
{
    s32* p = *(s32**)(self + 0x138);
    s32 r = -1;
    if (p != 0) r = *p;
    return r;
}

s32 func_0014DC00(void* p)
{
    return *(s32*)((char*)p + 0x138);
}

s32 func_0014DC88(s32 arg0) {
    return arg0 >= 2;
}

void func_0014E7A0(void* p)
{
    s32* self = (s32*)p;
    func_001A1D70();
    *(s32*)((char*)p + 0x194) = 0x313;
    *(s32*)((char*)p + 0x198) = -1;
    *(float*)((char*)p + 0x19C) = 15.0f;
}

void func_0014E938(char* self, s32 value)
{
    if (value == *(s32*)(self + 0x1B0)) return;
    *(s32*)(self + 0x1B0) = value;
    if (value != 0) {
        s32 flags = *(s32*)(self + 0x3C);
        if (!(flags & 1)) {
            *(s32*)flags = *(s32*)flags | 2;
            return;
        }
        *(s32*)(self + 0x3C) = flags | 2;
        return;
    }
    s32 flags = *(s32*)(self + 0x3C);
    if (!(flags & 1)) {
        *(s32*)flags = *(s32*)flags & -3;
        return;
    }
    *(s32*)(self + 0x3C) = flags & -3;
}

void func_0014EDF8(s32 arg0, s32 arg1) {
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

void func_0014EF30(void) {
    func_0014EDF8(1, 0xFFFF);
}

void func_0014EF78(void* p)
{
    *(s32*)((char*)p + 0x10) = *(s32*)((char*)p + 0x4);
    *(s32*)((char*)p + 0x18) = 0;
    *(s32*)((char*)p + 0x14) = 0;
    *(s32*)((char*)p + 0xC) = 0;
    *(s32*)((char*)p + 0x8) = 0;
    *(s32*)((char*)p + 0x1C) = 0;
}

void func_0014F240(char* self, s32 delta)
{
    if (delta == 0) {
        delta = *(s32*)(self + 0x18);
        if (delta == 0) {
            return;
        }
    }
    *(s32*)(self + 0x10) = *(s32*)(self + 0x10) + delta;
    *(s32*)(self + 0x18) = *(s32*)(self + 0x18) - delta;
}

s32 func_0014F2E0(void) {
    return 0;
}

void func_0014F2E8(s32 arg0, s32 arg1) {
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

void func_0014F420(void) {
    func_0014F2E8(1, 0xFFFF);
}
