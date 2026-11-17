// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00188928(s32);
s32 func_00188A20();
s32 func_00189240(s32 *, s32, s32, s32, s32);
extern s32 D_0036C6E8;
s32 func_0011AF38(s32, s32);
s32 func_0011AF40(s32);
s32 func_001C6EA8(s32 *);
extern s32 D_00370AF0;
s32 func_0018AE50(s32, s32);
s32 func_0018B500(s32, s32);
s32 func_0018B828(s32);
s32 func_0018BEE8(s32);
s32 func_002389A0();
extern f32 D_0036BB98;
extern s32 D_0036DB9C;
extern s32 D_0036DBA0;
s32 func_001B67C0(void *, s32, s32, s32);
extern s32 D_0036DB98;

s32 func_001880F0(void* self)
{
    if (*(s32*)((char*)self + 0x40) != 0) return 0;
    return *(s32*)((char*)self + 0xFC) != 3;
}

void func_00188620(s32 arg0) {
    if (func_00188A20() != 0) {
        func_00188928(arg0);
    }
}

void func_00189078(s32 arg0, s32 arg1, s32 arg2) {
    func_00189240(&D_0036C6E8, arg0, 0, arg1, arg2);
}

void func_001890B0(s32 arg0, s32 arg1, s32 arg2) {
    func_00189240(&D_0036C6E8, arg0, 1, arg1, arg2);
}

s32 func_001890E8(s32 arg0) {
    func_0011AF38(arg0 + 8, 0x14);
    return arg0;
}

void func_00189140(s32 arg0) {
    func_0011AF40(arg0 + 8);
}

void func_00189160(s32* p, s32 v)
{
    if (*p != v) {
        *p = v;
        *(f32*)(p + 1) = D_0036BB98;
    }
}

void func_00189E60(void* self, s32 a1, s32 a2)
{
    *(s32*)((char*)self + 0xB0) = a1;
    *(s32*)((char*)self + 0xB4) = a2;
}

void func_0018AA48(void *self, void *other)
{
    if (other != 0) {
        D_0036DB98 = *(s32 *)((char *)other + 0x18);
    } else {
        D_0036DB98 = -1;
    }
    if (other != *(void **)((char *)self + 0x4044)) {
        func_001B67C0(self, 0, 0, 0);
    }
    *(void **)((char *)self + 0x4044) = other;
}

void func_0018AAB8(char* self, char* pxf)
{
    if (pxf != 0) {
        D_0036DB9C = *(s32*)(pxf + 0x18);
    } else {
        D_0036DB9C = -1;
    }
    *(char**)(self + 0x4048) = pxf;
}

void func_0018AAE0(char* self, char* node)
{
    if (node != 0) {
        D_0036DBA0 = *(s32*)(node + 0x18);
    } else {
        D_0036DBA0 = -1;
    }
    *(char**)(self + 0x404C) = node;
}

void func_0018AD90(void) {
    func_001C6EA8(&D_00370AF0);
}

void func_0018AF90(void) {
    func_0018AE50(1, 0xFFFF);
}

void func_0018B638(void) {
    func_0018B500(1, 0xFFFF);
}

void func_0018B7F0(s32 arg0) {
    func_002389A0();
    func_0018B828(arg0);
    func_0018BEE8(arg0);
}
