// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_002491A0(s32, s32);
s32 func_0011AF60(s32 *, s32);
extern s32 D_00479AFC;
s32 func_0011B028(s32 *, s32);
s32 func_0015CE68(s32);
s32 func_001C81B8();
s32 func_002496D0(s32, s32);
s32 func_00249828(s32, s32);
s32 func_00249BA0(s32, s32);
s32 func_0024B420(s32, s32);
s32 func_0024B940(s32, s32);
s32 func_00290F00(s32);
s32 func_002BA9A8();
s32 func_002BAA50(void *, s32);
s32 func_002BE530(s32);

void func_00248598(void* self, s32 a, s32 b)
{
    if (b != 0) {
        *(s32*)((char*)self + 0x68) |= a;
    } else {
        *(s32*)((char*)self + 0x68) &= ~a;
    }
}

s32 func_002485C0(void* p)
{
    return *(s32*)((char*)p + 0x68) == 3;
}

void func_002489E0(char* self, s32 value)
{
    if (*(s32*)(self + 0x104) != value) {
        *(s32*)(self + 0x104) = value;
        func_00290F00(value);
    }
}

s32 func_00248EC0(void* p)
{
    return ++*(s32*)((char*)p + 0x5C);
}

s32 func_00248ED0(void* p)
{
    s32 v = *(s32*)((char*)p + 0x5C) - 1;
    *(s32*)((char*)p + 0x5C) = v;
    return v;
}

s32 func_00248EE0(void* self)
{
    return ++*(s32*)((char*)self + 0x60);
}

s32 func_00248EF0(void* p)
{
    s32 v = *(s32*)((char*)p + 0x60) - 1;
    *(s32*)((char*)p + 0x60) = v;
    return v;
}

void func_002492F8(void) {
    func_002491A0(1, 0xFFFF);
}

void func_00249318(void) {
    func_002491A0(0, 0xFFFF);
}

void func_00249468(s32 arg0) {
    func_0011AF60(&D_00479AFC, arg0);
}

void func_00249490(s32 arg0) {
    func_0011B028(&D_00479AFC, arg0);
}

void func_00249558(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xF8);
}

s32 func_002496C8(char* self)
{
    return *(s32*)(self + 0x120);
}

void func_00249808(void) {
    func_002496D0(1, 0xFFFF);
}

void func_00249960(void) {
    func_00249828(1, 0xFFFF);
}

void func_00249980(char *self)
{
    *(s32 *)(self + 0x3F44) = 1;
    func_002BAA50(self, func_002BA9A8());
    func_002BE530(*(s32 *)self);
}

void func_002499C0(void* self)
{
    *(float*)((char*)self + 0x3F44) = 0.0f;
}

void func_00249CD8(void) {
    func_00249BA0(1, 0xFFFF);
}

void func_0024B558(void) {
    func_0024B420(1, 0xFFFF);
}

void func_0024BC50(void) {
    func_0024B940(1, 0xFFFF);
}
