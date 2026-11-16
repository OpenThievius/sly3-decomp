// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: callback branch layout, register allocation and field update order still differ.
#include "common.h"

struct Stream_001190A8 { u8 pad0[4]; u8* data; s32 length; };
extern void func_00118DA0(void*, s32, void*);

s32 func_001190A8(Stream_001190A8* self)
{
    s32 length = self->length;
    if (length >= 4)
    {
        u8* data = self->data;
        u32 value = (u32)data[0] + ((u32)data[1] << 8) +
                    ((u32)data[2] << 16) + ((u32)data[3] << 24);
        self->data += 4;
        self->length = length - 4;
        return value;
    }
    s32 value;
    func_00118DA0(self, 4, &value);
    return value;
}
