// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00276CA0(s32, s32);
s32 func_00169E40();
s32 func_001F3D10(s32, void *);
s32 func_0023E110();

s32 func_00274010(char* self, char** out)
{
    if (*(s32*)(self + 0x108) == 0) {
        return 0;
    }
    *out = (char*)(self + 0x108);
    return 1;
}

void func_00274660(void* self)
{
    *(int*)((char*)self + 0x114) = 0;
}

s32 func_00274678(void* p)
{
    return *(s32*)((unsigned char*)p + 0x114);
}

f32 func_002746A0(void* p)
{
    char* s = *(char**)((char*)p + 0x114);
    return *(f32*)(s + 0x70);
}

void func_00274798(char *arg0) {
    s32 temp_a0;

    func_00169E40();
    temp_a0 = *(s32 *)(arg0 + 0x28);
    func_001F3D10(temp_a0, arg0 + 0x30);
    *(s32 *)(arg0 + 0x20) = 0;
}

void func_00276DD8(void) {
    func_00276CA0(1, 0xFFFF);
}

void func_00277358(s32 arg0, void* arg1)
{
    func_0023E110();
    *(float*)((char*)arg1 + 0x98) = 0.25f;
}

s32 func_00277680(void* p)
{
    return *(s32*)((char*)p + 0x13C) == 10;
}

void func_00277F18(void* self, s32 value)
{
    *(s32*)((char*)self + 0x158) = value;
}
