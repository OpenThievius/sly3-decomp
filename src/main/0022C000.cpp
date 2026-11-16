// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0022C030(s32, s32);
s32 func_0022D5B0(s32, s32);
f32 func_0022DE50();
s32 func_0022E148(s32, s32, s32, f32);
s32 func_0022E380(s32, s32, s32, f32);
s32 func_0022F380(s32, f32);

void func_0022C168(void) {
    func_0022C030(1, 0xFFFF);
}

void func_0022D6E8(void) {
    func_0022D5B0(1, 0xFFFF);
}

void func_0022E330(s32 arg0, s32 arg1, s32 arg2) {
    func_0022E148(arg0, arg1, arg2, func_0022DE50());
}

void func_0022E4D0(s32 arg0, s32 arg1, s32 arg2) {
    func_0022E380(arg0, arg1, arg2, func_0022DE50());
}

void func_0022F350(s32 arg0) {
    func_0022F380(arg0, func_0022DE50());
}
