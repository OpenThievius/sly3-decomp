// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_001FC8F8();
s32 func_0026A1C8(s32);
s32 func_00260FE8();
s32 func_0026A310(s32, s32);
void *func_0026A108();

extern void* func_0026A108(u8*, s32);
extern u8 D_00327ED0[];
extern void func_00271448(u8*, u8*, s32);
extern void func_00271448(u8*, u8*, u8*, u8*, s32);
extern void func_00271448(u8*, u8*, s32, s32);
extern void func_00271448(u8*, u8*, void*);
extern void* func_002643C8();
void* func_0026A150(u8* a, s32 id) ;
void func_0026A030(u8* a0, s32 a1);
void func_0026A090(u8* a0, s32 a1, s32 a2);
void func_0026A088(void* pobject)
{
    *(int*)((char*)pobject + 0x120) = 0;
}

s32 func_0026A0E0()
{
    void *object = func_0026A108();
    if (object == 0) {
        return 0;
    }
    return *(s32 *)((char *)object + 4);
}

void func_0026A198(s32 arg0) {
    func_001FC8F8();
    func_0026A1C8(arg0);
}

void func_0026A2E0(s32 arg0) {
    func_00260FE8();
    func_0026A1C8(arg0);
}

void func_0026BE08(void) {
    func_0026A310(1, 0xFFFF);
}


void func_0026A030(u8* a0, s32 a1) { s32 n = *(s32*)(a0 + 0x120); if (n < 2) { *(s32*)(a0 + 0x120) = n + 1; u8* p = a0 + (n * 0xC + 0x124); *(s32*)p = a1; *(s32*)(p + 4) = 0; func_00271448(p + 8, D_00327ED0, 0); } }
void func_0026A090(u8* a0, s32 a1, s32 a2) { void* p = func_0026A108(a0, a1); if (p && *(s32*)((u8*)p + 4) != a2) { *(s32*)((u8*)p + 4) = a2; func_00271448((u8*)p + 8, D_00327ED0, a2); } }
void* func_0026A150(u8* a, s32 id) { if (id >= 0x362) return func_002643C8(); if (id < 0x360) return func_002643C8(); return a + (id - 0x360) * 0xC + 0x12C; }
