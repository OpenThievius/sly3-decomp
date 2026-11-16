// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: indirect callback target register differs from retail.
#include "common.h"
struct Callback_0010C800 { u8 pad[0x1C0]; s16 offset; u8 pad1[2]; s32 (*callback)(void*); };
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void* func_0012AF00(void*, void*);
void* func_0010C800(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    Callback_0010C800* object = *(Callback_0010C800**)((u8*)a1 + 0x0C);
    object->callback((u8*)a1 + object->offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
