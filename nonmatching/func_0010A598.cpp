// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: helper setup and callback result handling still differ from retail.
#include "common.h"

struct Temp_0010A598
{
    u8 pad0[0x10];
    s32 value;
    s32 result;
    u8 pad18[0x20 - 0x18];
};

void* func_0010A598(void* a0, void* a1, s32, void* a3)
{
    Temp_0010A598 local;
    local.value = 0x1011;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    void* object = *(void**)((u8*)a1 + 0x0C);
    s32 offset = *(s16*)((u8*)object + 0x280);
    s32 (*callback)(void*) = *(s32 (**)(void*))((u8*)object + 0x284);
    func_0012B2F0(&local, callback((u8*)a1 + offset) != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
