// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: the compiler strength-reduces the indexed loops to pointer walks, and the
// resulting branch layout and function size differ from retail.
#include "common.h"

struct State_00170C28 { u8 pad0[0x380]; s32 count1; s32 values1[8]; s32 count2; s32 values2[8]; };

s32 func_00170C28(State_00170C28* self, s32 value)
{
    for (s32 i = 0; i < self->count1; ++i)
        if (self->values1[i] == value) return 1;
    for (s32 i = 0; i < self->count2; ++i)
        if (self->values2[i] == value) return 1;
    return 0;
}
