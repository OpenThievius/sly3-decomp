// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0013CD00(s32, s32);
s32 func_00156948();
s32 func_001C8F20(s32, s32);
s32 func_00272FB0(void *, s32, s32);

s32 func_001E0988(void* self)
{
    s32 v = *(s32*)((char*)self + 0x1520);
    return v == 1;
}

s32 func_001E0D68(char *self, s32 arg1)
{
    s32 result;
    s32 temp_v0;

    result = func_00156948();
    if (*(s32 *)(self + 0x156C) != 0 && func_001C8F20(arg1, *(s32 *)(self + 0x156C)) != 0) {
        result = func_0013CD00(result, 3);
    } else if (*(s32 *)(self + 0x1520) == 0x10) {
        result = func_00272FB0(self + 0x18E0, arg1, result);
    }
    return result;
}
