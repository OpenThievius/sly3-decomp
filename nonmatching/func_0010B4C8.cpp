// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: helper setup and register allocation for the decoded value differ from retail.
#include "common.h"

struct Temp_0010B4C8
{
    u8 pad0[0x10];
    s32 value;
    s32 result;
    u8 pad18[0x20 - 0x18];
};

void* func_0010B4C8(void* a0, void* a1, s32, void* a3)
{
    Temp_0010B4C8 local;
    local.value = 5;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    void* object = *(void**)((u8*)a1 + 0x20);
    u32 result = local.result;
    void* state = *(void**)((u8*)object + 0x134);
    u32 mask = *(u32*)((u8*)state + 0x18);
    func_0012B2F0(&local, (mask & result) != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
