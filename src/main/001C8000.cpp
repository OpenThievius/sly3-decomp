// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0025D708(s32 *, s32);
extern s32 D_00475480;
s32 func_0025D5E8(s32 *, s32);
s32 func_0011E118(s32 *);
extern s32 D_00479DF0;
s32 func_0011E1F0(s32 *, s32);
s32 func_001C9A98(s32, s32);
s32 func_001CB080(s32, s32);
s32 func_001CB758(s32, s32);
s32 func_001CAB30();
extern f32 D_0036BB98;

void func_001C8238(void) {

}

void func_001C8240(void) {

}

void func_001C8580(void) {

}

void func_001C8588(void) {

}

void func_001C85A0(void) {

}

void func_001C85B8(void) {

}

void func_001C85C0(s32 arg0) {
    func_0025D708(&D_00475480, arg0);
}

void func_001C85E8(s32 arg0) {
    func_0025D5E8(&D_00475480, arg0);
}

void func_001C9288(s8* self, s8 value)
{
    *(s8*)(self + 0x2C) = value;
}

s32 func_001C9330(void* p)
{
    u64 v = *(u64*)((char*)p + 0x28);
    return (s32)(v >> 54) & 1;
}

s32 func_001C9410(void) {
    return 0;
}

void func_001C9418(void) {

}

void func_001C9420(void) {

}

s32 func_001C99E0(void* p)
{
    s32 v = *(s32*)((char*)p + 0x10) + 1;
    *(s32*)((char*)p + 0x10) = v;
    return v;
}

void func_001C9A50(void) {
    func_0011E118(&D_00479DF0);
}

void func_001C9A70(s32 arg0) {
    func_0011E1F0(&D_00479DF0, arg0);
}

void func_001C9BD0(void) {
    func_001C9A98(1, 0xFFFF);
}

void func_001CA030(char* self, s32 value)
{
    s32 old = *(s32*)(self + 0x1C8);
    if (old != value) {
        *(s32*)(self + 0x1C8) = value;
        f32* p = (f32*)(self + 0x1D4);
        if (value != 0) {
            *p = D_0036BB98;
        } else {
            *p = 3.402823466e+38f;
        }
        func_001CAB30();
    }
}

void func_001CB1B8(void) {
    func_001CB080(1, 0xFFFF);
}

void func_001CB890(void) {
    func_001CB758(1, 0xFFFF);
}
