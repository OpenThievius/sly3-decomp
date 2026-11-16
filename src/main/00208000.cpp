// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00208090(s32, s32);
s32 func_00209640(s32, s32);
s32 func_00209D58(s32, s32);
s32 func_001F3BF8();
s32 func_001F4670(s32, s32);
s32 func_001F3C80();
s32 func_0020ADE0(s32);
s32 func_0020AE68(s32, s32);
s32 func_0011E118(s32 *);
extern s32 D_00479CB0;
s32 func_0011E1F0(s32 *, s32);
extern s32 D_00479CC8;
s32 func_0013B500(void *, s32);
s32 func_001F43C8(s32);
s32 func_001F43D0(s32, s32);
s32 func_001F48F8();
s32 func_00208378(s32);
s32 func_001C7A00(s32, s32, s32);
s32 func_00209428(void *);
s32 func_0011B028(s32, void *);
s32 func_0020BDC0(void *);

void func_00208030(void *self, void *other)
{
    s32 temp_v0;

    func_001F48F8();
    if (func_0013B500(other, 0x69) != 0) {
        temp_v0 = func_001F43C8((s32)self);
        func_001F43D0((s32)self, temp_v0 + *(s32 *)((char *)other + 0x1AC));
    }
}

void func_002081C8(void) {
    func_00208090(1, 0xFFFF);
}

void func_002081E8(char* self) { *(int*)(self + 0xA4) = -1; *(int*)(self + 0x90) = -1; }

void func_00208A80(s32 arg0, s32 arg1) {
    func_00208378(arg1);
}

void func_002093E8(void *arg0)
{
    void *target = *(void **)((char *)arg0 + 0xA0);
    if (target != 0) {
        func_001C7A00((s32)target, 0, 0xF);
        func_00209428(arg0);
    }
}

void func_00209778(void) {
    func_00209640(1, 0xFFFF);
}

void func_00209E90(void) {
    func_00209D58(1, 0xFFFF);
}

void func_00209FA0(s32 arg0) {
    func_001F3BF8();
    func_001F4670(arg0, 1);
}

void func_0020A6A0(s32 arg0) {
    func_001F3C80();
    func_0020ADE0(arg0);
}

f32 func_0020AC38(f32 fparg0) {
    return fparg0;
}

void* func_0020ADF0(void* self,s32 value)
{
    s32 size=*(s32*)((char*)self+0x3C0);
    if (value+1<size) return (char*)self+0x3E0+value*28;
    return 0;
}

void func_0020AFA0(void) {
    func_0020AE68(1, 0xFFFF);
}

s32 func_0020B960(void* self)
{
    s32 v = *(s32*)((char*)self + 0x130);
    return v != 1;
}

void func_0020BB90(void) {
    func_0011E118(&D_00479CB0);
}

void func_0020BBB0(s32 arg0) {
    func_0011E1F0(&D_00479CB0, arg0);
}

void func_0020BBD8(void) {
    func_0011E118(&D_00479CC8);
}

void func_0020BBF8(s32 arg0) {
    func_0011E1F0(&D_00479CC8, arg0);
}

void func_0020BD70(char *self)
{
    func_0011B028(*(s32 *)(self + 4), self);
    func_0020BDC0(self);
}

void func_0020BDA8(void) {

}

void func_0020BDB0(s32 *arg0) {
    *arg0 += 1;
}

s32 func_0020BEC8(void) {
    return 1;
}
