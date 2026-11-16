// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001FB710(s32, s32);
s32 func_001FBFF0();
s32 func_001FCB90(s32, s32);
s32 func_0011E118(s32 *);
s32 func_00200868(s32, s32, s32);
extern s32 D_00479C44;
s32 func_00202220(s32, s32, s32);
extern s32 D_00479C5C;
s32 func_001FC8F8();
s32 func_001FECC0(s32, s32);
s32 func_001FCAC8();
s32 func_001FEDA0(s32, s32);

void func_001FC0E0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_001FBFF0();
    if (temp_v0 != 0) {
        func_001FB710(arg0, temp_v0);
    }
}

void func_001FCCC8(void) {
    func_001FCB90(1, 0xFFFF);
}

void func_001FD940(s32 arg0, s32 arg1) {
    func_00200868(func_0011E118(&D_00479C44), arg1, arg0);
}

void func_001FDF20(void) {

}

void func_001FDF28(s32 arg0, s32 arg1) {
    func_00202220(func_0011E118(&D_00479C5C), arg1, arg0);
}

void func_001FEB30(s32 arg0) {
    func_001FC8F8();
    func_001FECC0(arg0, 1);
}

void func_001FEB60(s32 arg0) {
    func_001FCAC8();
    func_001FECC0(arg0, -1);
}

void func_001FEED8(void) {
    func_001FEDA0(1, 0xFFFF);
}
