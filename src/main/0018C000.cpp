// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

void func_0018C5F8(s32,s32);
void func_0018CFE0(s32,s32);
s32 func_00248858(s32 *, s32);
extern s32 D_00474FF0;
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

s32 func_0018C170(char *self)
{
    if (*(s32 *)(self + 0x48) == -1) return 1;
    return func_00248858(&D_00474FF0, *(s32 *)(self + 0x48)) == 0;
}

void func_0018C5A8(char *self, s32 value)
{
    s32 count = *(s32 *)(self + 0x34);
    if (count >= 6) {
        return;
    }
    if (count < 4) {
        return;
    }
    s32 index = *(s32 *)(self + 0x58);
    if (index >= 4) {
        return;
    }
    *(s32 *)(self + (index << 2) + 0x5C) = value;
    *(s32 *)(self + 0x58) = index + 1;
    *(f32 *)(self + 0x6C) = D_0036BB98;
}

void func_0018C5F8(s32 arg0, s32 arg1) {
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

void func_0018C730(void) {
    func_0018C5F8(1, 0xFFFF);
}

s32 func_0018C878(char* self)
{
    s32 v = *(s32*)(self + 0x24) + 1;
    *(s32*)(self + 0x24) = v;
    return v;
}

void func_0018CFE0(s32 arg0, s32 arg1) {
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

void func_0018D118(void) {
    func_0018CFE0(1, 0xFFFF);
}

struct S750 {
    u8 pad[0x10];
    u32 f10;
    u32 f14;
    void* f18;
    u32 f1C;
    u32 f20;
    u32 f24;
};

extern void func_00174480(void* a0);

extern u8 D_00358A10[];

struct Ctx_18CDA0 {
    u8 pad0[0xC];
    u8* alloc;
};

struct Ctx_18CC38 {
    u8 pad0[0xC];
    u8* alloc;
};

union FU_18CDA0 { f32 f; u32 u; };

extern f32 D_003212DC;

extern s32 func_0018C878(u8*, s32, s32);

void func_0018CC38(Ctx_18CC38* self, s32 a1, s32 a2, s32 a3, s32 a4) ;

void func_0018CDA0(Ctx_18CDA0* self, u32 a1, f32 f) ;

S750* func_0018C750(S750* self) { func_00174480(self); self->f14 = 1; self->f18 = &D_00358A10; self->f1C = 0; self->f20 = 0; self->f24 = 0; return self; }

void func_0018CC38(Ctx_18CC38* self, s32 a1, s32 a2, s32 a3, s32 a4) { func_0018C878((u8*)self, 1, 4); s32* p = (s32*)self->alloc; self->alloc = (u8*)p + 0x10; p[0] = a1; p[1] = a2; p[2] = a3; p[3] = (a4 & 0xFF) << 4; }

void func_0018CDA0(Ctx_18CDA0* self, u32 a1, f32 f) { func_0018C878((u8*)self, 0, 1); s64* p = (s64*)self->alloc; self->alloc = (u8*)p + 8; FU_18CDA0 conv; conv.f = f; *p = (u64)a1 | ((u64)conv.u << 32); }

u8* func_0018D138(u8* a) { *(s32*)(a+0x4C) = -1; return a; }
