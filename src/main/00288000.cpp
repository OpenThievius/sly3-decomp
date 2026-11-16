// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00288A48(s32, s32);
s32 func_002894C8(s32, s32);
s32 func_0028B030(s32, s32);

void func_00288B80(void) {
    func_00288A48(1, 0xFFFF);
}

void func_00289638(void) {
    func_002894C8(1, 0xFFFF);
}

void func_00289658(void) {
    func_002894C8(0, 0xFFFF);
}

s32 func_0028A470(void* self)
{
    return ++*(s32*)((char*)self + 0x4C);
}

void func_0028B168(void) {
    func_0028B030(1, 0xFFFF);
}

void func_0028B188(s32 arg0, s32 arg1) {
    *(s32*)(arg1 + 0x80) = 0;
    *(float*)(arg1 + 0x84) = 1.0f;
    *(s32*)(arg1 + 0x88) = arg1 + 0x80;
    *(s32*)(arg1 + 0x8C) = arg1 + 0x84;
}
