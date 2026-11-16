// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_002380B8(s32, s32);
s32 func_002383A0(s32, s32);
s32 func_00238AE8(s32);
s32 func_00238B48(s32, s32);
s32 func_00238E70(s32, s32);
s32 func_00239A78();
s32 func_0011B0C0(s32 *, s32);
extern s32 D_00479A08;
s32 func_0023ACB0(s32, s32);

void func_002381F0(void) {
    func_002380B8(1, 0xFFFF);
}

void func_002384D8(void) {
    func_002383A0(1, 0xFFFF);
}

void func_002384F8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_00238500(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_00238970(void) {

}

void func_00238978(void) {

}

void func_00238980(s32 arg0) {
    func_00238AE8(arg0 + 0x18);
}

void func_002389A0(void) {

}

void func_002389A8(void) {

}

s32 func_002389B0(void) {
    return 0x1000;
}

s32 func_002389B8(void) {
    return 0;
}

s32 func_00238AD8(void) {
    return 0;
}

void func_00238AE0(void) {

}

void func_00238C80(void) {
    func_00238B48(1, 0xFFFF);
}

void func_00238FA8(void) {
    func_00238E70(1, 0xFFFF);
}

void func_00239AB8(void) {
    func_00239A78();
}

s32 func_00239CC0(s32 arg0) {
    return func_0011B0C0(&D_00479A08, arg0) == 0;
}

void func_0023ADE8(void) {
    func_0023ACB0(1, 0xFFFF);
}
