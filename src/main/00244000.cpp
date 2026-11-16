// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00244A10(s32, s32);
s32 func_00245A30(s32, s32);
s32 func_00245FA0(s32);
s32 *func_00246E98(s32 *, s32);
extern s32 D_00474FF0;
s32 func_00291058(s32);
s32 func_00291088(s32);

void func_00244B48(void) {
    func_00244A10(1, 0xFFFF);
}

void func_00245130(void* self, f32 value) { *((f32*)((char*)self + 0x38)) = value; }

void func_002459F8(s32 arg0) {
    func_00245A30(func_00245FA0(0x70), arg0);
}

s32 func_00245A88(char *arg0)
{
    s32 *temp_v0;

    temp_v0 = func_00246E98(&D_00474FF0, *(s32 *)(arg0 + 0x60));
    s32 v1;
    if (temp_v0 != 0) {
        v1 = *temp_v0;
    } else {
        v1 = -1;
    }
    return v1;
}

void func_00245DA0(void* p)
{
    func_00291058(*(s32*)((char*)p + 0x44));
}

void func_00245DC0(void* pobject)
{
    func_00291088(*(s32*)((char*)pobject + 0x44));
}

void func_00245F58(char* self)
{
    *(u16*)(self + 0x58) = *(u16*)(self + 0x58) + 1;
}
