// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001F9398(s32, s32);
s32 func_001FA280(s32, s32);
s32 func_001C9118(s32, s32);
s32 func_0028FD70();
s32 func_001FBE30(s32, s32);
s32 func_001FBEC0();

void func_001F94D0(void) {
    func_001F9398(1, 0xFFFF);
}

void func_001F9860(void) {

}

void func_001FA588(void) {
    func_001FA280(1, 0xFFFF);
}

s32 func_001FA5A8(s32 arg0, s32 arg1) {
    return (arg0 << 0x10) | (arg1 & 0xFFFF);
}

s32 func_001FA5B8(s32 arg0) {
    return arg0 >> 0x10;
}

s16 func_001FA5C0(s16 arg0) {
    return arg0;
}

void func_001FB3D8(s32 arg0) {
    func_0028FD70();
    func_001C9118(arg0, 0);
}

void func_001FBF08(s32 arg0) {
    if (func_001FBEC0() == 0) {
        func_001FBE30(arg0, 1);
    }
}
