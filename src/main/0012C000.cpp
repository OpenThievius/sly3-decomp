// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0012BED0(s32, s32);
s32 func_0012C4F8(s32, s32);
s32 func_0012C8E8(s32, s32);
extern s32 D_0036B158;
s32 func_0012CAD8(s32, s32);
s32 func_0012CE38(s32, s32);
s32 func_00118DA0(s32, s32, s32);
s32 func_00117B98(s32, s32, s32, s32);
extern s32 D_0036B238;
s32 func_0011E118(s32 *);
extern s32 D_004799D0;
s32 func_0011E1F0(s32 *, s32);
s32 func_001D2898(s32, s32, s32);
f32 func_00119260(s32);
s32 func_0028B1B0(s32, s32);
s32 func_0028F068(s32, s32, s32);
s32 func_0012F448();
s32 func_0028ECE0(s32, s32, void *);
s32 func_0028EDC8(s32, s32, void *);

void func_0012C0E8(void) {
    func_0012BED0(1, 0xFFFF);
}

void func_0012C630(void) {
    func_0012C4F8(1, 0xFFFF);
}

void func_0012CA20(void) {
    func_0012C8E8(1, 0xFFFF);
}

void func_0012CA40(void) {
    D_0036B158 = 1;
}

void func_0012CCF0(void) {
    func_0012CAD8(1, 0xFFFF);
}

void func_0012CF70(void) {
    func_0012CE38(1, 0xFFFF);
}

void func_0012D218(s32 arg0, s32 arg1) {
    func_00118DA0(arg1, 0xC, arg0 + 4);
}

void func_0012D2B0(s32 arg0, s32 arg1, s32 *arg2) {
    if (arg1 != 0) {
        func_001D2898(arg1, arg0 + 4, 12);
    }
    if (arg2 != 0) {
        arg2[2] = 0;
        arg2[1] = 0;
        arg2[0] = 0;
    }
}

void func_0012D300(s32 arg0, s32 arg1) {
    func_00117B98(arg1, arg0, 4, 0xC);
}

void func_0012D8E0(s32 unused, s32 a, s32 b)
{
    func_00117B98(a, b + 12, 4, 14);
}

void func_0012DEA8(void* self, s32 a, s32 b)
{
    func_00117B98(a, b + 0xC, 4, 0xF);
}

void func_0012E080(s32 arg0, s32 arg1) {
    func_00117B98(arg1, arg0, 4, 0xD);
}

void func_0012E7B8(void* self, s32 a1, s32 a2)
{
    func_00117B98(a1, a2 + 10, 4, 16);
}

void func_0012EED8(s32 unused, s32 a, s32 b)
{
    func_00117B98(a, b + 10, 4, 0x11);
}

void func_0012EF00(s32 arg0, s32 arg1) {
    func_00117B98(arg1, arg0, 4, D_0036B238);
}

void func_0012EFE0(void* self, s32 value)
{
    *(f32*)((char*)self + 4) = func_00119260(value);
}

void func_0012F240(void) {
    func_0011E118(&D_004799D0);
}

void func_0012F260(s32 arg0) {
    func_0011E1F0(&D_004799D0, arg0);
}

void func_0012F288(char *self)
{
    func_0028F068(*(s32 *)(self + 4), *(s32 *)(self + 8), *(s32 *)(self + 0x14));
    func_0028B1B0(*(s32 *)(self + 4), *(s32 *)(self + 8));
}

void func_0012F2C8(void) {

}

void func_0012F310(void) {

}

void func_0012F318(void) {

}

void func_0012F3D0(char *self)
{
    if (func_0012F448() == 0) {
        func_0028ECE0(*(s32 *)(self + 4), *(s32 *)(self + 8), self);
    }
}

void func_0012F410(void *pgoal)
{
    if (func_0012F448() != 0) {
        func_0028EDC8(*(s32 *)((char *)pgoal + 4), *(s32 *)((char *)pgoal + 8), pgoal);
    }
}

void func_0012F6B0(void* pobject)
{
    *(int*)((char*)pobject + 0x70) = 0;
}
