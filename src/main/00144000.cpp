// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct State_147FA8
{
    u8 pad0[0x50];
    s32 x50;
    u8 pad54[0x94 - 0x54];
    s32 x94;
    u8 pad98[0xA4 - 0x98];
    s32 active;
    s32 xa8;
};
s32 func_0017E1B8(s32 *, s32, s32, s32);
extern s32 D_00475480;
s32 func_00147CB0(s32, s32);

void func_00144628(void* p, s32 v)
{
    if (v == *(s32*)((char*)p + 0x394)) {
        return;
    }
    *(s32*)((char*)p + 0x394) = v;
}

f32 func_00144A70(void* self)
{
    f32 value = *(f32*)((char*)self + 0x19C);
    if (*(int*)((char*)self + 0x3D0) != 0) {
        value = value * *(f32*)((char*)self + 0x1A4);
    }
    return value;
}

void func_00146E68(void* pobject)
{
    *(int*)((char*)pobject + 0x274) = 0;
}

void func_00146E70(char* self, s32 a, s32 b)
{
    s32 n = *(s32*)(self + 0x274);
    if ((u32)n < 4) {
        *(s32*)(self + 0x274) = n + 1;
        u32* p = (u32*)(self + ((n * 12 + 0x244)));
        p[0] = a;
        p[1] = b;
        p[2] = 0;
    }
}

void func_00146EE8(s32 arg0, s32 arg1) {
    func_0017E1B8(&D_00475480, 4, arg1, arg0);
}

void func_001470B0(char* self, s32 value)
{
    u32 count = *(u32*)(self + 0x314);
    if (count < 2) {
        *(s32*)(self + (count << 2) + 0x318) = value;
        *(u32*)(self + 0x314) = count + 1;
    }
}

void func_00147150(char* self, u32 value)
{
    s32 count = *(s32*)(self + 0x32c);
    if ((u32)count < 4) {
        *(u32*)(self + (count << 2) + 0x330) = value;
        *(s32*)(self + 0x32c) = count + 1;
    }
}

void func_001471F0(char* self, s32 value)
{
    u32 count = *(u32*)(self + 0x340);
    if (count < 4) {
        *(s32*)(self + (count << 2) + 0x344) = value;
        *(u32*)(self + 0x340) = count + 1;
    }
}

void func_00147DE8(void) {
    func_00147CB0(1, 0xFFFF);
}

void func_00147FA8(State_147FA8* self)
{
    if (self->active)
    {
        self->xa8 = 0;
        self->x94 = 0;
        self->x50 = 0;
    }
}

void func_00147FC8(void) {

}
