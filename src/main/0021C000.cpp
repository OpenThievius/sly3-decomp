// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0021D618(s32, s32);
s32 func_001746A8(s32 *);
s32 func_0021DD28(s32 *);
extern s32 D_0036C2E0;
extern s32 D_0036C308;
extern s32 D_0046F7A0;
extern s32 D_0046F810;
s32 func_0011B0C0(s32 *, s32);
extern s32 D_0046F540;
s32 func_002621F0();
s32 func_00262B60(s32, s32, s32);
s32 func_0017E1B8(s32 *, s32, s32, s32);
extern s32 D_00475480;
s32 func_0021E6B8();
s32 func_0021EB88();
s32 func_0021EE50(s32);
s32 func_001C0130(s32 *);
s32 func_0021F510();
s32 func_0021FE08(s32);

void func_0021D750(void) {
    func_0021D618(1, 0xFFFF);
}

void func_0021DBE8(void) {
    func_0021DD28(&D_0046F7A0);
    func_0021DD28(&D_0046F810);
    func_001746A8(&D_0036C2E0);
    func_001746A8(&D_0036C308);
}

void func_0021DD20(void) {

}

void func_0021DD30(s32 arg0) {
    func_0011B0C0(&D_0046F540, arg0);
}

void func_0021E520(s32 arg0) {
    func_002621F0();
    func_00262B60(arg0, -1, arg0 + 0x144);
}

void func_0021E678(char *arg0) {
    *(s32 *)(arg0 + 0x28) = func_0017E1B8(&D_00475480, 0x405, 0x422, 0);
}

void func_0021E6E8(s32* self)
{
    func_0021E6B8();
    self[10] = 0;
}

void func_0021E930(char* self, s32 value)
{
    if (value == -1) {
        *(s32*)(self + 0x1C) = 0;
        *(s32*)(self + 0x20) = -1;
    } else if (value == *(s32*)(self + 0x18)) {
        *(s32*)(self + 0x1C) = 0;
    } else if (value == *(s32*)(self + 0x20)) {
        *(s32*)(self + 0x20) = -1;
    }
}

s32 func_0021E968(char* self)
{
    s32 v = *(s32*)(self + 0x20);
    if (v == -1) {
        v = *(s32*)(self + 0x18);
    }
    return v;
}

void func_0021EB48(char *obj) {
	s32 temp_a2;
	temp_a2 = *(s32 *)(obj + 0x30);
	*(s32 *)(obj + 0x34) = func_0017E1B8(&D_00475480, 5, temp_a2, 0);
}

void func_0021EE20(s32 arg0) {
    func_0021EB88();
    func_0021EE50(arg0);
}

void func_0021F5D0(void) {
    func_0021F510();
    func_001C0130(&D_00475480);
}

void func_0021FDD8(s32 arg0) {
    func_0021EB88();
    func_0021FE08(arg0);
}

s32 func_0021FE60(char* self)
{
    char* p = *(char**)(self + 0x34);
    if (p == 0) return 0;
    if (*(s32*)(p + 0x48) != 2) return 0;
    return *(s32*)(p + 0x54) == 2;
}
