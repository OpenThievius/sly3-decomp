// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0011E118(s32 *);
extern s32 D_00479DB4;
s32 func_0011E1F0(s32 *, s32);
s32 func_0025DEF8(s32 *, s32);
extern s32 D_00475480;
s32 func_00150690(s32, s32, s32, s32);
s32 func_0017E1B8(s32 *, s32, s32, s32);
s32 func_001D27F0(s32);
s32 func_00241AA0();
s32 func_00256278(s32, s32);
s32 func_00242830(s32, s32);

s32 func_00240970(void* p)
{
    s32 v = *(s32*)((unsigned char*)p + 0x10) + 1;
    *(s32*)((unsigned char*)p + 0x10) = v;
    return v;
}

void func_002409E0(void) {
    func_0011E118(&D_00479DB4);
}

void func_00240A00(s32 arg0) {
    func_0011E1F0(&D_00479DB4, arg0);
}

s32 func_00240DA0(void* p1, void* p2)
{
    s32 v0 = *(s32*)((char*)p2 + 0x50);
    return v0 != 0;
}

void func_00240DB0(s32 arg0) {
    func_0025DEF8(&D_00475480, arg0);
}

s32 func_00240DD8(s32 flags)
{
    s32 count = 0;
    s32 bit = 1;
    while (count < 26 && (flags & bit) == 0) {
        count++;
        bit <<= 1;
    }
    return count;
}

void func_00241248(s8* self, s8 value) { self[0x124] = value; }

u8 func_00241250(void* self)
{
    return *(u8*)((u8*)self + 0x124);
}

void func_00241258(s8* self, s8 value)
{
    *(s8*)(self + 0x125) = value;
}

u8 func_00241260(void* self) { return *(u8*)((char*)self + 0x125); }

void func_00241268(s32 arg0) {
    if (func_0017E1B8(&D_00475480, 2, 0x1A6, arg0) == 0) {
        func_00150690(0x11, arg0, 0x1A6, -1);
    }
}

s32 func_002412C0(void* p)
{
    return *(s32*)((char*)p + 0xD8);
}

s32 func_002415E0(void* self)
{
    u64 flags = *(u64*)((char*)self + 0x120);
    return (s32)(flags >> 0x3D) & 1;
}

void func_00241A98(void* a0)
{
    *(int*)((char*)a0 + 0xA4) = 0;
}

void func_00241AD8(s32 arg0) {
    if (func_00241AA0() == 0) {
        func_00256278(func_001D27F0(0xAC), arg0);
    }
}

void func_002429A8(void) {
    func_00242830(1, 0xFFFF);
}
