// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: The only remaining differences are the order of the constant load and the fourth argument copy in the prologue.
#include "common.h"
struct Temp_0010C6F0 { u8 pad[0x10]; s32 value; s32 result; };
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void func_00277208(void*, s32, s32);
extern void* func_0012AF00(void*, void*);
void* func_0010C6F0(void* a0, void* a1, s32, void* a3)
{
    s32 value = 0x202F;
    Temp_0010C6F0 local;
    local.value = value;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00277208(a1, local.result, 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
