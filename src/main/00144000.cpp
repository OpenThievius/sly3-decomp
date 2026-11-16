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

void func_00146EE8(s32 arg0, s32 arg1) {
    func_0017E1B8(&D_00475480, 4, arg1, arg0);
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
