// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00169C40(s32);
s32 func_00226050(s32);
s32 func_001636B0(s32);
s32 func_001BDB50(s32);
s32 func_0011B0C0(s32, void *);

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

s32 func_0022BB50(char *self)
{
	return func_0011B0C0(*(s32 *)(self + 0x14) + 0x48, self) == 0;
}

void func_0022BEE8(s32 arg0) {
    func_00169C40(arg0 + 0x8C);
}
