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
