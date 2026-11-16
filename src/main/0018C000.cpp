// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0018C5F8(s32, s32);
s32 func_0018CFE0(s32, s32);
s32 func_00248858(s32 *, s32);
extern s32 D_00474FF0;
extern f32 D_0036BB98;

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

void func_0018C730(void) {
    func_0018C5F8(1, 0xFFFF);
}

s32 func_0018C878(char* self)
{
    s32 v = *(s32*)(self + 0x24) + 1;
    *(s32*)(self + 0x24) = v;
    return v;
}

void func_0018D118(void) {
    func_0018CFE0(1, 0xFFFF);
}
