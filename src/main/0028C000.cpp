// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern s32 D_004C4130;
s32 func_0028FC18(s32, s32);
s32 func_001519C8(s32, s32);
s32 func_00290438();

void func_0028C238(void) {
    D_004C4130 -= 1;
}

void func_0028E8A0(void) {

}

void func_0028FD50(void) {
    func_0028FC18(1, 0xFFFF);
}

void func_0028FDE0(s32 arg0, s32 arg1) {
    func_00290438();
    func_001519C8(arg0, arg1);
}
