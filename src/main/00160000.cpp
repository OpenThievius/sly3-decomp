// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00161B70(s32);
s32 func_001F4D28();
s32 func_00162678(s32);
s32 func_00252508();
void func_00162900(s32,s32);
extern s32 D_003440C0;
void func_00162AF0(s32,s32);
s32 func_002A10B0();
extern s32 D_003440C4;
s32 func_002A1228(s32);
s32 func_002A0480(s32);
void func_00163170(s32,s32);
s32 func_00260738(s32);
void func_00163768(s32,s32);
s32 func_00238970();
s32 func_00252E40(s32, s32);
s32 func_00163C10(s32, s32);
s32 func_00238978();
s32 func_00292034(s32, s32, s32);
void func_00163D80(s32,s32);
s32 func_0011AD80(s32, void *);
s32 func_0011AEC8();
void *func_002387A8(s32, s32);
s32 func_00252408(s32, s32);
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
s32 func_001C9118(void *, s32);
s32 func_001F3B50();
extern void *D_0036BB80;

struct Self_1628C8 { u8 pad[0x17F8]; s32 f17F8; s32 f17FC; };
extern u8 D_00475480[];
extern void* func_0017E1B8(void*, s32, s32, u8*);
extern void func_001F3BF8(void*);
extern void func_001F4670(void*, s32);
extern void func_00252FC0(s32,s32);
extern void func_00238980(void*);
extern void func_00163C10(void*,s32);
extern s32 D_003440B8[];
extern void func_00162678(void*);
extern void func_00161B70(void*);
extern void func_00162370();
extern void func_00238980(u8*);
extern void func_0024B330(void*, void*, s32, s32, void*, void*);
extern void func_0012BC20(void*);
void func_001628C8(Self_1628C8* self, void* list) ;
s32 func_00162A68(s32 i);
void func_00163928(u8* s);
void func_00161B70();
void func_00162678();
void func_00163338(u8* a);
void func_00161B40(s32 arg0) {
    func_001F4D28();
    func_00161B70(arg0);
}

s32 func_00161B78(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_002387A8(arg0 + 0x29C, 0xE9);
    if (temp_v0 == 0) {
        return func_00252408(arg0, arg1);
    }
    s32 temp_v1 = *(s32 *)((char *)temp_v0 + 0x30);
    if (temp_v1 == 0x11 || temp_v1 == 0x14) {
        return 1;
    }
    return func_00252408(arg0, arg1);
}

void func_00161CD0(s32 arg0) {
    func_00252508();
    func_00162678(arg0 + 0x1884);
}

void func_00162900(s32 arg0, s32 arg1) {
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

void func_00162A38(void) {
    func_00162900(1, 0xFFFF);
}

void func_00162A58(void) {
    D_003440C0 = 3;
}

void func_00162AF0(s32 arg0, s32 arg1) {
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

void func_00162C28(void) {
    func_00162AF0(1, 0xFFFF);
}

s32 func_00162E08(void) {
    s32 temp_v0;

    temp_v0 = func_002A10B0();
    if (D_003440C4 != temp_v0) {
        D_003440C4 = temp_v0;
    }
    return D_003440C4 == 0x14;
}

s32 func_00162E48(void)
{
    if (D_003440C4 == 0x14) {
        return func_002A1228(2);
    }
    return D_003440C4;
}

void func_00162E78(void) {

}

s32 func_00163150(s32 arg0) {
    return func_002A0480(arg0 == 0) == 0;
}

void func_00163170(s32 arg0, s32 arg1) {
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

void func_001632A8(void) {
    func_00163170(1, 0xFFFF);
}

void func_001632C8(void *self)
{
    s32 flags;

    func_001F3B50();
    D_0036BB80 = self;
    *(s32 *)((char *)self + 0x198) = -1;
    *(s32 *)((char *)self + 0x190) = -1;
    *(s32 *)((char *)self + 0x1B8) = -1;
    func_001C9118(self, 1);
    flags = *(s32 *)((char *)self + 0x3C);
    if ((flags ^ 1) & 1) {
        *(s32 *)flags = *(s32 *)flags | 2;
        return;
    }
    *(s32 *)((char *)self + 0x3C) = flags | 2;
}

void func_001633E0(char* self, s32 value)
{
    if (*(s32*)(self + 0x190) == value) {
        return;
    }
    *(s32*)(self + 0x190) = value;
    if (value == 1) {
        *(s32*)(self + 0x198) = -1;
    }
}

s32 func_00163700(char* self)
{
    char* p = *(char**)(self + 0x194);
    if (p == 0) return 0;
    s32 v = *(s32*)(p + 0x48);
    if (v != 2) return 0;
    return *(s32*)(p + 0x54) == 2;
}

s32 func_00163738(char* self)
{
    s32 m = *(s32*)(self + 0x194);
    if (m == 0) return 1;
    return func_00260738(m);
}

void func_00163768(s32 arg0, s32 arg1) {
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

void func_001638A0(void) {
    func_00163768(1, 0xFFFF);
}

void func_001638C0(void* pgoal)
{
    s32 temp_a0;

    func_00238970();
    temp_a0 = *(s32*)((char*)pgoal + 0x10);
    *(s32*)((char*)pgoal + 0x30) = -1;
    func_00252E40(temp_a0, 0x37);
}

void func_001638F8(s32 arg0) {
    func_00238978();
    func_00163C10(arg0, 1);
}

void func_00163D30(char* self, s32 a1, s32 a2)
{
    func_00292034((s32)(self + 0x1168), 0, 0xC);
    *(s32*)(self + 0x1164) = a1;
    *(s32*)(self + 0x1190) = a2;
}

void func_00163D80(s32 arg0, s32 arg1) {
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

void func_00163EB8(void) {
    func_00163D80(1, 0xFFFF);
}

void func_00163ED8(s32 arg0, void *arg1) {
    if (func_0011AEC8() == 0) {
        func_0011AD80(arg0, arg1);
        *(s32 *)((char *)arg1 + 0x10) = 0;
    }
}


void func_00161B70() {}
void func_00162678() { func_00162370(); }
void func_001628C8(Self_1628C8* self, void* list) { s32 tmp[4]; func_0024B330(tmp, list, 0x2002, 0x20, &self->f17F8, &self->f17FC); func_0012BC20(tmp); }
s32 func_00162A68(s32 i) { return *(s32*)((u8*)D_003440B8 + (i << 2)); }
void func_00163338(u8* a) { func_001F3BF8(a); *(s32*)(a+0x194) = (s32)func_0017E1B8(D_00475480, 0x405, 0x416, 0); func_001F4670(a, 1); }
void func_00163928(u8* s) { func_00163C10(s, -1); func_00238980(s); func_00252FC0(*(s32*)(s+0x10), 0x37); }
