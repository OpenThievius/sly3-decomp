// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0017A770(s32, s32);
extern f32 D_0036BB98;
f32 func_0011E940(f32, f32);
s32 func_00149A08(s32, s32);
s32 func_0013BD88(s32, void *);
s32 func_00244B68();

void func_00178138(void* self, f32 f)
{
    *(f32*)((char*)self + 0x124) = D_0036BB98 + f;
}

void func_00178150(void* self)
{
    *(float*)((char*)self + 0x124) = 3.4028234663852886e+38f;
}

void func_00178160(void* self)
{
    *(float*)((char*)self + 0x124) = -1.0f;
}

s32 func_00178170(char* self)
{
    if (D_0036BB98 < *(f32*)(self + 0x124)) {
        return 1;
    }
    if (*(s32*)(self + 0xE0) == 1 && *(s32*)(self + 0xE4) == 0) {
        return 1;
    }
    return 0;
}

void func_001781B8(char* self)
{
    *(s32*)(self+0xD0)=0;
    s32 a0=*(s32*)(self+0x12C);
    if (a0!=0) {
        func_00149A08(a0, *(s32*)(self+0xD4));
    }
    *(f32*)(self+0x110)=func_0011E940(*(f32*)(self+0xE8), *(f32*)(self+0xEC));
}

void func_00179EA0(void) {

}

s32 func_00179FD0(void* self, s32* out)
{
    *out = *(s32*)((char*)self + 0xD4);
    return *(s32*)((char*)self + 0xD0);
}

void func_0017A280(char *self, s32 mode, s32 value)
{
    if (mode == 1) {
        if (value == *(s32 *)(self + 0xF0)) {
            func_0013BD88(value, self);
            *(s32 *)(self + 0xF0) = 0;
        } else if (value == *(s32 *)(self + 0xF4)) {
            func_0013BD88(value, self);
            *(s32 *)(self + 0xF4) = 0;
        }
    }
}

s32 func_0017A308(char* self)
{
    s32 v = *(s32*)(self + 0xE0);
    if (v == 0) {
        *(s32*)(self + 0xE0) = func_00244B68();
    }
    return *(s32*)(self + 0xE0);
}

void func_0017A9B8(void) {
    func_0017A770(1, 0xFFFF);
}
