// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00216020(s32);
s32 func_00217040(s32);
s32 func_002179A0(s32);
s32 func_00217D90(s32);
s32 func_0023C660();
s32 func_0023C970();
s32 func_002171E8(void *, s32);
s32 func_0011E8F0(s32, s32);
extern f32 D_0036BB98;

void func_00214928(void* p)
{
    s32* f = (s32*)((char*)p + 0x550);
    func_0023C970();
    *f = 0;
}

void func_00214978(void* p, s32 v)
{
    s32 n = *(s32*)((char*)p + 0x530);
    if ((u32)n < 4) {
        *(s32*)((char*)p + (n << 2) + 0x534) = v;
        *(s32*)((char*)p + 0x530) = n + 1;
    }
}

s32 func_00215158(void* p)
{
    return *(s32*)((char*)p + 0x1DC);
}

void func_00215198(void* p)
{
    *(int*)((char*)p + 0x1dc) = 0;
}

s32 func_002157C0(char* self, s32 i)
{
    return *(s32*)(self + (i << 2) + 0x190);
}

void func_002157D0(char* self, s32 a, s32 b)
{
    s32 x = *(s32*)(self + 0x198);
    s32 y = *(s32*)(self + 0x19C);
    *(s32*)(self + 0x190) = (a < x) ? a : x;
    *(s32*)(self + 0x194) = (b < y) ? b : y;
}

s32 func_002157F8(void* self, s32 index)
{
	return *(s32*)((char*)self + (index << 2) + 0x1A0);
}

s32 func_00215860(s32 base, s32 index)
{
    return *(s32 *)(base + (index << 2) + 0x198);
}

void func_00215FD0(void* self, s32 value)
{
    *(s32*)((char*)self + 0x518) = value;
}

void func_00215FD8(s32 arg0) {
    func_0023C660();
    func_00216020(arg0);
    func_00217D90(arg0);
    func_002179A0(arg0);
    func_00217040(arg0);
}

void func_002172C8(char *self, s32 value)
{
    if (*(s32 *)(self + 0x268) == value) {
        return;
    }
    s32 old = *(s32 *)(self + 0x1c0);
    *(s32 *)(self + 0x268) = value;
    if (old < 2) {
        if (old >= 0) {
            if (value == 0) {
                return;
            }
            func_002171E8(self, -1);
            func_002171E8(self, 1);
        }
    }
}

void func_00217938(char* self)
{
    switch (*(s32*)(self + 0x260)) {
    case 0:
        *(s32*)(self + 0x260) = 1;
        break;
    case 1:
        *(s32*)(self + 0x260) = 0;
        break;
    default:
        *(s32*)(self + 0x260) = func_0011E8F0(0, 1);
        break;
    }
    *(f32*)(self + 0x264) = D_0036BB98;
}
