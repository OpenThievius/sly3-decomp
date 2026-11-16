// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00150478(s32, s32);
s32 func_001520C0(s32, s32);
s32 func_0011B028(s32 *, s32);
s32 func_0023CE08();
extern s32 D_00479BB0;
s32 func_0011AF60(s32 *, s32);
s32 func_0023CEC0();
s32 func_001C8970(s32, s32, s32 *, s32);
s32 func_0024D920();
extern s32 D_00342DC0;
s32 func_001C3470(s32);
s32 func_001C4018(s32);
s32 func_00137628(s32);
s32 func_00238568(s32);
s32 func_0023BBE0();
s32 func_001854C8(s32 *, s32, void *);
extern s32 D_0036C700;
s32 func_00173428(s32);

void func_001505B0(void) {
    func_00150478(1, 0xFFFF);
}

void func_001521F8(void) {
    func_001520C0(1, 0xFFFF);
}

void func_001523D8(s32 arg0) {
    func_0023CE08();
    func_0011B028(&D_00479BB0, arg0);
}

void func_00152410(s32 arg0) {
    func_0023CEC0();
    func_0011AF60(&D_00479BB0, arg0);
}

void func_00152448(s32 arg0) {
    func_0024D920();
    func_001C8970(arg0, 1, &D_00342DC0, 0);
}

s32 func_001535E0(char *self)
{
    if (*(s32 *)(self + 0xE68) == 0) {
        *(s32 *)(self + 0xE68) = 1;
        return func_001854C8(&D_0036C700, 12, self);
    }
    return *(s32 *)(self + 0xE68);
}

s32 func_00153620(char *self)
{
    s32 value = 0;
    s32 flag = *(s32 *)(self + 0x1108);
    if (flag != 0) {
        value = func_00173428(flag) != 0;
    }
    if (value == 0) {
        return *(s32 *)(self + 0x1110);
    }
    return 0x80;
}

void func_001536F8(s32 arg0) {
    func_001C3470(arg0 + 0xE40);
}

void func_00153718(s32 arg0) {
    func_001C4018(arg0 + 0xE40);
}

void func_00153F28(s32 arg0) {
    func_0023BBE0();
    func_00137628(arg0 + 0xF50);
    func_00137628(arg0 + 0xF74);
    func_00238568(arg0 + 0x29C);
}
