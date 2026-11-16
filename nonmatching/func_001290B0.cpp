// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: The serializer loop is reconstructed, but local and list registers and loop scheduling differ.
#include "common.h"
struct Temp_001290B0 { u8 bytes[0x10]; };
struct Stack_001290B0 { s16 type; u8 pad2[0x0E]; Temp_001290B0 local; };
struct Node_001290B0 { u8 pad0[0x0C]; Node_001290B0* next; };
extern void func_001296F0(void*, void*, void*);
extern void func_0012B3B0(void*, void*);
extern void func_0012BC20(void*);
extern void* func_0012AF00(void*, void*);
void* func_001290B0(void* output, void* list, void* extra)
{
    Stack_001290B0 stack;
    stack.type = -1;
    Node_001290B0* node = *(Node_001290B0**)((u8*)list + 0x18);
    Temp_001290B0* local = &stack.local;
    while (node)
    {
        func_001296F0(local, node, extra);
        func_0012B3B0(&stack, local);
        func_0012BC20(local);
        node = node->next;
    }
    func_0012AF00(output, &stack);
    func_0012BC20(&stack);
    return output;
}
