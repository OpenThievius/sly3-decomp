// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0011B0C0(s32 *, s32);
extern s32 D_00479994;
s32 func_00138F78(s32, s32);
s32 func_001390D0(s32, s32);
s32 func_001395E8(s32, s32);
s32 func_0013A178(s32);
s32 func_0013AE08(s32, s32);
s32 func_0013B398(s32, s32);
s32 func_0013CD10(s32 *, void *);
extern s32 D_00475480;
s32 func_0011AF38(void *, s32);
s32 func_002BB7F0();
s32 func_002BBF40(void *, s32);
s32 func_002BBFA8(s32);
s32 func_0012B0F0(s32 *, s32);
s32 func_0012BC20(s32 *);
s32 func_0024AD00(s32 *, s32, s32, s32 *);

s32 func_00138AC8(s32 arg0) {
    return func_0011B0C0(&D_00479994, arg0) == 0;
}

void func_00138B68(void* self, f32 x)
{
    f32 a = *(f32*)((char*)self + 0x48);
    f32 b = *(f32*)((char*)self + 0x4C);
    *(f32*)((char*)self + 0x44) = x;
    *(f32*)((char*)self + 0x40) = x * a * b;
}

void func_001390B0(void) {
    func_00138F78(1, 0xFFFF);
}

void func_00139208(void) {
    func_001390D0(1, 0xFFFF);
}

void func_00139590(void *obj)
{
    *(s32 *)((char *)obj + 0x130) = 0;
    func_0013CD10(&D_00475480, obj);
}

void func_001395C0(char* base, s32 value)
{
    s32 count = *(s32*)(base + 0x144);
    if ((u32)count < 4) {
        *(s32*)(base + (count << 2) + 0x148) = value;
        *(s32*)(base + 0x144) = count + 1;
    }
}

void func_00139720(void) {
    func_001395E8(1, 0xFFFF);
}

s32 func_001398C8(char* self)
{
    s32 r = 0;
    if (*(s32*)(self + 0x84) != 0 || *(s32*)(self + 0x88) != 0) {
        r = 1;
    }
    return r;
}

s32 func_001398F0(void* p)
{
    s32 r = 0;
    if (*(s32*)((char*)p + 0xA4) != 0 || *(s32*)((char*)p + 0xA8) != 0) {
        r = 1;
    }
    return r;
}

s32 func_00139918(void* p)
{
    return *(s32*)((char*)p + 0xC4) != 0;
}

void func_00139B70(void *arg0, s32 arg1) {
    *(s32 *)arg0 = arg1;
    func_0011AF38((char *)arg0 + 0x1C, 0xFC);
}

void func_00139B98(void* p)
{
    *(int*)((char*)p + 4) = -1;
    *(float*)((char*)p + 0x14) = 0.5f;
}

void func_00139FC0(s32 arg0) {
    func_0013A178(arg0 + 0x10D0);
}

void func_0013AF40(void) {
    func_0013AE08(1, 0xFFFF);
}

s32 func_0013B1C0(void* pso)
{
    return *(s32*)((unsigned char*)pso + 0xC) != 0;
}

void func_0013B388(void* self, s32 size)
{
    s32 old = *(s32*)((char*)self + 0x24);
    *(s32*)((char*)self + 0x24) = old + size;
}

void func_0013B4D0(void) {
    func_0013B398(1, 0xFFFF);
}

void func_0013B4F0(void) {

}

void func_0013B4F8(void) {

}

void func_0013B540(char *arg0) {
    char *temp_s1;

    temp_s1 = arg0 + 4;
    if (*(s32 *)(arg0 + 4) == 0) {
        func_002BBF40(temp_s1, func_002BB7F0());
        func_002BBFA8(*(s32 *)(arg0 + 4));
    }
}

void func_0013B6F0(s32 a, s32 b, s32 c)
{
    s32 t[2];
    s32 u[2];
    func_0012B0F0(t, c);
    func_0024AD00(u, a, b, t);
    func_0012BC20(u);
    func_0012BC20(t);
}

s32 func_0013B898(s32 arg0) {
    return arg0;
}

void func_0013BEC0(void) {

}
