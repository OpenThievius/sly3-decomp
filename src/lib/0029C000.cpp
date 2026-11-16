// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern s32 (*D_0034BCDC)();
extern s32 D_0034A5F4;
extern s32 D_0034C2F0;
s32 func_002939C0();

void func_0029CFB8(void) {

}

void func_0029D018(void) {
    D_0034BCDC();
}

s32 func_0029D040(void) {
    return D_0034BCDC() + 8;
}

s32 func_0029D0F8(void) {
    return D_0034BCDC() + 4;
}

void func_0029D7C0(void) {

}

u8 *func_0029DEC0(u8 *arg0, s32 *arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 *var_a0;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v1 = *arg0;
    var_a3 = 0;
    var_a0 = arg0 + 1;
    var_a2 = temp_v1 & 0x7F;
    if (temp_v1 & 0x80) {
        do {
            temp_v1_2 = *var_a0;
            var_a3 += 7;
            var_a0 += 1;
            var_a2 |= (temp_v1_2 & 0x7F) << var_a3;
        } while (temp_v1_2 & 0x80);
    }
    *arg1 = var_a2;
    return var_a0;
}

u8 *func_0029DF08(u8 *arg0, s32 *arg1) {
    s32 var_a4;
    u32 var_a3;
    u8 *var_a0;
    u8 temp_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_a4 = 0;
    do {
        temp_a2 = *var_a0;
        var_a0 += 1;
        var_a4 |= (temp_a2 & 0x7F) << var_a3;
        var_a3 += 7;
    } while (temp_a2 & 0x80);
    if ((var_a3 < 0x20U) && (temp_a2 & 0x40)) {
        var_a4 |= -1 << var_a3;
    }
    *arg1 = var_a4;
    return var_a0;
}

s32 func_0029EE48(void) {
    return D_0034A5F4;
}

s32 *func_0029F148(void) {
    return &D_0034C2F0;
}

void func_0029F940(void) {
    func_002939C0();
}
