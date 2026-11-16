// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0027CA88(s32, s32);
s32 func_00169BF8(s32);
s32 func_0016BF10(s32, s32, s32, s32);
s32 func_0023C660();
s32 func_0027CD78(s32);
s32 func_0027D0E0(s32);
s32 func_0027D4E0(s32);
s32 func_0027D690(s32, s32);
s32 func_0027DEE0(s32, s32);
s32 func_0027E038(s32, s32);
s32 func_0027E790(s32, s32);
s32 func_0027E9F8(s32, s32);
s32 func_00150630(s32 *, s32);
s32 func_00271730(s32, s32);
extern s32 D_00475480;
s32 func_0027EFF8(s32, s32);
s32 func_0011AF60(s32 *, s32);
s32 func_001C85E8();
extern s32 D_00479B8C;
s32 func_0011B028(s32 *, s32);
s32 func_001C85C0();
s32 func_0027F500(s32, s32);
s32 func_0027F780(s32, s32);
s32 func_001F4AD0(s32 *, s32);
s32 func_0027FA70(s32, s32);
s32 func_001FCAC8();
s32 func_0027FC08(s32, s32);
s32 func_001858D0(s32 *, s32, s32, s32, s32, s32);
extern s32 D_0036C700;
s32 func_0025E098(s32);
s32 func_0023E110();
extern f32 D_0036BB98;
s32 func_00119830(s32);
s32 func_0028FDE0();

void func_0027C238(s32 arg0, s32 *arg1) {
    func_0023E110();
    *(float *)((char *)arg1 + 0x94) = 0.5f;
    *(float *)((char *)arg1 + 0x98) = 0.1f;
}

void func_0027CBC0(void) {
    func_0027CA88(1, 0xFFFF);
}

void func_0027CCF0(s32 arg0, s32 arg1) {
    func_0016BF10(func_00169BF8(0x24), arg1, 6, arg0);
}

void func_0027CD38(s32 arg0) {
    func_0023C660();
    func_0027CD78(arg0);
    func_0027D0E0(arg0);
    func_0027D4E0(arg0);
}

void func_0027D7C8(void) {
    func_0027D690(1, 0xFFFF);
}

void func_0027E018(void) {
    func_0027DEE0(1, 0xFFFF);
}

void func_0027E170(void) {
    func_0027E038(1, 0xFFFF);
}

void func_0027E290(void* self)
{
    s32* p = *(s32**)((char*)self + 0xC);
    *(s32**)((char*)self + 0xC) = p + 1;
    *p = 0x11000000;
}

void func_0027E2A8(void* self)
{
    s32* f = *(s32**)((unsigned char*)self + 0xC);
    *(s32**)((unsigned char*)self + 0xC) = f + 1;
    *f = 0x13000000;
}

void func_0027E8C8(void) {
    func_0027E790(1, 0xFFFF);
}

void func_0027E9D8(void* self, s32 value)
{
    s32 old = *(s32*)((char*)self + 0x100);
    if (value != old) {
        *(s32*)((char*)self + 0x100) = value;
        *(f32*)((char*)self + 0x104) = D_0036BB98;
    }
}

void func_0027EB30(void) {
    func_0027E9F8(1, 0xFFFF);
}

void func_0027ED60(s32 *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != -1) {
        func_00271730(arg1, func_00150630(&D_00475480, temp_v1));
    }
}

void func_0027F138(void) {
    func_0027EFF8(1, 0xFFFF);
}

void func_0027F490(s32 arg0) {
    func_001C85E8();
    func_0011AF60(&D_00479B8C, arg0);
}

void func_0027F4C8(s32 arg0) {
    func_001C85C0();
    func_0011B028(&D_00479B8C, arg0);
}

void func_0027F638(void) {
    func_0027F500(1, 0xFFFF);
}

void func_0027F8B8(void) {
    func_0027F780(1, 0xFFFF);
}

void func_0027FA00(s32 arg0, s32 arg1)
{
    func_0028FDE0();
    func_00119830(arg1);
}

void func_0027FA30(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_001F4AD0(&D_00475480, 0);
    if (temp_v0 != 0) {
        func_0027FA70(arg0, temp_v0);
    }
}

void func_0027FBD8(s32 arg0) {
    func_001FCAC8();
    func_0027FC08(arg0, 0);
}

void func_0027FD90(s32 arg0, s32 arg1, s32 arg2) {
    func_001858D0(&D_0036C700, arg0 + 0x190, 4, arg0 + 0x18C, arg1, arg2);
}

void func_0027FDC8(s32 arg0) {
    func_0025E098(arg0 + 0x130);
}

void func_0027FFE0(s32 arg0, s32 arg1) {
    func_0028FDE0();
    func_00119830(arg1);
}
