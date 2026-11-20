// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_001C4718(s32, s32);
s32 func_001C4DC0(s32, s32);
s32 func_0017E1B8(s32 *, s32, s32, s32);
s32 func_00261050(s32, s32);
extern s32 D_00475480;
s32 func_001C4FF8(s32, s32);
s32 func_001C5868(s32);
s32 func_0028FDE0();
s32 func_001C78A0();
s32 func_001C5A40(s32);
s32 func_001C7938();
s32 func_001C5DA8(s32 *, s32);
s32 func_001C85C0();
s32 func_001C5C18(s32 *, s32);
s32 func_001C85E8();
s32 func_0028FF10();
s32 func_0028FF70();
s32 func_001C6D50(s32, s32);
s32 func_0011C330();
s32 func_001C7068(s32, s32);
s32 func_001C71E8(s32, s32);
s32 func_001519C8();
s32 **func_001C7ED8();
extern s32 func_001C7E88;
void **func_0011E118(s32 *);
extern s32 D_0047904C;

struct __attribute__((packed)) P_C4870 { u64 a, b, c; };
struct S_C4870 { P_C4870 buf; s32 pad[2]; s32 x; };
extern P_C4870 D_00323780;
extern void func_001C7340(void*);
extern void func_001C9118(void*, s32);
extern void func_001C4920(u8*, s32, void*, s32, void*);
extern void func_001C5868(void*);
extern void func_00292034(void*, s32, s32);
extern u8 D_00370AD0[];
extern s32 func_0013B500(void* a0, s32 a1);
extern void func_0011E1F0(void*, void*);
extern void func_0012BC20(void*);
extern void func_0015AD18(void*, void*);
extern void func_0024B330(void*, void*, s32, s32, void*, void*);
extern void func_001C4920(void*, s32, void*, s32, void*);
extern s32 func_0028FD70(u8*);
void func_001C5260(u8* a) ;
void func_001C4A38(void* self, void* list1, void* list2) ;
void* func_001C7068(u8* self, s32 value) ;
s32 func_001C7D60(void* a0) ;
void func_001C74B0(u8* self) ;
struct Q { u64 x; } __attribute__((packed));
void func_001C5550(u8* a, u8* b);
void func_001C5530(u8* a, f32 v);
void func_001C4870(u8* self);
void func_001C5510(u8* a, f32 v);
void func_001C4850(void) {
    func_001C4718(1, 0xFFFF);
}

void func_001C4EF8(void) {
    func_001C4DC0(1, 0xFFFF);
}

void func_001C4F18(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = func_0017E1B8(&D_00475480, 0x405, 0x424, 0);
    *arg0 = temp_v0;
    if (temp_v0 != 0) {
        func_00261050(temp_v0, 1);
    }
}

void func_001C4F68(s32 *arg0) {
    *arg0 = 0;
}

void func_001C5130(void) {
    func_001C4FF8(1, 0xFFFF);
}

s32 func_001C5250(void* self)
{
    return ++*(s32*)((char*)self + 0x44f8);
}

void func_001C5300(s32 arg0) {
    func_0028FDE0();
    func_001C5868(arg0);
}

void func_001C5330(s32 arg0) {
    func_001C78A0();
    func_001C5868(arg0);
}

void func_001C53B0(s32 arg0) {
    func_001C7938();
    func_001C5A40(arg0);
}

void func_001C53E0(s32 arg0) {
    func_001C85C0();
    func_001C5DA8(&D_00475480, arg0);
}

void func_001C5418(s32 arg0) {
    func_001C85E8();
    func_001C5C18(&D_00475480, arg0);
}

void func_001C5450(s32 arg0) {
    func_0028FF10();
    func_001C5868(arg0);
}

void func_001C5480(s32 arg0) {
    func_0028FF70();
    func_001C5868(arg0);
}

void func_001C6E88(void) {
    func_001C6D50(1, 0xFFFF);
}

s32 func_001C6F20(void* p)
{
	s32 v0 = *(s32*)((char*)p + 0x1C4);
	s32 v1 = *(s32*)((char*)p + 0x0);
	return v0 < v1;
}

void func_001C71B0(s32 arg0) {
    if (func_0011C330() < 2) {
        func_001C7068(arg0, 5);
    }
}

void func_001C7320(void) {
    func_001C71E8(1, 0xFFFF);
}

void func_001C7470(void **self)
{
    if (*(s32 *)((char *)self + 0x14) == 0) {
        s32 *slot = &D_0047904C;
        void **linked = func_0011E118(slot);
        *(void **)((char *)self + 0x14) = linked;
        *linked = self;
    }
}

s32 func_001C7D58(void) {
    return 0;
}

void func_001C7D98(void) {
    func_001519C8();
}

void func_001C7DB8(void) {

}

void func_001C7DC0(void) {

}

void func_001C7EB0(void) {
    *func_001C7ED8() = &func_001C7E88;
}


void func_001C4870(u8* self) { func_001C7340(self); func_001C9118(self, 1); s32 f = *(s32*)(self + 0x3C); if (!(f & 1)) { *(s32*)f |= 2; } else { *(s32*)(self + 0x3C) = f | 2; } S_C4870 s; s.buf = D_00323780; s.x = 0x49; func_001C4920(self, 6, (void*)&s.buf, 1, &s.x); }
void func_001C4A38(void* self, void* list1, void* list2) { void* arr1[16]; s32 tmp1[4]; void* arr2[16]; s32 tmp2[4]; s32 counter1; s32 counter2; func_0024B330(tmp1, list1, 7, 0x10, &counter1, arr1); func_0024B330(tmp2, list2, 7, 0x10, &counter2, arr2); func_001C4920(self, counter1, arr1, counter2, arr2); func_0012BC20(tmp2); func_0012BC20(tmp1); }
void func_001C5260(u8* a) { (void)func_0028FD70(a); u8* s = a; *(s32*)(s+0xD0) = 0; *(s32*)(s+0xD4) = -1; *(s32*)(s+0x108) = -1; *(f32*)(s+0x154) = 200.0f; *(f32*)(s+0x158) = 2000.0f; *(f32*)(s+0x144) = 240.0f; *(f32*)(s+0x148) = -1.0f; func_001C9118(s, 1); s32 p = *(s32*)(s+0x3C); if (!(p & 1)) *(s32*)p &= -0x41; else *(s32*)(s+0x3C) = p & -0x41; }
void func_001C5510(u8* a, f32 v) { *(f32*)(a+0x140) = v; func_001C5868(a); }
void func_001C5530(u8* a, f32 v) { *(f32*)(a+0x144) = v; func_001C5868(a); }
void func_001C5550(u8* a, u8* b) { *(Q*)(a+0x154) = *(Q*)b; func_001C5868(a); }
void* func_001C7068(u8* self, s32 value) { u32 n = *(u32*)self; if (n >= 0x10) return D_00370AD0; *(u32*)self = n + 1; u8* p = self + (0x1C * n + 4); func_00292034(p, 0, 0x1C); *(s32*)p = value; return p; }
void func_001C74B0(u8* self) { func_0015AD18(&D_00475480, *(void**)(self + 0x14)); func_0011E1F0(((u8*)&D_00475480) + 0x3BCC, *(void**)(self + 0x14)); *(void**)(self + 0x14) = 0; }
s32 func_001C7D60(void* a0) { if (func_0013B500(a0, 0x2F) != 0) return (s32)a0; return *(s32*)((char*)a0 + 0x10); }
