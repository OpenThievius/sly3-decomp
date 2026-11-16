// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: The growth loop and callback are reconstructed, but branch layout, loop scheduling, and callback registers differ.
#include "common.h"
struct Grower_001181A8 { void* vtable; };
struct GrowthVtable_001181A8 { u8 pad[0x18]; s16 offset; u8 pad1[2]; void* (*resize)(void*, void*, s32, s32); };
struct Buffer_001181A8 { void* data; u8 pad4[4]; s32 capacity; s32 stride; u8 pad10[4]; Grower_001181A8* grower; };
void func_001181A8(Buffer_001181A8* self, s32 requested)
{
    s32 current = self->capacity;
    if (current >= requested)
        return;
    {
        s32 capacity;
        if (requested < 0x200)
        {
            capacity = 8;
            if (current)
                capacity = current;
            if (capacity < requested)
            {
                do
                    capacity *= 2;
                while (capacity < requested);
            }
        }
        else
        {
            capacity = (requested + 0x3FF) & -0x400;
        }
        GrowthVtable_001181A8* table = (GrowthVtable_001181A8*)self->grower->vtable;
        self->data = table->resize((u8*)self->grower + table->offset, self->data,
                                   capacity * self->stride, 4);
        self->capacity = capacity;
    }
}
