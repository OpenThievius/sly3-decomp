// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001E4B10(s32, s32);
s32 func_0023AE08();
s32 func_00240E58(s32, s32, s32);
s32 func_0011B028(s32 *, s32);
s32 func_0023CE08();
extern s32 D_00479B68;
s32 func_0011AF60(s32 *, s32);
s32 func_0023CEC0();
s32 func_001E5FC8();
s32 func_001E60A8(s32, s32);
s32 func_001C78A0();
extern s32 D_0047A26C;
void *func_001E5F60(s32, s32);
s32 func_0023FE38(s32, s32);
s32 func_00240000(s32, s32);
s32 func_0023FEC0(s32, s32);
s32 func_00240080(s32, s32);

void func_001E4C48(void) {
    func_001E4B10(1, 0xFFFF);
}

void func_001E4C68(s32 arg0) {
    func_0023AE08();
    func_00240E58(arg0, 0x03FFFFFF, 2);
    func_00240E58(arg0, 0x88001, 0);
}

void func_001E4E78(s32 arg0) {
    func_0023CE08();
    func_0011B028(&D_00479B68, arg0);
}

void func_001E4EB0(s32 arg0) {
    func_0023CEC0();
    func_0011AF60(&D_00479B68, arg0);
}

void func_001E5D60(s32 arg0, s32 arg1)
{
    if (func_001E5FC8() == 0) {
        func_0023FE38(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 2) + 4) = arg1;
}

void func_001E5DB8(s32 arg0, s32 arg1) {
    if (func_001E5FC8() == 0) {
        func_00240000(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 4) + 4) = arg1;
}

void func_001E5E48(s32 arg0, s32 arg1) {
    if (func_001E5FC8() == 0) {
        func_0023FEC0(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 3) + 4) = arg1;
}

void func_001E5EA0(s32 arg0, s32 arg1)
{
    if (func_001E5FC8() == 0) {
        func_00240080(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 5) + 4) = arg1;
}

s32 func_001E5FF8(void) {
    return func_001E5FC8() == 0;
}

void func_001E61E0(void) {
    func_001E60A8(1, 0xFFFF);
}

void func_001E6310(s32 arg0) {
    func_001C78A0();
    func_0011AF60(&D_0047A26C, arg0);
}
