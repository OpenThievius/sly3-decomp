// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0020EBD0(s32, s32);
s32 func_001C8970(s32, s32, s32 *, s32);
s32 func_001F3BF8();
s32 func_001F4670(s32, s32);
extern s32 D_00347FF0;
s32 func_001F3C48();
s32 func_0020F820(s32);

void func_0020ED08(void) {
    func_0020EBD0(1, 0xFFFF);
}

void func_0020EDE0(s32 arg0) {
    func_001F3BF8();
    func_001C8970(arg0, 3, &D_00347FF0, 0);
    func_001F4670(arg0, 1);
}

void func_0020EE28(s32 arg0) {
    func_001F3C48();
    func_0020F820(arg0);
}
