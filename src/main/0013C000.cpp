// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0013BEF8(s32, s32);
void func_0013CD88(s32,s32);
void func_0013CFB0(s32,s32);
void func_0013D178(s32,s32);
s32 func_00152448();
s32 func_001C8970(s32, s32, s32 *, s32);
extern s32 D_00342890;
s32 func_0023AE08();
s32 func_001C3D18(void *, s32, s32);
s32 func_0024E400();
s32 func_00153668(void *, s32);
s32 func_001B5DD8(void *);
s32 func_001F1A08(s32, void *);
s32 func_00154FD8();
s32 func_0017F560(void *);
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

void func_0013C030(void) {
    func_0013BEF8(1, 0xFFFF);
}

void func_0013CD88(s32 arg0, s32 arg1) {
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

void func_0013CEC0(void) {
    func_0013CD88(1, 0xFFFF);
}

void func_0013CEE0(s32* self)
{
    (void)func_0023AE08();
    *(float*)((char*)self + 0x130) = 1.0f;
}

void func_0013CFB0(s32 arg0, s32 arg1) {
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

void func_0013D0E8(void) {
    func_0013CFB0(1, 0xFFFF);
}

void func_0013D178(s32 arg0, s32 arg1) {
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

void func_0013D2B0(void) {
    func_0013D178(1, 0xFFFF);
}

void func_0013D400(s32 arg0) {
    func_00152448();
    func_001C8970(arg0, 0x54, &D_00342890, 0);
}

void func_0013EE08(char *self, s32 kind, s32 arg) {
    func_0024E400();
    if (*(s32 *)(self + 0x1520) == 4) {
        func_001C3D18(self + 0xE40, kind, arg);
    }
}

s32 func_0013F1B8(char* self)
{
    s32 v = *(s32*)(self + 0x1520);
    return v == 1;
}

s32 func_0013F3B0(char *self, s32 arg)
{
    if (*(s32 *)(self + 0x1520) == 3) {
        if (func_001B5DD8(self + 0x500) != 0) {
            return 1;
        }
    }
    return func_00153668(self, arg);
}

s32 func_0013F840(char *self)
{
    if (*(s32 *)(self + 0x11BC) == 3) {
        return func_001F1A08(*(s32 *)(self + 0x11B4), self);
    }
    return 0;
}

void func_0013F930(char *self)
{
    s32 status = func_00154FD8();
    if (*(s32 *)(self + 0x1520) == 16) {
        func_0017F560(self + 0x1830);
    }
}

void func_0013F970(void* p, s32 v)
{
    s32 old = *(s32*)((char*)p + 0x18f0);
    if (v != old) {
        *(s32*)((char*)p + 0x18f0) = v;
        *(f32*)((char*)p + 0x18f4) = D_0036BB98;
    }
}
