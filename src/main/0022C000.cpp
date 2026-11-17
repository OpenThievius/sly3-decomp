// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_0022D5B0(s32,s32);
f32 func_0022DE50();
s32 func_0022E148(s32, s32, s32, f32);
s32 func_0022E380(s32, s32, s32, f32);
s32 func_0022F380(s32, f32);
s32 func_00152488();
s32 func_00155190(void *, s32);
s32 func_0023DDA0(void *, s32, s32);
s32 func_00258958(s32);
s32 func_001C3D18(void *, s32, s32);
s32 func_0024E400();
s32 func_0028FD70();
s32 func_0022E5B0();
s32 func_0022E938();
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

void func_0022C030(s32 arg0, s32 arg1) {
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

void func_0022C168(void) {
    func_0022C030(1, 0xFFFF);
}

void func_0022C2B0(void *self)
{
    func_00152488();
    func_00258958((s32)self + 0x1480);
    func_00258958((s32)self + 0x1530);
    func_00155190(self, 0x2E);
    *(s32 *)((char *)self + 0x1190) = func_0023DDA0(self, 0x22, 1);
}

s32 func_0022D018(void* p)
{
    s32 v = *(s32*)((char*)p + 0x1470);
    return (v == 1);
}

s32 func_0022D1D0(char* self)
{
	s32 v = *(s32*)(self + 0x1470);
	if (v < 3) {
		if (v >= 0) {
			return 1;
		}
	}
	return 0;
}

void func_0022D488(char *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    func_0024E400();
    temp_v1 = *(s32 *)(arg0 + 0x1470);
    if (temp_v1 == 5) {
        func_001C3D18(arg0 + 0xE40, arg1, arg2);
    }
}

void func_0022D5B0(s32 arg0, s32 arg1) {
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

void func_0022D6E8(void) {
    func_0022D5B0(1, 0xFFFF);
}

void func_0022D708(char* self)
{
    func_0028FD70();
    *(s32*)(self+0x138)=-1;
    *(s32*)(self+0x168)=1;
}

void func_0022DCB8(void* self)
{
    *(int*)((char*)self + 0x138) = -1;
    *(int*)((char*)self + 0x168) = 0;
}

f32 func_0022DFA0(void* p)
{
    f32* s = *(f32**)((char*)p + 0xDC);
    return *s;
}

f32 func_0022DFB0(void* p)
{
    f32* q = *(f32**)((char*)p + 0xE0);
    return *q;
}

void func_0022E330(s32 arg0, s32 arg1, s32 arg2) {
    func_0022E148(arg0, arg1, arg2, func_0022DE50());
}

void func_0022E4D0(s32 arg0, s32 arg1, s32 arg2) {
    func_0022E380(arg0, arg1, arg2, func_0022DE50());
}

s32 func_0022EA50(void* pgoal)
{
    if (*(s32*)((char*)pgoal + 0xd0) != 0) {
        return func_0022E938();
    }
    return func_0022E5B0();
}

void func_0022F350(s32 arg0) {
    func_0022F380(arg0, func_0022DE50());
}

s32 func_0022FC08(char* self) { s32 value = -1; char* p = *(char**)(self + 0x16C); if (p != 0) { value = *(s32*)(p + 0x4C); } return value; }
