// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: the compiler schedules the -1 initializer before saving a0 in the register retail uses.
#include "common.h"
struct Stack_00126E08 { s16 type; u8 pad[0x0E]; u8 local[0x10]; };
extern void func_001269D8(void*, s32, void*, void*, void*);
extern void func_0012B3B0(void*, void*);
extern void func_0012BC20(void*);
extern void* func_0012AF00(void*, void*);
void* func_00126E08(void* a0, void* a1, void* a2, void* a3)
{
    Stack_00126E08 stack;
    stack.type = -1;
    func_001269D8(stack.local, 0x83, a1, a2, a3);
    func_0012B3B0(&stack, stack.local);
    func_0012BC20(stack.local);
    func_0012AF00(a0, &stack);
    func_0012BC20(&stack);
    return a0;
}
