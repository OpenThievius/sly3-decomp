// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_00208090(s32,s32);
void func_00209640(s32,s32);
void func_00209D58(s32,s32);
s32 func_001F3BF8();
s32 func_001F4670(s32, s32);
s32 func_001F3C80();
s32 func_0020ADE0(s32);
void func_0020AE68(s32,s32);
s32 func_0011E118(s32 *);
extern s32 D_00479CB0;
s32 func_0011E1F0(s32 *, s32);
extern s32 D_00479CC8;
s32 func_0013B500(void *, s32);
s32 func_001F43C8(s32);
s32 func_001F43D0(s32, s32);
s32 func_001F48F8();
s32 func_00208378(s32);
s32 func_001C7A00(s32, s32, s32);
s32 func_00209428(void *);
s32 func_0011B028(s32, void *);
s32 func_0020BDC0(void *);
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
s32 func_0013CD00(s32, s32);
void *func_001C7D60(s32);
s32 func_001A93C8(s32 *, s32, s32);
s32 func_001A9420(s32 *, s32, s32);
extern f32 D_0036BB98;
extern s32 D_00475480;

void func_00208030(void *self, void *other)
{
    s32 temp_v0;

    func_001F48F8();
    if (func_0013B500(other, 0x69) != 0) {
        temp_v0 = func_001F43C8((s32)self);
        func_001F43D0((s32)self, temp_v0 + *(s32 *)((char *)other + 0x1AC));
    }
}

void func_00208090(s32 arg0, s32 arg1) {
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

void func_002081C8(void) {
    func_00208090(1, 0xFFFF);
}

void func_002081E8(char* self) { *(int*)(self + 0xA4) = -1; *(int*)(self + 0x90) = -1; }

s32 func_00208A08(char *self, s32 arg1, s32 arg2) {
    s32 result = arg2;
    if (*(s32 *)(self + 0xA4) == 1) {
        void *object = func_001C7D60(*(s32 *)(self + 0x84));
        if (object != 0) {
            s32 first = *(s32 *)((char *)object + 0xDC);
            if (first != 0) {
                if (*(s32 *)(arg1 + 0xDC) == first) {
                    result = func_0013CD00(arg2, 3);
                }
            }
        }
    }
    return result;
}

void func_00208A80(s32 arg0, s32 arg1) {
    func_00208378(arg1);
}

void func_002093E8(void *arg0)
{
    void *target = *(void **)((char *)arg0 + 0xA0);
    if (target != 0) {
        func_001C7A00((s32)target, 0, 0xF);
        func_00209428(arg0);
    }
}

void func_00209640(s32 arg0, s32 arg1) {
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

void func_00209778(void) {
    func_00209640(1, 0xFFFF);
}

void func_00209D58(s32 arg0, s32 arg1) {
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

void func_00209E90(void) {
    func_00209D58(1, 0xFFFF);
}

void func_00209FA0(s32 arg0) {
    func_001F3BF8();
    func_001F4670(arg0, 1);
}

void func_0020A6A0(s32 arg0) {
    func_001F3C80();
    func_0020ADE0(arg0);
}

void func_0020A6D0(char *self, s32 value) {
    s32 old = *(s32 *)(self + 0x190);
    if (old == value) return;
    if (old == 1) {
        func_001A9420(&D_00475480, -1, 3);
    }
    *(s32 *)(self + 0x190) = value;
    *(f32 *)(self + 0x194) = D_0036BB98;
    *(s32 *)(self + 0x3C0) = 0;
    if (value == 1) {
        func_001A93C8(&D_00475480, -1, 3);
    }
}

f32 func_0020AC38(f32 fparg0) {
    return fparg0;
}

void* func_0020ADF0(void* self,s32 value)
{
    s32 size=*(s32*)((char*)self+0x3C0);
    if (value+1<size) return (char*)self+0x3E0+value*28;
    return 0;
}

void func_0020AE68(s32 arg0, s32 arg1) {
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

void func_0020AFA0(void) {
    func_0020AE68(1, 0xFFFF);
}

s32 func_0020B960(void* self)
{
    s32 v = *(s32*)((char*)self + 0x130);
    return v != 1;
}

void func_0020BB90(void) {
    func_0011E118(&D_00479CB0);
}

void func_0020BBB0(s32 arg0) {
    func_0011E1F0(&D_00479CB0, arg0);
}

void func_0020BBD8(void) {
    func_0011E118(&D_00479CC8);
}

void func_0020BBF8(s32 arg0) {
    func_0011E1F0(&D_00479CC8, arg0);
}

void func_0020BD70(char *self)
{
    func_0011B028(*(s32 *)(self + 4), self);
    func_0020BDC0(self);
}

void func_0020BDA8(void) {

}

void func_0020BDB0(s32 *arg0) {
    *arg0 += 1;
}

s32 func_0020BEC8(void) {
    return 1;
}

struct B_271B20 { u8 pad[4]; s32 x4; s32 x8; u8 pad2[0xC]; };

struct State_F43F8 { u8 pad0[0x16C]; s32 x16C; s32 x170; };

extern f32 D_003212DC;

extern void func_00292034(void*, s32, s32);

extern void func_0019A2D0(u8*, s32*);

extern void func_00238980(u8*);

extern void func_00238978(u8*);

extern void func_002936A0(u8*);

extern void func_002B58E8(u8*);

extern void* func_002387A8(u8*, s32);

extern s32 D_0034A69C;

extern u8 D_004CC728[];

extern s32 D_0034A6B8;

extern u8 D_004CCBE8[];

extern s32 D_0036C694;

extern s32 D_0036C674;

extern u8 D_0036C698[];

extern u8* D_00468D00;

extern u8 D_00370AD0[];

extern u8 D_00358E18[];

extern s32 func_001F4430(u8*);

extern void func_001F4438(u8*, s32);

extern void func_001F48A0(u8*, s32, s32);

extern s32 func_0019B6E0(u8*, u8*);

extern void func_0019DC10(u8*, s32);

extern void func_001C21F0(u8*, s32);

extern void func_001C9118(void*, s32);

extern void func_0023AE08(u8*);

extern s32 func_0011AF38(u8*, s32);

extern s32 func_0023B6A0(u8*);

extern s32 func_0023FC90(u8*, s32);

void func_0020B0C0(u8* a) ;

u8* func_00209B60() ;

void func_00208030(u8* s0, u8* s1) ;

u8* func_00209B60() { func_00292034(D_00468D00, 0, 0x10); u8* p = D_00468D00; u8* ret = p; p += 0x10; D_00468D00 = p; return ret; }

s32 func_0020ADE0(u8* a, s32 a1) { *(s32*)((u8*)a + 0x424) = 0; *(s32*)((u8*)a + 0x46C) = 0; *(s32*)((u8*)a + 0x470) = 0; }

void func_0020B0C0(u8* a) { (void)func_0023AE08(a); u8* s = a; (void)func_0011AF38(s+0x134, 8); func_001C9118(s, 1); u32 p = *(u32*)(s+0x3C); if (!(p & 1)) *(u32*)p = (*(u32*)p & 1) | 0xE; else *(u32*)(s+0x3C) = (p & 1) | 0xE; *(s64*)(s+0x128) &= -9; if (*(s32*)(s+0x130) == 1) { (void)func_0023B6A0(s); (void)func_0023FC90(s, 1); } }
