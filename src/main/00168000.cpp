// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
void func_00168E88(s32,s32);
void func_00169558(s32,s32);
void func_00169AA0(s32,s32);
s32 func_0011E118(s32 *);
extern s32 D_0047931C;
s32 func_0011E1F0(s32 *, s32);
s32 func_00169CB0(s32, s32);
s32 func_00169D98(s32);
s32 func_0011B0C0(s32, s32 *);
s32 func_001685C8();
s32 func_00169398();
s32 func_00167960(s32, f32);
s32 func_0016AE90();
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
s32 func_002B50F8(s32 *);
s32 func_002BC7D0(s32 *, s32);
extern s32 D_0036BC10;

struct Obj_169F60 { u8 pad0[0x8]; s32 x8; u8 padC[0x1C-0xC]; u8* x1C; s32 x20; u8 pad24[0x3C-0x24]; f32 x3C; u8 pad40[0x48-0x40]; s32 x48; s32 x4C; };
typedef long long v2l __attribute__((vector_size(16)));
struct Foo { char a[0x8]; u32 f8; char b[0x10]; void* f1C; char c[0x8]; void* f28; };
struct Big { char a[0x8]; u32 f8; char b[0x10]; void* f1C; char c[0x140]; void* f160; };
extern void func_001679E0(u8*,f32);
extern void func_00169E28(void*);
extern void func_001FC968(void*);
extern void func_0016AE90(u8*);
extern void func_00169C90(void* a0, u32 a1, u32 a2);
extern u8 D_00355CC8[];
extern u8 D_00355CA0[];
extern u8 D_00355D40[];
extern u8 D_00355D18[];
extern u8 D_00355CF0[];
Big* func_0016B5E8(Big* self, u32 a1, u32 a2) ;
Foo* func_0016BF10(Foo* self, u32 a1, u32 a2, void* a3) ;
Obj_169F60* func_00169F60(Obj_169F60* self, s32 a1, s32 a2, s32 a3) ;
void* func_0016A6F0(void* self, u32 a1, u32 a2) ;
void* func_0016B180(void* self, u32 a1, u32 a2, void* a3, void* a4) ;
void func_0016AE40(u8* s, v2l a, v2l b, f32 f) ;
void func_0016BF60(u8* s);
void* func_001694C0(u8* a, s32 v);
void func_001697A0(u8* s);
void func_00168948(void* self, s32 value)
{
    *(s32*)((char*)self + 0xDC) = value;
    func_001685C8();
}

s32 func_00168DD8(void* p)
{
    s32 r = 0;
    if (*(s32*)((char*)p + 0x310) > 0 || *(s32*)((char*)p + 0x324) > 0) {
        r = 1;
    }
    return r;
}

void func_00168E00(char* self, s32 value)
{
    u32 count;

    if (value != 0) {
        count = *(u32*)(self + 0x310);
        if (count < 4) {
            *(s32*)(self + (count << 2) + 0x314) = value;
            *(u32*)(self + 0x310) = count + 1;
        }
    }
}

void func_00168E88(s32 arg0, s32 arg1) {
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

void func_00168FC0(void) {
    func_00168E88(1, 0xFFFF);
}

void func_00169480(void* p, f32 v)
{
    *(f32*)((char*)p + 0x74) = v;
    func_00169398();
}

void func_001694A0(void* self, f32 value)
{
    *(f32*)((char*)self + 0x70) = value;
    func_00169398();
}

void func_001694D8(char *self, s32 value) {
    u32 count = *(u32 *)(self + 0xDC);
    if (count < 8) {
        *(s32 *)(self + (count << 2) + 0xE0) = value;
        *(u32 *)(self + 0xDC) = count + 1;
    }
}

void func_00169558(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_002B50F8(&D_0036BC10);
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
        } else {
            func_002BC7D0(&D_0036BC10, 2);
        }
    }
}

void func_001696B0(void) {
    func_00169558(1, 0xFFFF);
}

void func_001696D0(void) {
    func_00169558(0, 0xFFFF);
}

void func_00169AA0(s32 arg0, s32 arg1) {
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

void func_00169BD8(void) {
    func_00169AA0(1, 0xFFFF);
}

void func_00169BF8(void) {
    func_0011E118(&D_0047931C);
}

void func_00169C18(s32 arg0) {
    func_0011E1F0(&D_0047931C, arg0);
}

void func_00169C40(s32 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        func_00169D98(temp_a0);
        temp_a0_2 = *arg0;
        if (temp_a0_2 != 0) {
            func_00169CB0(temp_a0_2, 3);
        }
        *arg0 = 0;
    }
}

void func_00169E78(void) {

}

s32 func_00169E88(s32 *arg0) {
    return func_0011B0C0(*arg0 + 0x300, arg0) == 0;
}

void func_00169FC0(s32 *arg0) {
    *(s32 *)((char *)arg0 + 0x34) = 0;
    f32 value = *(f32 *)((char *)arg0 + 0x40);
    *(s32 *)((char *)arg0 + 0x38) = 0;
    func_00167960(*arg0, value);
}

void func_0016ADC0(void* self, s32 value)
{
    *(s32*)((char*)self + 0x20) = value;
    if (*(s32*)((char*)self + 0x50) != 0) {
        func_0016AE90();
        *(s32*)((char*)self + 0x50) = 0;
    } else {
        *(s32*)((char*)self + 0x50) = 0;
    }
}

void func_0016AE00(char* self, s32 value)
{
    *(s32*)(self + 0x24) = value;
    if (*(s32*)(self + 0x50) != 0) {
        func_0016AE90();
        *(s32*)(self + 0x50) = 0;
    } else {
        *(s32*)(self + 0x50) = 0;
    }
}

void func_0016AE88(void* self, f32 value)
{
    *(f32*)((char*)self + 0x28) = value;
}


void* func_001694C0(u8* a, s32 v) { if (v == 1) *(s32*)((u8*)a + 0xD8) = v; return a; }
void func_001697A0(u8* s) { extern f32 D_00320E50; func_001FC968(s); *(f32*)(s+0x144) = D_00320E50; }
Obj_169F60* func_00169F60(Obj_169F60* self, s32 a1, s32 a2, s32 a3) { func_00169C90(self, a1, a2); self->x1C = D_00355D40; self->x20 = a3; self->x8 = 3; self->x3C = 7.0f; self->x48 = 0; self->x4C = 0; return self; }
void* func_0016A6F0(void* self, u32 a1, u32 a2) { func_00169C90(self, a1, a2); *(void**)((u8*)self + 0x1C) = D_00355D18; *(u32*)((u8*)self + 0x8) = 4; *(f32*)((u8*)self + 0xC4) = 7.0f; *(f32*)((u8*)self + 0x28) = -1.0f; *(u32*)((u8*)self + 0xD0) = 0; *(u32*)((u8*)self + 0xD4) = 0; return self; }
void func_0016AE40(u8* s, v2l a, v2l b, f32 f) { *(v2l*)(s+0x90)=a; *(v2l*)(s+0xA0)=b; *(f32*)(s+0xB0)=f; if (*(s32*)(s+0x50)==0) func_0016AE90(s); *(s32*)(s+0x50)=1; }
void* func_0016B180(void* self, u32 a1, u32 a2, void* a3, void* a4) { func_00169C90(self, a1, a2); *(void**)((u8*)self + 0x20) = a3; *(void**)((u8*)self + 0x1C) = D_00355CF0; *(void**)((u8*)self + 0x24) = a4; *(u32*)((u8*)self + 0x8) = 6; return self; }
Big* func_0016B5E8(Big* self, u32 a1, u32 a2) { func_00169C90(self, a1, a2); self->f1C = &D_00355CC8; self->f8 = 7; self->f160 = (char*)self + 0x70; return self; }
Foo* func_0016BF10(Foo* self, u32 a1, u32 a2, void* a3) { func_00169C90(self, a1, a2); self->f1C = &D_00355CA0; self->f8 = 8; *(void**)((char*)self + 0x20) = a3; return self; }
void func_0016BF60(u8* s) { func_00169E28(s); func_001679E0(*(u8**)s, 49.0f); u8* p = *(u8**)(s+0x20); u8* q = *(u8**)s; *(f32*)(q+0x11C) = *(f32*)(p+0x1CC); }
