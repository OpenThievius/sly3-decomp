// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0025FBF8(s32, s32, s32);
f32 func_00265DE0(s32, s32);

s32 func_002643C8(void) {
    return 0;
}

void func_002643D0(s32 arg0, s32 arg1) {
    func_0025FBF8(arg1, 2, arg0 + 0x100);
}

f32 func_00264E78(char* self, s32 value)
{
    return func_00265DE0(*(s32*)(self + 0x8), value & 0xFFFF) * *(f32*)(self + 0x88);
}
