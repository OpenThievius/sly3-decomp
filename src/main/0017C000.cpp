// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0017CBB0();
s32 func_0017CC20();
s32 func_0017CC88();
s32 func_0017D028(s32, s32);
s32 func_0017D820(s32, s32);
s32 func_001F4A80(s32);
s32 func_0017DA50(s32, s32);
s32 func_0017E608(s32, s32);
s32 func_0017F828(s32, s32);
s32 func_0017FE90(s32, s32);
s32 func_00238978();
s32 func_001C7340();
s32 func_001C9118(void *, s32);
s32 func_001C7938();

void func_0017C9B0(void) {

}

void func_0017C9B8(void) {
    func_0017CBB0();
}

void func_0017C9D8(void) {
    func_0017CC20();
}

void func_0017C9F8(void) {
    func_0017CC88();
}

void func_0017D160(void) {
    func_0017D028(1, 0xFFFF);
}

void func_0017D180(char *self)
{
    s32 flags = func_001C7340();
    func_001C9118(self, 1);
    s32 f = *(s32 *)(self + 0x3C);
    if ((f ^ 1) & 1) {
        *(s32 *)f = *(s32 *)f | 0xA;
        return;
    }
    *(s32 *)(self + 0x3C) = f | 0xA;
}

void func_0017D248(char *self) {
    func_001C7938();
    *(s32 *)(self + 0x60) = 0;
}

void func_0017D840(s32 arg0, s32 arg1) {
    func_0017D820(arg0, func_001F4A80(arg1));
}

void func_0017DB88(void) {
    func_0017DA50(1, 0xFFFF);
}

void func_0017E740(void) {
    func_0017E608(1, 0xFFFF);
}

void func_0017F960(void) {
    func_0017F828(1, 0xFFFF);
}

void func_0017F9B8(s32 arg0) {
    func_00238978();
    func_0017FE90(arg0, 0);
}
