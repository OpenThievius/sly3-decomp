// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00219448();
s32 func_002194B0(s32);
s32 func_001FCAC8();
s32 func_0021A418(s32);
s32 func_001C7340();
s32 func_00213988();
s32 func_002621F0();
s32 func_00262B60(s32, s32, s32);
s32 func_0021BD48(s32, s32);
s32 func_0021BEA0(s32, s32);

void func_00219460(s32 arg0) {
    func_00219448();
    func_002194B0(arg0);
}

void func_00219490(char* self) {
    *(int*)(self + 0x460) = -1;
    *(float*)(self + 0x464) = -1.0f;
    *(int*)(self + 0x45c) = -1;
}

void func_00219738(s32 arg0) {
    func_001FCAC8();
    func_0021A418(arg0);
}

s32 func_0021A710(void* p)
{
    return *(s32*)((char*)p + 0x5C) != 0;
}

void func_0021A8F0(void* self)
{
    func_001C7340();
    func_00213988();
    *(float*)((char*)self + 0x5C) = 1.0f;
}

void func_0021AA00(char *self, s32 value)
{
    s32 count = *(s32 *)(self + 0x40);
    if (count < 0x100) {
        *(s32 *)( (count * 12 + *(s32 *)(self + 0x44)) + 0x0) = value;
        *(s32 *)(self + 0x40) = count + 1;
    }
}

void func_0021BBF0(s32 arg0) {
    func_002621F0();
    func_00262B60(arg0, -1, arg0 + 0x144);
}

void func_0021BE80(void) {
    func_0021BD48(1, 0xFFFF);
}

void func_0021BFD8(void) {
    func_0021BEA0(1, 0xFFFF);
}
