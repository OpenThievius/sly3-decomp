// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_001F9398(s32,s32);
s32 func_001FA280(s32, s32);
s32 func_001C9118(s32, s32);
s32 func_0028FD70();
s32 func_001FBE30(s32, s32);
s32 func_001FBEC0();
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

void func_001F9028(void* pgoal)
{
    *(int*)((char*)pgoal + 0x1B4) = 0;
}

void func_001F9030(char* self, s32 value) {
    char* p = *(char**)(self + 0x1B4);
    u32 n = *(u32*)(p + 0x1C);
    if (n < 3) {
        *(s32*)(p + (n << 2) + 0x20) = value;
        *(u32*)(p + 0x1C) = n + 1;
    }
}

s32 func_001F9060(char* self)
{
    s32* p = *(s32**)(self + 0x1B4);
    s32 value = -1;
    if (p != 0) {
        value = *p;
    }
    return value;
}

s32 func_001F9128(void* p) { return *(s32*)((char*)p + 0x1B4); }

void func_001F9398(s32 arg0, s32 arg1) {
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

void func_001F94D0(void) {
    func_001F9398(1, 0xFFFF);
}

void func_001F9550(char* p)
{
	*(int*)(p+0x0) = 0;
	*(int*)(p+0x50) = 0;
	*(int*)(p+0xC) = 0;
	*(int*)(p+0x8) = 0;
	*(int*)(p+0x4) = 0;
	*(char*)(p+0x10) = 0;
}

void func_001F95F0(char* self)
{
    *(int*)(self + 0x0) = 0;
    *(int*)(self + 0x50) = 0;
    *(int*)(self + 0xC) = 0;
    *(int*)(self + 0x8) = 0;
    *(int*)(self + 0x4) = 0;
    *(char*)(self + 0x10) = 0;
}

void func_001F9860(void) {

}

void func_001FA588(void) {
    func_001FA280(1, 0xFFFF);
}

s32 func_001FA5A8(s32 arg0, s32 arg1) {
    return (arg0 << 0x10) | (arg1 & 0xFFFF);
}

s32 func_001FA5B8(s32 arg0) {
    return arg0 >> 0x10;
}

s16 func_001FA5C0(s16 arg0) {
    return arg0;
}

void func_001FB3D8(s32 arg0) {
    func_0028FD70();
    func_001C9118(arg0, 0);
}

void func_001FBF08(s32 arg0) {
    if (func_001FBEC0() == 0) {
        func_001FBE30(arg0, 1);
    }
}

extern void func_002936C0(void* a0);

extern void func_002936E0(void* a0);

extern void* D_00467BE4;

extern void* D_00467BE8;

extern s32 D_0036AEB0;

extern void func_001F7700(void*, s32);

extern void func_001FBB08(s32, s32);

void func_001F8260(u8* a) { func_001F7700(a, 0); }

void func_001F9868() { func_002936C0(D_00467BE4); func_002936E0(D_00467BE8); D_0036AEB0 = 0; }

void func_001FB508(s32 p0) { func_001FBB08(p0, 0x2); }
