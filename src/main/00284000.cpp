// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_002852C0(s32, s32);
s32 func_001854C8(s32 *, s32, s32);
s32 func_00286360(s32, s32);
extern s32 D_0036C700;
s32 func_0023AE08();
s32 func_00240E58(s32, s32, s32);
s32 func_00169BF8(s32);
s32 func_00288370(s32, s32, s32, void *);
s32 func_0013CD00(s32, s32);
s32 func_0023E178();

typedef s32 (*Fn_CB)(u8*);
extern s32 func_001F42E8(u8*, ...);
extern void func_00286360(void*,s32);
extern s32 func_001F4350(void*,s32);
extern void func_001F4548(void*);
extern s32 func_001F43C8(u8*);
s32 func_00286FC0(u8* self) ;
void func_00285590(u8* a, s32 v);
void func_002858D8(u8* s);
void func_00286D70(s32 p0);
s32 func_00286DD8(u8* self, u32 a1);
s32 func_002852B0(void* p)
{
    return *(s32*)((char*)p + 0x14) != 0;
}

void func_00285418(void) {
    func_002852C0(1, 0xFFFF);
}

void func_00285438(void) {
    func_002852C0(0, 0xFFFF);
}

void func_00285588(void* self)
{
    *(int*)((char*)self + 0x228) = 0;
}

void func_00285930(char *self, void *other)
{
    s32 result = func_00288370(func_00169BF8(0x54), (s32)other, 8, self);
    *(s32 *)(self + 0x2C0) = result;
}

void func_00286D68(void* self, s32 value) { *((s32*)((char*)self + 0x1AC)) = value; }

s32 func_00286D90(char *self, s32 value)
{
    s32 result = func_0023E178();
    if (value == *(s32 *)(self + 0x204)) {
        result = func_0013CD00(result, 1);
    }
    return result;
}

void func_00287740(s32 arg0) {
    func_001854C8(&D_0036C700, 0x60, arg0);
    func_00286360(arg0, -1);
}

void func_00287A70(s32 arg0) {
    func_0023AE08();
    func_00240E58(arg0, 0x03FFFFFF, 2);
    func_00240E58(arg0, 0x03D88001, 0);
}

void func_00287AF8(void* self)
{
    *(int*)((char*)self + 0x160) = 1;
    *(int*)((char*)self + 0x130) = 0;
    *(int*)((char*)self + 0x134) = 0;
    *(int*)((char*)self + 0x138) = 0;
}


void func_00285590(u8* a, s32 v) { u32 n = *(u32*)(a+0x228); if (n < 0x20) { *(s32*)(a + (n<<2) + 0x22C) = v; *(u32*)(a+0x228) = n + 1; } }
void func_002858D8(u8* s) { func_001F4548(s); if (func_001F4350(s, -1) == 0) { if (*(s32*)(s+0x190) == 1) func_00286360(s, 2); } }
void func_00286D70(s32 p0) { func_00286360(p0, 0x1); }
s32 func_00286DD8(u8* self, u32 a1) { u32 obj = *(u32*)(self + 0xC); s16 off = *(s16*)(obj + 0x288); obj = *(u32*)(obj + 0x28C); if (((Fn_CB)obj)(self + off)) return 1; return func_001F42E8(self, a1); }
s32 func_00286FC0(u8* self) { if (!(*(f32*)(self + 0x1A8) > 0.0f)) { return func_001F43C8(self) > 0 ? 0 : 2; } return 1; }
