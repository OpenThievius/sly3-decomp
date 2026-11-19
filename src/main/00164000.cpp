// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_001648B8(s32 a, s32 b);
s32 func_00289198(s32 *, s32, s32, s32 *);
extern s32 D_00468D30;
extern s32 D_00475480;
void func_00164760(s32,s32);
void func_00165200(s32,s32);
void func_001655F0(s32,s32);
u32 func_00165B48(s32 *, s32);
s32 func_00165570(void *);
s32 func_001679E0();
s32 func_0013B500(s32, s32);
s32 func_0013BC80(s32);
s32 func_001F4AD0(s32 *, s32);
s32 func_0025E150();
extern s32 D_0046F568;
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

void func_00164170(s32 arg0) {
    func_00289198(&D_00475480, arg0, 0, &D_00468D30);
}

void func_001641A0(s32 *arg0) {
    *arg0 = 1;
}

void func_001641B0(void) {
    s32 temp_v0;

    if (func_0025E150() == 0x15) {
        if (D_0046F568 != -1) {
            temp_v0 = func_001F4AD0(&D_00475480, D_0046F568);
            if ((temp_v0 != 0) && (func_0013B500(temp_v0, 0x52) != 0)) {
                func_0013BC80(temp_v0);
            }
        }
    }
}

void func_00164760(s32 arg0, s32 arg1) {
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

void func_00164898(void) {
    func_00164760(1, 0xFFFF);
}

void func_001648B8(s32 arg0, s32 arg1) {
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

void func_001649F0()
{
    func_001648B8(1, 0xFFFF);
}

void func_00165200(s32 arg0, s32 arg1) {
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

void func_00165338(void) {
    func_00165200(1, 0xFFFF);
}

void func_00165548(void *self, s32 index, f32 value)
{
    *(f32 *)((char *)self + (index << 2) + 0x18) = value;
    func_00165570(self);
}

void func_001655F0(s32 arg0, s32 arg1) {
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

void func_00165728(void) {
    func_001655F0(1, 0xFFFF);
}

s32 func_00165B28(char* p)
{
    s32* q = *(s32**)(p + 0x3EB8);
    if (q == 0) {
        return 0;
    }
    return *(s32*)(p + 0x3EBC);
}

u32 func_00165DC8(s32 arg0) {
    return func_00165B48(&D_00475480, arg0) >> 0x1F;
}

s32 func_001662A8(void* p)
{
    s32 v = 0;
    s32 x = *(s32*)((char*)p + 0xE8);
    if (x > 0)
        v = *(s32*)((char*)p + 0xEC);
    return v;
}

s32 func_00166540(void* self)
{
    return *(s32*)((char*)self + 0xE0);
}

void func_001667F8(void* self)
{
    *(int*)((char*)self + 0x2A0) = -1;
}

void func_00166DC8(char* self, char* other)
{
    if (other != *(char**)(self + 0x108)) {
        *(char**)(self + 0x108) = other;
        *(char**)(self + 0x10C) = *(char**)(other + 0xD0);
    }
}

s32 func_00167578(void* self, void* obj)
{
    return *(s32*)((char*)obj + 0x80) > 0;
}

void func_001679C8(char* self, f32 value)
{
    char* p = *(char**)(self + 0x300);
    *(f32*)(self + 0x11C) = value;
    if (p != 0) {
        *(f32*)(p + 0x14) = value;
    }
}

void func_00167A10(void* pgoal, f32 fp)
{
    func_001679E0();
    s32* pobj = *(s32**)((char*)pgoal + 0x300);
    if (pobj != 0) {
        *(f32*)((char*)pobj + 0x18) = fp;
    }
}

typedef long long v2l __attribute__((vector_size(16)));

extern void func_00290078(void*);

extern void func_0028EC08(void*, s32, s32, void*);

extern void func_00167BF0(void*, s32, s32, s32, s32);

extern void func_00167AB0(void*, s32, s32, s32, s32);

extern f32 D_0036BB98;

void func_001641B0(void* a0) ;

void func_00166DE8(u8* s, u8* arg1) { v2l buf[4]; func_0028EC08(buf, 0, *(s32*)(s+0x40), arg1); *(v2l*)(s+0x50)=buf[0]; *(v2l*)(s+0x60)=buf[1]; *(v2l*)(s+0x70)=buf[2]; *(v2l*)(s+0x80)=buf[3]; func_00290078(s); }

void func_00167B78(u8* a, s32 b) { func_00167AB0(a, *(s32*)(a+0x160), b, *(s32*)(a+0x168), *(s32*)(a+0x16C)); }

void func_00167BA0(u8* a, s32 b) { func_00167AB0(a, *(s32*)(a+0x160), *(s32*)(a+0x164), b, *(s32*)(a+0x16C)); }

void func_00167BC8(u8* a, s32 b) { func_00167AB0(a, *(s32*)(a+0x160), *(s32*)(a+0x164), *(s32*)(a+0x168), b); }

void func_00167CC0(u8* a, s32 b) { func_00167BF0(a, *(s32*)(a+0x150), b, *(s32*)(a+0x158), *(s32*)(a+0x15C)); }

void func_00167CE8(u8* a, s32 b) { func_00167BF0(a, *(s32*)(a+0x150), *(s32*)(a+0x154), b, *(s32*)(a+0x15C)); }

void func_00167D10(u8* a, s32 b) { func_00167BF0(a, *(s32*)(a+0x150), *(s32*)(a+0x154), *(s32*)(a+0x158), b); }

void func_00167D38(u8* a, s32 v) { *(f32*)((u8*)a + 0x35C) = D_0036BB98; *(s32*)((u8*)a + 0x360) = v; }
