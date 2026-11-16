// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_001648B8(s32 a, s32 b);
s32 func_00289198(s32 *, s32, s32, s32 *);
extern s32 D_00468D30;
extern s32 D_00475480;
s32 func_00164760(s32, s32);
s32 func_00165200(s32, s32);
s32 func_001655F0(s32, s32);
u32 func_00165B48(s32 *, s32);

void func_00164170(s32 arg0) {
    func_00289198(&D_00475480, arg0, 0, &D_00468D30);
}

void func_001641A0(s32 *arg0) {
    *arg0 = 1;
}

void func_00164898(void) {
    func_00164760(1, 0xFFFF);
}

void func_001649F0()
{
    func_001648B8(1, 0xFFFF);
}

void func_00165338(void) {
    func_00165200(1, 0xFFFF);
}

void func_00165728(void) {
    func_001655F0(1, 0xFFFF);
}

u32 func_00165DC8(s32 arg0) {
    return func_00165B48(&D_00475480, arg0) >> 0x1F;
}
