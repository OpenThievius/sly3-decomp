// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
void func_0025EE50(s32,s32);
s32 func_002717E0();
s32 func_0027ED60(s32 *, s32);
extern s32 D_004BC220;
s32 func_0027EEC8(s32 *, s32);
s32 func_00150630(s32 *, s32);
s32 func_00271730(s32, s32);
extern s32 D_0046F788;
extern s32 D_00475480;
struct State_25F098 { u8 pad[0x4F58]; s32 x4F58; s32 x4F5C; };
s32 func_0025D478(s32, s32, s32, s32, s32, s32);
s32 func_0011E100(s32 *, s32, s32, s32);
s32 func_0025A628(s32 *);
s32 func_002BFCC8(s32 *, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_0047A480;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;

extern void* func_001F4AD0(u8*, s32);
extern u8 D_00327EE8[];
extern u8 D_00327EF0[];
extern s32 func_0029CF10(f32);
extern u8 D_00327ED0[];
extern void func_00271448(u8*, u8*, s32);
extern void func_00271448(u8*, u8*, u8*, u8*, s32);
extern void func_00271448(u8*, u8*, void*);
extern s32 func_0013B500(u8*, s32);
extern s32 func_001852E0(u8*);
extern u8 D_0036C700[];
extern void func_00271448(u8*, u8*, u8*, u8*);
extern void func_00271448(u8*, u8*, s32, s32, s32);
extern void func_00271448(u8*, u8*, s32, s32);
extern u8 D_00327ED8[];
extern void func_002717E0(u8*, u8*);
extern void* func_0017E1B8(void*, s32, s32, u8*);
extern void func_0025EA08(void*,void*,void*);
void func_0025EAC0(u8* a0, u8* a1);
void func_0025F0E8(u8* a0, s32 a1, u8* a2);
void func_0025EAE0(u8* a0, u8* a1);
void func_0025F1D8(u8* a0);
void func_0025EAA0(u8* a0, u8* a1);
s32 func_0025F098(u8* a0);
void func_0025DD00(u8* a);
void func_0025D3F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_s0;
    s32 var_s1;

    if (arg1 > 0) {
        var_s1 = arg2;
        var_s0 = arg1;
        do {
            func_0025D478(arg0, var_s1, arg3, arg4, 0, 0);
            var_s0 -= 1;
            var_s1 += 0x10;
        } while (var_s0 != 0);
    }
}

s32 func_0025D5A8(char* self)
{
	s32 count = *(s32*)(self + 0x3F04);
	*(s32*)(self + 0x3F04) = count + 1;
	return *(s32*)(self + 0x3F00) + count * 12;
}

s32 func_0025D5C8(char* self)
{
	s32 count = *(s32*)(self + 0x3F0C);
	*(s32*)(self + 0x3F0C) = count + 1;
	return *(s32*)(self + 0x3F08) + count * 12;
}

s32 func_0025E7A8(void) {
    return 0;
}

void func_0025EE50(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_0025A628(&D_00475480);
            D_0047A480 = 0x110;
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
            func_002BFCC8(&D_00475480, 2);
        }
    }
}

void func_0025EFB8(void) {
    func_0025EE50(1, 0xFFFF);
}

void func_0025EFD8(void) {
    func_0025EE50(0, 0xFFFF);
}

void func_0025EFF8(void) {
    func_002717E0();
}

void func_0025F598(s32 arg0) {
    func_0027ED60(&D_004BC220, arg0);
}

void func_0025F5C0(s32 arg0) {
    func_0027EEC8(&D_004BC220, arg0);
}

void func_0025F5E8(s32 arg0) {
    func_00271730(arg0, func_00150630(&D_00475480, D_0046F788));
}


void func_0025DD00(u8* a) { *(s32*)(a+0x4E4C) = (s32)func_0017E1B8(a, 5, 0x6F1, 0); }
void func_0025EAA0(u8* a0, u8* a1) { func_0025EA08(a0, a1, a0 + 0x463C); }
void func_0025EAC0(u8* a0, u8* a1) { func_0025EA08(a0, a1, a0 + 0x4640); }
void func_0025EAE0(u8* a0, u8* a1) { func_0025EA08(a0, a1, a0 + 0x4644); }
s32 func_0025F098(u8* a0) { u8 buf[0x20]; func_00271448(buf, D_00327ED8, ((State_25F098*)&D_00475480)->x4F58, ((State_25F098*)&D_00475480)->x4F5C); func_002717E0(a0, buf); }
void func_0025F0E8(u8* a0, s32 a1, u8* a2) { s32 result; if (func_0013B500(a2, 0xA7)) result = *(s32*)(a2 + 0x120); else result = func_001852E0(D_0036C700); u8 buf[0x20]; func_00271448(buf, D_00327ED0, result); func_002717E0(a0, buf); }
void func_0025F1D8(u8* a0) { f32 f; u8 buf[0x20]; void* obj = func_001F4AD0((u8*)&D_00475480, 0); if (obj && func_0013B500((u8*)obj, 0x33)) { s32 mode = *(s32*)((u8*)obj + 0xF78); switch (mode) { case 0: f = *(f32*)(*(u8**)((u8*)obj + 0x1004) + 0x3C) * *(f32*)((u8*)obj + 0xF94); break; case 1: f = *(f32*)(*(u8**)((u8*)obj + 0x1008) + 0xC4) * *(f32*)((u8*)obj + 0xF94); break; } if (func_0013B500((u8*)obj, 0x34)) { func_00271448(buf, D_00327EE8, (s32)f); func_002717E0(a0, buf); return; } if (func_0013B500((u8*)obj, 0x36)) { u8* fmt = D_00327EF0; s32 r = func_0029CF10(f); func_00271448(buf, fmt, r); func_002717E0(a0, buf); } } }
