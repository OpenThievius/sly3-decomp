// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00276DF8();
void func_002788F0(s32,s32);
s32 func_001FC8F8();
s32 func_00278E58(s32, s32);
s32 func_001FCAC8();
s32 func_00278D68(s32);
s32 func_001FC968();
s32 func_00279998(s32);
void func_00279C80(s32,s32);
s32 func_001CBAA0(s32 *, s32);
s32 func_001F3C80();
s32 func_0027C860(void *, s32);
extern s32 D_00475480;
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

void func_002782C0(void) {
    func_00276DF8();
}

void func_002788F0(s32 arg0, s32 arg1) {
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

void func_00278A28(void) {
    func_002788F0(1, 0xFFFF);
}

void func_00278D00(s32 arg0) {
    func_001FC8F8();
    func_00278E58(arg0, 0);
}

void func_00278D30(s32 arg0) {
    func_001FCAC8();
    func_00278D68(arg0);
    func_00278E58(arg0, -1);
}

void func_00279160(char* self, s32 value)
{
    u32 count = *(u32*)(self + 0x54);
    if (count < 0x20) {
        *(u32*)(self + 0x54) = count + 1;
        u32* p = (u32*)(self + ((count * 8) + 0x58));
        p[0] = value;
        p[1] = 0;
    }
}

void func_002797C0(s32 arg0) {
    func_001FC968();
    func_00279998(arg0);
}

s32 func_002799A0(char* self, s32 n)
{
    s32 v = *(s32*)(self + 0x134) - n;
    v = (v > -1) ? v : 0;
    *(s32*)(self + 0x134) = v;
    return v;
}

void func_00279C80(s32 arg0, s32 arg1) {
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

void func_00279DB8(void) {
    func_00279C80(1, 0xFFFF);
}

void func_0027A068(void *pgoal)
{
    s32 temp_a1;

    func_001F3C80();
    temp_a1 = *(s32 *)((char *)pgoal + 0x358);
    if (temp_a1 != 0) {
        func_001CBAA0(&D_00475480, temp_a1);
        *(s32 *)((char *)pgoal + 0x358) = 0;
    }
    func_0027C860(pgoal, 0);
}

struct Foo { char a[0x8]; u32 f8; char b[0x10]; void* f1C; char c[0x8]; void* f28; };

struct Big { char a[0x8]; u32 f8; char b[0x10]; void* f1C; char c[0x140]; void* f160; };

extern void func_001C7340(void*);

extern void func_00169C90(void* a0, u32 a1, u32 a2);

extern u8 D_00355CC8[];

extern u8 D_00351570[];

extern u8 D_00355CA0[];

extern u8 D_00362A50[];

extern u8 D_00367990[];

extern u8 D_00368008[];

extern u8 D_00368988[];

extern u8 D_0036A850[];

extern void* func_001D2538(s32* a);

extern void func_0023C580(void*);

extern void func_001C9118(void*, s32);

extern void func_0023AE08(u8*);

void func_00279708(u8* a) ;

Foo* func_002799C0(Foo* self, u32 a1, u32 a2, void* a3) ;

void func_00279778(u8* s) ;

void func_00278A48(u8* self) { func_001C7340(self); *(f32*)(self + 0x4C) = 5000.0f; *(f32*)(self + 0x268) = 500.0f; *(s32*)(self + 0x290) = 0x36; *(s32*)(self + 0x40) = -1; *(s32*)(self + 0x284) = 8; s32 f = *(s32*)(self + 0x3C); if (!(f & 1)) { *(s32*)f |= 2; } else { *(s32*)(self + 0x3C) = f | 2; } }

void func_00279140(s32 p0) { func_00278E58(p0, 0x1); }

void func_00279708(u8* a) { (void)func_0023AE08(a); u8* s = a; *(s32*)(s+0x130) = 8; func_001C9118(s, 1); u32 p = *(u32*)(s+0x3C); if (!(p & 1)) *(u32*)p |= 8; else *(u32*)(s+0x3C) = p | 8; *(s64*)(s+0x128) &= -9; }

void func_00279778(u8* s) { func_0023C580(s); s32 v = *(s32*)(s+0x130) << 4; *(s32*)(s+0x134)=0; s32 local[2]; local[1]=0x10; local[0]=v; void* p = func_001D2538(local); *(void**)(s+0x138)=p; }

void func_00279998(u8* a) { *(s32*)((u8*)a + 0x134) = 0; }

Foo* func_002799C0(Foo* self, u32 a1, u32 a2, void* a3) { func_00169C90(self, a1, a2); self->f1C = &D_00368988; self->f8 = 0xE; *(void**)((char*)self + 0x20) = a3; return self; }
