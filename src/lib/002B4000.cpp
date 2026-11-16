// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern s32 D_0034E638;

s32 **func_002B4F98(s32 **arg0) {
    *arg0 = &D_0034E638;
    return arg0;
}

f32 func_002B5708(char* self)
{
    return *(f32*)(*(char**)(self + 0x24) + 8);
}
