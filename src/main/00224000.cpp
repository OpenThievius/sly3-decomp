// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00224730(s32);
s32 func_0023C660();
void func_00224F30(s32,s32);
s32 func_001C7D98();
s32 func_00225220(s32, s32);
s32 func_001FCAC8();
s32 func_00226050(s32);
s32 func_001F4AD0(s32 *, s32);
s32 func_00225EE8(s32, s32);
extern s32 D_00475480;
s32 func_0011AF38(s32, s32);
s32 func_001C7340();
extern f32 D_0036BB98;
extern f32 D_0036BBD8;
s32 func_00226770();
s32 func_0013B500(s32, s32);
s32 func_00165B28(s32 *);
s32 func_001F4A80(s32);
void *func_00226B78();
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

void func_00224700(s32 arg0) {
    func_0023C660();
    func_00224730(arg0);
}

void func_00224F30(s32 arg0, s32 arg1) {
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

void func_00225068(void) {
    func_00224F30(1, 0xFFFF);
}

void func_00225088(s32 arg0) {
    func_001C7340();
    func_0011AF38(arg0 + 0x48, 0x10C);
    *(s32*)(arg0 + 0xA8) = 0;
}

void func_002250C0(s32 arg0, s32 arg1) {
    func_001C7D98();
    func_00225220(arg0, arg1);
}

void func_00225100(s32 arg0) {
    func_001FCAC8();
    func_00226050(arg0);
}

void func_00226010(s32 arg0) {
    func_00225EE8(arg0, func_001F4AD0(&D_00475480, 0));
}

s32 func_00226190(void* p)
{
    s32 v = *(s32*)((char*)p + 0x60);
    return v & 1;
}

void func_002262B0(void* pobject)
{
    *(int*)((char*)pobject + 0x64) = 0;
}

f32 func_00226458(char* p)
{
    s32 v = *(s32*)(p + 0x3C);
    s32 m;
    if ((v ^ 1) & 1) {
        m = *(s32*)v;
    } else {
        m = v;
    }
    if (m & 0x200) {
        return D_0036BBD8;
    }
    return D_0036BB98;
}

s32 func_00226490(void* p)
{
    s32 v = *(s32*)((char*)p + 0x10) + 1;
    *(s32*)((char*)p + 0x10) = v;
    return v;
}

void func_002267E8(s32 arg0, s32 arg1) {
    if (arg1 != 0x20) {
        func_00226770();
        return;
    }
    func_001F4AD0(&D_00475480, 0);
}

s32 func_00226B20(char *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 0x28);
    if ((temp_a0 != 0) && (func_0013B500(temp_a0, 0x31) != 0)) {
        return func_001F4A80(*(s32 *)(arg0 + 0x28));
    }
    return func_00165B28(&D_00475480);
}

s32 func_00226BB0()
{
    void *obj = func_00226B78();
    s32 value = 0;
    if (obj != 0) {
        value = *(s32 *)((char *)obj + 0x1008);
    }
    return value;
}
