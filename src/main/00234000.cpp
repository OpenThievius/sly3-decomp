// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern s32 D_0046FF38;
extern s32 D_0046FF3C;
extern s32 D_00474F98;
extern s32 D_00474F9C;
extern s32 D_00474FA0;
extern s32 D_00474FA4;
extern s32 D_00474FA8;
extern s32 D_00474FAC;
s32 func_00235EC8();
extern s32 D_00479D98;
s32 func_00236D58(s32, s32);
s32 func_001D2898(s32, s32, s32);

void func_00235D50(s32 *arg0) {
    func_001D2898(arg0[2], arg0[1], arg0[0]);
}

void func_00235DE0(void) {
    D_0046FF38 = 0;
    D_0046FF3C = 0;
    D_00474F98 = 0;
    D_00474F9C = 0;
    D_00474FA0 = 0;
    D_00474FA4 = 0;
    D_00474FA8 = 0;
    D_00474FAC = 0;
}

s32 func_00235F40(void) {
    s32 var_v0;

    var_v0 = func_00235EC8();
    if (var_v0 == 0) {
        var_v0 = D_00479D98;
    }
    return var_v0;
}

s32 func_00235F68(s32 arg0) {
    return D_0046FF3C + (arg0 * 0x2C);
}

void func_00236E90(void) {
    func_00236D58(1, 0xFFFF);
}

void func_00237150(void) {

}

f32 func_00237158(void) {
    return 0.0f;
}

s32 func_00237348(void* a0, void* a1)
{
    s32 v = *(s32*)((char*)a1 + 0x0);
    return (v ^ *(s32*)((char*)a0 + 0x14)) == 0;
}

void func_00237DD8(void* self, f32 first, f32 second)
{
    *(f32*)((char*)self + 0x60) = first;
    *(f32*)((char*)self + 0x64) = second;
}

struct Rec_235CC0 { s32 x0; s32 x4; };

struct Obj_235CC0 { u8 p0[0x20]; Rec_235CC0* x20; };

extern void func_0027E4C0(void* self, s32 a1, s32 a2, void* a3, s32 a4);

struct Packed64 { u64 x; } __attribute__((packed));

typedef struct S { u32 f0; void* f4; void* f8; } S;

typedef struct A { char p[0x48]; void* f48; char q[0x10]; void* f5C; } A;

typedef struct B { char p[0xD8]; u32 fD8; char q[4]; void* fE0; } B;

typedef struct T { char pad[0x28]; int count; int arr[1]; } T;

struct O16 { u8 p0[0xC]; f32 fC; f32 f10; f32 f14; f32 f18; u16 f1C; u8 p1E[0x50 - 0x1E]; f32 f50; f32 f54; f32 f58; f32 f5C; f32 f60; f32 f64; f32 f68; f32 f6C; };

struct O32 { u8 p0[0xC]; f32 fC; f32 f10; f32 f14; f32 f18; u32 f1C; u8 p20[0x50 - 0x20]; f32 f50; f32 f54; f32 f58; f32 f5C; s32 f60; s32 f64; };

extern int func_002715F8(char* s);

extern int func_00271700(u16* s);

extern int func_002562D8(int* arr, int val);

extern void* func_00259590(int size);

extern void func_00236FE0(void* a0, void* a1);

extern void func_002378C0(void* a0, s32 a1);

void func_00237DE8(O16* self, O16* src) ;

void func_00237850(O32* self, O32* src) ;

void func_00235D50(S* s) ;

s32 func_00235CC0(Obj_235CC0* self, s32 idx, s32 a2, void* a3) { Rec_235CC0* n = &self->x20[idx]; func_0027E4C0(a3, 0xC, n->x0, (void*)n->x4, a2); return n->x0; }

void func_00237760(O16* self, O16* src) { func_00236FE0(self, src); f32 a = src->fC; f32 b = src->f10; self->f50 = a; self->f54 = b; }

void func_00237850(O32* self, O32* src) { func_00236FE0(self, src); self->f60 = src->f1C; f32 v = src->fC; self->f50 = v; f32 a = src->f10; f32 b = src->f14; self->f58 = b; self->f54 = a; v = src->f18; self->f64 = -1; self->f5C = v; func_002378C0(self, 0); }

void func_00237DE8(O16* self, O16* src) { func_00236FE0(self, src); f32 v; v = src->fC; self->f50 = v; v = src->f10; self->f54 = v; v = src->f14; self->f58 = v; v = src->f18; self->f5C = v; }
