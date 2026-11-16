// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: Only the order of the sentinel initializer and saved output pointer differs.
// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
struct Stack_00126E88 { s16 type; u8 pad[0x0E]; u8 local[0x10]; };
extern void func_001269D8(void*, s32, void*, void*, void*);
extern void func_0012B3B0(void*, void*);
extern void func_0012BC20(void*);
extern void* func_0012AF00(void*, void*);
void* func_00126E88(void* a0, void* a1, void* a2, void* a3)
{
    void* output = a0;
    Stack_00126E88 stack;
    stack.type = -1;
    func_001269D8(stack.local, 0x84, a1, a2, a3);
    func_0012B3B0(&stack, stack.local);
    func_0012BC20(stack.local);
    func_0012AF00(output, &stack);
    func_0012BC20(&stack);
    return output;
}
