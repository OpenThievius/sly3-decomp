// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00271B20(s32, s32);
void func_002719C8(s32,s32);
void func_00271CE0(s32,s32);
void func_002738C0(s32,s32);
s32 func_0011AF60(s32 *, s32);
s32 func_001C85E8();
extern s32 D_00479370;
s32 func_002718D8(s32);
s32 func_0013B500(s32, s32);
s32 func_0025CDD0(s32, void *);
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
s32 func_00147E08(s32, s32, s32, void *, s32, s32, s32, void *);

struct S_00271C10 { s32 f0; s32 f4; s32 f8; };
extern void func_002936C0(u8* a0);
struct B_271B20 { u8 pad[4]; s32 x4; s32 x8; u8 pad2[0xC]; };
typedef struct S { u32 f0; void* f4; void* f8; } S;
typedef struct B { char p[0xD8]; u32 fD8; char q[4]; void* fE0; } B;
extern void func_00292034(void*, s32, s32);
extern void func_002936A0(u8*);
extern void func_001D2898(void* dst, void* src, u32 n);
extern int func_002715F8(char* s);
extern int func_00271700(u16* s);
char* func_00271670(char* dst, char* src) ;
u16* func_00271780(u16* dst, u16* src) ;
void* func_00271628(void* a0, char* a1) ;
void* func_00271730(void* a0, u16* a1) ;
void func_00271C10(S_00271C10* a0);
s32 func_00271928(s32 value)
{
    s32 result = 0;
    s32 masked = value & 0xFFFF;
    if (func_002718D8(masked) != 0 || masked == 0x2D) {
        result = 1;
    }
    return result;
}

void func_002719C8(s32 arg0, s32 arg1) {
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

void func_00271B00(void) {
    func_002719C8(1, 0xFFFF);
}

void func_00271B80(s32 *arg0)
{
    arg0[1] = -1;
    arg0[2] = func_00271B20(1, 1);
}

void func_00271CE0(s32 arg0, s32 arg1) {
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

void func_00271E18(void) {
    func_00271CE0(1, 0xFFFF);
}

void func_00271EE8(char *self)
{
    func_00147E08(*(s32 *)self, 0xC, 2, self + 0x40, 0, 0, 0, self + 0x58);
    func_00147E08(*(s32 *)self, 0xC, 4, self + 0x68, 0, 0, 0, self + 0x98);
    func_00147E08(*(s32 *)self, 0xC, 2, self + 0xA4, 0, 0, 0, self + 0xBC);
}

s32 func_002725D0(s32 arg0, char *arg1) {
    if (func_0013B500(*(s32 *)(arg1 + 4), 0x65) != 0) {
        return 1;
    }
    return func_0025CDD0(arg0, arg1);
}

void func_002738C0(s32 arg0, s32 arg1) {
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

void func_002739F8(void) {
    func_002738C0(1, 0xFFFF);
}

void func_00273CC0(s32 arg0) {
    func_001C85E8();
    func_0011AF60(&D_00479370, arg0);
}


void* func_00271628(void* a0, char* a1) { int n = func_002715F8(a1) + 1; func_001D2898(a0, a1, n); return a0; }
char* func_00271670(char* dst, char* src) { int n1 = func_002715F8(dst); int n2 = func_002715F8(src); func_001D2898(dst + n1, src, n2 + 1); return dst; }
void* func_00271730(void* a0, u16* a1) { int n = (func_00271700(a1) + 1) * 2; func_001D2898(a0, a1, n); return a0; }
u16* func_00271780(u16* dst, u16* src) { int n1 = func_00271700(dst); int n2 = func_00271700(src); func_001D2898((char*)dst + n1 * 2, src, (n2 + 1) * 2); return dst; }
void func_00271C10(S_00271C10* a0) { if (--a0->f0 == 0) { a0->f4 = -1; func_002936C0((u8*)a0->f8); } }
