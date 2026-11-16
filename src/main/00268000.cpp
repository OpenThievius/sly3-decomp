// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001FC8F8();
s32 func_0026A1C8(s32);
s32 func_00260FE8();
s32 func_0026A310(s32, s32);
void *func_0026A108();

void func_0026A088(void* pobject)
{
    *(int*)((char*)pobject + 0x120) = 0;
}

s32 func_0026A0E0()
{
    void *object = func_0026A108();
    if (object == 0) {
        return 0;
    }
    return *(s32 *)((char *)object + 4);
}

void func_0026A198(s32 arg0) {
    func_001FC8F8();
    func_0026A1C8(arg0);
}

void func_0026A2E0(s32 arg0) {
    func_00260FE8();
    func_0026A1C8(arg0);
}

void func_0026BE08(void) {
    func_0026A310(1, 0xFFFF);
}
