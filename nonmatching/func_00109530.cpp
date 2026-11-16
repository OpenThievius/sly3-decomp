// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: the initializer store and helper argument setup are emitted in a different order than retail.
#include "common.h"

struct Temp_00109530
{
    u8 pad0[0x10];
    s32 value;
    s32 result;
    u8 pad18[0x20 - 0x18];
};

void* func_00109530(void* a0, void* a1, s32, void* a3)
{
    Temp_00109530 local;
    *(volatile s32*)&local.value = 0x1050;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    void* object = *(void**)((u8*)a1 + 0x0C);
    s32 offset = *(s16*)((u8*)object + 0x318);
    object = *(void**)((u8*)object + 0x31C);
    ((void (*)(void*, s32))object)((u8*)a1 + offset, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
