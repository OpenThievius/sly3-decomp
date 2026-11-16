// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00161B70(s32);
s32 func_001F4D28();
s32 func_00162678(s32);
s32 func_00252508();
s32 func_00162900(s32, s32);
extern s32 D_003440C0;
s32 func_00162AF0(s32, s32);
s32 func_002A10B0();
extern s32 D_003440C4;
s32 func_002A1228(s32);
s32 func_002A0480(s32);
s32 func_00163170(s32, s32);
s32 func_00260738(s32);
s32 func_00163768(s32, s32);
s32 func_00238970();
s32 func_00252E40(s32, s32);
s32 func_00163C10(s32, s32);
s32 func_00238978();
s32 func_00292034(s32, s32, s32);
s32 func_00163D80(s32, s32);
s32 func_0011AD80(s32, void *);
s32 func_0011AEC8();

void func_00161B40(s32 arg0) {
    func_001F4D28();
    func_00161B70(arg0);
}

void func_00161CD0(s32 arg0) {
    func_00252508();
    func_00162678(arg0 + 0x1884);
}

void func_00162A38(void) {
    func_00162900(1, 0xFFFF);
}

void func_00162A58(void) {
    D_003440C0 = 3;
}

void func_00162C28(void) {
    func_00162AF0(1, 0xFFFF);
}

s32 func_00162E08(void) {
    s32 temp_v0;

    temp_v0 = func_002A10B0();
    if (D_003440C4 != temp_v0) {
        D_003440C4 = temp_v0;
    }
    return D_003440C4 == 0x14;
}

s32 func_00162E48(void)
{
    if (D_003440C4 == 0x14) {
        return func_002A1228(2);
    }
    return D_003440C4;
}

void func_00162E78(void) {

}

s32 func_00163150(s32 arg0) {
    return func_002A0480(arg0 == 0) == 0;
}

void func_001632A8(void) {
    func_00163170(1, 0xFFFF);
}

void func_001633E0(char* self, s32 value)
{
    if (*(s32*)(self + 0x190) == value) {
        return;
    }
    *(s32*)(self + 0x190) = value;
    if (value == 1) {
        *(s32*)(self + 0x198) = -1;
    }
}

s32 func_00163700(char* self)
{
    char* p = *(char**)(self + 0x194);
    if (p == 0) return 0;
    s32 v = *(s32*)(p + 0x48);
    if (v != 2) return 0;
    return *(s32*)(p + 0x54) == 2;
}

s32 func_00163738(char* self)
{
    s32 m = *(s32*)(self + 0x194);
    if (m == 0) return 1;
    return func_00260738(m);
}

void func_001638A0(void) {
    func_00163768(1, 0xFFFF);
}

void func_001638C0(void* pgoal)
{
    s32 temp_a0;

    func_00238970();
    temp_a0 = *(s32*)((char*)pgoal + 0x10);
    *(s32*)((char*)pgoal + 0x30) = -1;
    func_00252E40(temp_a0, 0x37);
}

void func_001638F8(s32 arg0) {
    func_00238978();
    func_00163C10(arg0, 1);
}

void func_00163D30(char* self, s32 a1, s32 a2)
{
    func_00292034((s32)(self + 0x1168), 0, 0xC);
    *(s32*)(self + 0x1164) = a1;
    *(s32*)(self + 0x1190) = a2;
}

void func_00163EB8(void) {
    func_00163D80(1, 0xFFFF);
}

void func_00163ED8(s32 arg0, void *arg1) {
    if (func_0011AEC8() == 0) {
        func_0011AD80(arg0, arg1);
        *(s32 *)((char *)arg1 + 0x10) = 0;
    }
}
