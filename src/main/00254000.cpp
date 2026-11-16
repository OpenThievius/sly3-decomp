// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00256720();
s32 func_00256788(s32);
s32 func_001C8BF0();
s32 func_00254FE0(s32);
s32 func_00238828(s32);
s32 func_0024E2B8();
s32 func_0024F6F8(s32, s32, s32);
s32 func_00256DF0();
s32 func_0016FE30(s32);
s32 func_0016FF08(s32);
s32 func_00170018(s32);
s32 func_001701B0(s32);
s32 func_00170328(s32);
s32 func_002543F8(void *);
s32 func_002544D8(void *);
s32 func_001A95D0(s32 *, s32);
extern s32 D_00475480;
s32 func_0013B500(s32, s32);
s32 func_00165B28(s32 *);
s32 func_001F4A80(s32);
s32 func_00254BB8(s32, s32);
s32 func_00238888(s32);
s32 func_0024E2A8(s32);

void func_002541F0(void* self, s32 value)
{
    *(s32*)((char*)self + 0x3B0) = value;
}

void func_00254268(void* p)
{
    func_0016FE30(*(s32*)((char*)p + 0x10D0));
}

void func_00254288(void* pgoal)
{
    func_0016FF08(*(s32*)((char*)pgoal + 0x10D0));
}

s32 func_002542A8(char* self)
{
    return func_00170018(*(s32*)(self + 0x10D0));
}

void func_002542C8(char* self)
{
    func_001701B0(*(s32*)(self + 0x10D0));
}

void func_002542E8(void *self)
{
    func_00170328(*(s32 *)((char *)self + 0x10D0));
    func_002543F8(self);
    func_002544D8(self);
}

void func_00254400(void* self, u32 value)
{
    s32 i = *(s32*)((char*)self + 0x3CC);
    if ((u32)i < 2) {
        *(u32*)((char*)self + (i << 2) + 0x3D0) = value;
        *(s32*)((char*)self + 0x3CC) = i + 1;
    }
}

s32 func_00254B80(char *self) {
    if (*(s32 *)(self + 0x1134) != 0) return 1;
    return func_001A95D0(&D_00475480, -1);
}

void func_00256318(char *arg0)
{
    s32 temp_a0;

    temp_a0 = func_0013B500(*(s32 *)(arg0 + 0xC), 0x31);
    if (temp_a0 != 0) {
        func_001F4A80(*(s32 *)(arg0 + 0xC));
    } else {
        func_00165B28(&D_00475480);
    }
}

void func_00256758(s32 arg0) {
    func_00256720();
    func_00256788(arg0);
}

void func_00256818(void* p)
{
    *(int*)((char*)p + 0x1054) = 0;
    *(int*)((char*)p + 0x1078) = 0;
    *(int*)((char*)p + 0x11D0) = 0;
}

void func_00256AA0(s32 arg0) {
    func_001C8BF0();
    func_00254FE0(arg0 + 0xB0);
}

void func_00256BD0(void* self, s32 a1, s32 a2, s32 a3)
{
    *(s32*)((char*)self + 0x6C) = a1;
    *(s32*)((char*)self + 0x70) = a2;
    *(s32*)((char*)self + 0x74) = a3;
}

void func_00256BE0(char* self, s32 a1, s32 a2)
{
    func_00254BB8((s32)(self + 0xB0), *(s32*)(self + 0xA8));
    *(s32*)(self + 0xB4) = a1;
    *(s32*)(self + 0xBC) = a2;
}

s32 func_00256CB0(s32 arg0)
{
    s32 temp_v1;

    temp_v1 = func_00238888(arg0 + 0x29C);
    if ((temp_v1 & 0x1000) == 0) {
        return temp_v1;
    }
    return func_0024E2A8(arg0);
}

void func_00257548(s32 arg0) {
    func_0024E2B8();
    func_00238828(arg0 + 0x29C);
}

s32 func_00257578(void* p)
{
    return *(s32*)((char*)p + 0x4C0) == 0;
}

f32 func_002575C0(char* self)
{
    f32 r = 1.0f;
    char* p = *(char**)(self + 0x11D4);
    if (p != 0) {
        char* q = *(char**)(p + 0x90);
        if (q != 0) {
            if (*(int*)(q + 0x0) == 1) {
                r = *(f32*)(q + 0x20);
            }
        }
    }
    return r;
}

void func_00257678(s32 arg0, s32 arg1, s32 arg2) {
    func_00256DF0();
    func_0024F6F8(arg0, arg1, arg2);
}

void func_00257798(void* self)
{
    *(int*)((char*)self + 0x11E8) = 0;
}

void func_00257EC0(void* self, s32 value)
{
    *(s32*)((char*)self + 0x16EC) = value;
}

s32 func_00257EF8(char* self)
{
    s32 result = 0;
    s32 v = *(s32*)(self + 0x2F0);
    if (v == 2) {
        result = *(s32*)(self + 0x1764) != 0;
    }
    return result;
}

void func_00257F18(void* self, s32 value) { *((s32*)((char*)self + 0x1768)) = value; }

s32 func_00257F20(void* self)
{
    return *(s32*)((char*)self + 0x1768);
}

s32 func_00257F28(char* self)
{
    s32 kind = *(s32*)(self + 0x112C);
    s32 r = 0;
    if (kind == 12 || kind == 15) {
        r = 1;
    }
    return r;
}
