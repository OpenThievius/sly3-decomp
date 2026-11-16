// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: indirect callback target register differs from retail.
#include "common.h"
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void* func_0012AF00(void*, void*);
void* func_0010C880(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* object = *(void**)((u8*)a1 + 0x0C);
    s32 offset = *(s16*)((u8*)object + 0x1B0);
    ((s32 (*)(void*))*((u32*)((u8*)object + 0x1B4)))((u8*)a1 + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
