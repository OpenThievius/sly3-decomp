// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_002506C8(s32, s32);
s32 func_00150690(s32, s32, s32, s32);
extern s32 D_00475470;
s32 func_00254C00(s32, s32);
s32 func_00254BB8(s32, s32);
s32 func_0011AF60(s32 *, void *);
s32 func_0023CEC0();
s32 func_00256410(s32, void *);
extern s32 D_00479B5C;
s32 func_00252D80(void *);
void *func_002554C0(s32, void *);

extern void func_00254BB8(u8*, s32);
extern void func_00253728(u8*,s32,s32,s32,u8*);
extern void func_00253690(u8*,s32,s32,s32,u8*);
extern void func_0024B330(void*, void*, s32, s32, void*, void*);
extern void func_0012BC20(void*);
extern void func_00252B60(void*, s32, void*);
void* func_00252D80(void* self, void* list) ;
void func_002537F0(u8* a, s32 p1, s32 p2, s32 p3);
void func_00253830(u8* a, s32 p1, s32 p2, s32 p3);
void func_00253690(s32 a0, u32 a1, s32 a2, s32 a3, u8* a4);
void func_002502E8(void) {

}

void func_00250800(void) {
    func_002506C8(1, 0xFFFF);
}

void func_00250820(void) {
    if (D_00475470 == 0) {
        D_00475470 = func_00150690(0x92, 0, 0x748, -1);
    }
}

void func_00250B58(void* p, s32 v)
{
    *(s32*)((char*)p + 0x2F0) = v;
    if (v == 0) {
        *(s32*)((char*)p + 0x1018) = 1;
    } else {
        *(s32*)((char*)p + 0x1018) = 0;
    }
}

s32 func_00250D58(void* self)
{
    return *(s32*)((char*)self + 0x10D0);
}

void func_00252A78(char *arg0)
{
    s32 temp_a0;
    func_0023CEC0();
    func_0011AF60(&D_00479B5C, arg0);
    temp_a0 = *(s32 *)(arg0 + 0x3D8);
    if (temp_a0 != 0) {
        func_00256410(temp_a0, arg0);
    }
    *(float *)(arg0 + 0x1158) = 3.40282347e+38f;
}

void func_00253468(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    char sp[0x10];
    func_00252D80(sp);
    void *obj = func_002554C0(arg0, sp);
    *(s32 *)((char *)obj + 4) = arg2;
    *(s32 *)((char *)obj + 0xC) = arg3;
}

void func_00253878(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg1;
    var_s1 = 0x19;
    do {
        func_00254C00(var_s0, arg0);
        var_s1 -= 1;
        var_s0 += 0x10;
    } while (var_s1 >= 0);
}

void func_00253950(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg1;
    var_s1 = 0x19;
    do {
        func_00254BB8(var_s0, arg0);
        var_s1 -= 1;
        var_s0 += 0x10;
    } while (var_s1 >= 0);
}

void func_002539A0(s32 arg0)
{
    func_00253950(arg0, arg0 + 0xE20);
    func_00253950(arg0, arg0 + 0xAE0);
    func_00253950(arg0, arg0 + 0xC80);
}


void* func_00252D80(void* self, void* list) { void* arr[16]; s32 tmp[4]; s32 counter; func_0024B330(tmp, list, 0x100F, 0x10, &counter, arr); func_00252B60(self, counter, arr); func_0012BC20(tmp); return self; }
void func_00253690(s32 a0, u32 a1, s32 a2, s32 a3, u8* a4) { u32 bit = 1; for (int i = 0; i < 26; i++) { if (a1 & bit) { func_00254BB8(a4, a0); *(s32*)(a4 + 4) = a2; *(s32*)(a4 + 0xC) = a3; } bit <<= 1; a4 += 16; } }
void func_002537F0(u8* a, s32 p1, s32 p2, s32 p3) { func_00253728(a, p1, p2, p3, a+0xE20); }
void func_00253830(u8* a, s32 p1, s32 p2, s32 p3) { func_00253728(a, p1, p2, p3, a+0xC80); }
