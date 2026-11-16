// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0025EE50(s32, s32);
s32 func_002717E0();
s32 func_0027ED60(s32 *, s32);
extern s32 D_004BC220;
s32 func_0027EEC8(s32 *, s32);
s32 func_00150630(s32 *, s32);
s32 func_00271730(s32, s32);
extern s32 D_0046F788;
extern s32 D_00475480;

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
