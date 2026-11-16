// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: The frame and calls match; the stack sentinel and local value stores are scheduled in a different order.
#include "common.h"
struct Temp_0010EDC8 { u8 pad[0x10]; s32 value; u8 tail[0x0C]; };
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void func_002136D8(void*, void*);
extern void* func_0012AF00(void*, void*);
void* func_0010EDC8(void* a0, void* a1, s32, void* a3)
{
    Temp_0010EDC8 local;
    s16 type;
    local.value = 0x8006;
    type = -1;
    func_0024B2B8(&local, 1, a3, &local.value, &type);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_002136D8(a1, &type);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    func_0012BC20(&type);
    return a0;
}
