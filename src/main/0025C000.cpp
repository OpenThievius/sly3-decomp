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
