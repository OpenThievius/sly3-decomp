// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0023AE08();
s32 func_00240E58(s32, s32, s32);
s32 func_0011B028(s32 *, s32);
s32 func_0023CE08();
extern s32 D_00479B68;
s32 func_0011AF60(s32 *, s32);
s32 func_0023CEC0();
s32 func_001E5FC8();
void func_001E60A8(s32,s32);
s32 func_001C78A0();
extern s32 D_0047A26C;
void *func_001E5F60(s32, s32);
s32 func_0023FE38(s32, s32);
s32 func_00240000(s32, s32);
s32 func_0023FEC0(s32, s32);
s32 func_00240080(s32, s32);
s32 func_001EE220(s32, void *);
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

void func_001E4B10(s32 arg0, s32 arg1) {
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

void func_001E4C48(void) {
    func_001E4B10(1, 0xFFFF);
}

void func_001E4C68(s32 arg0) {
    func_0023AE08();
    func_00240E58(arg0, 0x03FFFFFF, 2);
    func_00240E58(arg0, 0x88001, 0);
}

void func_001E4E78(s32 arg0) {
    func_0023CE08();
    func_0011B028(&D_00479B68, arg0);
}

void func_001E4EB0(s32 arg0) {
    func_0023CEC0();
    func_0011AF60(&D_00479B68, arg0);
}

void func_001E5D60(s32 arg0, s32 arg1)
{
    if (func_001E5FC8() == 0) {
        func_0023FE38(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 2) + 4) = arg1;
}

void func_001E5DB8(s32 arg0, s32 arg1) {
    if (func_001E5FC8() == 0) {
        func_00240000(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 4) + 4) = arg1;
}

void func_001E5E48(s32 arg0, s32 arg1) {
    if (func_001E5FC8() == 0) {
        func_0023FEC0(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 3) + 4) = arg1;
}

void func_001E5EA0(s32 arg0, s32 arg1)
{
    if (func_001E5FC8() == 0) {
        func_00240080(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 5) + 4) = arg1;
}

s32 func_001E5FF8(void) {
    return func_001E5FC8() == 0;
}

s32 func_001E6018(char* self)
{
    if (func_001E5FC8() == 0) {
        return 0;
    }
    return *(s32*)(self + 0x144) + (*(s32*)(self + 0x13C) * 0x10);
}

void func_001E60A8(s32 arg0, s32 arg1) {
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

void func_001E61E0(void) {
    func_001E60A8(1, 0xFFFF);
}

void func_001E6310(s32 arg0) {
    func_001C78A0();
    func_0011AF60(&D_0047A26C, arg0);
}

void func_001E73D8(char *self) {
    s32 target = *(s32 *)(self + 0x1CC);
    if (target != 0) {
        func_001EE220(target, self);
        *(s32 *)(self + 0x1CC) = 0;
    }
}
