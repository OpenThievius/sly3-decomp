// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00232100(s32, s32);
s32 func_00137628(s32);
s32 func_001FCB20();
s32 func_00232A38(s32, s32);
s32 func_00233760(s32, s32);
s32 func_001D2898(s32, s32, s32);

s32 func_002314A8(char* self)
{
    char* info = *(char**)(self + 0x48);
    return func_001D2898(*(s32*)(self + 0x5C), *(s32*)(info + 0xE0), *(s32*)(info + 0xD8) * 4);
}

void func_00232238(void) {
    func_00232100(1, 0xFFFF);
}

void func_00232440(s32 arg0) {
    func_001FCB20();
    func_00232A38(arg0, -1);
    func_00137628(arg0 + 0x138);
}

void func_00233898(void) {
    func_00233760(1, 0xFFFF);
}
