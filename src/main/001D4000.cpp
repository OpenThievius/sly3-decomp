// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001D45B0();
s32 func_001D3AE8(s32 *);
extern s32 D_0046F550;
s32 func_001D3918(s32 *);
s32 func_001D3B28(s32 *);
s32 func_001D5820(s32, s32);
s32 func_001D5B98(s32);
s32 func_001FC968();
s32 func_0023CC40();
s32 func_001D6A60(s32, s32);
s32 func_001C8970(s32, s32, s32 *, s32);
s32 func_0023C0B8();
extern s32 D_00345FB0;
s32 func_001309D8(s32);
s32 func_0014C7F0();
s32 func_001D7590(s32, s32);

s32 func_001D47C0(void) {
    return func_001D45B0() == 0x57;
}

void func_001D47E8(void) {
    func_001D3AE8(&D_0046F550);
}

void func_001D4F80(void) {
    func_001D3918(&D_0046F550);
}

void func_001D5038(void) {
    func_001D3B28(&D_0046F550);
}

void func_001D5958(void) {
    func_001D5820(1, 0xFFFF);
}

void func_001D5B68(s32 arg0) {
    func_001FC968();
    func_001D5B98(arg0);
}

void func_001D5F18(void) {
    func_0023CC40();
}

s32 func_001D68F8(u32 arg0) {
    return arg0 < 6U;
}

void func_001D6B98(void) {
    func_001D6A60(1, 0xFFFF);
}

void func_001D6C00(s32 arg0) {
    func_0023C0B8();
    func_001C8970(arg0, 1, &D_00345FB0, 0);
}

void func_001D6D70(s32 arg0) {
    func_0014C7F0();
    func_001309D8(arg0 + 0x248);
}

void func_001D76C8(void) {
    func_001D7590(1, 0xFFFF);
}
