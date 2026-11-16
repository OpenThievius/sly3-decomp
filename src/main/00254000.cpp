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

void func_00256758(s32 arg0) {
    func_00256720();
    func_00256788(arg0);
}

void func_00256AA0(s32 arg0) {
    func_001C8BF0();
    func_00254FE0(arg0 + 0xB0);
}

void func_00257548(s32 arg0) {
    func_0024E2B8();
    func_00238828(arg0 + 0x29C);
}

void func_00257678(s32 arg0, s32 arg1, s32 arg2) {
    func_00256DF0();
    func_0024F6F8(arg0, arg1, arg2);
}
