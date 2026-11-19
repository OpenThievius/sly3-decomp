// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00258010(s32, s32);
s32 func_0011FB88(s32);
s32 func_0011E118(s32 *);
extern s32 D_0047A2E0;
s32 func_0011E1F0(s32 *, s32);
void func_00259890(s32,s32);
s32 func_00259A08();
s32 func_00259D80();
void func_0025A048(s32,s32);
void func_0025A4D0(s32,s32);
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

void func_00258910(void) {
    func_00258010(1, 0xFFFF);
}

void func_00258930(void* self, s32 a, s32 b)
{
    *(s32*)((char*)self + 0x0) = a;
    *(s32*)((char*)self + 0x90) = b;
    *(float*)((char*)self + 0x98) = 1.0f;
    *(float*)((char*)self + 0x94) = 0.6f;
}

void func_00258F28(void* self)
{
    *(int*)((char*)self + 0xa0) = 0;
    *(int*)((char*)self + 0x9c) = 0;
}

void func_002591E8(s32 arg0) {
    func_0011FB88(arg0 + 0x70);
}

void func_002592A0(void* pobject)
{
    *(int*)((char*)pobject + 0x100) = 0;
}

void func_00259590(void) {
    func_0011E118(&D_0047A2E0);
}

void func_002595B0(s32 arg0) {
    func_0011E1F0(&D_0047A2E0, arg0);
}

s32 func_00259628(void* p)
{
    return *(s32*)((char*)p + 0x24) == 0;
}

void func_00259890(s32 arg0, s32 arg1) {
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

void func_002599C8(void) {
    func_00259890(1, 0xFFFF);
}

void func_002599E8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00259A08();
}

s32 func_00259D50(void* self)
{
    s32 v = *(s32*)((char*)self + 0xC) - 1;
    *(s32*)((char*)self + 0xC) = v;
    return v;
}

void func_00259D60(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00259D80();
}

void func_0025A030(void* self, s32 value)
{
    *(s32*)((char*)self + 0xC) = value;
}

void func_0025A048(s32 arg0, s32 arg1) {
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

void func_0025A180(void) {
    func_0025A048(1, 0xFFFF);
}

void func_0025A4D0(s32 arg0, s32 arg1) {
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

void func_0025A608(void) {
    func_0025A4D0(1, 0xFFFF);
}

struct S_259 { u8 pad[4]; s32 f4; u8 pad2[4]; s32 fC; };

extern void func_00259CA8(void* self, s32 state);

extern void func_001D2818(void* self);

extern void func_0025A400(void* self);

extern u8 D_00475480[];

struct S_1EE9 { void* f0; void* f4; char pad[0x18]; };

extern f32 D_003212DC;

extern s32 func_0013B500(void* a0, s32 a1);

extern void func_001F48F8(void* a0);

extern s32 func_001F4430(void* a0);

extern void func_001F4438(void* a0, s32 a1);

extern s32 func_001F43C8(void* a0);

extern s32 func_001F43D0(void* a0, s32 a1);

extern s32 func_0023E178(void* a0, void* a1);

extern void func_001F4A80(void* a0);

extern void func_00165B28(void* a0);

extern s32 func_0025CDD0(void* a0, void* a1);

extern s32 func_0025CEC8(void* a0, void* a1);

extern s32 func_0013CD00(s32 a0, s32 a1);

s32 func_00259B78(void* a0, void* a1) ;

void func_00259A08(S_259* self) { self->f4 = -1; func_00259CA8(self, 0); self->fC = 0; }

s32 func_00259B78(void* a0, void* a1) { if ((*(u64*)((char*)a1 + 0x18) & 0x10000) != 0 && func_0013B500(*(void**)((char*)a1 + 4), 0x65) != 0) { return 1; } return func_0025CEC8(a0, a1); }

void func_00259D10(S_259* self) { if (self->fC == 0) { func_00259CA8(self, 0); } self->fC = self->fC + 1; }

void func_0025A288(u8* self, s32 arg) { func_0025A400(self); if (arg & 1) func_001D2818(self); }
