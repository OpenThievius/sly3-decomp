// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_001FB710(s32, s32);
s32 func_001FBFF0();
s32 func_001FCB90(s32, s32);
s32 func_0011E118(s32 *);
s32 func_00200868(s32, s32, s32);
extern s32 D_00479C44;
s32 func_00202220(s32, s32, s32);
extern s32 D_00479C5C;
s32 func_001FC8F8();
s32 func_001FECC0(s32, s32);
s32 func_001FCAC8();
s32 func_001FEDA0(s32, s32);
s32 func_001FC118();
void *func_001FDC18();
s32 func_001FCEE8();
s32 func_001C9118(void *, s32);
s32 func_0028FD70();
s32 func_0011B028(s32, void *);
s32 func_001C85C0();

struct Src_1FEEF8 { u8 pad[8]; s16 f8; };
struct Self_1FEEF8 { void* f0; void* f4; u8 pad8[4]; s32 fC; u8 pad10[4]; s32 f14; u8 pad18[8]; s32 f20; u8 pad24[0x40 - 0x24]; void* f40; };
struct Self_1FE6B0 { u8 pad[0xD8]; s32 state; u8 pad2[0xF4 - 0xDC]; void* list; };
struct Inner_001FE158 { u8 pad0[0x1C]; void* f1C; };
struct Self_001FE158 { u8 pad0[0x20]; Inner_001FE158* f20; };
struct Inner_001FE190 { u8 pad0[0x1C]; void* f1C; };
struct Self_001FE190 { u8 pad0[0x20]; Inner_001FE190* f20; };
struct Inner_001FE1C8 { u8 pad0[0x1C]; void* f1C; };
struct Self_001FE1C8 { u8 pad0[0x20]; Inner_001FE1C8* f20; };
struct Inner_001FE200 { u8 pad0[0x1C]; void* f1C; };
struct Self_001FE200 { u8 pad0[0x20]; Inner_001FE200* f20; };
extern void func_001FF3E0(void*);
extern void func_001C85E8();
extern s32 func_001FE728(void*, s32);
extern void func_0011AF60(void*, void*);
extern u8 D_003615F8[];
extern void func_001FDFD0(void* a0, s32 a1);
extern void func_001FD4F0(void* a0, s32 a1);
Self_1FEEF8* func_001FEEF8(Self_1FEEF8* self, void* item, Src_1FEEF8* src) ;
s32 func_001FD5F8(void* a0, s32 a1) ;
s32 func_001FD630(void* a0, s32 a1) ;
s32 func_001FD668(void* a0, s32 a1) ;
void func_001FD4D0(s32 p0, s32 p1);
void func_001FE6B0(Self_1FE6B0* self);
s32 func_001FC0B8();
void* func_001FE158(Self_001FE158* self, s32 a1);
void func_001FC060();
void* func_001FE190(Self_001FE190* self, s32 a1);
void func_001FD7B0(s32 p0);
void* func_001FE200(Self_001FE200* self, s32 a1);
void func_001FC090();
void* func_001FE1C8(Self_001FE1C8* self, s32 a1);
void func_001FC0E0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_001FBFF0();
    if (temp_v0 != 0) {
        func_001FB710(arg0, temp_v0);
    }
}

s32 func_001FC1F0(char* self, s32 value)
{
    char* p = *(char**)(self + 0x38);
    if (p == 0 || *(s32*)(p + 0x24) == 0) {
        return 1;
    }
    if (value == 0) {
        return 0;
    }
    return value == func_001FC118();
}

void func_001FCCC8(void) {
    func_001FCB90(1, 0xFFFF);
}

void func_001FD940(s32 arg0, s32 arg1) {
    func_00200868(func_0011E118(&D_00479C44), arg1, arg0);
}

s32 func_001FDD20() { return *(s32 *)((char *)func_001FDC18() + 0x20); }

void func_001FDEE8(s32* self)
{
    func_001FCEE8();
    *(u16*)((char*)*(s32*)((char*)self + 0x1C) + 0x20) = (*(u16*)((char*)*(s32*)((char*)self + 0x1C) + 0x20) + 1);
}

void func_001FDF20(void) {

}

void func_001FDF28(s32 arg0, s32 arg1) {
    func_00202220(func_0011E118(&D_00479C5C), arg1, arg0);
}

void func_001FE238(void *self)
{
    (void)func_0028FD70();
    *(void **)((char *)self + 0xE4) = self;
    *(void **)((char *)self + 0xE0) = self;
    func_001C9118(self, 0);
}

void func_001FE670(char *arg0)
{
    func_001C85C0();
    if (*(s32 *)(arg0 + 0xD8) == 2) {
        func_0011B028(*(s32 *)(arg0 + 0xF4), arg0);
    }
}

void func_001FEB30(s32 arg0) {
    func_001FC8F8();
    func_001FECC0(arg0, 1);
}

void func_001FEB60(s32 arg0) {
    func_001FCAC8();
    func_001FECC0(arg0, -1);
}

void func_001FED68(char* self, u32 a, u32 b)
{
    u32 n = *(u32*)(self + 0xD8);
    if (n < 4U) {
        *(u32*)(self + 0xD8) = n + 1;
        u32* p = (u32*)(self + (n * 12 + 0xDC));
        p[0] = a;
        p[1] = b;
        p[2] = 0;
    }
}

void func_001FEED8(void) {
    func_001FEDA0(1, 0xFFFF);
}


void func_001FC060() { void* p = (void*)func_001FBFF0(); if (p) *(s32*)((u8*)p+8) = 1; }
void func_001FC090() { void* p = (void*)func_001FBFF0(); if (p) *(s32*)((u8*)p+8) = 0; }
s32 func_001FC0B8() { void* p = (void*)func_001FBFF0(); if (p) return *(s32*)((u8*)p+8); return 0; }
void func_001FD4D0(s32 p0, s32 p1) { *(u16*)((u8*)(*(s32*)((u8*)(p0) + 0x20)) + 0x8) = p1; }
s32 func_001FD5F8(void* a0, s32 a1) { s32 v = 1; if (a1 == v) { func_001FD4F0(a0, 0); } v = *(s32*)((char*)a0 + 0x20); return *(s32*)(v + 0x10); }
s32 func_001FD630(void* a0, s32 a1) { s32 v = 1; if (a1 == v) { func_001FD4F0(a0, 1); } v = *(s32*)((char*)a0 + 0x20); return *(s32*)(v + 0x10); }
s32 func_001FD668(void* a0, s32 a1) { s32 v = 1; if (a1 == v) { func_001FD4F0(a0, 2); } v = *(s32*)((char*)a0 + 0x20); return *(s32*)(v + 0x10); }
void func_001FD7B0(s32 p0) { func_001FCEE8(); *(u16*)((u8*)(*(s32*)((u8*)(p0) + 0x1C)) + 0x2C) = (*(u16*)((u8*)(*(s32*)((u8*)(p0) + 0x1C)) + 0x2C) + 0x1); }
void* func_001FE158(Self_001FE158* self, s32 a1) { if (a1 == 1) func_001FDFD0(self, 2); return self->f20->f1C; }
void* func_001FE190(Self_001FE190* self, s32 a1) { if (a1 == 1) func_001FDFD0(self, 7); return self->f20->f1C; }
void* func_001FE1C8(Self_001FE1C8* self, s32 a1) { if (a1 == 1) func_001FDFD0(self, 1); return self->f20->f1C; }
void* func_001FE200(Self_001FE200* self, s32 a1) { if (a1 == 1) func_001FDFD0(self, 0xA); return self->f20->f1C; }
void func_001FE6B0(Self_1FE6B0* self) { func_001C85E8(); switch (self->state) { case 2: func_0011AF60(self->list, self); case 1: case 3: func_001FE728(self, 1); break; } }
Self_1FEEF8* func_001FEEF8(Self_1FEEF8* self, void* item, Src_1FEEF8* src) { self->f0 = item; self->f4 = src; self->f40 = &D_003615F8; self->fC = 0; self->f20 = src->f8; func_0011AF60((char*)item + 0x6C, self); self->f14 = -1; func_001FF3E0(self); return self; }
