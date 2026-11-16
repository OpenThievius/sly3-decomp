// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00244A10(s32, s32);
s32 func_00245A30(s32, s32);
s32 func_00245FA0(s32);

void func_00244B48(void) {
    func_00244A10(1, 0xFFFF);
}

void func_002459F8(s32 arg0) {
    func_00245A30(func_00245FA0(0x70), arg0);
}
