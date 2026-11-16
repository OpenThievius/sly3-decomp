// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_002506C8(s32, s32);
s32 func_00150690(s32, s32, s32, s32);
extern s32 D_00475470;
s32 func_00254C00(s32, s32);
s32 func_00254BB8(s32, s32);

void func_002502E8(void) {

}

void func_00250800(void) {
    func_002506C8(1, 0xFFFF);
}

void func_00250820(void) {
    if (D_00475470 == 0) {
        D_00475470 = func_00150690(0x92, 0, 0x748, -1);
    }
}

void func_00253878(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg1;
    var_s1 = 0x19;
    do {
        func_00254C00(var_s0, arg0);
        var_s1 -= 1;
        var_s0 += 0x10;
    } while (var_s1 >= 0);
}

void func_00253950(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg1;
    var_s1 = 0x19;
    do {
        func_00254BB8(var_s0, arg0);
        var_s1 -= 1;
        var_s0 += 0x10;
    } while (var_s1 >= 0);
}
