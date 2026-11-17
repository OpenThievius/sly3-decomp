// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0011B0C0(s32 *, s32);
extern s32 D_00479C8C;
void func_002033F8(s32,s32);
s32 func_0011AF60(s32 *, s32);
extern s32 D_00479AF0;
s32 func_0011B028(s32 *, s32);
s32 func_0015CE68(s32);
s32 func_0022DCC8();
void func_00203AC0(s32,s32);
s32 func_001F3C48();
s32 func_00203F38(s32);
s32 func_00137628(s32);
s32 func_001F3C80();
s32 func_00205168(s32);
s32 func_0020BDB0(s32);
s32 func_0020BDC0(s32);
f32 func_0022DFB0(void *);
f32 func_0022DFD8(void *);
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

s32 func_00202C20(void* self)
{
    s32 v = *(s32*)((char*)self + 0x88) + 1;
    *(s32*)((char*)self + 0x88) = v;
    return v;
}

void func_00202D30(char* self, s32 value)
{
    if (*(s32*)(self + 0x18) != 0) {
        func_0020BDC0(*(s32*)(self + 0x18));
    }
    if (value != 0) {
        func_0020BDB0(value);
    }
    *(s32*)(self + 0x18) = value;
}

s32 func_00203148(s32 arg0) {
    return func_0011B0C0(&D_00479C8C, arg0) == 0;
}

void func_002033F8(s32 arg0, s32 arg1) {
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

s32 func_002037C0(void *arg0, f32 *arg1) {
    s32 result;

    if (*(s32 *)((char *)arg0 + 0xD4) == 0) {
        { result = 0; goto done; }
    }
    { arg1[0] = func_0022DFB0(arg0); arg1[1] = func_0022DFD8(arg0); result = 1; }
done:
    return result;
}

void func_00203AC0(s32 arg0, s32 arg1) {
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
