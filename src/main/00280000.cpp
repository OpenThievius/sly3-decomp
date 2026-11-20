// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0025D350(s32 *, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00475480;
s32 func_001858D0(s32 *, s32, s32, s32, s32, s32);
extern s32 D_0036C700;
void func_002802D8(s32,s32);
s32 func_0013BEC0();
s32 func_0023E290();
s32 func_0011E118(s32);
s32 func_00240850();
void func_00281978(s32,s32);
void func_00282F78(s32,s32);
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
s32 func_0023AE08();

struct State_283620 { u8 pad[0x9C]; f32 x9C; f32 xA0; };
extern void func_00271448(u8*, u8*, s32);
extern void func_00271448(u8*, u8*, u8*, u8*, s32);
extern void func_00271448(u8*, u8*, s32, s32);
extern void func_00271448(u8*, u8*, void*);
extern f32 func_002A4188(f32, f32);
extern void func_00271448(u8*, u8*, u8*, u8*);
extern void func_00271448(u8*, u8*, s32, s32, s32);
extern u8 D_003295C0[];
extern u8 D_003295C8[];
extern f32 func_0011ED10(f32);
extern void* func_0017E1B8(void*, s32, s32, u8*);
extern void func_001C7DC8(void*);
extern void func_0011AD80(void*, u8*);
extern void func_00283278(s32, s32, s32, s32, s32, s32);
extern void func_00280270(s32, s32);
extern void func_002B8670(void*);
extern u8 D_00350960[];
void func_002832C0(s32 p0, s32 p1, s32 p2, s32 p3);
void func_00283228(u8* a);
void func_002832E8(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4);
void func_002802B8(s32 p0);
void func_00283310(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4);
u8* func_00283740(u8* a);
void func_00280298(s32 p0);
void func_00283620(State_283620* a0, u8* a1, f32 f);
void func_002801C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg1 != 0) {
        func_0025D350(&D_00475480, arg0 + 0xD4, 4, arg0 + 0xD0, arg1, arg2, arg3, arg4);
    }
}

void func_00280208(s32 arg0, s32 arg1, s32 arg2) {
    func_001858D0(&D_0036C700, arg0 + 0x118, 4, arg0 + 0x114, arg1, arg2);
}

void func_00280240(void* p, s32 a, s32 b)
{
    u32 n = *(u32*)((char*)p + 0x138);
    if (n < 4U) {
        *(u32*)((char*)p + 0x138) = n + 1;
        u32* p32 = (u32*)((char*)p + ((n * 8) + 0x13C));
        p32[0] = a;
        p32[1] = b;
    }
}

void func_00280270(char *self, s32 value) { u32 count = *(u32 *)(self + 0x15C); if (count < 4) { *(u32 *)(self + (count << 2) + 0x160) = value; *(u32 *)(self + 0x15C) = count + 1; } }

void func_002802D8(s32 arg0, s32 arg1) {
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

void func_00280410(void) {
    func_002802D8(1, 0xFFFF);
}

void func_00280430(char *self)
{
    s32 flags = func_0023AE08();
    s32 a3 = *(s32 *)(self + 0x3C);
    *(s32 *)(self + 0x15C) = 1;
    *(s32 *)(self + 0x160) = 0x2000;
    *(s32 *)(self + 0x164) = 10;
    *(s32 *)(self + 0x16C) = 0x13;
    if ((a3 ^ 1) & 1) {
        *(s32 *)a3 |= 2;
    } else {
        *(s32 *)(self + 0x3C) = a3 | 2;
    }
}

void func_00280E88(void) {
    func_0013BEC0();
}

void func_00281138(void) {
    func_0023E290();
}

void func_00281158(s32 arg0) {
    func_0011E118(arg0 + 0x48F4);
}

void func_002812A8(void) {

}

void func_00281868(void) {
    func_00240850();
}

void func_00281928(void* self, s32 value)
{
    *(s32*)((char*)self + 0x164) = value;
}

void func_00281978(s32 arg0, s32 arg1) {
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

void func_00281AB0(void) {
    func_00281978(1, 0xFFFF);
}

void func_00282F68(void* self, s32 value, f32 x)
{
    *(s32*)((char*)self + 0x1A4) = value;
    *(f32*)((char*)self + 0x1A8) = x;
}

void func_00282F78(s32 arg0, s32 arg1) {
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

void func_002830B0(void) {
    func_00282F78(1, 0xFFFF);
}

void func_002834D8(void* out, f32 x)
{
    f32 one = 1.0f;
    *(f32*)((char*)out + 0x84) = 0.0f;
    *(f32*)((char*)out + 0x9C) = x;
    *(f32*)((char*)out + 0x78) = one;
    *(f32*)((char*)out + 0x7C) = -1.0f / x;
}

void func_00283790(void* p)
{
    *(int*)((char*)p + 0x14) = 0;
    *(int*)((char*)p + 0x18) = 0;
}


void func_00280298(s32 p0) { func_00280270(p0, 0x1A8); }
void func_002802B8(s32 p0) { func_00280270(p0, 0x1A9); }
void func_00283228(u8* a) { func_001C7DC8(a); void* p = func_0017E1B8((u8*)&D_00475480, 5, *(s32*)(a+0x48), 0); if (p != 0) func_0011AD80((u8*)p+0x8C, a); }
void func_002832C0(s32 p0, s32 p1, s32 p2, s32 p3) { func_00283278(p0, p1, -0x1, -0x1, p2, p3); }
void func_002832E8(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4) { func_00283278(p0, p1, p2, -0x1, p3, p4); }
void func_00283310(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4) { func_00283278(p0, p1, -0x1, p2, p3, p4); }
void func_00283620(State_283620* a0, u8* a1, f32 f) { if (a0->xA0 != 0.0f) { s32 n = (s32)(f * 1000.0f + 0.5f); func_00271448(a1, D_003295C0, n); } else if (a0->x9C != 0.0f) { f32 g = a0->x9C; f32 h = (1.0f - f) * g; f32 r1 = func_002A4188(h, 3600.0f); s32 n1 = (s32)(r1 * 0.01666666753590107f); f32 r2 = func_002A4188(h, 60.0f); s32 n2 = (s32)r2; f32 r3 = func_0011ED10(h); s32 n3 = (s32)((h - r3) * 100.0f); func_00271448(a1, D_003295C8, n1, n2, n3); } }
u8* func_00283740(u8* a) { func_002B8670(a); *(s32*)(a+0x10) = -1; *(void**)(a+0xC) = &D_00350960; *(s32*)(a+0x34) = -1; *(s32*)(a+0x7CC8) = -1; *(s32*)(a+0x7CCC) = -1; *(s32*)(a+0x7CD0) = -1; return a; }
