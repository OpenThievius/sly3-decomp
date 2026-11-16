// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0014D1F0(s32, s32);
s32 func_0023F400();
s32 func_0014D230(s32, s32);
s32 func_0014DC98(s32, s32);
s32 func_0023C580();
s32 func_001FCB20();
s32 func_0014EDF8(s32, s32);
s32 func_0014F2E8(s32, s32);

void func_0014C040(s32 arg0) {
    func_0023F400();
    func_0014D1F0(arg0, arg0);
}

s32 func_0014CD60(s32 arg0, s32 arg1) {
    return (s32) ((arg1 - arg0) * 0x286BCA1B) >> 4;
}

void func_0014D368(void) {
    func_0014D230(1, 0xFFFF);
}

void func_0014D498(s32 arg0) {
    func_0023C580();
    func_0014DC98(arg0, 0);
}

void func_0014D4C8(s32 arg0) {
    func_001FCB20();
    func_0014DC98(arg0, 0);
}

s32 func_0014DC88(s32 arg0) {
    return arg0 >= 2;
}

void func_0014EF30(void) {
    func_0014EDF8(1, 0xFFFF);
}

s32 func_0014F2E0(void) {
    return 0;
}

void func_0014F420(void) {
    func_0014F2E8(1, 0xFFFF);
}
