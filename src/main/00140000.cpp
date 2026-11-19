// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_00140F00(s32,s32);
s32 func_0011AF60(s32 *, s32);
s32 func_0023BAB8();
extern s32 D_00479BD4;
s32 func_0011B028(s32 *, s32);
s32 func_0023BBE0();
s32 func_00142848(s32);
s32 func_001F3C48();
s32 func_00162678(s32);
s32 func_0023CC40();
s32 func_001473A0(s32, s32, s32, s32);
s32 func_00169BF8(s32);
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

void func_001407A8(void* self, s32 value)
{
    *(s32*)((char*)self + 0x10) = value;
    *(s32*)((char*)self + 0x14) = -1;
}

void func_00140BE8(void* unused, void* a1)
{
    *(int*)((char*)a1 + 0x94) = 0;
}

void func_00140F00(s32 arg0, s32 arg1) {
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

void func_00141038(void) {
    func_00140F00(1, 0xFFFF);
}

void func_00141298(s32 arg0) {
    func_0023BAB8();
    func_0011AF60(&D_00479BD4, arg0);
}

void func_001412D0(s32 arg0) {
    func_0023BBE0();
    func_0011B028(&D_00479BD4, arg0);
}

void func_001414D0(s32 arg0) {
    func_001F3C48();
    func_00142848(arg0);
}

void func_001417E0(s32 arg0) {
    func_0023CC40();
    func_00162678(arg0 + 0x450);
}

void func_00141F38(s32 arg0, s32 arg1) {
    func_001473A0(func_00169BF8(0x50), arg1, 7, arg0);
}

extern u8 D_00475480[];

struct S_1EE9 { void* f0; void* f4; char pad[0x18]; };

struct S_27CC70 { u8 pad0[0x1E0]; void* field1E0; };

struct Q_141308 { u64 x; } __attribute__((packed));

struct Q_213E90 { u64 x; } __attribute__((packed));

typedef void (*Fn_1F66D8)(u8*, s32, u8*);

extern u8 D_0031FF90[];

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

extern void func_0023F400(void* a0, s32 a1);

extern void func_0014D1F0(void* a0, void* a1);

extern void func_00238500(void* a0, void* a1);

extern s32 func_001D24D0(void* buf, s32 src);

void func_00141810(void* a0, void* a1) ;

void func_00141308(u8* self, s32 a1) ;

void* func_00140618() { return &D_0031FF90; }

void func_00141308(u8* self, s32 a1) { Q_141308 tmp = *(Q_141308*)(self + 0x41C); func_0023F400(self, a1); *(Q_141308*)(self + 0x41C) = tmp; }

void func_00141810(void* a0, void* a1) { func_001F48F8(a0); if (func_0013B500(a1, 0x6B) == 0) return; s32 r = func_001F4430(a0); func_001F4438(a0, r + *(s32*)((char*)a1 + 0x1A8)); }

s32 func_00141F20(u8* a) { s32 r = 2; if ((*(s32*)(a+0x2B0) ^ 5) != 0) r = 0; return r; }
