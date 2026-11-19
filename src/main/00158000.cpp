// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00159A88(s32, s32);
void func_0015ABC0(s32,s32);
void func_0015BCA0(s32,s32);
s32 func_00158CE8(void *, s32);
s32 func_00238980();
s32 func_001591E8(void *, s32);
s32 func_001599E0(void *, s32);
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

void func_00158910(char *self) {
    func_00238980();
    func_00158CE8(self, -1);
    *(s32 *)(*(char **)(self + 0x10) + 0x11B8) &= -2;
}

void func_00158E10(void *pgoal)
{
    func_00238980();
    func_001591E8(pgoal, -1);
    char *pobject = *(char **)((char *)pgoal + 0x10);
    *(s32 *)(pobject + 0x11B8) &= -2;
}

void func_00159310(char *arg0)
{
    func_00238980();
    func_001599E0(arg0, -1);
    char *target = *(char **)(arg0 + 0x10);
    *(s32 *)(target + 0x11B8) &= -2;
}

void func_00159DD0(void) {
    func_00159A88(1, 0xFFFF);
}

s32 func_0015A5D8(char* self)
{
    s32 v = *(s32*)(self + 0x130);
    if (v < 4) {
        if (v >= 2) {
            return 0;
        }
    }
    return 1;
}

void func_0015ABC0(s32 arg0, s32 arg1) {
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

void func_0015ACF8(void) {
    func_0015ABC0(1, 0xFFFF);
}

void func_0015AF48(void* self)
{
    *(int*)((char*)self + 0x3DF4) = 0;
    *(int*)((char*)self + 0x3E04) = 0;
    *(int*)((char*)self + 0x3E08) = 0;
}

void func_0015B780(char* self)
{
    *(int*)(self + 0x3E5C) = 0;
    *(int*)(self + 0x3E60) = 0;
    *(int*)(self + 0x3E64) = 0;
}

void func_0015BCA0(s32 arg0, s32 arg1) {
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

void func_0015BDD8(void) {
    func_0015BCA0(1, 0xFFFF);
}

struct List_C0370 { s32 x0; s32 x4; s32 x8; };

struct Obj_1495F8 { u8 pad[0x108C]; void* f108C; };

struct Obj_15CF38 { u8 pad[0x28]; u64 flags; };

struct List_15AE18 { s32 x0, x4, x8, xC; };

struct Obj_15AE18 { u8 pad[0x3DE8]; List_15AE18 list; };

struct List_15B728 { s32 x0, x4, x8, xC; };

struct Obj_15B728 { u8 pad[0x3E50]; List_15B728 list; };

struct Node_23DCA0 { u8 pad[0x70]; u64 flags; };

struct Self_23DCA0 { u8 pad[0xDC]; Node_23DCA0* node; };

extern void func_0011B028(void*, void*);

extern void func_0011AF60(void*, void*);

extern void func_0015C178(void*, s32);

extern void func_00238970();

extern f32 D_003206B8;

extern List_C0370 D_00479BC8;

extern u8 D_0036C668[];

extern u8 D_00479BBC[];

extern u8 D_00479944[];

extern u8 D_00479950[];

extern void func_001C9118(void*, s32);

extern void func_0023AE08(u8*);

void func_00159DF0(u8* a) ;

void func_00158878(s32 p0) { func_00238970(); *(s32*)((u8*)(p0) + 0x30) = -0x1; }

void func_00158D78(s32 p0) { func_00238970(); *(s32*)((u8*)(p0) + 0x30) = -0x1; }

void func_00159278(s32 p0) { func_00238970(); *(s32*)((u8*)(p0) + 0x30) = -0x1; }

void func_00159DF0(u8* a) { (void)func_0023AE08(a); u8* s = a; *(s32*)(s+0x130) = -1; func_001C9118(s, 1); u32 p = *(u32*)(s+0x3C); if (!(p & 1)) *(u32*)p |= 0x202; else *(u32*)(s+0x3C) = p | 0x202; }

void func_0015AE18(Obj_15AE18* self, void* item) { void* list = &self->list; func_0011B028(list, item); if (self->list.xC == 0) self->list.xC = (s32)item; func_0011AF60(list, item); }

void func_0015B728(Obj_15B728* self, void* item) { void* list = &self->list; func_0011B028(list, item); if (self->list.xC == 0) self->list.xC = (s32)item; func_0011AF60(list, item); }

void func_0015BDF8(u8* a) { *(s32*)a = -1; *(f32*)(a+8) = 1.0f; }

void func_0015BE10(u8* a) { func_0015C178(a, 0); }
