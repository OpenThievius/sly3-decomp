// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00224730(s32);
s32 func_0023C660();
s32 func_00224F30(s32, s32);
s32 func_001C7D98();
s32 func_00225220(s32, s32);
s32 func_001FCAC8();
s32 func_00226050(s32);
s32 func_001F4AD0(s32 *, s32);
s32 func_00225EE8(s32, s32);
extern s32 D_00475480;

void func_00224700(s32 arg0) {
    func_0023C660();
    func_00224730(arg0);
}

void func_00225068(void) {
    func_00224F30(1, 0xFFFF);
}

void func_002250C0(s32 arg0, s32 arg1) {
    func_001C7D98();
    func_00225220(arg0, arg1);
}

void func_00225100(s32 arg0) {
    func_001FCAC8();
    func_00226050(arg0);
}

void func_00226010(s32 arg0) {
    func_00225EE8(arg0, func_001F4AD0(&D_00475480, 0));
}
