// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00169BF8(s32);
s32 func_00274710(s32, s32, s32, s32);
s32 func_001F5988(s32, s32);
s32 func_001F6498(s32, s32);
s32 func_0023CC40();
s32 func_001852E0(s32 *);
s32 func_00185328(s32 *, s32);
extern s32 D_0036C700;
s32 func_0022D318(s32);
s32 func_0023DDA0();

s32 func_001F43C0(void) {
    return 0;
}

s32 func_001F43C8(void* p)
{
    return *(s32*)((char*)p + 0x16C);
}

s32 func_001F43F0(void* self)
{
    return *(s32*)((char*)self + 0x170);
}

s32 func_001F4430(void* p)
{
    return *(s32*)((char*)p + 0x174);
}

s32 func_001F4458(void* self)
{
    return *(s32*)((char*)self + 0x178);
}

void func_001F4500(s32 arg0, s32 arg1) {
    func_00274710(func_00169BF8(0x130), arg1, 1, arg0);
}

void func_001F48F8(void) {

}

s32 func_001F4B30(void* p) { return *(s32*)((char*)p + 0x110C); }

void func_001F4D28(void) {

}

void func_001F4D30(void) {

}

void func_001F4E10(void* self, s32 value)
{
    *(s32*)((char*)self + 0x10) = value;
}

void func_001F5AC0(void) {
    func_001F5988(1, 0xFFFF);
}

void func_001F5CC8(char* self)
{
    s32 v = *(s32*)(self + 0x38);
    if (v != 0) {
        func_0022D318(v);
    }
}

void func_001F65D0(void) {
    func_001F6498(1, 0xFFFF);
}

void func_001F7568(void) {
    func_0023CC40();
}

void func_001F7748(void* self)
{
    s32 r = func_0023DDA0();
    *(s32*)((char*)self + 0x160) = r;
}

void func_001F7C70(void) {
    func_00185328(&D_0036C700, func_001852E0(&D_0036C700) + 1);
}

void func_001F7FA8(void) {

}
