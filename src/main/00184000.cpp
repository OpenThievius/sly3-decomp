// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00184778(s32);
s32 func_001FCAC8();
s32 func_001847C0(s32, s32);
s32 func_0011C2B8(s32);
s32 func_0011C438(s32);
s32 func_001854C8(s32 *, s32, s32);
s32 func_001C6EA8(s32 *);
s32 func_002A9288();
extern s32 D_0036C700;
extern s32 D_00370AF0;
s32 func_00171A50(s32 *);
extern s32 D_0036BD20;
s32 func_00186298(s32);
s32 func_00186338(s32);
s32 func_00187CB8();
extern s32 D_004794C4;

void func_00184550(s32 arg0) {
    func_001FCAC8();
    func_00184778(arg0);
}

void func_001848F8(void) {
    func_001847C0(1, 0xFFFF);
}

void func_00184918(void) {
    func_0011C2B8(0);
    func_0011C438(func_002A9288());
    func_001854C8(&D_0036C700, 0, 0);
    func_001C6EA8(&D_00370AF0);
}

void func_001849E8(void) {
    func_00171A50(&D_0036BD20);
}

void func_001856E0(char* self, u32 index, s32 value)
{
    if (index < 2U) {
        *(s32*)(self + (index << 2) + 0x10) = value;
    }
}

int func_00185980(int bit)
{
    if (bit == -1) return 0;
    return (int)(1UL << bit);
}

s32 func_00185FD8(void* p)
{
    s32* f = (s32*)((char*)p + 0x50);
    if (*f != 0) return 0;
    return *(s32*)((char*)p + 0xF0) != 3;
}

void func_001861F8(void) {

}

void func_00186248(s32 arg0) {
    if (func_00187CB8() == 0) {
        if (D_004794C4 != 0) {
            func_00186298(D_004794C4);
        }
        func_00186338(arg0);
    }
}
