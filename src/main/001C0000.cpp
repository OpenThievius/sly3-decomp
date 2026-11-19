// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001BFFD8(s32, s32);
void func_001C0218(s32,s32);
s32 func_0011AF60(s32 *, s32 *);
extern s32 D_00479BC8;
void func_001C12B8(s32,s32);
void func_001C1EC0(s32,s32);
s32 func_001C0538(s32, s32);
s32 func_001C21F0(s32 *, s32);
s32 func_001F43C8(s32);
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

void func_001C0110(void) {
    func_001BFFD8(1, 0xFFFF);
}

void func_001C0218(s32 arg0, s32 arg1) {
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

void func_001C0350(void) {
    func_001C0218(1, 0xFFFF);
}

void func_001C0370(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0011AF60(&D_00479BC8, arg0);
}

void func_001C12B0(void* self)
{
    *(int*)((char*)self + 4) = 0;
}

void func_001C12B8(s32 arg0, s32 arg1) {
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

void func_001C13F0(void) {
    func_001C12B8(1, 0xFFFF);
}

void func_001C1EC0(s32 arg0, s32 arg1) {
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

void func_001C1FF8(void) {
    func_001C1EC0(1, 0xFFFF);
}

s32 func_001C21D0(void* self, s32 index)
{
    return (*(s32*)((char*)self + (index << 4) + 0x2C));
}

s32 func_001C21E0(s32 base, s32 index)
{
    return *(s32 *)(base + ((index << 4) + 0x34));
}

void func_001C2FE8(s32 *arg0) {
    func_001C0538(*arg0, 0);
}

void func_001C3AE8(s32 *arg0) {
    if (func_001F43C8(*arg0) > 0) {
        func_001C21F0(arg0, 0);
        return;
    }
    func_001C21F0(arg0, 9);
}

void func_001C3CD0(s32 *arg0) {
    if (func_001F43C8(*arg0) > 0) {
        func_001C21F0(arg0, 7);
        return;
    }
    func_001C21F0(arg0, 9);
}


struct State_F43F8 { u8 pad0[0x16C]; s32 x16C; s32 x170; };

struct List_C0370 { s32 x0; s32 x4; s32 x8; };

struct Obj_1495F8 { u8 pad[0x108C]; void* f108C; };

struct Obj_15CF38 { u8 pad[0x28]; u64 flags; };

struct List_15AE18 { s32 x0, x4, x8, xC; };

struct Obj_15AE18 { u8 pad[0x3DE8]; List_15AE18 list; };

struct List_15B728 { s32 x0, x4, x8, xC; };

struct Obj_15B728 { u8 pad[0x3E50]; List_15B728 list; };

struct Node_23DCA0 { u8 pad[0x70]; u64 flags; };

struct Self_23DCA0 { u8 pad[0xDC]; Node_23DCA0* node; };

extern void func_001F43D0(u8*, s32);

extern s32 func_001F4430(u8*);

extern void func_001F4438(u8*, s32);

extern void func_001F48A0(u8*, s32, s32);

extern void func_001F48F8();

extern s32 func_0019B6E0(u8*, u8*);

extern void func_0019DC10(u8*, s32);

extern s32 func_0013B500(u8*, s32);

extern u8 D_0036C668[];

extern u8 D_00479BBC[];

extern u8 D_00479944[];

extern u8 D_00479950[];

void func_001C3AE8(u8* self) ;

void func_001C3CD0(u8* self) ;

struct P { u64 x; } __attribute__((packed));

void func_001C2E58(u8* a, P v) { *(P*)(a+0xC) = v; }
