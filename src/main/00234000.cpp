// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern s32 D_0046FF38;
extern s32 D_0046FF3C;
extern s32 D_00474F98;
extern s32 D_00474F9C;
extern s32 D_00474FA0;
extern s32 D_00474FA4;
extern s32 D_00474FA8;
extern s32 D_00474FAC;
s32 func_00235EC8();
extern s32 D_00479D98;
s32 func_00236D58(s32, s32);
s32 func_001D2898(s32, s32, s32);

void func_00235D50(s32 *arg0) {
    func_001D2898(arg0[2], arg0[1], arg0[0]);
}

void func_00235DE0(void) {
    D_0046FF38 = 0;
    D_0046FF3C = 0;
    D_00474F98 = 0;
    D_00474F9C = 0;
    D_00474FA0 = 0;
    D_00474FA4 = 0;
    D_00474FA8 = 0;
    D_00474FAC = 0;
}

s32 func_00235F40(void) {
    s32 var_v0;

    var_v0 = func_00235EC8();
    if (var_v0 == 0) {
        var_v0 = D_00479D98;
    }
    return var_v0;
}

s32 func_00235F68(s32 arg0) {
    return D_0046FF3C + (arg0 * 0x2C);
}

void func_00236E90(void) {
    func_00236D58(1, 0xFFFF);
}

void func_00237150(void) {

}

f32 func_00237158(void) {
    return 0.0f;
}

s32 func_00237348(void* a0, void* a1)
{
    s32 v = *(s32*)((char*)a1 + 0x0);
    return (v ^ *(s32*)((char*)a0 + 0x14)) == 0;
}

void func_00237DD8(void* self, f32 first, f32 second)
{
    *(f32*)((char*)self + 0x60) = first;
    *(f32*)((char*)self + 0x64) = second;
}
