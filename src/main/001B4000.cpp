// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001B7038(s32, s32);

s32 func_001B6798(const float* a, const float* b)
{
    if (a[2] < b[2]) return -1;
    return 1;
}

void func_001B7170(void) {
    func_001B7038(1, 0xFFFF);
}
