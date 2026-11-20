// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0019DC10(s32, s32);
s32 func_001F3C80();
s32 func_0019B420();
s32 func_0019B940(s32, s32, s32);
s32 func_0019B968(s32, s32, s32);
s32 func_001F3BF8();
s32 func_0019E060(s32, s32);
s32 func_0025D350(s32 *, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00475480;
s32 func_0011AF60(s32);
s32 func_0011B028(s32);
s32 func_0019FF00(s32, s32);
s32 func_002614B0();

extern f32 D_00321FD0;
extern void func_0019B668(void*);
extern void func_0019DC10(void*, s32);
extern void func_0019C570(s32, s32);
extern s32 func_001F43C8(u8*);
extern s32 func_0019B6E0(u8*, u8*);
extern void func_0019DC10(u8*, s32);
extern s32 func_0013B500(u8*, s32);
extern s32 func_0013B500(void* a0, s32 a1);
extern s32 func_001F43C8(void* a0);
extern s32 func_0023E178(void* a0, void* a1);
s32 func_0019DBA8(u8* self, u8* a1) ;
s32 func_0019CC40(void* a0, void* a1) ;
void func_0019C550(s32 p0);
void func_0019CA28(u8* s);
void func_0019C9F8(s32 p0);
void func_0019CF40(s32 p0);
void func_0019C998(char* self, s32 a, s32 b)
{
    u32 n = *(u32*)(self + 0x28C);
    if (n < 4) {
        *(u32*)(self + 0x28C) = n + 1;
        u32* p = (u32*)(self + (n * 0x18 + 0x290));
        p[0] = a;
        p[1] = b;
    }
}

void func_0019CF10(s32 arg0) {
    func_001F3C80();
    func_0019DC10(arg0, -1);
}

void func_0019DE10(s32 arg0) {
    func_0019B420();
    func_0019B940(arg0, 3, arg0 + 0x200);
}

void func_0019DE48(s32 arg0) {
    func_001F3BF8();
    func_0019B968(arg0, 3, arg0 + 0x200);
}

void func_0019E030(s32 arg0) {
    func_001F3C80();
    func_0019E060(arg0, 0);
}

void func_0019E160(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0025D350(&D_00475480, arg0 + 0x234, 4, arg0 + 0x230, arg1, arg2, arg3, arg4);
}

s32 func_0019F230(void) {
    return 1;
}

void func_0019F5D8(s32 arg0) {
    func_0011AF60(arg0 + 0x490C);
}

void func_0019F5F8(s32 arg0) {
    func_0011B028(arg0 + 0x490C);
}

void func_0019FC50(s32 arg0) {
    func_002614B0();
    func_0019FF00(arg0, 0);
}


void func_0019C550(s32 p0) { func_0019C570(p0, 0x6); }
void func_0019CA28(u8* s) { func_0019B668(s); *(f32*)(s+0x1F0) = D_00321FD0; }
s32 func_0019CC40(void* a0, void* a1) { void* p = *(void**)((char*)a0 + 0x1F8); if (p != 0 && *(void**)((char*)a1 + 0xDC) == *(void**)((char*)p + 0xDC)) { return 3; } if (func_0013B500(a1, 0x4C) != 0) return 3; return func_0023E178(a0, a1); }
void func_0019CF40(s32 p0) { func_0019DC10(p0, 0x5); }
s32 func_0019DBA8(u8* self, u8* a1) { u32 v = *(u32*)(self + 0x1F0); if (v - 4 < 2) return 0; s32 w = *(s32*)(a1 + 0x14); *(s32*)(self + 0x3F8) = w; if (!func_0019B6E0(self, a1)) return 0; if (func_001F43C8(self) > 0) func_0019DC10(self, 4); return 1; }
