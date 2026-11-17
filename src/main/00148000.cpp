// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00117B40(s32, s32, s32);
void func_00149258(s32,s32);
s32 func_001493B0(s32 *);
s32 func_00149458(s32, s32 *);
extern s32 D_0036B260;
extern s32 D_0036B2A0;
extern s32 D_0036B2E0;
s32 func_0011E1F0(s32 *, s32);
extern s32 D_00479CE4;
s32 func_001C8168();
void func_0014AE58(s32,s32);
s32 func_0014BB50();
s32 func_0014BC70(s32);
s32 func_0014BD58(s32);
s32 func_0011E118(s32 *);
extern s32 D_004799B8;
void func_0014BE58(s32,s32);
s32 func_0011AF60(s32 *, void *);
s32 func_0011B028(s32, void *);
extern s32 D_0036C668;
s32 func_0013B500(void *, s32);
s32 func_0013BD00();
s32 func_00182D60(s32, s32 *, s32 *);
extern s32 D_002C0520;
extern s32 D_002C1408;
s32 func_001746C0(s32);
s32 func_001748F8(s32);
s32 func_0027E2A8(s32);
s32 func_0011E100(s32 *, s32, s32, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;

void func_00148AE0(void) {

}

void func_00149028(s32 arg0, s32 arg1) {
    func_00117B40(arg1, arg0, 0x12);
}

void func_00149050(void) {

}

void func_00149258(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        temp_v0 = D_0036AE78 + 1;
        D_0036AE78 = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0_2 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_3 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_4 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_5 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_6 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_6;
        if (temp_v0_6 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
}

void func_00149390(void) {
    func_00149258(1, 0xFFFF);
}

void func_00149510(void) {
    func_001493B0(&D_0036B260);
    func_00149458(1, &D_0036B2A0);
    func_00149458(2, &D_0036B2E0);
}

void func_001495F8(char *self)
{
    func_0011B028(*(s32 *)(self + 0x108C), self);
    func_0011AF60(&D_0036C668, self);
}

void func_00149898(s32 arg0) {
    func_0011E1F0(&D_00479CE4, arg0);
}

void func_00149DE8(void) {
    func_001C8168();
}

void func_00149E08(void *self, void *other)
{
    s32 temp_s1 = (s32)self;
    s32 temp_s0 = (s32)other;
    func_0013BD00();
    if (func_0013B500(other, 0x1B) != 0) {
        *(void **)((char *)self + 0xD0) = other;
        *(f32 *)((char *)self + 0x34) = *(f32 *)((char *)other + 0x34);
    }
}

void func_0014ADF0(s32 arg0, s32 arg1, s32 arg2) {
    func_00182D60(arg2, &D_002C0520, &D_002C1408);
}

void func_0014AE20(s32 arg0, s32 arg1, s32 arg2)
{
    func_001746C0(arg2);
    func_0027E2A8(arg2);
    func_001748F8(arg2);
}

void func_0014AE58(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        temp_v0 = D_0036AE78 + 1;
        D_0036AE78 = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0_2 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_3 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_4 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_5 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_6 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_6;
        if (temp_v0_6 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
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

void func_0014BE58(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        temp_v0 = D_0036AE78 + 1;
        D_0036AE78 = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0_2 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_3 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_4 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_5 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_6 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_6;
        if (temp_v0_6 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
}

void func_0014BF90(void) {
    func_0014BE58(1, 0xFFFF);
}
