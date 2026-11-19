// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct Quad_0011D830 { u32 words[4]; } __attribute__((aligned(16)));
struct Block_0011D830 { Quad_0011D830 quad[4]; } __attribute__((aligned(16)));
extern void func_0011D768(void*, void*);
extern void func_0011D558(void*, void*, void*);
s32 func_0011BFB8(s32, s32);
s32 func_0011C110(s32, s32);
extern s32 D_0036B124;
s32 func_0011C2E0(void *, s32);
s32 func_0011C560(s32, s32);
s32 func_0011D968(s32, s32, s32, s32);
s32 func_0011DD48(s32, s32, s32, s32);
s32 func_0011DFA8(s32, s32);
s32 func_0011E260(s32, s32);
s32 func_00292F20();
s32 func_0011FC10(s32, s32);

void func_0011C0F0(void) {
    func_0011BFB8(1, 0xFFFF);
}

void func_0011C248(void) {
    func_0011C110(1, 0xFFFF);
}

void func_0011C2B8(s32 arg0) {
    if (arg0 == -1) {
        D_0036B124 = 0;
        return;
    }
    D_0036B124 = arg0;
}

s32 func_0011C330(void)
{
    void *args[1];
    s32 result = func_0011C2E0(args, 0);
    return *(s32 *)args;
}

void func_0011C698(void) {
    func_0011C560(1, 0xFFFF);
}

void func_0011C6D0(s32 arg0, s32 arg1) {
    func_0011D968(4, 3, arg0, arg1);
}

s32 func_0011D628(s32 arg0, s32 arg1) {
    func_0011DD48(4, 4, arg1, arg0);
    return arg0;
}

void func_0011D740(s32 arg0, s32 arg1) {
    func_0011D968(4, 4, arg0, arg1);
}

void func_0011D830(void* source, void* key, Block_0011D830* output)
{
    Block_0011D830 result;
    Block_0011D830 workspace;
    func_0011D768(&workspace, source);
    func_0011D558(&result, key, &workspace);
    output->quad[0] = result.quad[0];
    output->quad[1] = result.quad[1];
    output->quad[2] = result.quad[2];
    output->quad[3] = result.quad[3];
}

void func_0011E0E0(void) {
    func_0011DFA8(1, 0xFFFF);
}

s32* func_0011E100(s32* out, s32 a, s32 b, s32 c)
{
    out[0] = a;
    out[1] = b;
    out[2] = c;
    out[3] = 0;
    return out;
}

void func_0011E1F0(void* self, s32* out)
{
    s32 v = *(s32*)((char*)self + 0x10) - 1;
    *(s32*)((char*)self + 0x10) = v;
    *out = *(s32*)((char*)self + 0xC);
    *(s32*)((char*)self + 0xC) = (s32)out;
}

void func_0011E210(void* p)
{
    *(int*)((char*)p + 0x14) = 0;
    *(int*)((char*)p + 0x10) = 0;
    *(int*)((char*)p + 0xC) = 0;
}

void func_0011E398(void) {
    func_0011E260(1, 0xFFFF);
}

s32 func_0011E8B8(void) {
    return func_00292F20() % 905010707;
}

s32 func_0011E9C8(f32 fparg0, f32 fparg1, f32 fparg2) {
    s32 var_v0;

    var_v0 = 1;
    if (!(fabsf(fparg0 - fparg1) < fparg2)) {
        var_v0 = 0;
    }
    return var_v0;
}

void func_0011FD48(void) {
    func_0011FC10(1, 0xFFFF);
}

typedef long long v2l __attribute__((vector_size(16)));

extern v2l D_00317550;

extern void func_00291E8C(void*,void*,s32);

extern void func_0011CBF0(void*, s32, v2l);

extern void func_002A3EE8(f32,f32);

extern void func_0011E1F0(void*, void*);

extern void* func_0011E118(void*);

void* func_0011CBA0(u8* s, s32 p1) { v2l buf[3]; func_0011CBF0(buf, p1, D_00317550); func_00291E8C(s, buf, 0x30); return s; }

void func_0011D4F8(u8* a) { func_002A3EE8(*(f32*)((u8*)a+4), *(f32*)a); }

void func_0011E230(void* self) { void* p = func_0011E118(self); func_0011E1F0(self, p); }
