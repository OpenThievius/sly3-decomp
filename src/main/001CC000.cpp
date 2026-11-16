// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001CE758(s32, s32);
s32 func_00184968(s32 *);
s32 func_001CF058(s32 *, s32, s32);
extern s32 D_00349F90;
extern s32 D_0036C700;
extern s32 D_00375290;

void func_001CE890(void) {
    func_001CE758(1, 0xFFFF);
}

void func_001CE8B0(void) {
    func_00184968(&D_0036C700);
    D_00349F90 = -1;
    func_001CF058(&D_00375290, 0, 0);
}
