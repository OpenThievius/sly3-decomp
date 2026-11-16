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
