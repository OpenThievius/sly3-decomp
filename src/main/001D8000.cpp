// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001D8B40(s32, s32);
s32 func_00238980();
s32 func_001D9940(s32);
s32 func_00238978();
s32 func_002389C0(s32);
s32 func_001D9E70(s32);
s32 func_001DA2C8(s32, s32);
s32 func_001DA630(s32, s32);
s32 func_001DA8A8(s32, s32);
extern f32 D_0036BB98;
s32 func_001D8008();
s32 func_00238970();
s32 func_00252E40(s32, s32);
s32 func_00252FC0(s32, s32);
s32 func_001D7F90(s32);
s32 func_001D96F8();
s32 func_001D9A88(void *, s32);
s32 func_00238A38(void *);
s32 func_0014F1C8(void *, u32, s32);
s32 func_001DB3B8(s32, s32, s32);
s32 func_001DB490(s32);
s32 func_001DC430(s32, s32);

void func_001D8110(s32 arg0) {
    func_00238980();
    func_001D8B40(arg0, 0);
}

void func_001D8AA0(char* self, s32 value)
{
    if (value != *(s32*)(self + 0x3C)) {
        *(s32*)(self + 0x3C) = value;
        *(f32*)(self + 0x40) = D_0036BB98;
    }
}

void func_001D9010(void* self)
{
    func_001D8008();
    *(float*)((char*)self + 0xC0) = 1.0f;
}

void func_001D9340(char* self)
{
    func_00238970();
    *(float*)(self + 0x38) = -1.0f;
    func_00252E40(*(s32*)(self + 0x10), 0x3F);
}

void func_001D9490(char* pgoal)
{
    func_00238980();
    func_00252FC0(*(s32*)(pgoal + 0x10), 0x3F);
}

s32 func_001D96B8(char* self)
{
    if (func_001D96F8() == 0) return 0;
    return func_001D7F90(*(s32*)(self + 0x18));
}

void func_001D9778(char* self)
{
    func_00238970();
    *(s32*)(self + 0x38) = -1;
    func_00252E40(*(s32*)(self + 0x10), 0x3D);
}

void func_001D97B0(s32 arg0) {
    func_00238978();
    func_002389C0(arg0);
    func_001D9940(arg0);
}

s32 func_001D97E8(void *pgoal)
{
    func_00238980();
    func_001D9A88(pgoal, -1);
    func_00238A38(pgoal);
    return func_00252FC0(*(s32 *)((char *)pgoal + 0x10), 0x3D);
}

void func_001D9CE0(s32 arg0) {
    func_00238978();
    func_001D9E70(arg0);
}

void func_001DA100(char* self) {
    s32 a0 = func_00238970();
    *(s32*)(self + 0x30) = -1;
    func_00252E40(*(s32*)(self + 0x10), 0x39);
}

void func_001DA138(s32 arg0) {
    func_00238978();
    func_001DA2C8(arg0, 0);
}

s32 func_001DA400(char *self)
{
    float value = *(float *)(*(char **)(self + 0x10) + 0x10F8) - *(float *)(self + 0x38);
    int result = (__builtin_fabsf(value) < 50.0f);
    return result != 0;
}

void func_001DA480(s32 arg0) {
    func_00238978();
    func_001DA630(arg0, 0);
}

s32 func_001DA7A0(void) {
    return 4;
}

void func_001DA7A8(char* self)
{
    func_00238970();
    func_00252E40(*(s32*)(self + 0x10), 0x3A);
}

void func_001DA828(void* pgoal)
{
	func_00238980();
	func_00252FC0(*(s32*)((char*)pgoal + 0x10), 0x3A);
}

s32 func_001DA858(void) {
    return 4;
}

void func_001DA9E0(void) {
    func_001DA8A8(1, 0xFFFF);
}

s32 func_001DAA00(void) {
    return 0;
}

void func_001DAC88(void* p)
{
    s32 v = *(s32*)((char*)p + 0x18);
    *(s32*)((char*)p + 0x24) = v;
    *(s32*)((char*)p + 0x28) = 0;
    *(s32*)((char*)p + 0x20) = 0;
    *(s32*)((char*)p + 0x1C) = 0;
    *(s32*)((char*)p + 0x2C) = 0;
}

s32 func_001DB1B0(void) {
    return 0;
}

s32 func_001DB218(void) {
    return 1;
}

s32 func_001DB560(void *unused, void *pvec, void *pmat)
{
    u32 n = *(u32 *)((char *)pvec + 0xC);
    if (*(u32 *)((char *)pmat + 0x170) < n) {
        return 0;
    }
    func_0014F1C8((char *)pmat + 0x160, n, *(s32 *)((char *)pvec + 0x8));
    return 1;
}

void func_001DB5A0(void* a0, void* a1, s32 a2)
{
    func_001DB3B8((s32)((char*)a2 + 0x180), *(s32*)((char*)a1 + 0xC), *(s32*)((char*)a1 + 0x8));
}

s32 func_001DB698(s32 a0, s32 a1, s32 a2)
{
    func_001DC430(a2, 0);
    func_001DB490(a2 + 0x180);
    return 1;
}

s32 func_001DB6D0(void) {
    return 1;
}
