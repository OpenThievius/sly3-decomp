// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00159A88(s32, s32);
s32 func_0015ABC0(s32, s32);
s32 func_0015BCA0(s32, s32);
s32 func_00158CE8(void *, s32);
s32 func_00238980();
s32 func_001591E8(void *, s32);
s32 func_001599E0(void *, s32);

void func_00158910(char *self) {
    func_00238980();
    func_00158CE8(self, -1);
    *(s32 *)(*(char **)(self + 0x10) + 0x11B8) &= -2;
}

void func_00158E10(void *pgoal)
{
    func_00238980();
    func_001591E8(pgoal, -1);
    char *pobject = *(char **)((char *)pgoal + 0x10);
    *(s32 *)(pobject + 0x11B8) &= -2;
}

void func_00159310(char *arg0)
{
    func_00238980();
    func_001599E0(arg0, -1);
    char *target = *(char **)(arg0 + 0x10);
    *(s32 *)(target + 0x11B8) &= -2;
}

void func_00159DD0(void) {
    func_00159A88(1, 0xFFFF);
}

s32 func_0015A5D8(char* self)
{
    s32 v = *(s32*)(self + 0x130);
    if (v < 4) {
        if (v >= 2) {
            return 0;
        }
    }
    return 1;
}

void func_0015ACF8(void) {
    func_0015ABC0(1, 0xFFFF);
}

void func_0015AF48(void* self)
{
    *(int*)((char*)self + 0x3DF4) = 0;
    *(int*)((char*)self + 0x3E04) = 0;
    *(int*)((char*)self + 0x3E08) = 0;
}

void func_0015B780(char* self)
{
    *(int*)(self + 0x3E5C) = 0;
    *(int*)(self + 0x3E60) = 0;
    *(int*)(self + 0x3E64) = 0;
}

void func_0015BDD8(void) {
    func_0015BCA0(1, 0xFFFF);
}
