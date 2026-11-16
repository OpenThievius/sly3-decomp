// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00140F00(s32, s32);
s32 func_0011AF60(s32 *, s32);
s32 func_0023BAB8();
extern s32 D_00479BD4;
s32 func_0011B028(s32 *, s32);
s32 func_0023BBE0();
s32 func_00142848(s32);
s32 func_001F3C48();
s32 func_00162678(s32);
s32 func_0023CC40();
s32 func_001473A0(s32, s32, s32, s32);
s32 func_00169BF8(s32);

void func_00141038(void) {
    func_00140F00(1, 0xFFFF);
}

void func_00141298(s32 arg0) {
    func_0023BAB8();
    func_0011AF60(&D_00479BD4, arg0);
}

void func_001412D0(s32 arg0) {
    func_0023BBE0();
    func_0011B028(&D_00479BD4, arg0);
}

void func_001414D0(s32 arg0) {
    func_001F3C48();
    func_00142848(arg0);
}

void func_001417E0(s32 arg0) {
    func_0023CC40();
    func_00162678(arg0 + 0x450);
}

void func_00141F38(s32 arg0, s32 arg1) {
    func_001473A0(func_00169BF8(0x50), arg1, 7, arg0);
}
