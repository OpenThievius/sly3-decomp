// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00168E88(s32, s32);
s32 func_00169558(s32, s32);
s32 func_00169AA0(s32, s32);
s32 func_0011E118(s32 *);
extern s32 D_0047931C;
s32 func_0011E1F0(s32 *, s32);
s32 func_00169CB0(s32, s32);
s32 func_00169D98(s32);
s32 func_0011B0C0(s32, s32 *);
s32 func_001685C8();
s32 func_00169398();
s32 func_00167960(s32, f32);
s32 func_0016AE90();

void func_00168948(void* self, s32 value)
{
    *(s32*)((char*)self + 0xDC) = value;
    func_001685C8();
}

s32 func_00168DD8(void* p)
{
    s32 r = 0;
    if (*(s32*)((char*)p + 0x310) > 0 || *(s32*)((char*)p + 0x324) > 0) {
        r = 1;
    }
    return r;
}

void func_00168E00(char* self, s32 value)
{
    u32 count;

    if (value != 0) {
        count = *(u32*)(self + 0x310);
        if (count < 4) {
            *(s32*)(self + (count << 2) + 0x314) = value;
            *(u32*)(self + 0x310) = count + 1;
        }
    }
}

void func_00168FC0(void) {
    func_00168E88(1, 0xFFFF);
}

void func_00169480(void* p, f32 v)
{
    *(f32*)((char*)p + 0x74) = v;
    func_00169398();
}

void func_001694A0(void* self, f32 value)
{
    *(f32*)((char*)self + 0x70) = value;
    func_00169398();
}

void func_001694D8(char *self, s32 value) {
    u32 count = *(u32 *)(self + 0xDC);
    if (count < 8) {
        *(s32 *)(self + (count << 2) + 0xE0) = value;
        *(u32 *)(self + 0xDC) = count + 1;
    }
}

void func_001696B0(void) {
    func_00169558(1, 0xFFFF);
}

void func_001696D0(void) {
    func_00169558(0, 0xFFFF);
}

void func_00169BD8(void) {
    func_00169AA0(1, 0xFFFF);
}

void func_00169BF8(void) {
    func_0011E118(&D_0047931C);
}

void func_00169C18(s32 arg0) {
    func_0011E1F0(&D_0047931C, arg0);
}

void func_00169C40(s32 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        func_00169D98(temp_a0);
        temp_a0_2 = *arg0;
        if (temp_a0_2 != 0) {
            func_00169CB0(temp_a0_2, 3);
        }
        *arg0 = 0;
    }
}

void func_00169E78(void) {

}

s32 func_00169E88(s32 *arg0) {
    return func_0011B0C0(*arg0 + 0x300, arg0) == 0;
}

void func_00169FC0(s32 *arg0) {
    *(s32 *)((char *)arg0 + 0x34) = 0;
    f32 value = *(f32 *)((char *)arg0 + 0x40);
    *(s32 *)((char *)arg0 + 0x38) = 0;
    func_00167960(*arg0, value);
}

void func_0016ADC0(void* self, s32 value)
{
    *(s32*)((char*)self + 0x20) = value;
    if (*(s32*)((char*)self + 0x50) != 0) {
        func_0016AE90();
        *(s32*)((char*)self + 0x50) = 0;
    } else {
        *(s32*)((char*)self + 0x50) = 0;
    }
}

void func_0016AE00(char* self, s32 value)
{
    *(s32*)(self + 0x24) = value;
    if (*(s32*)(self + 0x50) != 0) {
        func_0016AE90();
        *(s32*)(self + 0x50) = 0;
    } else {
        *(s32*)(self + 0x50) = 0;
    }
}

void func_0016AE88(void* self, f32 value)
{
    *(f32*)((char*)self + 0x28) = value;
}
