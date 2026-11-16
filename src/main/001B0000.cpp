// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001B0740(s32, s32);
s32 func_001B0B18(s32, s32);
s32 func_001B2560(s32, s32);
s32 func_00156B98();

s32 func_001B0620(void* pobject)
{
    s32 v = *(s32*)((char*)pobject + 0x1F1C);
    if (v != 0) {
        return 1;
    }
    return func_00156B98();
}

void func_001B0878(void) {
    func_001B0740(1, 0xFFFF);
}

void func_001B0C50(void) {
    func_001B0B18(1, 0xFFFF);
}

void func_001B2698(void) {
    func_001B2560(1, 0xFFFF);
}
