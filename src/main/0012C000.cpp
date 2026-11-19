// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0012BED0(s32, s32);
void func_0012C4F8(s32,s32);
void func_0012C8E8(s32,s32);
extern s32 D_0036B158;
s32 func_0012CAD8(s32, s32);
void func_0012CE38(s32,s32);
s32 func_00118DA0(s32, s32, s32);
s32 func_00117B98(s32, s32, s32, s32);
extern s32 D_0036B238;
s32 func_0011E118(s32 *);
extern s32 D_004799D0;
s32 func_0011E1F0(s32 *, s32);
s32 func_001D2898(s32, s32, s32);
f32 func_00119260(s32);
s32 func_0028B1B0(s32, s32);
s32 func_0028F068(s32, s32, s32);
s32 func_0012F448();
s32 func_0028ECE0(s32, s32, void *);
s32 func_0028EDC8(s32, s32, void *);
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
s32 func_0011E210(s32 *);
s32 func_002BB928();
s32 func_002BB998();
s32 func_002BBA08();
s32 func_002BBA78();
s32 func_002BBAE8();
s32 func_002BBB58();
extern s32 D_004D2F28;
extern s32 D_004D2F40;
extern s32 D_004D2F58;
extern s32 D_004D2F70;
extern s32 D_004D2F88;

void func_0012C0E8(void) {
    func_0012BED0(1, 0xFFFF);
}

void func_0012C4F8(s32 arg0, s32 arg1) {
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

void func_0012C630(void) {
    func_0012C4F8(1, 0xFFFF);
}

void func_0012C8E8(s32 arg0, s32 arg1) {
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

void func_0012CA20(void) {
    func_0012C8E8(1, 0xFFFF);
}

void func_0012CA40(void) {
    D_0036B158 = 1;
}

void func_0012CA50(void) {
    D_0036B158 = 0;
    func_002BB928();
    func_002BB998();
    func_002BBA08();
    func_002BBA78();
    func_002BBAE8();
    func_002BBB58();
    func_0011E210(&D_004D2F28);
    func_0011E210(&D_004D2F40);
    func_0011E210(&D_004D2F58);
    func_0011E210(&D_004D2F70);
    func_0011E210(&D_004D2F88);
}

void func_0012CCF0(void) {
    func_0012CAD8(1, 0xFFFF);
}

void func_0012CE38(s32 arg0, s32 arg1) {
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

void func_0012CF70(void) {
    func_0012CE38(1, 0xFFFF);
}

void func_0012D218(s32 arg0, s32 arg1) {
    func_00118DA0(arg1, 0xC, arg0 + 4);
}

void func_0012D2B0(s32 arg0, s32 arg1, s32 *arg2) {
    if (arg1 != 0) {
        func_001D2898(arg1, arg0 + 4, 12);
    }
    if (arg2 != 0) {
        arg2[2] = 0;
        arg2[1] = 0;
        arg2[0] = 0;
    }
}

void func_0012D300(s32 arg0, s32 arg1) {
    func_00117B98(arg1, arg0, 4, 0xC);
}

void func_0012D8E0(s32 unused, s32 a, s32 b)
{
    func_00117B98(a, b + 12, 4, 14);
}

void func_0012DEA8(void* self, s32 a, s32 b)
{
    func_00117B98(a, b + 0xC, 4, 0xF);
}

void func_0012E080(s32 arg0, s32 arg1) {
    func_00117B98(arg1, arg0, 4, 0xD);
}

void func_0012E7B8(void* self, s32 a1, s32 a2)
{
    func_00117B98(a1, a2 + 10, 4, 16);
}

void func_0012EED8(s32 unused, s32 a, s32 b)
{
    func_00117B98(a, b + 10, 4, 0x11);
}

void func_0012EF00(s32 arg0, s32 arg1) {
    func_00117B98(arg1, arg0, 4, D_0036B238);
}

void func_0012EFE0(void* self, s32 value)
{
    *(f32*)((char*)self + 4) = func_00119260(value);
}

void func_0012F240(void) {
    func_0011E118(&D_004799D0);
}

void func_0012F260(s32 arg0) {
    func_0011E1F0(&D_004799D0, arg0);
}

void func_0012F288(char *self)
{
    func_0028F068(*(s32 *)(self + 4), *(s32 *)(self + 8), *(s32 *)(self + 0x14));
    func_0028B1B0(*(s32 *)(self + 4), *(s32 *)(self + 8));
}

void func_0012F2C8(void) {

}

void func_0012F310(void) {

}

void func_0012F318(void) {

}

void func_0012F3D0(char *self)
{
    if (func_0012F448() == 0) {
        func_0028ECE0(*(s32 *)(self + 4), *(s32 *)(self + 8), self);
    }
}

void func_0012F410(void *pgoal)
{
    if (func_0012F448() != 0) {
        func_0028EDC8(*(s32 *)((char *)pgoal + 4), *(s32 *)((char *)pgoal + 8), pgoal);
    }
}

void func_0012F6B0(void* pobject)
{
    *(int*)((char*)pobject + 0x70) = 0;
}


typedef long long v2l __attribute__((vector_size(16)));

void func_0012F4C8(u8* a, u8* b, u8* c) { if (b) *(v2l*)b = *(v2l*)(a+0x20); if (c) { *(s32*)(c+8)=0; *(s32*)(c+4)=0; *(s32*)(c+0)=0; } }
