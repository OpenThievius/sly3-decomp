// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: the helper argument-address setup and indirect-call base register still differ.
#include "common.h"
struct Temp_0010C368 { u8 pad[0x10]; volatile s32 value; s32 result; };
struct Object_0010C368 { u8 pad[0x1B8]; s16 offset; u8 pad1[2]; s32 (*callback)(void*, s32); };
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void* func_0012AF00(void*, void*);
extern void func_0010C368_handler(void*, s32);
void* func_0010C368(void* a0, void* a1, s32, void* a3)
{
    Temp_0010C368 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, (void*)&local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    s32 result = local.result;
    Object_0010C368* object = *(Object_0010C368**)((u8*)a1 + 0x0C);
    s32 offset = object->offset;
    object->callback((u8*)a1 + offset, result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
