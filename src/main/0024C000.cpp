// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0024D750(s32, s32);
s32 func_00238500(s32, s32);
s32 func_0023F400();
s32 func_001F3C80();
s32 func_00238568(s32);
s32 func_0023CC40();
s32 func_00150630(s32 *, s32);
extern s32 D_00475480;
s32 func_0013BD00(s32, void *);
s32 func_001C7DC8();
s32 func_00188A38(s32);
s32 func_0023EDC8();

s32 func_0024C668(char *self)
{
    if (*(s32 *)(self + 0xC0) == -1) return 0;
    return func_00150630(&D_00475480, *(s32 *)(self + 0xC0));
}

s32 func_0024C6A0(char *self)
{
    s32 a1 = *(s32 *)(self + 0xBC);
    if (a1 == -1) {
        return 0;
    }
    return func_00150630(&D_00475480, a1);
}

void func_0024D588(char *arg0) {
    s32 temp_a0;
    func_001C7DC8();
    temp_a0 = *(s32 *)(arg0 + 0xDC);
    if (temp_a0 != 0) {
        func_0013BD00(temp_a0, arg0);
    }
}

s32 func_0024D6B0(void* pgoal)
{
    s32* pobject = (s32*)pgoal;
    s32 value;
    if (*(s32*)((char*)pobject + 0xDC) == 0) {
        value = *(s32*)((char*)pobject + 0xE0);
    } else {
        value = func_00188A38(*(s32*)((char*)pobject + 0xDC));
    }
    return value;
}

void func_0024D888(void) {
    func_0024D750(1, 0xFFFF);
}

void func_0024D9A8(s32 arg0) {
    func_0023F400();
    func_00238500(arg0 + 0x29C, arg0);
}

void func_0024DB18(s32 arg0) {
    func_001F3C80();
    func_00238568(arg0 + 0x29C);
}

void func_0024DB48(void) {
    func_0023CC40();
}

void func_0024E180(char* self, s32 value)
{
    if (*(s32*)(self + 0x214) == value) return;
    *(s32*)(self + 0x214) = value;
    if (value) *(s32*)(self + 0x218) = 0;
}

s32 func_0024E2A8(char* self)
{
    s32 v = *(s32*)(self + 0x214);
    return v != 0 ? 0 : 7;
}

s32 func_0024E3F8(void) {
    return 1;
}

void func_0024F068(char* self, s32 value)
{
    s32 tmp_v0 = func_0023EDC8();
    char* p = *(char**)(self + 0x218);
    if (p != 0) {
        if (*(s32*)(p + 0x48) == value) {
            *(char**)(self + 0x218) = 0;
        }
    }
}
