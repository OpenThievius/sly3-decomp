// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_002380B8(s32, s32);
s32 func_002383A0(s32, s32);
s32 func_00238AE8(s32);
s32 func_00238B48(s32, s32);
s32 func_00238E70(s32, s32);
s32 func_00239A78();
s32 func_0011B0C0(s32 *, s32);
extern s32 D_00479A08;
s32 func_0023ACB0(s32, s32);
s32 func_00239B80(s32, s32);
s32 func_0023AA48(s32, s32, s32);
s32 func_0011E1F0(s32 *, void *);
s32 func_0013B500(void *, s32);
extern s32 D_00479A48;
s32 func_0023B3A8();

void func_002381F0(void) {
    func_002380B8(1, 0xFFFF);
}

void func_002384D8(void) {
    func_002383A0(1, 0xFFFF);
}

void func_002384F8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_00238500(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_00238970(void) {

}

void func_00238978(void) {

}

void func_00238980(s32 arg0) {
    func_00238AE8(arg0 + 0x18);
}

void func_002389A0(void) {

}

void func_002389A8(void) {

}

s32 func_002389B0(void) {
    return 0x1000;
}

s32 func_002389B8(void) {
    return 0;
}

s32 func_00238AA8(void* p)
{
    return *(s32*)((char*)p + 0x20) > 0;
}

void func_00238AB8(char* self) {
    char* p = *(char**)(self + 0x14);
    if (p != 0) {
        *(int*)(p + 0x24) = 1;
    }
}

s32 func_00238AD0(char* self) { return *(s32*)(self + 0x24); }

s32 func_00238AD8(void) {
    return 0;
}

void func_00238AE0(void) {

}

void func_00238C80(void) {
    func_00238B48(1, 0xFFFF);
}

void func_00238FA8(void) {
    func_00238E70(1, 0xFFFF);
}

void func_00239AB8(void) {
    func_00239A78();
}

s32 func_00239BB0(void* p)
{
    s32 v = *(s32*)((char*)p + 0x10) + 1;
    *(s32*)((char*)p + 0x10) = v;
    return v;
}

s32 func_00239CC0(s32 arg0) {
    return func_0011B0C0(&D_00479A08, arg0) == 0;
}

s32 func_00239E50(char* self)
{
	return func_00239B80(*(s32*)(self + 0x24), *(s32*)(self + 0x3C));
}

void func_00239E70(char* self)
{
    func_00239B80(*(s32*)(self + 0x24), *(s32*)(self + 0x34));
}

s32 func_0023A640(s32 arg0)
{
    s32 temp_a1;
    s32 temp_a2;

    *(s32*)(arg0 + 0x30) = 0;
    temp_a1 = *(s32*)(arg0 + 0x34);
    temp_a2 = *(s32*)(arg0 + 0x38);
    *(s32*)(arg0 + 0x34) = temp_a2;
    *(s32*)(arg0 + 0x38) = -1;
    return func_0023AA48(arg0, temp_a1, temp_a2);
}

void func_0023ADE8(void) {
    func_0023ACB0(1, 0xFFFF);
}

void func_0023B310(char *self)
{
    char *child = *(char **)(self + 0x10C);
    if (child != 0) {
        s32 count = *(s32 *)(child + 8) - 1;
        *(s32 *)(child + 8) = count;
        if (count == 0)
            func_0011E1F0(&D_00479A48, child);
        *(char **)(self + 0x10C) = 0;
    }
    char *node = *(char **)(self + 0x54);
    while (node != *(char **)(self + 0x60)) {
        if (func_0013B500(node, 0x2F) != 0) {
            func_0023B310(node);
        }
        node = *(char **)(node + 0x24);
    }
}

void func_0023B550(char *arg0)
{
    char *node;

    func_0023B3A8();
    node = *(char **)(arg0 + 0x54);
    if (node != *(char **)(arg0 + 0x60)) {
        do {
            if (func_0013B500(node, 0x2F)) {
                func_0023B550(node);
            }
            node = *(char **)(node + 0x24);
        } while (node != *(char **)(arg0 + 0x60));
    }
}

s32 func_0023B610(void* p)
{
    u64 v = *(u64*)((char*)p + 0xC0);
    return (s32)(v >> 34) & 1;
}
