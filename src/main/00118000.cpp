// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
extern void func_0011AF60(void*, void*);
extern void func_0011AF90(void*, void*);
struct Link_0011AFC0 { void* first; u32 pad4; s32 offset; };
s32 func_00117F48(s32, s32);
s32 func_00118308(s32, s32);
s32 func_00118A90(s32, s32);
s32 func_00118CD8();
s32 func_00119A90(s32, s32);
s32 func_00119FA0(s32, s32);
s32 func_0011A120(s32, s32);
s32 func_0011A778(s32, s32);
s32 func_0011A958(s32, s32);
s32 func_0011AAB0(s32, s32);
s32 func_0011AC08(s32, s32);
s32 func_0011B138(s32, s32);
s32 func_0011BBF0(s32, s32);
s32 func_0011BDF8(s32, s32);
s32 func_0011E100(s32 *, s32, s32, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;

typedef long long v2l __attribute__((vector_size(16)));
struct S_00119A38 { u8 pad0[0x30]; u8* ptr30; };
extern void func_001192D8(u8*,u8*);
extern void func_001192F8(u8*,u8*);
extern void func_001192D8(void*, void*);
extern void func_002B9EA8(void*, s32);
extern void func_002B9D98(void*, s32);
extern void func_002B9CC0(void*, s32);
extern void func_002B9C08(void*, s32);
extern void func_002B9968(void*, s32);
extern void func_002B9700(void*, s32);
extern void func_002B9478(void*, s32);
extern void func_002B9230(void*, s32);
extern void func_002B8E08(void*, s32);
extern void func_002B89F8(void*, s32);
extern void func_00118BE8(void*);
extern void func_00118DA0(void*,s32,void*);
extern void func_00118DA0(s32, s32, s32);
extern void func_00291DF8(s32, s32, s32);
extern u8 D_00350ED0[];
extern void func_001D2818(void* self);
extern u16 func_00119048(void* self);
void func_00119C90(u8* a, s32 v);
void func_001193B8(s32 p0, s32 p1);
void func_00119A80(s32 p0, s32 p1, s32 p2, s32 p3);
void func_00119CC8(u8* a, s32 v);
void func_001180D8(s32 p0, s32 p1);
void func_00119910(void* self);
void func_00118DF0(u8* a, u8* b);
void func_00119ED8(u8* a, v2l v, f32 f);
void func_00118118(s32 p0, s32 p1);
void func_00119C20(u8* a, s32 v);
void func_00119398(s32 p0, s32 p1);
void func_00118138(s32 p0, s32 p1);
s32 func_0011AD70(u8* a, s32 a1);
void func_00119BE8(u8* a, s32 v);
void func_00119830(void* self);
void func_00119948(s32 p0, s32 p1);
s32 func_0011AF40(u8* a, s32 a1);
void func_001193D8(s32 p0, s32 p1);
void func_001192D8(s32 p0, s32 p1);
s32 func_0011AF50(u8* a, s32 a1);
void func_00119C58(u8* a, s32 v);
void func_00119340(u8* a, u8* b);
void* func_00119A00(u8* self);
void func_001180F8(s32 p0, s32 p1);
void func_00119A38(S_00119A38* self, s32 arg);
void func_001180B8(void) {
    func_00117F48(1, 0xFFFF);
}

void func_00118440(void) {
    func_00118308(1, 0xFFFF);
}

void func_00118BC8(void) {
    func_00118A90(1, 0xFFFF);
}

void func_00118C30(void* p)
{
	*(int*)((char*)p + 0x10) = 0;
	*(int*)((char*)p + 0x4) = 0;
	*(int*)((char*)p + 0x14) = 0;
	*(int*)((char*)p + 0x8) = 0;
	*(int*)((char*)p + 0x18) = 0;
	*(int*)((char*)p + 0x1C) = 0;
}

void func_00118DA0(void) {
    func_00118CD8();
}

void func_00118E10(void* self, s32 a, s32 b)
{
    *(s32*)((char*)self + 0x20) = a;
    *(s32*)((char*)self + 0x0) = (*(s32*)((char*)self + 0x0) | 2);
    *(s32*)((char*)self + 0x24) = b;
}

void func_001192F8(s32 a, s32 b)
{
    func_001192D8(a, b);
    func_001192D8(a, b + 0x10);
    func_001192D8(a, b + 0x20);
}

void func_00119A68(void* p)
{
    *(s32*)((char*)p + 0x10) = *(s32*)((char*)p + 0x38);
    *(s32*)((char*)p + 0x14) = *(s32*)((char*)p + 0x34);
    *(s32*)((char*)p + 0x34) = 0;
}

void func_00119BC8(void) {
    func_00119A90(1, 0xFFFF);
}

void func_0011A0D8(void) {
    func_00119FA0(1, 0xFFFF);
}

void func_0011A258(void) {
    func_0011A120(1, 0xFFFF);
}

void func_0011A8B0(void) {
    func_0011A778(1, 0xFFFF);
}

void func_0011AA90(void) {
    func_0011A958(1, 0xFFFF);
}

void func_0011ABE8(void) {
    func_0011AAB0(1, 0xFFFF);
}

void func_0011AD40(void) {
    func_0011AC08(1, 0xFFFF);
}

void func_0011AD60(void* self, s32 value)
{
    *(s32*)((char*)self + 8) = value;
}

void func_0011AD68(s32 *arg0) {
    *arg0 = 0;
}

s32 func_0011AEF8(s32 *arg0) {
    return *arg0 == 0;
}

void func_0011AF38(void* self, s32 value)
{
    *(s32*)((char*)self + 8) = value;
}

void func_0011AFC0(Link_0011AFC0* self, void* target, void* replacement)
{
    if (target == 0)
    {
        func_0011AF60(self, replacement);
    }
    else if (target == self->first)
    {
        func_0011AF90(self, replacement);
    }
    else
    {
        s32 offset = self->offset;
        u8* destination = (u8*)replacement + offset;
        u8* source = (u8*)target + offset;
        u32 value = *(u32*)(source + 4);
        *(void**)destination = target;
        *(u32*)(destination + 4) = value;
        *(u32*)(source + 4) = (u32)replacement;
        *(void**)(value + offset) = replacement;
    }
}

s32 func_0011B0F0(s32 *arg0) {
    return *arg0 == 0;
}

void func_0011B270(void) {
    func_0011B138(1, 0xFFFF);
}

void func_0011BD28(void) {
    func_0011BBF0(1, 0xFFFF);
}

void func_0011BF30(void) {
    func_0011BDF8(1, 0xFFFF);
}

void func_0011BFB8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        temp_v0 = D_0036AE78 + 1;
        D_0036AE78 = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0_2 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_3 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_4 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_5 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_6 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_6;
        if (temp_v0_6 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
}


void func_001180D8(s32 p0, s32 p1) { func_00291DF8(p0, p1, 0x4); }
void func_001180F8(s32 p0, s32 p1) { func_00291DF8(p0, p1, 0x8); }
void func_00118118(s32 p0, s32 p1) { func_00291DF8(p0, p1, 0xC); }
void func_00118138(s32 p0, s32 p1) { func_00291DF8(p0, p1, 0x10); }
void func_00118DF0(u8* a, u8* b) { func_00118DA0(a, (s32)b, 0); }
void func_001192D8(s32 p0, s32 p1) { func_00118DA0(p0, 0xC, p1); }
void func_00119340(u8* a, u8* b) { func_001192F8(a,b); func_001192D8(a,b+0x30); *(s32*)(b+0xC)=0; *(s32*)(b+0x1C)=0; *(s32*)(b+0x2C)=0; *(f32*)(b+0x3C)=1.0f; }
void func_00119398(s32 p0, s32 p1) { func_00118DA0(p0, 0x10, p1); }
void func_001193B8(s32 p0, s32 p1) { func_00118DA0(p0, 0xC, p1); }
void func_001193D8(s32 p0, s32 p1) { func_00118DA0(p0, 0x8, p1); }
void func_00119830(void* self) { s32 n = func_00119048(self); func_00118DA0(self, n, 0); }
void func_00119910(void* self) { s32 n = func_00119048(self); func_00118DA0(self, n * 2, 0); }
void func_00119948(s32 p0, s32 p1) { func_00118DA0(p0, 0x40, p1); }
void* func_00119A00(u8* self) { extern u8 D_00350ED0[]; func_00118BE8(self); *(void**)(self+0x30) = &D_00350ED0; return self; }
void func_00119A38(S_00119A38* self, s32 arg) { self->ptr30 = D_00350ED0; if (arg & 1) func_001D2818(self); }
void func_00119A80(s32 p0, s32 p1, s32 p2, s32 p3) { *(s32*)((u8*)(p0) + 0x34) = p1; *(s32*)((u8*)(p0) + 0x38) = p2; *(s32*)((u8*)(p0) + 0x0) = p3; }
void func_00119BE8(u8* a, s32 v) { if (v != 0x7FFFFFFF) func_002B8E08(a, v); else func_002B89F8(a, 0); }
void func_00119C20(u8* a, s32 v) { if (v != 0x7FFFFFFF) func_002B9478(a, v); else func_002B9230(a, 0); }
void func_00119C58(u8* a, s32 v) { if (v != 0x7FFFFFFF) func_002B9968(a, v); else func_002B9700(a, 0); }
void func_00119C90(u8* a, s32 v) { if (v != 0x7FFFFFFF) func_002B9CC0(a, v); else func_002B9C08(a, 0); }
void func_00119CC8(u8* a, s32 v) { if (v != 0x7FFFFFFF) func_002B9EA8(a, v); else func_002B9D98(a, 0); }
void func_00119ED8(u8* a, v2l v, f32 f) { *(v2l*)a = v; *(f32*)(a+0xC) = f; }
s32 func_0011AD70(u8* a, s32 a1) { *(s32*)((u8*)a + 0x4) = 0; *(s32*)((u8*)a + 0x0) = 0; }
s32 func_0011AF40(u8* a, s32 a1) { *(s32*)((u8*)a + 0x4) = 0; *(s32*)((u8*)a + 0x0) = 0; }
s32 func_0011AF50(u8* a, s32 a1) { *(s32*)((u8*)a + 0x4) = 0; *(s32*)((u8*)a + 0x0) = 0; }
