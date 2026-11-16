// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0011B0C0(s32 *, s32);
extern s32 D_00479C8C;
s32 func_002033F8(s32, s32);
s32 func_0011AF60(s32 *, s32);
extern s32 D_00479AF0;
s32 func_0011B028(s32 *, s32);
s32 func_0015CE68(s32);
s32 func_0022DCC8();
s32 func_00203AC0(s32, s32);
s32 func_001F3C48();
s32 func_00203F38(s32);
s32 func_00137628(s32);
s32 func_001F3C80();
s32 func_00205168(s32);

s32 func_00203148(s32 arg0) {
    return func_0011B0C0(&D_00479C8C, arg0) == 0;
}

void func_00203530(void) {
    func_002033F8(1, 0xFFFF);
}

void func_002036A0(s32 arg0) {
    func_0011AF60(&D_00479AF0, arg0);
}

void func_002036C8(s32 arg0) {
    func_0011B028(&D_00479AF0, arg0);
}

void func_00203790(s32 arg0) {
    func_0022DCC8();
    func_0015CE68(arg0 + 0x1A8);
}

void func_00203BF8(void) {
    func_00203AC0(1, 0xFFFF);
}

void func_00203EC8(s32 arg0) {
    func_001F3C48();
    func_00203F38(arg0);
}

void func_00203EF8(s32 arg0) {
    func_001F3C80();
    func_00137628(arg0 + 0x420);
    func_00137628(arg0 + 0x424);
    func_00205168(arg0);
}
