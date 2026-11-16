// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0025D350(s32 *, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00475480;
s32 func_001858D0(s32 *, s32, s32, s32, s32, s32);
extern s32 D_0036C700;
s32 func_0015BE30(s32);
s32 func_0023C580();
s32 func_0015BE10(s32);
s32 func_001FC968();
s32 func_0015D100();
s32 func_0015C178(s32, s32);
s32 func_001FC8F8();
s32 func_0015DB10(s32, s32);
s32 func_0015E078(s32, s32);
s32 func_0015FCF8(s32);
s32 func_0015FE68(s32);
s32 func_001600F0(s32);
s32 func_00161140(s32);
s32 func_00161380(s32);
s32 func_002389A0();

void func_0015C5D0(void) {

}

void func_0015C610(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0025D350(&D_00475480, arg0 + 0x78, 4, arg0 + 0x74, arg1, arg2, arg3, arg4);
}

void func_0015C650(s32 arg0, s32 arg1, s32 arg2) {
    func_001858D0(&D_0036C700, arg0 + 0xBC, 4, arg0 + 0xB8, arg1, arg2);
}

void func_0015C730(s32 arg0) {
    func_0023C580();
    func_0015BE30(arg0 + 0x130);
}

void func_0015C760(s32 arg0) {
    func_001FC968();
    func_0015BE10(arg0 + 0x130);
}

void func_0015CF18(void) {
    func_0015D100();
}

void func_0015D288(s32 arg0) {
    func_0015C178(arg0 + 0x120, 0);
}

void func_0015D2A8(s32 arg0) {
    func_001FC8F8();
    func_0015BE10(arg0 + 0x120);
}

s32 func_0015D2D8(s32 *arg0, s32 *arg1) {
    return (s32) (*arg0 - *arg1) >> 6;
}

void func_0015DC48(void) {
    func_0015DB10(1, 0xFFFF);
}

void func_0015E1B0(void) {
    func_0015E078(1, 0xFFFF);
}

void func_0015FCA8(s32 arg0) {
    func_002389A0();
    func_0015FCF8(arg0);
    func_001600F0(arg0);
    func_00161380(arg0);
    func_0015FE68(arg0);
    func_00161140(arg0);
}
