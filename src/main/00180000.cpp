// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0017FFD0(s32, s32);
s32 func_00180460(s32, s32);
s32 func_00238978();
s32 func_00180630(s32, s32);
s32 func_00181DD8(s32, s32);
s32 func_001826B0(s32, s32);
s32 func_00182A88(s32, s32);
s32 func_00183C10(s32, s32);
s32 func_00238970();
s32 func_00252E40(s32, s32);
s32 func_00238980();
s32 func_00252FC0(s32, s32);
s32 func_001825C0(void *, s32, s32);

void func_00180108(void) {
    func_0017FFD0(1, 0xFFFF);
}

void func_00180128(char* pgoal)
{
    s32 temp_a0;

    func_00238970();
    temp_a0 = *(s32*)(pgoal + 0x10);
    *(s32*)(pgoal + 0x50) = -1;
    func_00252E40(temp_a0, 0x38);
}

void func_00180160(void* pgoal)
{
    func_00238980();
    func_00252FC0(*(s32*)((char*)pgoal + 0x10), 0x38);
}

void func_00180190(s32 arg0) {
    func_00238978();
    func_00180460(arg0, 0);
}

void func_00180768(void) {
    func_00180630(1, 0xFFFF);
}

void func_00181F10(void) {
    func_00181DD8(1, 0xFFFF);
}

void func_00182028(void *pgoal)
{
    func_00238980();
    func_001825C0(pgoal, -1, 0);
    func_00252FC0(*(s32 *)((char *)pgoal + 0x10), 0x2D);
}

void func_001827E8(void) {
    func_001826B0(1, 0xFFFF);
}

void func_00182BC0(void) {
    func_00182A88(1, 0xFFFF);
}

void func_00183D60(void) {
    func_00183C10(1, 0xFFFF);
}
