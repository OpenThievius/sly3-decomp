// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001C8BF0();
s32 func_002643C8();
extern f32 D_0036BBD8;
s32 func_00262128(s32 *, s32);
extern s32 D_00475480;
s32 func_00260F18(void *, s32, s32, s32);
s32 func_00263028(void *, void *, s32);
s32 func_0011AF60(s32 *, void *);
s32 func_0011B028(s32 *, void *);
s32 func_0011B0C0(s32 *, void *);
extern s32 D_0047979C;

void func_00260270(void* self, s32 value)
{
    u32 i = *(u32*)((char*)self + 0x120);
    if (i < 16) {
        *(s32*)((char*)self + (i << 3) + 0x124) = value;
        *(u32*)((char*)self + 0x120) = i + 1;
    }
}

void func_00260298(void* self, s32 value) { u32 i = *(u32*)((char*)self + 0x1a4); if (i < 0x20) { *(u32*)((char*)self + (i << 3) + 0x1a8) = value; *(u32*)((char*)self + 0x1a4) = i + 1; } }

s32 func_00260558(char* self, s32 kind)
{
    switch (kind) {
    case 0x360: return (s32)(self + 0x2A8);
    case 0x361: return (s32)(self + 0x2AC);
    case 0x362: return (s32)(self + 0x2B0);
    }
    return func_002643C8();
}

s32 func_00260640(char* self, s32 kind)
{
    switch (kind) {
    case 0x360: return (s32)(self + 0x128);
    case 0x361: return (s32)(self + 0x12C);
    case 0x362: return (s32)(self + 0x130);
    }
    return func_002643C8();
}

s32 func_00260738(const char* self) { s32 answer = 0; if (*(s32*)(self + 0x48) < 2) { answer = *(s32*)(self + 0x54) < 2; } return answer; }

void func_00260E30(char *self)
{
    s32 r0 = func_00263028(self, *(void **)(self + 0x74), 0x376);
    s32 flag = r0 != 0 ? 0x376 : -1;
    s32 r1 = func_00263028(self, *(void **)(self + 0x74), 0x377);
    s32 flag2 = r1 != 0 ? 0x377 : 0x37B;
    s32 r2 = func_00263028(self, *(void **)(self + 0x74), 0x378);
    s32 flag3 = r2 != 0 ? 0x378 : -1;
    func_00260F18(self, flag, flag2, flag3);
}

void func_00261030(char* self)
{
    if (*(int*)(self + 0x48) == 2) {
        *(f32*)(self + 0x4C) = D_0036BBD8;
    }
}

void func_00261050(void* self, s32 value)
{
    if (*(s32*)((char*)self + 0x54) != value) {
        *(s32*)((char*)self + 0x54) = value;
        *(f32*)((char*)self + 0x58) = D_0036BBD8;
    }
}

void func_00261508(void) {
    func_001C8BF0();
}

s32 func_00261BD0(char *self)
{
    if (*(s32 *)(self + 0x6C) == -1) {
        return 0;
    }
    return func_00262128(&D_00475480, *(s32 *)(self + 0x94)) == 0;
}

void func_00263080(char *self, char *other)
{
    s32 mode = *(s32 *)(self + 0x98);
    if (mode == (s32)other) return;
    if (mode == 0) {
        if (func_0011B0C0(&D_0047979C, self)) {
            func_0011B028(&D_0047979C, self);
        }
    }
    *(s32 *)(self + 0x98) = (s32)other;
    if (other == 0) {
        if (func_0011B0C0(&D_0047979C, (char *)self)) {
            return;
        }
        func_0011AF60(&D_0047979C, self);
    }
}
