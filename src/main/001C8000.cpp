// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0025D708(s32 *, s32);
extern s32 D_00475480;
s32 func_0025D5E8(s32 *, s32);
s32 func_0011E118(s32 *);
extern s32 D_00479DF0;
s32 func_0011E1F0(s32 *, s32);
void func_001C9A98(s32,s32);
void func_001CB080(s32,s32);
void func_001CB758(s32,s32);
s32 func_001CAB30();
extern f32 D_0036BB98;
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
s32 func_00293920(s32);
s32 func_0029FD20(s32 *, s32 *);
s32 func_0029FDE8(s32 *, s32, s32);
extern s32 D_002C0250;
extern s32 *D_0036BD38;
extern s32 D_002C45C0;
extern s32 *D_0036BD3C;

void func_001C8238(void) {

}

void func_001C8240(void) {

}

void func_001C8580(void) {

}

void func_001C8588(void) {

}

void func_001C85A0(void) {

}

void func_001C85B8(void) {

}

void func_001C85C0(s32 arg0) {
    func_0025D708(&D_00475480, arg0);
}

void func_001C85E8(s32 arg0) {
    func_0025D5E8(&D_00475480, arg0);
}

void func_001C9288(s8* self, s8 value)
{
    *(s8*)(self + 0x2C) = value;
}

s32 func_001C9330(void* p)
{
    u64 v = *(u64*)((char*)p + 0x28);
    return (s32)(v >> 54) & 1;
}

s32 func_001C9410(void) {
    return 0;
}

void func_001C9418(void) {

}

void func_001C9420(void) {

}

s32 func_001C99E0(void* p)
{
    s32 v = *(s32*)((char*)p + 0x10) + 1;
    *(s32*)((char*)p + 0x10) = v;
    return v;
}

void func_001C9A50(void) {
    func_0011E118(&D_00479DF0);
}

void func_001C9A70(s32 arg0) {
    func_0011E1F0(&D_00479DF0, arg0);
}

void func_001C9A98(s32 arg0, s32 arg1) {
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

void func_001C9BD0(void) {
    func_001C9A98(1, 0xFFFF);
}

void func_001CA030(char* self, s32 value)
{
    s32 old = *(s32*)(self + 0x1C8);
    if (old != value) {
        *(s32*)(self + 0x1C8) = value;
        f32* p = (f32*)(self + 0x1D4);
        if (value != 0) {
            *p = D_0036BB98;
        } else {
            *p = 3.402823466e+38f;
        }
        func_001CAB30();
    }
}

void func_001CB080(s32 arg0, s32 arg1) {
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

void func_001CB1B8(void) {
    func_001CB080(1, 0xFFFF);
}

void func_001CB540(void) {
    *D_0036BD38 |= 0x40;
    func_00293920(0);
    func_0029FD20(D_0036BD38, &D_002C0250);
    func_0029FDE8(D_0036BD38, 0, 0);
    *D_0036BD38 &= ~0x40;
}

void func_001CB5B0(void) {
    *D_0036BD3C |= 0x40;
    func_00293920(0);
    func_0029FD20(D_0036BD3C, &D_002C45C0);
    func_0029FDE8(D_0036BD3C, 0, 0);
    *D_0036BD3C &= ~0x40;
}

void func_001CB758(s32 arg0, s32 arg1) {
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

void func_001CB890(void) {
    func_001CB758(1, 0xFFFF);
}


extern f32 D_003212DC;

extern u8 D_003174C0[];

extern u8 D_0036C700[];

extern void func_001854C8(u8*, s32, void*);

extern void func_0013BB58(void*, s32);

void func_001C86B8(void* a0, s32 a1) ;

void func_001C86B8(void* a0, s32 a1) { func_0013BB58(a0, a1); switch (a1) { case 5: func_001854C8(D_0036C700, 0x1D, a0); break; case 6: func_001854C8(D_0036C700, 0x1E, a0); break; } }

void* func_001C87B0() { return &D_003174C0; }

s32 func_001C9100(u8* a) { s64 v = *(u64*)((u8*)a + 0x28); s64 r = (v << 12) >> 60; return (s32)r; }
