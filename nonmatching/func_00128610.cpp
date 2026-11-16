// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: the -1 stack sentinel uses a different temporary register from retail.
#include "common.h"
struct Stack_00128610 { s16 type; u8 pad[0x0E]; u8 local[0x10]; };
extern void func_001296F0(void*, void*);
extern void func_0012B3B0(void*, void*);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void* func_0012AF00(void*, void*);
void* func_00128610(void* a0, void* a1)
{
    Stack_00128610 stack;
    s32 sentinel = -1;
    stack.type = sentinel;
    void* descriptor = *(void**)((u8*)a1 + 0x04);
    void* source = *(void**)((u8*)descriptor + 0x0C);
    if (source)
    {
        func_001296F0(stack.local, source);
        func_0012B3B0(&stack, stack.local);
        func_0012BC20(stack.local);
    }
    else
    {
        func_0012BC20(&stack);
        func_0012BDD8(&stack, 0x22);
    }
    func_0012AF00(a0, &stack);
    func_0012BC20(&stack);
    return a0;
}
