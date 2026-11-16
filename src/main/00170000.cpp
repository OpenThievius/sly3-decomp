// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct Target_172CE0
{
    u8 pad0[0xE0];
    s32 xe0;
};
struct Owner_172CE0
{
    u8 pad0[0x50];
    Target_172CE0* target;
};
s32 func_00170C98(s32, s32);
s32 func_00170F60(s32, s32);
s32 func_001FC968();
s32 func_00171538(s32, s32);
s32 func_001F3C80();
s32 func_001718D8(s32, s32);
f32 func_00171C98();
s32 func_00171DD8(s32, f32);
s32 func_00172328(s32, s32);
s32 func_00172480(s32, s32);
s32 func_001735B8(s32, s32);
s32 func_0011B0C0(s32 *, s32);
extern s32 D_00479C04;
s32 func_0011AF60(s32 *, s32);
s32 func_001C78A0();
extern s32 D_00479B80;
s32 func_0011B028(s32 *, s32);
s32 func_00174048(s32, s32);
s32 func_001C7938();

void func_00170DD0(void) {
    func_00170C98(1, 0xFFFF);
}

void func_00170EA0(s32 arg0) {
    func_001FC968();
    func_00170F60(arg0, -1);
    func_00170F60(arg0, 3);
}

void func_00171188(s32 arg0) {
    func_001F3C80();
    func_00171538(arg0, -1);
}

void func_00171A10(void) {
    func_001718D8(1, 0xFFFF);
}

void func_00171D98(s32 arg0, f32 fparg0) {
    func_00171DD8(arg0, func_00171C98() + fparg0);
}

void func_00172460(void) {
    func_00172328(1, 0xFFFF);
}

void func_001725B8(void) {
    func_00172480(1, 0xFFFF);
}

s32 func_00172CE0(Owner_172CE0* self)
{
    s32 result = -1;
    Target_172CE0* target = self->target;
    if (target)
        result = target->xe0;
    return result;
}

void func_001736F0(void) {
    func_001735B8(1, 0xFFFF);
}

s32 func_00173A98(s32 arg0) {
    return func_0011B0C0(&D_00479C04, arg0) == 0;
}

void func_00173F88(s32 arg0) {
    func_001C78A0();
    func_0011AF60(&D_00479B80, arg0);
}

void func_00173FC0(s32 arg0) {
    func_001C7938();
    func_00174048(arg0, 1);
    func_0011B028(&D_00479B80, arg0);
}
