// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001F9398(s32, s32);
s32 func_001FA280(s32, s32);
s32 func_001C9118(s32, s32);
s32 func_0028FD70();
s32 func_001FBE30(s32, s32);
s32 func_001FBEC0();

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
