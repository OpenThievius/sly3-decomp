// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00169C40(s32);
s32 func_00226050(s32);
s32 func_001636B0(s32);
s32 func_001BDB50(s32);
s32 func_0011B0C0(s32, void *);
s32 func_00156468(s32, void *);
s32 func_0013B500(s32, s32);
s32 func_00238568(s32);

void func_0022B028(char *self, s32 a1, s32 a2) {
    s32 old_a0 = *(s32 *)(self + 0x48);
    if (a1 != old_a0) {
        *(s32 *)(self + 0x48) = a1;
    }
    s32 old_a1 = *(s32 *)(self + 0x4C);
    if (a2 != old_a1) {
        if (old_a1 != 0) {
            func_00156468(old_a1, 0);
        }
        *(s32 *)(self + 0x4C) = a2;
        if (a2 != 0) {
            func_00156468(a2, self);
        }
    }
}

void func_0022B670(void) {

}

void func_0022B6E0(char* self)
{
    s32 v = *(s32*)(self + 0x58);
    if (v != 0) {
        func_00226050(v);
        *(s32*)(self + 0x58) = 0;
    }
}

void func_0022B7B8(char* self)
{
    s32 v = *(s32*)(self + 0x16C);
    if (v != 0) {
        func_001636B0(v);
        *(s32*)(self + 0x16C) = 0;
    }
}

void func_0022B7F0(char* self)
{
    s32 v = *(s32*)(self + 0x90);
    if (v != 0) {
        func_001BDB50(v + 0xF60);
        *(s32*)(self + 0x90) = 0;
    }
}

void func_0022B890(u8* self)
{
    u8* p = *(u8**)(self + 0x34);
    if (p == 0) return;
    switch (*p) {
    case 0x33:
        if (*(u8**)(self + 0x28) != 0) {
            s32 r = func_0013B500(*(s32*)(self + 0x28), 0x33);
            if (r != 0) {
                func_00238568(*(s32*)(self + 0x28) + 0x29C);
            }
        }
        break;
    case 0x34:
        if (*(u8**)(self + 0x28) != 0) {
            s32 r = func_0013B500(*(s32*)(self + 0x28), 0x33);
            if (r != 0) {
                func_00238568(*(s32*)(self + 0x28) + 0x29C);
            }
        }
        break;
    }
}

s32 func_0022BB50(char *self)
{
	return func_0011B0C0(*(s32 *)(self + 0x14) + 0x48, self) == 0;
}

void func_0022BEE8(s32 arg0) {
    func_00169C40(arg0 + 0x8C);
}
