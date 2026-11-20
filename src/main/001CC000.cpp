// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00184968(s32 *);
s32 func_001CF058(s32 *, s32, s32);
extern s32 D_00349F90;
extern s32 D_0036C700;
extern s32 D_00375290;
s32 func_00271B20(s32, s32);
s32 func_001CEFB8();
s32 func_00293530(s32, s32);
s32 func_002936C0(s32);
s32 func_002936E0(s32);
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
s32 func_001CEAA0(s32);
s32 func_001CEAF0(s32, s32);
s32 func_002A2A48(s32, void *, s32 *);
s32 func_001D0D30(s32 *, s32);
s32 func_002A2E40(s32, s32);
extern s32 D_003751D0;

extern void func_00271448(u8*, u8*, s32);
extern u8 D_00323AA0[];
extern u8 D_00323AB0[];
extern u8 D_00323AC8[];
extern void func_00271448(u8*, u8*, u8*, u8*, s32);
extern void func_00271448(u8*, u8*, s32, s32);
extern void func_00271448(u8*, u8*, void*);
extern s32 func_001CEFB8(void* a0);
extern u8 D_00317FE0[];
extern u8 D_0031E5E8[];
s32 func_001CF7A0();
void func_001CFB40(s32 a0, s32 a1, u8* a2);
s32 func_001CEFB8(u8* a, s32 a1);
void func_001CE758(s32 arg0, s32 arg1) {
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

void func_001CE890(void) {
    func_001CE758(1, 0xFFFF);
}

void func_001CE8B0(void) {
    func_00184968(&D_0036C700);
    D_00349F90 = -1;
    func_001CF058(&D_00375290, 0, 0);
}

s32 func_001CEA80(s32 value)
{
    if (value == 0) return 0x1D;
    if (value > 0) return 0x1E;
    return 0x1F;
}

void func_001CEE08(s32* out)
{
    *out = func_00271B20(1, 1);
    *(s32*)(out + 1) = -1;
    *(s32*)(out + 4) = 0x20;
}

void func_001CEF70(s32 *arg0) {
    if (func_001CEFB8() != 0) {
        func_00293530(arg0[1], 1);
    }
    func_002936E0(arg0[0]);
    func_002936C0(arg0[0]);
}

s32 func_001CEFC8(void *unused, s32 arg1, s32 arg2, s32 *arg3)
{
    s32 sp[4];
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_001CEA80(arg1);
    if (temp_v0 == 29) {
        temp_v1 = func_001CEAA0(func_002A2A48(0, sp, &sp[1]));
        if (arg3 != 0) {
            *arg3 = sp[1];
        }
        if (temp_v1 == 0x22) {
            temp_v1 = func_001CEAF0(arg2, sp[1]);
        }
        return temp_v1;
    }
    return temp_v0;
}

s32 func_001CF710(char *arg0)
{
    char *temp_s1;
    s32 temp_v0;

    temp_s1 = arg0 + 0x13960;
    temp_v0 = func_002A2E40(*(s32 *)arg0, *(s32 *)(arg0 + 4));
    temp_v0 = func_001CEFC8(temp_s1, temp_v0, 0x10, 0);
    if (temp_v0 != 0) {
        *(s32 *)(arg0 + 0xC) = 2;
        func_001D0D30(&D_003751D0, 3);
    } else {
        *(s32 *)(arg0 + 0xC) = 3;
    }
    return temp_v0;
}

void func_001CFDE8(s32 arg0, s32 arg1) {
    *(s32*)(arg0 + 0x1395C) = arg1;
}

s32 func_001CFDF8(s32 arg0) { return *(s32*)(arg0 + 0x1395C); }


s32 func_001CEFB8(u8* a, s32 a1) { return ~*(s32*)((u8*)a + 0x4) != 0; }
s32 func_001CF7A0() { return ((((u8*)&D_0031E5E8)) - (((u8*)&D_00317FE0))); }
void func_001CFB40(s32 a0, s32 a1, u8* a2) { s32 d = a1 - 0x24; s32 n = ((d - a0) * 0x4A38A229) >> 2; func_00271448(a2, D_00323AA0, D_00323AB0, D_00323AC8, n + 1); }
