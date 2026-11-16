// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
struct ListNode_001229A8 { u8 pad0[0x0C]; ListNode_001229A8* next; };
struct Input_001229A8 { s16 type; u8 pad2[2]; ListNode_001229A8* head; u8 pad8[4]; s32 count; };
extern void func_0012BDD8(void*, s32);
extern void func_0012B3B0(void*, void*);
extern void* func_0012AF00(void*, void*);
extern void func_0012BC20(void*);

void* func_001229A8(void* output, s32, Input_001229A8* input)
{
    u8 local[0x10];
    func_0012BDD8(local, 0);
    if (input->type != 0x1D)
        goto cleanup;
    {
        ListNode_001229A8* node = input->head;
        s32 index = 0;
        while (node)
        {
            if (index == input->count)
            {
                func_0012B3B0(local, node);
                break;
            }
            node = node->next;
            index++;
        }
    }
cleanup:
    func_0012AF00(output, local);
    func_0012BC20(local);
    return output;
}
