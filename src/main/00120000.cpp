// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00120F58(s32, s32);

void func_00121090(void) {
    func_00120F58(1, 0xFFFF);
}

char* func_00122638(char* out, s32 flag, char* in)
{
    s32 one;
    s32 value;

    value = 0;
    if (*(s16*)(in + 0x0) == 0x1F) {
        value = *(s32*)(in + 0x4) == 0;
    }
    *(s32*)(out + 4) = value;
    *(s16*)out = 0x15;
    return out;
}
