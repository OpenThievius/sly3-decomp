// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0011B028(s32);
s32 func_001A9F88(s32, s32);
s32 func_00210C08(void *);
s32 func_001A97B8();
s32 func_001A9630(s32 *, s32);
extern s32 D_0036E740;
extern s32 D_0036F900;
s32 func_001A96C8(s32 *, s32);
s32 func_001A9770(s32 *);
s32 func_001A9780(s32 *);

void func_001A9098(char *self)
{
    if (*(s32 *)(self + 0x1054) < 3) return;
    if (*(s32 *)(self + 0x1050) == 3) {
        func_00210C08(self + 0x1124);
    }
}

void func_001A9158(char* self, s32 value)
{
    *(s32*)(self + 0x1108) = value;
    func_001A97B8();
}

void func_001A9198(void* pobject, s32 value)
{
    *(s32*)((char*)pobject + 0x110C) = value;
    func_001A97B8();
}

s32 func_001A91D8(void* p)
{
    return *(s32*)((char*)p + 0x1194);
}

void func_001A9240(s32 arg0) {
    func_0011B028(arg0 + 0x1194);
}

void func_001A93C8(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 != 1) {
        func_001A9630(&D_0036E740, arg2);
    }
    if (arg1 != 0) {
        func_001A9630(&D_0036F900, arg2);
    }
}

void func_001A9420(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 != 1) {
        func_001A96C8(&D_0036E740, arg2);
    }
    if (arg1 != 0) {
        func_001A96C8(&D_0036F900, arg2);
    }
}

void func_001A94A8(s32 arg0, s32 arg1) {
    if (arg1 != 1) {
        func_001A9770(&D_0036E740);
    }
    if (arg1 != 0) {
        func_001A9770(&D_0036F900);
    }
}

void func_001A94F0(s32 arg0, s32 arg1) {
    if (arg1 != 1) {
        func_001A9780(&D_0036E740);
    }
    if (arg1 != 0) {
        func_001A9780(&D_0036F900);
    }
}

s32 func_001A9760(char* self)
{
    return *(s32*)(self + 0x1180) > 0;
}

void func_001AA0F8(void) {
    func_001A9F88(1, 0xFFFF);
}
