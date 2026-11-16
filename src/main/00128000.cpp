// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct Counted_12B1F8
{
    s16 kind;
    s32* count;
};

Counted_12B1F8* func_0012B1F8(Counted_12B1F8* self, s32* count)
{
    self->count = count;
    self->kind = 30;
    (*count)++;
    return self;
}

struct Stack_00128588 { s16 type; u8 pad[0x0E]; u8 local[0x10]; };
extern void func_001296F0(void*, void*);
extern void func_0012B3B0(void*, void*);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void* func_0012AF00(void*, void*);
void* func_00128588(void* a0, void* a1)
{
    Stack_00128588 stack;
    stack.type = -1;
    void* object = *(void**)((u8*)a1 + 0x04);
    void* source = *(void**)((u8*)object + 0x0C);
    func_001296F0(stack.local, source);
    func_0012B3B0(&stack, stack.local);
    func_0012BC20(stack.local);
    func_0012BC20(&stack);
    func_0012BDD8(&stack, 0x22);
    func_0012AF00(a0, &stack);
    func_0012BC20(&stack);
    return a0;
}

struct Node_00129B58 { u8 pad0[8]; s32 key; u8 pad0C[8]; Node_00129B58* next; };
struct State_00129B58 { u8 pad0[8]; State_00129B58* child; Node_00129B58* head; s32 active; };

extern void* func_00129B58(void*, s32, s32);
extern void func_0012B3B0(void*, void*);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void* func_0012AF00(void*, void*);

void* func_00129A90(void* output, void* root, s32 key, void* value)
{
    s16 type = -1;
    void* found = func_00129B58(root, key, 1);
    if (found)
        func_0012B3B0(found, value);
    func_0012BC20(&type);
    func_0012BDD8(&type, 0x22);
    func_0012AF00(output, &type);
    func_0012BC20(&type);
    return output;
}

void* func_00129B58(State_00129B58* self, s32 key, s32 recurse)
{
    self->active = 1;
    Node_00129B58* node = self->head;
    void* result = 0;
    if (node)
    {
        do
        {
            if (node->key == key)
            {
                result = &node->pad0C;
                goto cleanup;
            }
            node = node->next;
        } while (node);
    }
    if (recurse && self->child && !self->child->active)
        result = func_00129B58(self->child, key, recurse);
cleanup:
    self->active = 0;
    return result;
}

s32 func_00127FC8(s32, s32);
void func_00128100(void) {
    func_00127FC8(1, 0xFFFF);
}

s32 func_00128120(s32, s32);
void func_00128258(void) {
    func_00128120(1, 0xFFFF);
}

s32 func_00128278(s32, s32);
void func_001283B0(void) {
    func_00128278(1, 0xFFFF);
}

s32 func_00129870(s32, s32);
void func_001299A8(void) {
    func_00129870(1, 0xFFFF);
}

s32 func_00129CB8(s32, s32);
void func_00129DF0(void) {
    func_00129CB8(1, 0xFFFF);
}

s32 *func_00129E10(s32 *arg0) {
    *arg0 = 0;
    return arg0;
}

s32 func_0012A798(s32, s32);
void func_0012A8D8(void) {
    func_0012A798(1, 0xFFFF);
}

s32 func_0012A8F8(s32, s32);
void func_0012AA30(void) {
    func_0012A8F8(1, 0xFFFF);
}

s32 func_0012AB70(s32, s32);
void func_0012ACA8(void) {
    func_0012AB70(1, 0xFFFF);
}

s32 func_0012ADA8(s32, s32);
void func_0012AEE0(void) {
    func_0012ADA8(1, 0xFFFF);
}
