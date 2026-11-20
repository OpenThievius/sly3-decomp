// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0017FFD0(s32, s32);
s32 func_00180460(s32, s32);
s32 func_00238978();
void func_00180630(s32,s32);
void func_00181DD8(s32,s32);
void func_001826B0(s32,s32);
void func_00182A88(s32,s32);
void func_00183C10(s32,s32);
s32 func_00238970();
s32 func_00252E40(s32, s32);
s32 func_00238980();
s32 func_00252FC0(s32, s32);
s32 func_001825C0(void *, s32, s32);
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
s32 func_0018C750(s32 *);
s32 func_0027E190(s32 *);
extern s32 D_0036C2E0;
extern s32 D_0036C308;

extern s32 func_00271B20(s32, s32);
extern void func_00293380(s32, void*, s32);
extern void func_00293DF8(s32);
extern void func_00294260(s32, s32);
extern void func_0018DE80(void);
extern s32 D_0036C684;
extern s32 D_0036C688;
extern s32 D_0036C658;
extern s32 D_0036C668;
extern s32 D_00349F8C;
extern void func_00252E40(void*, s32);
extern void func_00238970(void*);
extern void func_00292034(void*, s32, s32);
extern s32 D_0036C694;
extern s32 D_0036C674;
extern u8 D_0036C698[];
extern void func_001C7340(void*);
extern void func_0011AF38(void*, s32);
extern void func_001C9118(void*, s32);
void func_00183D80(u8* self) ;
void func_00183000() ;
struct P { u32 x; } __attribute__((packed));
void func_00181F30(u8* s);
void func_00182BE0(void);
void func_001813E8(u8* a, u8* b);
void func_00180108(void) {
    func_0017FFD0(1, 0xFFFF);
}

void func_00180128(char* pgoal)
{
    s32 temp_a0;

    func_00238970();
    temp_a0 = *(s32*)(pgoal + 0x10);
    *(s32*)(pgoal + 0x50) = -1;
    func_00252E40(temp_a0, 0x38);
}

void func_00180160(void* pgoal)
{
    func_00238980();
    func_00252FC0(*(s32*)((char*)pgoal + 0x10), 0x38);
}

void func_00180190(s32 arg0) {
    func_00238978();
    func_00180460(arg0, 0);
}

void func_00180630(s32 arg0, s32 arg1) {
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

void func_00180768(void) {
    func_00180630(1, 0xFFFF);
}

void func_00181DD8(s32 arg0, s32 arg1) {
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

void func_00181F10(void) {
    func_00181DD8(1, 0xFFFF);
}

void func_00182028(void *pgoal)
{
    func_00238980();
    func_001825C0(pgoal, -1, 0);
    func_00252FC0(*(s32 *)((char *)pgoal + 0x10), 0x2D);
}

void func_001826B0(s32 arg0, s32 arg1) {
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

void func_001827E8(void) {
    func_001826B0(1, 0xFFFF);
}

void func_00182A88(s32 arg0, s32 arg1) {
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

void func_00182BC0(void) {
    func_00182A88(1, 0xFFFF);
}

void func_00183C10(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        func_0018C750(&D_0036C2E0);
        func_0027E190(&D_0036C308);
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

void func_00183D60(void) {
    func_00183C10(1, 0xFFFF);
}


void func_001813E8(u8* a, u8* b) { *(P*)(a+0x16C) = *(P*)b; *(P*)(a+0x164) = *(P*)(a+0x16C); }
void func_00181F30(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x2D); *(s32*)(s+0x30) = -1; }
void func_00182BE0(void) { func_00293380(5, (void*)func_0018DE80, 0); func_00293DF8(5); D_0036C684 = func_00271B20(0, 2); D_0036C688 = func_00271B20(2, 2); func_0011AF38(&D_0036C658, 0x444); func_0011AF38(&D_0036C668, 0x1090); func_00294260(D_00349F8C, 0); }
void func_00183000() { func_00292034(D_0036C698, 0, 0x3C); D_0036C694 = 0; D_0036C674 = 0; }
void func_00183D80(u8* self) { func_001C7340(self); *(f32*)(self + 0x50) = 50.0f; *(f32*)(self + 0x58) = 100.0f; *(f32*)(self + 0x60) = 2000.0f; func_001C9118(self, 1); s32 f = *(s32*)(self + 0x3C); if (!(f & 1)) { *(s32*)f |= 0xA; } else { *(s32*)(self + 0x3C) = f | 0xA; } }
