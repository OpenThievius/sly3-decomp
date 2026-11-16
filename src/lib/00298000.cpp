// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern s32 D_0034B678;
s32 func_002933D0(s32, s32);
s32 func_00293E60(s32);
extern s32 D_0034B680;
extern s32 D_004CF754;
s32 func_00293B00();
s32 func_00293B10();
s32 func_0029A028();

void func_00299648(void) {
    D_0034B678 = 0;
}

void func_002999F0(void) {
    func_00293E60(5);
    func_002933D0(5, D_004CF754);
    D_0034B680 = 0;
}

void func_00299FE8(void) {
    if (func_00293B00() == 0x02000000) {
        func_0029A028();
        return;
    }
    func_00293B10();
}
