// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001FB710(s32, s32);
s32 func_001FBFF0();
s32 func_001FCB90(s32, s32);
s32 func_0011E118(s32 *);
s32 func_00200868(s32, s32, s32);
extern s32 D_00479C44;
s32 func_00202220(s32, s32, s32);
extern s32 D_00479C5C;
s32 func_001FC8F8();
s32 func_001FECC0(s32, s32);
s32 func_001FCAC8();
s32 func_001FEDA0(s32, s32);
s32 func_001FC118();
void *func_001FDC18();
s32 func_001FCEE8();
s32 func_001C9118(void *, s32);
s32 func_0028FD70();
s32 func_0011B028(s32, void *);
s32 func_001C85C0();

void func_001FC0E0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_001FBFF0();
    if (temp_v0 != 0) {
        func_001FB710(arg0, temp_v0);
    }
}

s32 func_001FC1F0(char* self, s32 value)
{
    char* p = *(char**)(self + 0x38);
    if (p == 0 || *(s32*)(p + 0x24) == 0) {
        return 1;
    }
    if (value == 0) {
        return 0;
    }
    return value == func_001FC118();
}

void func_001FCCC8(void) {
    func_001FCB90(1, 0xFFFF);
}

void func_001FD940(s32 arg0, s32 arg1) {
    func_00200868(func_0011E118(&D_00479C44), arg1, arg0);
}

s32 func_001FDD20() { return *(s32 *)((char *)func_001FDC18() + 0x20); }

void func_001FDEE8(s32* self)
{
    func_001FCEE8();
    *(u16*)((char*)*(s32*)((char*)self + 0x1C) + 0x20) = (*(u16*)((char*)*(s32*)((char*)self + 0x1C) + 0x20) + 1);
}

void func_001FDF20(void) {

}

void func_001FDF28(s32 arg0, s32 arg1) {
    func_00202220(func_0011E118(&D_00479C5C), arg1, arg0);
}

void func_001FE238(void *self)
{
    (void)func_0028FD70();
    *(void **)((char *)self + 0xE4) = self;
    *(void **)((char *)self + 0xE0) = self;
    func_001C9118(self, 0);
}

void func_001FE670(char *arg0)
{
    func_001C85C0();
    if (*(s32 *)(arg0 + 0xD8) == 2) {
        func_0011B028(*(s32 *)(arg0 + 0xF4), arg0);
    }
}

void func_001FEB30(s32 arg0) {
    func_001FC8F8();
    func_001FECC0(arg0, 1);
}

void func_001FEB60(s32 arg0) {
    func_001FCAC8();
    func_001FECC0(arg0, -1);
}

void func_001FED68(char* self, u32 a, u32 b)
{
    u32 n = *(u32*)(self + 0xD8);
    if (n < 4U) {
        *(u32*)(self + 0xD8) = n + 1;
        u32* p = (u32*)(self + (n * 12 + 0xDC));
        p[0] = a;
        p[1] = b;
        p[2] = 0;
    }
}

void func_001FEED8(void) {
    func_001FEDA0(1, 0xFFFF);
}
