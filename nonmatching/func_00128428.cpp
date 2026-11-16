// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: The frame and calls match; initializer and local stack store scheduling still differ.
#include "common.h"
struct Temp_00128428 { u8 bytes[0x10]; };
struct Stack_00128428 { s16 type; u8 pad2[0x0E]; Temp_00128428 local; };
extern void func_001296F0(void*, void*);
extern void func_0012B3B0(void*, void*);
extern void func_0012BC20(void*);
extern void* func_00129A90(void*, void*, s32, void*);
extern void* func_0012AF00(void*, void*);
void* func_00128428(void* output, void* input, void* source, s32)
{
    Stack_00128428 stack;
    void* descriptor = *(void**)((u8*)input + 4);
    void* object = *(void**)((u8*)descriptor + 0x0C);
    stack.type = -1;
    func_001296F0(&stack.local, *(void**)((u8*)object + 0x0C));
    func_0012B3B0(&stack, &stack.local);
    func_0012BC20(&stack.local);
    func_00129A90(&stack.local, source, *(s32*)((u8*)object + 4), &stack.type);
    func_0012B3B0(&stack, &stack.local);
    func_0012BC20(&stack.local);
    func_0012AF00(output, &stack);
    func_0012BC20(&stack);
    return output;
}
