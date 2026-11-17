// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_002491A0(s32,s32);
s32 func_0011AF60(s32 *, s32);
extern s32 D_00479AFC;
s32 func_0011B028(s32 *, s32);
s32 func_0015CE68(s32);
s32 func_001C81B8();
void func_002496D0(s32,s32);
void func_00249828(s32,s32);
void func_00249BA0(s32,s32);
void func_0024B420(s32,s32);
s32 func_0024B940(s32, s32);
s32 func_00290F00(s32);
s32 func_002BA9A8();
s32 func_002BAA50(void *, s32);
s32 func_002BE530(s32);
s32 func_0011E100(s32 *, s32, s32, s32);
s32 func_00246BB8(s32 *);
s32 func_002BF410(s32 *, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_00474FF0;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;
s32 func_0012C650(s32, s32, s32, s32);
s32 func_0013B540(void *);

void func_00248598(void* self, s32 a, s32 b)
{
    if (b != 0) {
        *(s32*)((char*)self + 0x68) |= a;
    } else {
        *(s32*)((char*)self + 0x68) &= ~a;
    }
}

s32 func_002485C0(void* p)
{
    return *(s32*)((char*)p + 0x68) == 3;
}

void func_002489E0(char* self, s32 value)
{
    if (*(s32*)(self + 0x104) != value) {
        *(s32*)(self + 0x104) = value;
        func_00290F00(value);
    }
}

s32 func_00248EC0(void* p)
{
    return ++*(s32*)((char*)p + 0x5C);
}

s32 func_00248ED0(void* p)
{
    s32 v = *(s32*)((char*)p + 0x5C) - 1;
    *(s32*)((char*)p + 0x5C) = v;
    return v;
}

s32 func_00248EE0(void* self)
{
    return ++*(s32*)((char*)self + 0x60);
}

s32 func_00248EF0(void* p)
{
    s32 v = *(s32*)((char*)p + 0x60) - 1;
    *(s32*)((char*)p + 0x60) = v;
    return v;
}

void func_002491A0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_00246BB8(&D_00474FF0);
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
        } else {
            func_002BF410(&D_00474FF0, 2);
        }
    }
}

void func_002492F8(void) {
    func_002491A0(1, 0xFFFF);
}

void func_00249318(void) {
    func_002491A0(0, 0xFFFF);
}

void func_00249468(s32 arg0) {
    func_0011AF60(&D_00479AFC, arg0);
}

void func_00249490(s32 arg0) {
    func_0011B028(&D_00479AFC, arg0);
}

void func_00249558(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xF8);
}

s32 func_002496C8(char* self)
{
    return *(s32*)(self + 0x120);
}

void func_002496D0(s32 arg0, s32 arg1) {
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

void func_00249808(void) {
    func_002496D0(1, 0xFFFF);
}

void func_00249828(s32 arg0, s32 arg1) {
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

void func_00249960(void) {
    func_00249828(1, 0xFFFF);
}

void func_00249980(char *self)
{
    *(s32 *)(self + 0x3F44) = 1;
    func_002BAA50(self, func_002BA9A8());
    func_002BE530(*(s32 *)self);
}

void func_002499C0(void* self)
{
    *(float*)((char*)self + 0x3F44) = 0.0f;
}

void func_00249BA0(s32 arg0, s32 arg1) {
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

void func_00249CD8(void) {
    func_00249BA0(1, 0xFFFF);
}

s32 func_0024AC98(s32 arg0, char *arg1, s32 arg2, s32 arg3) {
    void *temp_s0;

    func_0013B540(arg1);
    temp_s0 = (void *)arg1;
    func_0012C650(arg0, *(s32 *)((char *)temp_s0 + 4), arg2, arg3);
    return arg0;
}

void func_0024B420(s32 arg0, s32 arg1) {
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

void func_0024B558(void) {
    func_0024B420(1, 0xFFFF);
}

void func_0024BC50(void) {
    func_0024B940(1, 0xFFFF);
}
