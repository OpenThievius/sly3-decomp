// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern void func_0011AF60(void*, void*);
extern void func_0011AF90(void*, void*);

struct Link_0011AFC0 { void* first; u32 pad4; s32 offset; };

void func_0011AFC0(Link_0011AFC0* self, void* target, void* replacement)
{
    if (target == 0)
    {
        func_0011AF60(self, replacement);
    }
    else if (target == self->first)
    {
        func_0011AF90(self, replacement);
    }
    else
    {
        s32 offset = self->offset;
        u8* destination = (u8*)replacement + offset;
        u8* source = (u8*)target + offset;
        u32 value = *(u32*)(source + 4);
        *(void**)destination = target;
        *(u32*)(destination + 4) = value;
        *(u32*)(source + 4) = (u32)replacement;
        *(void**)(value + offset) = replacement;
    }
}

