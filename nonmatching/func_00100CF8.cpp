// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: callback context setup and local cleanup scheduling differ from retail.
#include "common.h"
typedef unsigned int Quad_00100CF8 __attribute__((mode(TI)));
struct Temp_00100CF8 { u8 pad[0x10]; s32 value; u8 tail[0x0C]; };
struct Stack_00100CF8 { Quad_00100CF8 result; Temp_00100CF8 local; };
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void func_0012B2F0(void*, s32);
extern void* func_0012AF00(void*, void*);
void* func_00100CF8(void* a0, void* a1, s32, void* a3)
{
    Stack_00100CF8 stack;
    stack.local.value = 2;
    func_0024B2B8(&stack.local, 1, a3, &stack.local.value, &stack.result);
    void* object = *(void**)((u8*)a1 + 0x0C);
    s32 offset = *(s16*)((u8*)object + 0x268);
    s32 (*callback)(void*, Quad_00100CF8) = (s32 (*)(void*, Quad_00100CF8))*(u32*)((u8*)object + 0x26C);
    s32 result = callback((u8*)a1 + offset, stack.result);
    void* local = &stack.local;
    func_0012B2F0(local, result != 0);
    func_0012AF00(a0, &stack.local);
    func_0012BC20(&stack.local);
    return a0;
}
