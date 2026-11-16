// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001BD8D8(s32, s32);
s32 func_001BE568(s32);
s32 func_001BECD0(s32, s32);
s32 func_001BE4F8(void *, void *);

void func_001BDA10(void) {
    func_001BD8D8(1, 0xFFFF);
}

s32 func_001BDA30(void *self, s32 value)
{
    *(s32 *)((char *)self + 0x00) = value;
    *(s32 *)((char *)self + 0x04) = -1;
    *(s32 *)((char *)self + 0x18) = -1;
    return func_001BE4F8((char *)self + 0x1C, self);
}

void func_001BDA68(s32 arg0) {
    func_001BE568(arg0 + 0x1C);
}

void func_001BECB8(s32* self, s32 value)
{
    if (value != 0) {
        self[4] = value;
    } else {
        self[4] = self[3];
    }
}

void func_001BEE08(void) {
    func_001BECD0(1, 0xFFFF);
}

void func_001BFA08(void* unused, void* out)
{
    *(int*)((char*)out + 0x94) = 0;
    *(int*)((char*)out + 0x98) = 0;
}
