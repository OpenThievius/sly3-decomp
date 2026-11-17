// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00197838(s32, s32, s32, s32);
s32 func_001985F0();
s32 func_002387A8(s32, s32);
s32 func_00198640(s32, s32);
s32 func_0019A030(s32);
s32 func_001C7938();
s32 func_0019A0B0(s32, s32);
s32 func_0019B2C8(s32, s32);
s32 func_0019C570(s32, s32);
s32 func_001F3C80();
s32 func_001977A0(s32, s32);
s32 func_00238AE8(void *);
s32 func_00238AD8();
s32 func_0023E110();
s32 func_00169BF8(s32);
s32 func_0019F8B0(s32, s32, s32, void *, s32);
s32 func_001F4500();

void func_00198348(char *self, s32 value)
{
    if (*(s32 *)(self + 0x30) != 0) {
        if (*(s32 *)(self + 0x40) != 0) {
            func_00238AE8(self + 0x18);
            *(s32 *)(self + 0x40) = 0;
        }
        *(s32 *)(self + 0x38) = func_001977A0(*(s32 *)(self + 0x30), value);
    }
}

s32 func_00198500(char* self, s32 value)
{
    if (value < 0x14) {
        if (value >= 0x12) {
            if (*(s32*)(self + 0x48) != 0)
                return 1;
        }
    }
    return func_00238AD8();
}

void func_001985A8(s32 arg0) {
    if (func_001985F0() != 0) {
        func_00197838(func_002387A8(arg0 + 0x29C, 0xD3), 0, 0, 0);
    }
}

void func_00198778(void) {
    func_00198640(1, 0xFFFF);
}

void func_00198938(char *self, s32 a1)
{
    s32 count = *(s32 *)(self + 0x40);
    if (count < 0x80) {
        *(s32 *)(self + 0x40) = count + 1;
        s32 *slot = (s32 *)(*(char **)(self + 0x44) + count * 0x24);
        slot[0] = 0;
        slot[1] = a1;
    }
}

void func_001989F0(char *self, s32 value)
{
    s32 count = *(s32 *)(self + 0x80);
    if (count < 8) {
        *(s32 *)(count * 4 + *(s32 *)(self + 0x84)) = value;
        *(s32 *)(self + 0x80) = count + 1;
    }
}

void func_0019A000(s32 arg0) {
    func_001C7938();
    func_0019A030(arg0);
}

void func_0019A1E8(void) {
    func_0019A0B0(1, 0xFFFF);
}

s32 func_0019AED0(char* p)
{
    s32 r = 0;
    char* s = *(char**)(p + 0x10);
    if (*(s32*)(s + 0x1118) != 0 || *(s32*)(s + 0x1104) != 0) r = 1;
    return r;
}

void func_0019B400(void) {
    func_0019B2C8(1, 0xFFFF);
}

void func_0019B6B0(void* self, s32* out)
{
    (void)func_0023E110();
    *(s32*)((char*)out + 0x94) = 0;
    *(s32*)((char*)out + 0x98) = 0;
}

void func_0019BC60(void* self, s32 value)
{
    *(s32*)((char*)self + 0x190) = value;
}

void func_0019BED8(s32 arg0) {
    func_001F3C80();
    func_0019C570(arg0, -1);
}

void func_0019BF08(char *self, s32 arg1)
{
    if (*(s32 *)(self + 0x30C) == 0) {
        func_001F4500();
    } else {
        func_0019F8B0(func_00169BF8(0x50), arg1, 0xC, self, *(s32 *)(self + 0x30C));
    }
}
