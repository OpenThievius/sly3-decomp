// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00155CE0();
s32 func_00208B20(s32, s32);
s32 func_0013BD00(s32, s32);
s32 func_0013BD88(s32, s32);

void func_001AF120(s32 arg0) {
    func_00155CE0();
    func_00208B20(arg0 + 0x18F0, -1);
}

s32 func_001AF298(void* p)
{
    s32 v = *(s32*)((char*)p + 0x19e0);
    return v == 2;
}

void func_001AF2A8(s32 arg0, s32 *arg1, s32 arg2) {
    if (*(s32 *)((char *)arg1 + 8) != 0) {
        func_0013BD88(*(s32 *)((char *)arg1 + 8), arg0);
        *(s32 *)((char *)arg1 + 8) = 0;
    }
    if (arg2 != 0) {
        *(s32 *)((char *)arg1 + 8) = arg2;
        func_0013BD00(arg2, arg0);
    }
}
