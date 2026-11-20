// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00256720();
s32 func_00256788(s32);
s32 func_001C8BF0();
s32 func_00254FE0(s32);
s32 func_00238828(s32);
s32 func_0024E2B8();
s32 func_0024F6F8(s32, s32, s32);
s32 func_00256DF0();
s32 func_0016FE30(s32);
s32 func_0016FF08(s32);
s32 func_00170018(s32);
s32 func_001701B0(s32);
s32 func_00170328(s32);
void func_002543F8(void*);
void func_002544D8(void*);
s32 func_001A95D0(s32 *, s32);
extern s32 D_00475480;
s32 func_0013B500(s32, s32);
s32 func_00165B28(s32 *);
s32 func_001F4A80(s32);
s32 func_00254BB8(s32, s32);
s32 func_00238888(s32);
s32 func_0024E2A8(s32);
s32 func_00241AD8(s32);
s32 func_00256410(s32, void *);
s32 func_00256470(s32, void *);
s32 func_00254C00(s32, s32);

struct Self_255B28 { u8 pad[0x1104]; s32 f1104; s32 f1108; u8 pad2[0xC]; s32 f1118; s32 f111C; };
struct Obj_255B28 { s16 tag; u8 pad[2]; s32 ptr; };
struct Self_256278 { u8 pad[8]; s32 f8; s32 fC; s32 f10; f32 f14; f32 f18; };
typedef struct T { char pad[0x28]; int count; int arr[1]; } T;
typedef struct U { int f0; void* f4; } U;
extern void func_0011AF60(void*, void*);
extern u8 D_00479B74[];
extern void func_0011E940(f32,f32);
extern void func_00254FE0(void*);
extern void func_00292034(void*, s32, s32);
extern void func_0019A2D0(u8*, s32*);
extern void* func_002387A8(u8*, s32);
extern void func_001D2898(void* dst, void* src, u32 n);
extern int func_002562D8(int* arr, int val);
extern void* func_00259590(int size);
extern void func_001C7340(void*);
extern void func_001C9118(void*, s32);
extern void func_0024B330(void*, void*, s32, s32, void*, void*);
extern void func_0012BC20(void*);
extern void func_0012B3B0(void*, void*);
void func_00257230(u8* a) ;
void func_002571F0(u8* a) ;
void func_00255B28(Self_255B28* self, void* list1, void* list2) ;
Self_256278* func_00256278(Self_256278* self, s32 value) ;
void func_00257260(u8* self) ;
void func_002558A8(u8* self, s32 p1) ;
void func_00256470(T* s, int val) ;
void func_00254FE0(U* s) ;
void func_00254320(u8* a, s32 v);
void func_00254640();
void func_00256C98(u8* a, f32 x, f32 y);
void func_002541F0(void* self, s32 value)
{
    *(s32*)((char*)self + 0x3B0) = value;
}

void func_002541F8(char *self, s32 mode)
{
    s32 old = *(s32 *)(self + 0x3AC);
    if (mode == old) {
        return;
    }
    if (old != 0) {
        func_00256470(*(s32 *)(self + 0x3D8), self);
        *(s32 *)(self + 0x3D8) = 0;
    }
    *(s32 *)(self + 0x3AC) = mode;
    if (mode != 0) {
        *(s32 *)(self + 0x3D8) = func_00241AD8(mode);
        func_00256410(*(s32 *)(self + 0x3D8), self);
    }
}

void func_00254268(void* p)
{
    func_0016FE30(*(s32*)((char*)p + 0x10D0));
}

void func_00254288(void* pgoal)
{
    func_0016FF08(*(s32*)((char*)pgoal + 0x10D0));
}

s32 func_002542A8(char* self)
{
    return func_00170018(*(s32*)(self + 0x10D0));
}

void func_002542C8(char* self)
{
    func_001701B0(*(s32*)(self + 0x10D0));
}

void func_002542E8(void *self)
{
    func_00170328(*(s32 *)((char *)self + 0x10D0));
    func_002543F8(self);
    func_002544D8(self);
}

void func_002543F8(void* self)
{
    *(int*)((char*)self + 0x3B4) = 0;
}

void func_00254400(void* self, u32 value)
{
    s32 i = *(s32*)((char*)self + 0x3CC);
    if ((u32)i < 2) {
        *(u32*)((char*)self + (i << 2) + 0x3D0) = value;
        *(s32*)((char*)self + 0x3CC) = i + 1;
    }
}

void func_002544D8(void* self)
{
    *(int*)((char*)self + 0x3CC) = 0;
}

s32 func_00254B80(char *self) {
    if (*(s32 *)(self + 0x1134) != 0) return 1;
    return func_001A95D0(&D_00475480, -1);
}

void func_00256318(char *arg0)
{
    s32 temp_a0;

    temp_a0 = func_0013B500(*(s32 *)(arg0 + 0xC), 0x31);
    if (temp_a0 != 0) {
        func_001F4A80(*(s32 *)(arg0 + 0xC));
    } else {
        func_00165B28(&D_00475480);
    }
}

void func_00256758(s32 arg0) {
    func_00256720();
    func_00256788(arg0);
}

void func_00256818(void* p)
{
    *(int*)((char*)p + 0x1054) = 0;
    *(int*)((char*)p + 0x1078) = 0;
    *(int*)((char*)p + 0x11D0) = 0;
}

void func_00256AA0(s32 arg0) {
    func_001C8BF0();
    func_00254FE0(arg0 + 0xB0);
}

void func_00256BD0(void* self, s32 a1, s32 a2, s32 a3)
{
    *(s32*)((char*)self + 0x6C) = a1;
    *(s32*)((char*)self + 0x70) = a2;
    *(s32*)((char*)self + 0x74) = a3;
}

void func_00256BE0(char* self, s32 a1, s32 a2)
{
    func_00254BB8((s32)(self + 0xB0), *(s32*)(self + 0xA8));
    *(s32*)(self + 0xB4) = a1;
    *(s32*)(self + 0xBC) = a2;
}

void func_00256C30(char* self, s32 a, s32 b)
{
    func_00254BB8((s32)(self + 0xB0), *(s32*)(self + 0xA8));
    *(s32*)(self + 0xB4) = a;
    *(s32*)(self + 0xBC) = b;
    func_00254C00((s32)(self + 0xB0), *(s32*)(self + 0xA8));
}

s32 func_00256CB0(s32 arg0)
{
    s32 temp_v1;

    temp_v1 = func_00238888(arg0 + 0x29C);
    if ((temp_v1 & 0x1000) == 0) {
        return temp_v1;
    }
    return func_0024E2A8(arg0);
}

void func_00257548(s32 arg0) {
    func_0024E2B8();
    func_00238828(arg0 + 0x29C);
}

s32 func_00257578(void* p)
{
    return *(s32*)((char*)p + 0x4C0) == 0;
}

f32 func_002575C0(char* self)
{
    f32 r = 1.0f;
    char* p = *(char**)(self + 0x11D4);
    if (p != 0) {
        char* q = *(char**)(p + 0x90);
        if (q != 0) {
            if (*(int*)(q + 0x0) == 1) {
                r = *(f32*)(q + 0x20);
            }
        }
    }
    return r;
}

void func_00257678(s32 arg0, s32 arg1, s32 arg2) {
    func_00256DF0();
    func_0024F6F8(arg0, arg1, arg2);
}

void func_00257798(void* self)
{
    *(int*)((char*)self + 0x11E8) = 0;
}

void func_00257EC0(void* self, s32 value)
{
    *(s32*)((char*)self + 0x16EC) = value;
}

s32 func_00257EF8(char* self)
{
    s32 result = 0;
    s32 v = *(s32*)(self + 0x2F0);
    if (v == 2) {
        result = *(s32*)(self + 0x1764) != 0;
    }
    return result;
}

void func_00257F18(void* self, s32 value) { *((s32*)((char*)self + 0x1768)) = value; }

s32 func_00257F20(void* self)
{
    return *(s32*)((char*)self + 0x1768);
}

s32 func_00257F28(char* self)
{
    s32 kind = *(s32*)(self + 0x112C);
    s32 r = 0;
    if (kind == 12 || kind == 15) {
        r = 1;
    }
    return r;
}


void func_00254320(u8* a, s32 v) { u32 n = *(u32*)(a+0x3B4); if (n < 0x5) { *(s32*)(a + (n<<2) + 0x3B8) = v; *(u32*)(a+0x3B4) = n + 1; } }
void func_00254640() { func_0011E940(5.0f, 7.0f); }
void func_00254FE0(U* s) { if (s->f0 == 3) { void* p = func_00259590(0x110); func_001D2898(p, s->f4, 0x110); s->f4 = p; } }
void func_002558A8(u8* self, s32 p1) { void* p = func_002387A8(self + 0x29C, 0xC8); s32 buf[4]; func_00292034(buf, 0, 0x10); buf[1] = p1; buf[0] = 6; func_0019A2D0((u8*)p, buf); }
void func_00255B28(Self_255B28* self, void* list1, void* list2) { Obj_255B28 a; Obj_255B28 b; a.tag = -1; func_0024B330(&b, list1, 0x2002, 4, &self->f1104, &self->f1108); func_0012B3B0(&a, &b); func_0012BC20(&b); func_0024B330(&b, list2, 0x2002, 4, &self->f1118, &self->f111C); func_0012B3B0(&a, &b); func_0012BC20(&b); func_0012BC20(&a); }
Self_256278* func_00256278(Self_256278* self, s32 value) { self->fC = value; self->f14 = 1.0f; self->f18 = 2.0f; self->f10 = -1; self->f8 = -1; func_0011AF60(&D_00479B74, self); return self; }
void func_00256470(T* s, int val) { int idx = func_002562D8((int*)s, val); if (idx < 0) return; s->count--; int* p = &s->arr[idx]; func_001D2898(p, p + 1, (s->count - idx) * 4); }
void func_00256C98(u8* a, f32 x, f32 y) { *(f32*)(a+0xA4)=y; *(f32*)(a+0xA0)=x; *(s32*)(a+0x9C)=1; }
void func_002571F0(u8* a) { if (*(s32*)(a+0x115C) == 0) func_001C9118(a, 1); (*(s32*)(a+0x115C))++; }
void func_00257230(u8* a) { s32 v = *(s32*)(a+0x115C) - 1; *(s32*)(a+0x115C) = v; if (v == 0) func_001C9118(a, 0); }
void func_00257260(u8* self) { func_001C7340(self); s32 f = *(s32*)(self + 0x3C); if (!(f & 1)) { *(s32*)f |= 2; } else { *(s32*)(self + 0x3C) = f | 2; } func_001C9118(self, 1); }
