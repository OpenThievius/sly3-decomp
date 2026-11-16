// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_001648B8(s32 a, s32 b);
s32 func_00289198(s32 *, s32, s32, s32 *);
extern s32 D_00468D30;
extern s32 D_00475480;
s32 func_00164760(s32, s32);
s32 func_00165200(s32, s32);
s32 func_001655F0(s32, s32);
u32 func_00165B48(s32 *, s32);
s32 func_00165570(void *);
s32 func_001679E0();

void func_00164170(s32 arg0) {
    func_00289198(&D_00475480, arg0, 0, &D_00468D30);
}

void func_001641A0(s32 *arg0) {
    *arg0 = 1;
}

void func_00164898(void) {
    func_00164760(1, 0xFFFF);
}

void func_001649F0()
{
    func_001648B8(1, 0xFFFF);
}

void func_00165338(void) {
    func_00165200(1, 0xFFFF);
}

void func_00165548(void *self, s32 index, f32 value)
{
    *(f32 *)((char *)self + (index << 2) + 0x18) = value;
    func_00165570(self);
}

void func_00165728(void) {
    func_001655F0(1, 0xFFFF);
}

s32 func_00165B28(char* p)
{
    s32* q = *(s32**)(p + 0x3EB8);
    if (q == 0) {
        return 0;
    }
    return *(s32*)(p + 0x3EBC);
}

u32 func_00165DC8(s32 arg0) {
    return func_00165B48(&D_00475480, arg0) >> 0x1F;
}

s32 func_001662A8(void* p)
{
    s32 v = 0;
    s32 x = *(s32*)((char*)p + 0xE8);
    if (x > 0)
        v = *(s32*)((char*)p + 0xEC);
    return v;
}

s32 func_00166540(void* self)
{
    return *(s32*)((char*)self + 0xE0);
}

void func_001667F8(void* self)
{
    *(int*)((char*)self + 0x2A0) = -1;
}

void func_00166DC8(char* self, char* other)
{
    if (other != *(char**)(self + 0x108)) {
        *(char**)(self + 0x108) = other;
        *(char**)(self + 0x10C) = *(char**)(other + 0xD0);
    }
}

s32 func_00167578(void* self, void* obj)
{
    return *(s32*)((char*)obj + 0x80) > 0;
}

void func_001679C8(char* self, f32 value)
{
    char* p = *(char**)(self + 0x300);
    *(f32*)(self + 0x11C) = value;
    if (p != 0) {
        *(f32*)(p + 0x14) = value;
    }
}

void func_00167A10(void* pgoal, f32 fp)
{
    func_001679E0();
    s32* pobj = *(s32**)((char*)pgoal + 0x300);
    if (pobj != 0) {
        *(f32*)((char*)pobj + 0x18) = fp;
    }
}
