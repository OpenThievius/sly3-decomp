// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: Only the indirect call target register differs from retail.
#include "common.h"
struct State_00118C50 { s32 flags; s32 field4; s32 field8; s32 fieldC; s32 field10; s32 field14; u8 pad18[0x18]; void* callback; };
extern void func_00118E28(State_00118C50*);
void func_00118C50(State_00118C50* self)
{
    if (self->field8 == 0)
    {
        if (self->flags & 2)
        {
            func_00118E28(self);
        }
        else
        {
            struct Vtable_00118C50 { u8 pad0[8]; s16 offset; u8 padA[2]; void (*callback)(void*); };
            Vtable_00118C50* table = (Vtable_00118C50*)self->callback;
            void (*callback)(void*) = table->callback;
            callback((u8*)self + table->offset);
            self->field8 = self->field14;
            self->field4 = self->field10;
            self->field10 += self->field14;
            self->field14 = 0;
        }
        self->fieldC += self->field8;
    }
}
