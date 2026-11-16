// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: The wrapper body is close, but initialization and register scheduling still differ.
#include "common.h"
struct Temp_00111358 { u8 pad[0x10]; s32 value; u8 tail[0x0C]; };
struct Stack_00111358 { s16 type; u8 pad[0x0E]; Temp_00111358 local; };
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void func_00218FC8(void*, void*);
extern void* func_0012AF00(void*, void*);
void* func_00111358(void* a0, void* a1, s32, void* a3)
{
    Stack_00111358 stack;
    stack.local.value = 0x8010;
    stack.type = -1;
    func_0024B2B8(&stack.local, 1, a3, &stack.local.value, &stack.type);
    func_0012BC20(&stack.local);
    func_0012BDD8(&stack.local, 0x22);
    func_00218FC8(a1, &stack.type);
    func_0012AF00(a0, &stack.local);
    func_0012BC20(&stack.local);
    func_0012BC20(&stack.type);
    return a0;
}
