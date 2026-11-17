// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_001520C0(s32,s32);
s32 func_0011B028(s32 *, s32);
s32 func_0023CE08();
extern s32 D_00479BB0;
s32 func_0011AF60(s32 *, s32);
s32 func_0023CEC0();
s32 func_001C8970(s32, s32, s32 *, s32);
s32 func_0024D920();
extern s32 D_00342DC0;
s32 func_001C3470(s32);
s32 func_001C4018(s32);
s32 func_00137628(s32);
s32 func_00238568(s32);
s32 func_0023BBE0();
s32 func_001854C8(s32 *, s32, void *);
extern s32 D_0036C700;
s32 func_00173428(s32);
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
s32 func_00155D00();
s32 func_001C3EC8(void *, s32);
s32 func_001F42E8(void *, s32);
s32 func_001F4350(s32, s32);
extern s32 D_00468D08;

void func_00150478(s32 arg0, s32 arg1) {
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

void func_001505B0(void) {
    func_00150478(1, 0xFFFF);
}

void func_001520C0(s32 arg0, s32 arg1) {
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

void func_001521F8(void) {
    func_001520C0(1, 0xFFFF);
}

void func_001523D8(s32 arg0) {
    func_0023CE08();
    func_0011B028(&D_00479BB0, arg0);
}

void func_00152410(s32 arg0) {
    func_0023CEC0();
    func_0011AF60(&D_00479BB0, arg0);
}

void func_00152448(s32 arg0) {
    func_0024D920();
    func_001C8970(arg0, 1, &D_00342DC0, 0);
}

void func_00152D50(char* self, s32 a1, s32 a2, s32 a3, s32 a4)
{
    if (a2 != *(s32*)(self + 0x11B4)) {
        func_00155D00();
    }
    *(s32*)(self + 0x11B4) = a2;
    *(s32*)(self + 0x11BC) = a1;
    *(s32*)(self + 0x11C0) = a4;
    *(s32*)(self + 0x11C4) = a3;
}

s32 func_001535E0(char *self)
{
    if (*(s32 *)(self + 0xE68) == 0) {
        *(s32 *)(self + 0xE68) = 1;
        return func_001854C8(&D_0036C700, 12, self);
    }
    return *(s32 *)(self + 0xE68);
}

s32 func_00153620(char *self)
{
    s32 value = 0;
    s32 flag = *(s32 *)(self + 0x1108);
    if (flag != 0) {
        value = func_00173428(flag) != 0;
    }
    if (value == 0) {
        return *(s32 *)(self + 0x1110);
    }
    return 0x80;
}

s32 func_00153668(char *self, s32 arg)
{
    if (*(s32 *)(self + 0xF78) == 1) return 1;
    if (*(s32 *)(self + 0x33C) == 0x16) return 1;
    if (D_00468D08 != 0 && func_001F4350(D_00468D08, -1) != 0) return 1;
    if (func_001C3EC8(self + 0xE40, arg) != 0) return 1;
    return func_001F42E8(self, arg);
}

void func_001536F8(s32 arg0) {
    func_001C3470(arg0 + 0xE40);
}

void func_00153718(s32 arg0) {
    func_001C4018(arg0 + 0xE40);
}

void func_00153F28(s32 arg0) {
    func_0023BBE0();
    func_00137628(arg0 + 0xF50);
    func_00137628(arg0 + 0xF74);
    func_00238568(arg0 + 0x29C);
}
