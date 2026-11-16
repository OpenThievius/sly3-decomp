// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: The quadword argument and call sequence match; two argument moves around the nested call still use the opposite order.
#include "common.h"
typedef unsigned int Quad_0010D5D8 __attribute__((mode(TI)));
struct Temp_0010D5D8 { u8 pad[0x10]; s32 value; u8 tail[0x0C]; };
struct Stack_0010D5D8 { Quad_0010D5D8 result; Temp_0010D5D8 local; };
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern s32 func_0022F2E0(void*, Quad_0010D5D8);
extern void func_0012B768(void*, s32);
extern void* func_0012AF00(void*, void*);
extern void func_0012BC20(void*);
void* func_0010D5D8(void* a0, void* a1, s32, void* a3)
{
    Stack_0010D5D8 stack;
    stack.local.value = 2;
    func_0024B2B8(&stack.local, 1, a3, &stack.local.value, &stack.result);
    func_0012B768(&stack.local, func_0022F2E0(a1, stack.result));
    func_0012AF00(a0, &stack.local);
    func_0012BC20(&stack.local);
    return a0;
}
