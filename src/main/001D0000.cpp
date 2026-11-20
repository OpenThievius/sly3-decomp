// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0021C0F0(s32 *);
extern s32 D_004793C8;
s32 func_001CEFC8(s32, s32, s32, s32);
s32 func_002A2648(s32);
s32 func_002A27B8(s32, s32, s32);
s32 func_002A28D0(s32, s32, s32);
s32 func_0021EB88();
s32 func_00150630(s32 *, s32);
s32 func_00271730(s32, s32);
extern s32 D_00375220;
extern s32 D_00475480;
s32 func_001D45B0(s32 *);
extern s32 D_0046F550;
s32 func_001D2228(s32, s32);
extern s32 D_00388C44;
extern s32 D_00388C48;
s32 func_001D26D0();
s32 func_001D2720();
s32 func_001D2818(s32);
extern f32 D_0036BBD8;
s32 func_001D2970(s32, s32);
s32 func_001D2AC8(s32, s32);
s32 func_001D2ED0(void *, s32);
s32 func_001D3AE8();
s32 func_001A99D0(void *, s32);
s32 func_0021DD58();
s32 func_001CEFB8(s32 *);
s32 func_001D2100(void *);
s32 func_0021EBE0();
extern s32 D_00388BF0;
s32 func_0017E1B8(s32 *, s32, s32, s32);

struct S_1D2DF8 { u8 pad[0x38]; s32 x38; };
struct S_001D3918 { u8 pad0[0x30]; s32 x30; u8 pad34[0x38-0x34]; s32 x38; u8 pad3C[0x1FC-0x3C]; s32 x1FC; s32 x200; };
typedef struct S { u32 f0; void* f4; void* f8; } S;
extern void func_00271448(u8*, u8*, s32);
extern void func_00271448(u8*, u8*, u8*, u8*, s32);
extern void func_00271448(u8*, u8*, s32, s32);
extern u8 D_00468D30[];
extern void func_00271448(u8*, u8*, void*);
extern u8 D_00375290[];
extern u8 D_004BC268[];
extern s32 func_001CFDF8(u8*);
extern void* func_0025E6D0(u8*);
extern void func_00271828(u8*, u8*);
extern void func_00271448(u8*, u8*, u8*, u8*);
extern void func_00271448(u8*, u8*, s32, s32, s32);
extern u8 D_0046FC30[];
extern u8 D_00323DB0[];
extern u8 D_00323DB8[];
extern s32 func_0021DD30(u8*);
extern void* func_0025E198(u8*);
extern void* func_00222410(void*);
extern void* func_00150630(u8*, void*);
extern void func_00271730(u8*, void*);
extern s32 func_001D4658(void* self);
extern void func_001D3AE8(void* self);
extern void func_001D2818(void* self);
extern void* func_001D2470(void*);
extern void* func_001D25B0(void*);
extern u8 D_0035C830[];
extern void func_0021EBA8(void*);
extern void func_0021EB00(void*);
extern void func_001D2898(void* dst, void* src, u32 n);
extern void* func_001D2538(s32* a);
extern u8 D_0036C700[];
extern void func_001854C8(u8*, s32, void*);
extern u8 D_0036BB98[];
extern void func_0021DDC0();
extern s32 func_0025E150();
extern void func_00165548(u8*, s32, f32);
extern void func_001A93C8(u8*, s32, void*);
extern s32 func_0021DD30(void*);
extern void func_001A9420(u8*, s32, void*);
extern void func_0021DE60(void*);
void func_001D2D90() ;
void func_001D2DF8(S_1D2DF8* a0) ;
void func_001D27F0(s32 v) ;
struct Packed64 { u64 x; } __attribute__((packed));
void* func_001D24D0(Packed64* a, void* src) ;
void* func_001D2608(Packed64* a, void* src) ;
void func_001D3AE8(S_001D3918* self);
void func_001D3B28(S_001D3918* self);
void func_001D1BF0(u8* a0);
void func_001D3A90(S_001D3918* self);
void func_001D2818();
void* func_001D2080(u8* s);
s32 func_001D0630(void) {
    func_0021C0F0(&D_004793C8);
    return 0;
}

void func_001D08C8(s32 arg0, s32 arg1) {
    func_001CEFC8(arg0 + 0x13960, func_002A2648(arg1), 3, 0);
}

void func_001D0918(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_001CEFC8(arg0 + 0x13960, func_002A27B8(arg1, arg2, arg3), 5, arg4);
}

void func_001D0970(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_001CEFC8(arg0 + 0x13960, func_002A28D0(arg1, arg2, arg3), 6, arg4);
}

void func_001D0BB0(void) {
    func_0021EB88();
}

void func_001D0D10(void* p, s32 value)
{
    if (value != *(s32*)((char*)p + 0x38)) {
        *(s32*)((char*)p + 0x38) = value;
        *(f32*)((char*)p + 0x3C) = D_0036BBD8;
    }
}

void func_001D1A70(s32 arg0) {
    func_00271730(arg0, func_00150630(&D_00475480, D_00375220));
}

void func_001D1B98(s32 arg0) {
    func_00271730(arg0, func_00150630(&D_00475480, func_001D45B0(&D_0046F550)));
}

void func_001D2178(char *arg0)
{
    char *temp_v1;

    func_0021EBE0();
    temp_v1 = *(char **)(arg0 + 0x34);
    if (temp_v1 != 0) {
        if (*(s32 *)(temp_v1 + 0x48) == 2 && *(s32 *)(temp_v1 + 0x54) == *(s32 *)(temp_v1 + 0x48) && D_0036BBD8 - *(f32 *)(temp_v1 + 0x4C) > 1.0f) {
            if (func_001CEFB8(&D_00388BF0) == 0) {
                func_001D2100(arg0);
            }
        }
    }
}

void func_001D2208(void* self, s32 value)
{
    s32 old = *(s32*)((char*)self + 0x38);
    if (value != old) {
        *(s32*)((char*)self + 0x38) = value;
        *(f32*)((char*)self + 0x3C) = D_0036BBD8;
    }
}

void func_001D23A0(void) {
    func_001D2228(1, 0xFFFF);
}

void func_001D23C0(void) {
    func_001D2228(0, 0xFFFF);
}

s32 func_001D23E0(void) {
    return D_00388C48 - D_00388C44;
}

void func_001D2468(void) {

}

s32 func_001D2770(s32 arg0) {
    func_001D26D0();
    return arg0;
}

void func_001D2798(s32 arg0, s32 arg1) {
    func_001D2720();
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

s32 func_001D27E0(void) {
    return 0;
}

void func_001D27E8(void) {

}

void func_001D2AA8(void) {
    func_001D2970(1, 0xFFFF);
}

void func_001D2C00(void) {
    func_001D2AC8(1, 0xFFFF);
}

void func_001D2C20(char *self)
{
    *(s32 *)(self + 0x30) = func_0017E1B8(&D_00475480, 0x405, 0x420, 0);
    *(s32 *)(self + 0x34) = func_0017E1B8(&D_00475480, 0x405, 0x421, 0);
    *(s32 *)(self + 0x200) = -1;
    *(s32 *)(self + 0x1FC) = 0;
}

void func_001D2D10(void *self)
{
    func_001D3AE8();
    func_001D2ED0(self, 0);
    *(s32 *)((char *)self + 0x30) = 0;
}

void func_001D2D48(char *self, s32 value) {
    func_0021DD58();
    if (value != 0) {
        func_001A99D0(self + 0x204, *(s32 *)(self + 0x1C));
    }
}

void func_001D3810(void) {

}


void func_001D1BF0(u8* a0) { if (func_0021DD30(D_0046FC30)) return; u8* s = func_001CFDF8(D_00375290) ? D_004BC268 : D_00468D30; u8* base = (u8*)&D_00475480; void* v = func_0025E198(s); void* w = func_00222410(v); void* r = func_00150630(base, w); func_00271730(a0, r); func_00271828(a0, D_00323DB0); u8* fmt = D_00323DB8; void* r2 = func_0025E6D0(s); u8 buf[0x20]; func_00271448(buf, fmt, r2); func_00271828(a0, buf); }
void* func_001D2080(u8* s) { func_0021EB00(s); *(s32*)(s+0x30)=0x6A5; *(void**)(s+0xC)=&D_0035C830; func_0021EBA8(s); return s; }
void* func_001D24D0(Packed64* a, void* src) { Packed64 local = *a; void* p = func_001D2470(&local); if (p) func_001D2898(p, src, *(u32*)a); return p; }
void* func_001D2608(Packed64* a, void* src) { Packed64 local = *a; void* p = func_001D25B0(&local); if (p) func_001D2898(p, src, *(u32*)a); return p; }
void func_001D27F0(s32 v) { s32 local[2]; local[1]=0x10; local[0]=v; func_001D2538(local); }
void func_001D2818() {}
void func_001D2D90() { func_0021DDC0(); s32 v = func_0025E150(); if (v != 1) func_00165548(D_0036BB98, 0, 0.0f); func_001A93C8((u8*)&D_00475480, -1, 0); func_001854C8(D_0036C700, 0x3A, 0); }
void func_001D2DF8(S_1D2DF8* a0) { if (!func_0021DD30(a0)) return; a0->x38 = 0; func_00165548(D_0036BB98, 0, 1.0f); func_001A9420((u8*)&D_00475480, -1, 0); func_001854C8(D_0036C700, 0x3E, 0); func_0021DE60(a0); }
void func_001D3A90(S_001D3918* self) { if (self->x1FC == 7) { func_001D2ED0(self, 2); if (func_001D4658(self)) { s32 v = self->x38 - 1; self->x38 = v; self->x200 = v; } } }
void func_001D3AE8(S_001D3918* self) { if (self->x1FC == 7) { if (self->x38 >= 2) self->x38 = 1; func_001D2ED0(self, 8); } }
void func_001D3B28(S_001D3918* self) { if (self->x1FC == 7) func_001D2ED0(self, 0xB); }
