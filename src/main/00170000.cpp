// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct Target_172CE0
{
    u8 pad0[0xE0];
    s32 xe0;
};

struct Owner_172CE0
{
    u8 pad0[0x50];
    Target_172CE0* target;
};

s32 func_00172CE0(Owner_172CE0* self)
{
    s32 result = -1;
    Target_172CE0* target = self->target;
    if (target)
        result = target->xe0;
    return result;
}
