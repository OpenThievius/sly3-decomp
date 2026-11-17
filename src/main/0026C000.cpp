// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001F4350(s32, s32);
s32 func_001F4548();
s32 func_0026CD30(s32, s32);
s32 func_00169BF8(s32);
s32 func_0026DE78(s32, s32, s32, s32);
s32 func_00166548(s32);
s32 func_00169E40();
s32 func_001C7A00(s32, s32, s32);
void func_0026DF78(s32,s32);
s32 func_001FC968();
s32 func_0026E150(s32);
void func_0026ED40(s32,s32);
void func_0026F818(s32,s32);
s32 func_0011AF60(s32 *, s32);
s32 func_001C85E8();
extern s32 D_00479AD8;
s32 func_0011B028(s32 *, s32);
s32 func_001C85C0();
void func_0026FA78(s32,s32);
s32 func_00137628(s32);
s32 func_001F3C80();
s32 func_0023E068();
s32 func_0026CBE8(s32, s32);
s32 func_001F43C8(s32);
s32 func_001F43D0(s32, s32);
s32 func_001F4430(s32);
s32 func_001F4438(s32, s32);
s32 func_001F48A0();
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

void func_0026C040(s32 arg0)
{
    func_001F3C80();
    func_00137628(arg0 + 0x2BC);
    func_00137628(arg0 + 0x2B8);
    func_00137628(arg0 + 0x2B4);
    func_00137628(arg0 + 0x2B0);
    *(s32*)(arg0 + 0x278) = 0;
}

void func_0026C8F8(s32 arg0) {
    func_001F4548();
    if (func_001F4350(arg0, -1) != 0) {
        func_0026CD30(arg0, 1);
        return;
    }
    func_0026CD30(arg0, 0);
}

void func_0026C948(s32 arg0, s32 arg1) {
    func_0026DE78(func_00169BF8(0x24), arg1, 9, arg0);
}

void func_0026CC38(char *arg0) {
    s32 temp_v0;

    func_0023E068();
    s32 a1 = *(s32 *)(arg0 + 0x1D0);
    if (a1 != 0) {
        temp_v0 = func_0026CBE8(*(s32 *)(*(char **)(arg0 + 0xDC) + 0x64), a1);
        *(s32 *)(arg0 + 0x1BC) = temp_v0;
    }
}

void func_0026CCC0(s32 arg0, s32 arg1, s32 arg2) {
    func_001F48A0();
    func_001F43D0(arg0, func_001F43C8(arg0) + arg1);
    func_001F4438(arg0, func_001F4430(arg0) + arg2);
}

void func_0026CD28(void* self, s32 value) { *((s32*)((char*)self + 0x278)) = value; }

void func_0026DF38(s32 *arg0) {
    func_00169E40();
    func_001C7A00(*arg0, 0, 0xF);
    func_00166548(*arg0);
}

void func_0026DF78(s32 arg0, s32 arg1) {
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

void func_0026E0B0(void) {
    func_0026DF78(1, 0xFFFF);
}

void func_0026E6C8(s32 arg0) {
    func_001FC968();
    func_0026E150(arg0);
}

void func_0026ED40(s32 arg0, s32 arg1) {
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

void func_0026EE78(void) {
    func_0026ED40(1, 0xFFFF);
}

void func_0026F818(s32 arg0, s32 arg1) {
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

void func_0026F950(void) {
    func_0026F818(1, 0xFFFF);
}

void func_0026FA08(s32 arg0) {
    func_001C85E8();
    func_0011AF60(&D_00479AD8, arg0);
}

void func_0026FA40(s32 arg0) {
    func_001C85C0();
    func_0011B028(&D_00479AD8, arg0);
}

void func_0026FA78(s32 arg0, s32 arg1) {
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

void func_0026FBB0(void) {
    func_0026FA78(1, 0xFFFF);
}
