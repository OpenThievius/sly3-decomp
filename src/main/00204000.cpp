// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00205198();
s32 func_002051F0(s32);
s32 func_00205A38();
s32 func_0023E130(s32);

void func_00205168(s32 arg0) {
    func_00205198();
    func_002051F0(arg0);
}

s32 func_002058D8(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (func_00205A38() == 0) {
        var_v0 = func_0023E130(arg0) == 0;
    }
    return var_v0;
}

void func_00207598(char *self, s32 value) { u32 count = *(u32 *)(self + 0x3AC); if (count < 4) { *(s32 *)(self + (count << 2) + 0x3B0) = value; *(u32 *)(self + 0x3AC) = count + 1; } }
