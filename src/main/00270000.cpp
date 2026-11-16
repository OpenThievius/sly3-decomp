// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_002719C8(s32, s32);
s32 func_00271CE0(s32, s32);
s32 func_002738C0(s32, s32);
s32 func_0011AF60(s32 *, s32);
s32 func_001C85E8();
extern s32 D_00479370;
s32 func_002718D8(s32);
s32 func_00271B20(s32, s32);
s32 func_0013B500(s32, s32);
s32 func_0025CDD0(s32, void *);

s32 func_00271928(s32 value)
{
    s32 result = 0;
    s32 masked = value & 0xFFFF;
    if (func_002718D8(masked) != 0 || masked == 0x2D) {
        result = 1;
    }
    return result;
}

void func_00271B00(void) {
    func_002719C8(1, 0xFFFF);
}

void func_00271B80(s32 *arg0)
{
    arg0[1] = -1;
    arg0[2] = func_00271B20(1, 1);
}

void func_00271E18(void) {
    func_00271CE0(1, 0xFFFF);
}

s32 func_002725D0(s32 arg0, char *arg1) {
    if (func_0013B500(*(s32 *)(arg1 + 4), 0x65) != 0) {
        return 1;
    }
    return func_0025CDD0(arg0, arg1);
}

void func_002739F8(void) {
    func_002738C0(1, 0xFFFF);
}

void func_00273CC0(s32 arg0) {
    func_001C85E8();
    func_0011AF60(&D_00479370, arg0);
}
