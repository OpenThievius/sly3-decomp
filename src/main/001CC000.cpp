// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001CE758(s32, s32);
s32 func_00184968(s32 *);
s32 func_001CF058(s32 *, s32, s32);
extern s32 D_00349F90;
extern s32 D_0036C700;
extern s32 D_00375290;
s32 func_00271B20(s32, s32);
s32 func_001CEFB8();
s32 func_00293530(s32, s32);
s32 func_002936C0(s32);
s32 func_002936E0(s32);

void func_001CE890(void) {
    func_001CE758(1, 0xFFFF);
}

void func_001CE8B0(void) {
    func_00184968(&D_0036C700);
    D_00349F90 = -1;
    func_001CF058(&D_00375290, 0, 0);
}

s32 func_001CEA80(s32 value)
{
    if (value == 0) return 0x1D;
    if (value > 0) return 0x1E;
    return 0x1F;
}

void func_001CEE08(s32* out)
{
    *out = func_00271B20(1, 1);
    *(s32*)(out + 1) = -1;
    *(s32*)(out + 4) = 0x20;
}

void func_001CEF70(s32 *arg0) {
    if (func_001CEFB8() != 0) {
        func_00293530(arg0[1], 1);
    }
    func_002936E0(arg0[0]);
    func_002936C0(arg0[0]);
}
