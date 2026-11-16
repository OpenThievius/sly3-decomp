// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0011E1F0(s32 *, s32);
extern s32 D_004799B8;
s32 func_00130A20(s32, s32);
s32 func_00169C40(s32);
s32 func_00130EC8(s32, s32);
s32 func_001C9118(s32, s32);
s32 func_0028FD70();
s32 func_00131410(s32, s32);
s32 func_00131770();
s32 func_00132C58(s32, s32);
s32 func_00238A38(s32);
s32 func_00133810(s32, s32);
s32 func_00130CD0(s32, s32, s32, void *);
s32 func_00169BF8(s32);
s32 func_00169CE0(s32);

void func_001306C8(s32 arg0) {
    func_0011E1F0(&D_004799B8, arg0);
}

void func_00130B58(void) {
    func_00130A20(1, 0xFFFF);
}

void func_00130BC0(char *self, s32 arg1)
{
    if (*(s32 *)(self + 0xD0) == 0) {
        *(s32 *)(self + 0xD0) = func_00130CD0(func_00169BF8(0x24), arg1, 0xD, self);
        func_00169CE0(*(s32 *)(self + 0xD0));
    }
}

void func_00130C20(s32 arg0) {
    func_00169C40(arg0 + 0xD0);
}

s32 func_00130C88(s32 arg0) {
    return arg0 + 0x114;
}

s32 func_00130C90(void* p)
{
    return ++*(s32*)((char*)p + 0x118);
}

s32 func_00130CA0(void* p)
{
	s32 v = *(s32*)((char*)p + 0x118) - 1;
	*(s32*)((char*)p + 0x118) = v;
	return v;
}

s32 func_00130CB0(char* self)
{
    s32* p = *(s32**)(self + 0xD0);
    if (p == 0) return 0;
    return *p;
}

void func_00131000(void) {
    func_00130EC8(1, 0xFFFF);
}

void func_00131020(s32 arg0) {
    func_0028FD70();
    func_001C9118(arg0, 0);
}

void func_00131548(void) {
    func_00131410(1, 0xFFFF);
}

void func_00132390(s32 arg0) {
    func_00131770();
    func_00132C58(arg0, 4);
    func_00238A38(arg0);
}

void func_00133A38(void) {
    func_00133810(1, 0xFFFF);
}
