// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0029C9B0(s64, s64);
s32 func_002B33B8(s32);
s32 func_002B34A0(s32);

s32 func_002A86E0(void* p)
{
	s64 a = *(s64*)((char*)p + 8);
	return func_0029C9B0(a, a) ? 0 : 0;
}

s32 func_002A9F58(void) {
    return 1;
}

s32 func_002AA038(void* p)
{
    s32* q = *(s32**)((char*)p + 0x40);
    return *q;
}

s32 func_002AA1D0(char *arg0)
{
    char *child = *(char **)(arg0 + 0x40);
    if (*(s32 *)(child + 0x1C8) != 0) {
        *(s32 *)(*(char **)(child + 0x1C8) + 0x28) = 0;
    }
    if (*(s32 *)(child + 0x1D8) != 0) {
        *(s32 *)(*(char **)(child + 0x1D8) + 0x28) = 0;
    }
    if (*(s32 *)(child + 0x1E8) != 0) {
        *(s32 *)(*(char **)(child + 0x1E8) + 0x28) = 0;
    }
    if (*(s32 *)(child + 0x1CC) != 0) {
        *(s32 *)(*(char **)(child + 0x1CC) + 0x28) = 0;
    }
    if (*(s32 *)(child + 0x1DC) != 0) {
        *(s32 *)(*(char **)(child + 0x1DC) + 0x28) = 0;
    }
    if (*(s32 *)(child + 0x1EC) != 0) {
        *(s32 *)(*(char **)(child + 0x1EC) + 0x28) = 0;
    }
    return 1;
}

void func_002AA320(void* self, s32 a, s32 b)
{
    *(s32*)((char*)self + 0x0) = a;
    *(s32*)((char*)self + 0x4) = b;
    *(s32*)((char*)self + 0x8) = a;
    *(s32*)((char*)self + 0xC) = a;
}

void func_002AA338(char* self)
{
    *(s32*)(self+0xC) = *(s32*)(self+0x8);
}

void func_002AA348(void* pobject)
{
    s32 v = *(s32*)((char*)pobject + 0xC);
    *(s32*)((char*)pobject + 0x8) = v;
}

s32 func_002AA3C8(char* self)
{
    func_002B33B8(*(s32*)(self + 0x40) + 0x68);
    return 1;
}

s32 func_002AA3F0(void* pgoal)
{
    s32 temp_a0;

    temp_a0 = *(s32*)((char*)pgoal + 0x40);
    func_002B34A0(temp_a0 + 0x68);
    return 1;
}
