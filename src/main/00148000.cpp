// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00117B40(s32, s32, s32);
s32 func_00149258(s32, s32);
s32 func_001493B0(s32 *);
s32 func_00149458(s32, s32 *);
extern s32 D_0036B260;
extern s32 D_0036B2A0;
extern s32 D_0036B2E0;
s32 func_0011E1F0(s32 *, s32);
extern s32 D_00479CE4;
s32 func_001C8168();
s32 func_0014AE58(s32, s32);
s32 func_0014BB50();
s32 func_0014BC70(s32);
s32 func_0014BD58(s32);
s32 func_0011E118(s32 *);
extern s32 D_004799B8;
s32 func_0014BE58(s32, s32);

void func_00148AE0(void) {

}

void func_00149028(s32 arg0, s32 arg1) {
    func_00117B40(arg1, arg0, 0x12);
}

void func_00149050(void) {

}

void func_00149390(void) {
    func_00149258(1, 0xFFFF);
}

void func_00149510(void) {
    func_001493B0(&D_0036B260);
    func_00149458(1, &D_0036B2A0);
    func_00149458(2, &D_0036B2E0);
}

void func_00149898(s32 arg0) {
    func_0011E1F0(&D_00479CE4, arg0);
}

void func_00149DE8(void) {
    func_001C8168();
}

void func_0014AF90(void) {
    func_0014AE58(1, 0xFFFF);
}

void func_0014B7A8(void) {
    s32 temp_v0;

    temp_v0 = func_0014BB50();
    if (temp_v0 != 0) {
        func_0014BC70(temp_v0);
    }
}

void func_0014B7D8(void) {
    s32 temp_v0;

    temp_v0 = func_0014BB50();
    if (temp_v0 != 0) {
        func_0014BD58(temp_v0);
    }
}

void func_0014BE38(void) {
    func_0011E118(&D_004799B8);
}

void func_0014BF90(void) {
    func_0014BE58(1, 0xFFFF);
}
