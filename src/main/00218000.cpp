// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00219448();
s32 func_002194B0(s32);
s32 func_001FCAC8();
s32 func_0021A418(s32);
s32 func_001C7340();
s32 func_00213988();
s32 func_002621F0();
s32 func_00262B60(s32, s32, s32);
s32 func_0021BD48(s32, s32);
s32 func_0021BEA0(s32, s32);

struct Self_218FC8 { u8 pad[0x1E0]; s32 f1E0; u8 pad2[0x30]; s32 f214; };
extern void func_00271448(u8*, u8*, s32);
extern void func_00271448(u8*, u8*, u8*, u8*, s32);
extern void func_00271448(u8*, u8*, s32, s32);
extern void func_002717E0(u8*, u8*);
extern void func_00271448(u8*, u8*, void*);
extern void* D_00468D24;
extern u8 D_00325DF8[];
extern u8 D_00475480[];
extern void* func_0017E1B8(void*, s32, s32, u8*);
extern void func_0014B590(u8*, void*, s32, s32, f32, u8*, s32);
extern void func_001C7DC8(void*);
extern void func_0024AEF8(u8*,u8*,s32,u8*);
extern void func_001C7340(void*);
extern void func_002194B0(void*);
extern void func_00219448(void*);
extern void func_001C9118(void*, s32);
extern void func_0024B330(void*, void*, s32, s32, void*, void*);
extern void func_0012BC20(void*);
extern void func_001C78A0(void*);
extern f32 D_0036BB98;
void func_0021AD38(u8* s) ;
void func_00218FC8(Self_218FC8* self, void* list) ;
void func_0021B4B8(u8* self) ;
void func_0021A7B8(u8* a0, s32 a1);
void func_002194B0(u8* a);
void func_00219660(u8* self);
void func_002196D0(u8* a);
void func_00219448(u8* a, s32 v1, s32 v2, s32 v3, f32 f);
void func_0021AA38(u8* a, s32 v);
void* func_0021A780(u8* a, u8* b);
void func_00219460(s32 arg0) {
    func_00219448();
    func_002194B0(arg0);
}

void func_00219490(char* self) {
    *(int*)(self + 0x460) = -1;
    *(float*)(self + 0x464) = -1.0f;
    *(int*)(self + 0x45c) = -1;
}

void func_00219738(s32 arg0) {
    func_001FCAC8();
    func_0021A418(arg0);
}

s32 func_0021A710(void* p)
{
    return *(s32*)((char*)p + 0x5C) != 0;
}

void func_0021A8F0(void* self)
{
    func_001C7340();
    func_00213988();
    *(float*)((char*)self + 0x5C) = 1.0f;
}

void func_0021AA00(char *self, s32 value)
{
    s32 count = *(s32 *)(self + 0x40);
    if (count < 0x100) {
        *(s32 *)( (count * 12 + *(s32 *)(self + 0x44)) + 0x0) = value;
        *(s32 *)(self + 0x40) = count + 1;
    }
}

void func_0021BBF0(s32 arg0) {
    func_002621F0();
    func_00262B60(arg0, -1, arg0 + 0x144);
}

void func_0021BE80(void) {
    func_0021BD48(1, 0xFFFF);
}

void func_0021BFD8(void) {
    func_0021BEA0(1, 0xFFFF);
}


void func_00218FC8(Self_218FC8* self, void* list) { s32 tmp[4]; func_0024B330(tmp, list, 0x1, 0xD, &self->f214, &self->f1E0); func_0012BC20(tmp); }
void func_00219448(u8* a, s32 v1, s32 v2, s32 v3, f32 f) { *(s32*)((u8*)a+0x45C)=v1; *(s32*)((u8*)a+0x460)=v2; *(f32*)((u8*)a+0x464)=f; *(s32*)((u8*)a+0x468)=v3; }
void func_002194B0(u8* a) { if (*(s32*)(a+0x45C) == -1) return; void* p = func_0017E1B8(D_00475480, 4, *(s32*)(a+0x45C), a); func_0014B590(a, p, *(s32*)(a+0x460), *(s32*)(a+0x46C), *(f32*)(a+0x464), a+0x470, *(s32*)(a+0x468)); }
void func_00219660(u8* self) { func_001C7340(self); s32 f = *(s32*)(self + 0x3C); if (!(f & 1)) { *(s32*)f |= 2; } else { *(s32*)(self + 0x3C) = f | 2; } func_001C9118(self, 1); void* v = *(void**)(self + 0xC); s32 off = *(s16*)((u8*)v + 0x48); v = *(void**)((u8*)v + 0x4C); ((void (*)(void*))v)(self + off); }
void func_002196D0(u8* a) { func_001C7DC8(a); *(s32*)(a+0xA0) = (s32)func_0017E1B8(D_00475480, 0x405, 0x798, 0); *(s32*)(a+0xA4) = (s32)func_0017E1B8(D_00475480, 0x405, 0x799, 0); }
void* func_0021A780(u8* a, u8* b) { func_0024AEF8(a, *(u8**)(b+0x58), 0x2058, b+0x44); return a; }
void func_0021A7B8(u8* a0, s32 a1) { void* v = D_00468D24; if (a1 < *(s32*)((u8*)v + 0x94)) { u8 buf[0x10]; func_00271448(buf, D_00325DF8, *(s32*)((u8*)((u32)v + (u32)(a1 << 3)) + 0x70)); func_002717E0(a0, buf); } }
void func_0021AA38(u8* a, s32 v) { s32 n = *(s32*)(a+0x54); if (n < 0x8) { s32* p = (s32*)((n<<2) + *(s32*)(a+0x58)); *p = v; *(s32*)(a+0x54) = n+1; } }
void func_0021AD38(u8* s) { func_001C78A0(s); *(f32*)(s + 0x60) = D_0036BB98 + 1.0f; }
void func_0021B4B8(u8* self) { func_001C7340(self); *(s32*)(self + 0x138) = -1; *(s32*)(self + 0x148) = 0x7AF; *(s32*)(self + 0x140) = -1; *(s32*)(self + 0x144) = -1; }
