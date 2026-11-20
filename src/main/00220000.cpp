// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0021EB88();
s32 func_00220E58(s32);
s32 func_00221B40();
s32 func_00150630(s32 *, s32);
s32 func_00222410(s32);
s32 func_0025E188();
s32 func_00271730(s32, s32);
extern s32 D_00475480;
s32 func_00223308(s32, s32);
s32 func_00223590(s32, s32);
s32 func_0013CD10(s32 *, s32);
s32 func_002237F8();
s32 func_00223AA8(s32);
s32 func_00224158(s32);
s32 func_00224600(s32, s32);
s32 func_0023C580();
s32 func_001FC968();
s32 func_002248F0(s32);
extern f32 D_0036BBD8;
s32 func_00222CD8();

extern void func_00271448(u8*, u8*, s32);
extern void func_00271448(u8*, u8*, u8*, u8*, s32);
extern void func_00271448(u8*, u8*, s32, s32);
extern void func_002717E0(u8*, u8*);
extern u8 D_00468D30[];
extern void func_00271448(u8*, u8*, void*);
extern u8 D_00375290[];
extern u8 D_004BC268[];
extern u8 D_003261C8[];
extern s32 func_001CFDF8(u8*);
extern void* func_0025E6D0(u8*);
extern void func_00271448(u8*, u8*, u8*, u8*);
extern void func_00271448(u8*, u8*, s32, s32, s32);
extern void* func_0017E1B8(void*, s32, s32, u8*);
struct S_223858 { u8 pad[0x150]; s32 x150; };
extern void func_0023AE08(void*);
extern void func_0013CD10(void*,void*);
extern void func_002237F8(void*);
extern u8 D_00363BF8[];
extern void func_0021DCD8(void*);
extern void func_00222868();
void func_00223858(S_223858* self) ;
void func_00222840(s32 p0);
void* func_002227C8(u8* self);
void func_002236E8(u8* s);
void func_002237F8(u8* a, s32 v);
void func_00222750(u8* a0);
void func_00222800(u8* a);
void func_00220E28(s32 arg0) {
    func_0021EB88();
    func_00220E58(arg0);
}

s32 func_00221A20(char *self)
{
    char *node = *(char **)(self + 0x34);
    if (node == 0) {
        return 0;
    }
    s32 state = *(s32 *)(node + 0x48);
    if (state != 2) {
        return 0;
    }
    return *(s32 *)(node + 0x54) == 2;
}

void func_00221A58(void* self, s32 value)
{
    if (value != *(s32*)((char*)self + 0x38)) {
        *(s32*)((char*)self + 0x38) = value;
        *(f32*)((char*)self + 0x3C) = D_0036BBD8;
    }
}

s32 func_00221AC0(void) {
    return 0;
}

void func_00221BA0(void) {
    func_00221B40();
}

void func_00222120(void* p, s32 v)
{
    if (v != *(s32*)((char*)p + 0x38)) {
        *(s32*)((char*)p + 0x38) = v;
        *(f32*)((char*)p + 0x3C) = D_0036BBD8;
    }
}

void func_00222488(s32 arg0) {
    func_00271730(arg0, func_00150630(&D_00475480, func_00222410(func_0025E188())));
}

void func_00222868(void* self)
{
    if (*(s32*)((char*)self + 0x40)) {
        func_00222CD8();
    }
}

void func_00223550(void) {
    func_00223308(1, 0xFFFF);
}

void func_00223570(void) {
    func_00223308(0, 0xFFFF);
}

void func_002236C8(void) {
    func_00223590(1, 0xFFFF);
}

void func_00223820(s32 arg0) {
    func_002237F8();
    func_0013CD10(&D_00475480, arg0);
}

void func_00223888(void* self, s32 value) {
    u32 i = *(u32*)((char*)self + 0x130);
    if (i < 7) {
        *(s32*)((char*)self + (i << 2) + 0x134) = value;
        *(u32*)((char*)self + 0x130) = i + 1;
    }
}

void func_00223A08(s32 arg0) {
    func_0023C580();
    func_00223AA8(arg0);
    func_00224158(arg0);
    func_00224600(arg0, 0);
}

void func_00223A48(s32 arg0) {
    func_001FC968();
    func_002248F0(arg0);
}


void func_00222750(u8* a0) { u8* s; if (func_001CFDF8(D_00375290)) s = D_004BC268; else s = D_00468D30; u8* fmt = D_003261C8; void* r = func_0025E6D0(s); u8 buf[0x10]; func_00271448(buf, fmt, r); func_002717E0(a0, buf); }
void* func_002227C8(u8* self) { func_0021DCD8(self); *(void**)(self+0xC) = &D_00363BF8; return self; }
void func_00222800(u8* a) { *(s32*)(a+0x30) = (s32)func_0017E1B8((u8*)&D_00475480, 0x405, 0x775, 0); }
void func_00222840(s32 p0) { func_00222868(); *(s32*)((u8*)(p0) + 0x30) = 0; }
void func_002236E8(u8* s) { func_0023AE08(s); s64 v = *(s64*)(s+0x128); *(s64*)(s+0x128) = v | 4; }
void func_002237F8(u8* a, s32 v) { u32 n = *(u32*)(a+0x150); if (n < 0x7) { *(s32*)(a + (n<<2) + 0x154) = v; *(u32*)(a+0x150) = n + 1; } }
void func_00223858(S_223858* self) { self->x150 = 0; func_0013CD10(&D_00475480, self); }
