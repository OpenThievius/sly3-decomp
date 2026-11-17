// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001EB4C8(s32);
s32 func_001ECBB8(s32);
s32 func_001EB7A0(s32);
s32 func_001EBCD0(s32);
void func_001EF6E0(s32,s32);
void func_001EFD00(s32,s32);
s32 func_00152448();
s32 func_001C8970(s32, s32, s32 *, s32);
extern s32 D_003468A0;
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
s32 func_00152488();
s32 func_00155190(void *, s32);
s32 func_001C1410(void *, void *, void *);
s32 func_0023DDA0(void *, s32, s32);
s32 func_00258958(s32);

s32 func_001ED170(s32 arg0) {
    return func_001EB4C8(arg0 + 0xD0) != 0;
}

void func_001ED190(s32 arg0) {
    func_001ECBB8(arg0 + 0xD0);
}

void func_001ED1B0(s32 arg0) {
    func_001EB7A0(arg0 + 0xD0);
}

void func_001ED1D0(s32 arg0) {
    func_001EBCD0(arg0 + 0xD0);
}

f32 func_001EF588(char* self) { return *(f32*)(self + ((*(int*)(self + 0x30) - 1) << 2) + 0x240); }

s32 func_001EF5A0(void* p)
{
    s32 v = *(s32*)((char*)p + 0x288) + 1;
    *(s32*)((char*)p + 0x288) = v;
    return v;
}

void func_001EF6E0(s32 arg0, s32 arg1) {
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

void func_001EF818(void) {
    func_001EF6E0(1, 0xFFFF);
}

void func_001EFD00(s32 arg0, s32 arg1) {
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

void func_001EFE38(void) {
    func_001EFD00(1, 0xFFFF);
}

void func_001EFF30(s32 arg0) {
    func_00152448();
    func_001C8970(arg0, 0x35, &D_003468A0, 0);
}

void func_001EFF70(char *self)
{
    func_00152488();
    func_00258958(0x1480 + (s32)self);
    func_00258958(0x1530 + (s32)self);
    func_00155190(self, 0x2E);
    *(s32 *)(self + 0x1190) = func_0023DDA0(self, 0x22, 1);
    func_001C1410(self, self + 0x15F0, self + 0x16F0);
}
