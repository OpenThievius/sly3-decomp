// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_002852C0(s32, s32);
s32 func_001854C8(s32 *, s32, s32);
s32 func_00286360(s32, s32);
extern s32 D_0036C700;
s32 func_0023AE08();
s32 func_00240E58(s32, s32, s32);
s32 func_00169BF8(s32);
s32 func_00288370(s32, s32, s32, void *);
s32 func_0013CD00(s32, s32);
s32 func_0023E178();

s32 func_002852B0(void* p)
{
    return *(s32*)((char*)p + 0x14) != 0;
}

void func_00285418(void) {
    func_002852C0(1, 0xFFFF);
}

void func_00285438(void) {
    func_002852C0(0, 0xFFFF);
}

void func_00285588(void* self)
{
    *(int*)((char*)self + 0x228) = 0;
}

void func_00285930(char *self, void *other)
{
    s32 result = func_00288370(func_00169BF8(0x54), (s32)other, 8, self);
    *(s32 *)(self + 0x2C0) = result;
}

void func_00286D68(void* self, s32 value) { *((s32*)((char*)self + 0x1AC)) = value; }

s32 func_00286D90(char *self, s32 value)
{
    s32 result = func_0023E178();
    if (value == *(s32 *)(self + 0x204)) {
        result = func_0013CD00(result, 1);
    }
    return result;
}

void func_00287740(s32 arg0) {
    func_001854C8(&D_0036C700, 0x60, arg0);
    func_00286360(arg0, -1);
}

void func_00287A70(s32 arg0) {
    func_0023AE08();
    func_00240E58(arg0, 0x03FFFFFF, 2);
    func_00240E58(arg0, 0x03D88001, 0);
}

void func_00287AF8(void* self)
{
    *(int*)((char*)self + 0x160) = 1;
    *(int*)((char*)self + 0x130) = 0;
    *(int*)((char*)self + 0x134) = 0;
    *(int*)((char*)self + 0x138) = 0;
}
