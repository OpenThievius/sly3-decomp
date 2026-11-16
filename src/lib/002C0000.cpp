// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001D2818(s32);
s32 func_002BFE68(s32, s32);

void func_002C01F8(s32 arg0, s32 arg1) {
    func_002BFE68(arg0 + 0x60, 2);
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}
