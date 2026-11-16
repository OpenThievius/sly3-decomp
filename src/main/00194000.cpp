// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00195278(s32, s32);
s32 func_002362D0(s32, s32, s32);
s32 func_00196FC0(s32, s32);
s32 func_0011AD60(s32, s32);
s32 func_001C7340();
s32 func_001971C8(s32);
s32 func_001C7DC8();
s32 func_00198540(s32, s32);
s32 func_00194280();
s32 func_00194480(s32, s32, s32 *);
extern s32 D_0036E260;
s32 func_00194308();
extern s32 D_0036E280;
s32 func_00182D60(s32, s32 *, s32 *);
extern s32 D_002C1D00;
extern s32 D_002C2630;
s32 func_001746C0(s32);
s32 func_001748F8(s32);
s32 func_0027E2A8(s32);
s32 func_0013B500(s32, s32);
s32 func_00197838(void *, s32, s32, s32);
s32 func_00238980();
s32 func_00238A38(void *);
s32 func_00252FC0(s32, s32);

void func_001944E8(s32 arg0, s32 arg1, s32 arg2) {
    func_00194280();
    func_00194480(arg2, 2, &D_0036E260);
}

void func_00194520(s32 arg0, s32 arg1, s32 arg2) {
    func_00194308();
    func_00194480(arg2, 2, &D_0036E280);
}

void func_00194AB8(s32 a0, s32 a1, s32 a2)
{
    func_00182D60(a2, &D_002C1D00, &D_002C2630);
}

void func_00194AE8(s32 arg0, s32 arg1, s32 arg2)
{
    func_001746C0(arg2);
    func_0027E2A8(arg2);
    func_001748F8(arg2);
}

void func_001953B0(void) {
    func_00195278(1, 0xFFFF);
}

s32 func_00196260(char* self, char* other)
{
    s32 same = 0;
    if (*(s32*)other == *(s32*)(self + 4) && *(s32*)(other + 4) == *(s32*)(self + 8)) {
        same = *(s32*)(other + 8) == *(s32*)(self + 12);
    }
    return same;
}

void func_00196880(void* self, f32 a, f32 b)
{
    *(f32*)((char*)self + 0x24) = a;
    *(f32*)((char*)self + 0x28) = b;
}

void func_00196F00(s32 arg0) {
    func_002362D0(1, arg0, 0);
}

void func_001970F8(void) {
    func_00196FC0(1, 0xFFFF);
}

s32 func_00197118(s32 value)
{
    if (func_0013B500(value, 12) == 0) {
        return (func_0013B500(value, 10) == 0) ? -1 : 1;
    }
    return 0;
}

void func_00197168(s32 arg0) {
    func_001C7340();
    func_0011AD60(arg0 + 0x40, 0x1C);
}

void func_00197198(s32 arg0) {
    func_001C7DC8();
    func_001971C8(arg0);
}

void func_00197690(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_00198540(arg1, arg0);
    }
}

void func_00197968(char *self) {
    func_00238980();
    func_00238A38(self);
    func_00197838(self, 0, 0, 0);
    func_00252FC0(*(s32 *)(self + 0x10), 0x35);
}
