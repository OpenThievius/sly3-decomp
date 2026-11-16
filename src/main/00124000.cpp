// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0011D740(s32, s32);
s32 func_0012AF00(s32, void *);
s32 func_0012BC20(void *);
s32 func_0012BDD8(void *, s32);
s32 func_0011D830(s32, s32, s32);
s32 func_0012AF38(void *, s32);
s32 func_0012B008(void *, s32);
s32 func_0021F5D0(s32, s32);
s32 func_00127730(s32, s32);

s32 func_00124B90(s32 arg0, s32 arg1, s32 arg2) {
    char sp[0x10];
    func_0012BDD8(sp, 0x19);
    s32 temp_a1 = *(s32 *)(sp + 4);
    func_0011D740(*(s32 *)(arg2 + 4), temp_a1);
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

s32 func_00124BF0(s32 arg0, s32 unused_a1, char *arg2) {
    char sp[0x10];
    func_0012BDD8(sp, 0x19);
    s32 temp_a2 = *(s32 *)(arg2 + 0xC);
    s32 temp_a0 = *(s32 *)(arg2 + 4);
    func_0011D830(temp_a0, temp_a2, *(s32 *)(sp + 4));
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

s32 func_00124D80(s32 arg0, void *arg1, void *arg2) {
    char sp[0x10];
    func_0012AF38(sp, *(s32 *)((char *)arg2 + 4) + 0x30);
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

s32 func_00124DC8(s32 arg0, void *arg1, void *arg2) {
    char sp[0x10];
    func_0012B008(sp, *(s32 *)((char *)arg2 + 4));
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

s32 func_00127658(s32 arg0, void *arg1, void *arg2)
{
    char sp[0x10];
    func_0012BDD8(sp, 0x22);
    func_0021F5D0(*(s32 *)((char *)arg2 + 4), *(s32 *)((char *)arg2 + 0xC));
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

void func_00127868(void) {
    func_00127730(1, 0xFFFF);
}
