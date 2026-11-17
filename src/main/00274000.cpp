// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_00276CA0(s32,s32);
s32 func_00169E40();
s32 func_001F3D10(s32, void *);
s32 func_0023E110();
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

s32 func_00274010(char* self, char** out)
{
    if (*(s32*)(self + 0x108) == 0) {
        return 0;
    }
    *out = (char*)(self + 0x108);
    return 1;
}

void func_00274660(void* self)
{
    *(int*)((char*)self + 0x114) = 0;
}

s32 func_00274678(void* p)
{
    return *(s32*)((unsigned char*)p + 0x114);
}

f32 func_002746A0(void* p)
{
    char* s = *(char**)((char*)p + 0x114);
    return *(f32*)(s + 0x70);
}

void func_00274798(char *arg0) {
    s32 temp_a0;

    func_00169E40();
    temp_a0 = *(s32 *)(arg0 + 0x28);
    func_001F3D10(temp_a0, arg0 + 0x30);
    *(s32 *)(arg0 + 0x20) = 0;
}

void func_00276CA0(s32 arg0, s32 arg1) {
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

void func_00276DD8(void) {
    func_00276CA0(1, 0xFFFF);
}

void func_00277358(s32 arg0, void* arg1)
{
    func_0023E110();
    *(float*)((char*)arg1 + 0x98) = 0.25f;
}

s32 func_00277680(void* p)
{
    return *(s32*)((char*)p + 0x13C) == 10;
}

void func_00277F18(void* self, s32 value)
{
    *(s32*)((char*)self + 0x158) = value;
}
