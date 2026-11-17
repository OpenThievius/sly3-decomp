// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00165DF0();
extern s32 D_0047937C;
s32 func_00165FC0();
s32 func_00168CC0();
void func_001E8B18(s32,s32);
s32 func_001F3BF8();
s32 func_001F4670(s32, s32);
s32 func_001E8E60(s32, s32);
s32 func_001F3C48();
s32 func_001F3C80();
void func_001E91D8(s32,s32);
s32 func_00152448();
s32 func_001C8970(s32, s32, s32 *, s32);
extern s32 D_00346650;
void func_001EB370(s32,s32);
s32 func_00169BF8(s32);
s32 func_00169C90(s32, s32, s32);
s32 func_00152488();
s32 func_00155190(void *, s32);
s32 func_0023DDA0(void *, s32, s32);
s32 func_00258958(s32);
s32 func_00155CE0();
s32 func_001EA4B0(s32, s32);
s32 func_001EA940(s32);
s32 func_001C3D18(void *, s32, s32);
s32 func_0024E400();
s32 func_00261528(s32, s32, f32, f32);
s32 func_00261580(s32, s32, f32);
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

void func_001E82E0(s32 arg0, s32 arg1) {
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

void func_001E8418(void) {
    func_001E82E0(1, 0xFFFF);
}

void func_001E84B8(void) {
    func_00165DF0();
    D_0047937C = 1;
}

void func_001E84E0(void) {
    func_00165FC0();
    D_0047937C = 1;
}

void func_001E8A18(void) {
    func_00168CC0();
}

void func_001E8B18(s32 arg0, s32 arg1) {
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

void func_001E8C50(void) {
    func_001E8B18(1, 0xFFFF);
}

void func_001E8CF0(s32 arg0) {
    func_001F3BF8();
    func_001F4670(arg0, 1);
}

void func_001E8D20(s32 arg0) {
    func_001F3C48();
    func_001E8E60(arg0, 1);
}

void func_001E8D50(s32 arg0) {
    func_001F3C80();
    func_001E8E60(arg0, -1);
}

void func_001E8E08(s32 arg0, s32 arg1) {
    func_00169C90(func_00169BF8(0x20), arg1, 1);
}

void func_001E91D8(s32 arg0, s32 arg1) {
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

void func_001E9310(void) {
    func_001E91D8(1, 0xFFFF);
}

void func_001E9438(s32 arg0) {
    func_00152448();
    func_001C8970(arg0, 0x31, &D_00346650, 0);
}

void func_001E9478(char *self)
{
    func_00152488();
    func_00258958((s32)(self + 0x1480));
    func_00258958((s32)(self + 0x1530));
    func_00258958((s32)(self + 0x15E0));
    func_00155190(self, 0x2E);
    *(s32 *)(self + 0x1190) = func_0023DDA0(self, 0x22, 1);
}

s32 func_001EA060(void* p)
{
	return *(s32*)((char*)p + 0x1470) == 1;
}

void func_001EA178(s32 arg0) {
    func_00155CE0();
    s32 r = func_001EA940(arg0);
    func_001EA4B0(arg0, r != 0 ? 2 : -1);
}

s32 func_001EA1B8(char* self)
{
    s32 value = *(s32*)(self + 0x1470);
    if (value < 4) {
        if (value >= 0) return 1;
    }
    return 0;
}

void func_001EA398(char *self, s32 b, s32 c)
{
    func_0024E400();
    if (*(s32 *)(self + 0x1470) == 6) {
        func_001C3D18(self + 0xE40, b, c);
    }
}

void func_001EA9A8(void* self)
{
    *(int*)((char*)self + 0x16EC) = 1;
}

void func_001EB300(char* self)
{
    s32 a = *(s32*)(self + 0x16f8);
    if (a != 0) {
        func_00261528(a, 0x3CA, (f32) *(s32*)(self + 0x16e4), (f32) *(s32*)(self + 0x16e8));
    }
}

void func_001EB340(char* self)
{
    s32 v = *(s32*)(self + 0x16FC);
    if (v != 0) {
        func_00261580(v, 0x37C, *(f32*)(self + 0x1700));
    }
}

void func_001EB370(s32 arg0, s32 arg1) {
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

void func_001EB4A8(void) {
    func_001EB370(1, 0xFFFF);
}
