// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001C8BF0();
s32 func_002643C8();
extern f32 D_0036BBD8;
s32 func_00262128(s32 *, s32);
extern s32 D_00475480;

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
