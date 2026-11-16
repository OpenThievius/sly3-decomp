// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00297948();
s32 func_00294438(s32);
s32 func_002944E8(s32);
s32 func_00295970();
s32 func_00293AB0(s32);
s32 func_002995A0(s32, s32);
s32 func_00299648();

s32 func_002954F8(s32 unused, s32 a1, s32 a2)
{
    if (a2 != 0) {
        func_00294438(a2);
    }
    return 1;
}

s32 func_00295520(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        func_002944E8(arg2);
    }
    return 1;
}

void func_00295950(char* self)
{
    s32* word = (s32*)(self + 0x10);
    s32 v = *word;
    v &= 0xFFFFFFFE;
    *(s32*)(self + 0x10) = v;
    *(s32*)(self + 0x18) = 0;
}

s32 func_002959A0(void* p, s32 value)
{
    if (value < 0) {
        return func_00295970();
    }
    if (value < *(s32*)((char*)p + 0x20)) {
        return *(s32*)((char*)p + 0x1C) + (value << 6);
    }
    return func_00295970();
}

void func_002979C0(void) {
    func_00297948();
}

s32 func_00297F70(void)
{
    if (func_00293AB0(4) & 0x40000) {
        func_00299648();
        func_002995A0(1, 1);
        func_002995A0(0, 1);
        return 1;
    }
    return 0;
}
