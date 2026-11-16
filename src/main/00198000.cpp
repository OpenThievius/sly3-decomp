// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00197838(s32, s32, s32, s32);
s32 func_001985F0();
s32 func_002387A8(s32, s32);
s32 func_00198640(s32, s32);
s32 func_0019A030(s32);
s32 func_001C7938();
s32 func_0019A0B0(s32, s32);
s32 func_0019B2C8(s32, s32);
s32 func_0019C570(s32, s32);
s32 func_001F3C80();

void func_001985A8(s32 arg0) {
    if (func_001985F0() != 0) {
        func_00197838(func_002387A8(arg0 + 0x29C, 0xD3), 0, 0, 0);
    }
}

void func_00198778(void) {
    func_00198640(1, 0xFFFF);
}

void func_0019A000(s32 arg0) {
    func_001C7938();
    func_0019A030(arg0);
}

void func_0019A1E8(void) {
    func_0019A0B0(1, 0xFFFF);
}

void func_0019B400(void) {
    func_0019B2C8(1, 0xFFFF);
}

void func_0019BED8(s32 arg0) {
    func_001F3C80();
    func_0019C570(arg0, -1);
}
