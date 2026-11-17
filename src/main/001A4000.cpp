// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001A4CD0(s32, s32);
s32 func_00238978();
s32 func_001A5038(s32, s32);
s32 func_001A5810(s32, s32);
s32 func_00238980();
s32 func_001A59C8(s32, s32);
s32 func_001A5B58(s32, s32);
s32 func_001A6350(s32, s32);
s32 func_001A6850(s32, s32);
s32 func_001A75E8(s32, s32);
s32 func_00170500(s32, s32);
s32 func_002564C8(s32);
s32 func_00238AD8(void *, s32, void *);
s32 func_00257CF0(s32);

s32 func_001A4390(char *self)
{
    if (*(char **)(self + 0x40) != 0) return 0;
    char *v = *(char **)(self + 0x10);
    if (*(char **)(v + 0x3E0) != 0) return 0;
    if (func_00170500(*(s32 *)(v + 0x10D0), *(s32 *)(self + 0x30)) == 0) return 1;
    if (*(s32 *)(*(char **)(self + 0x10) + 0x3D8) == 0) return 1;
    return func_002564C8(*(s32 *)(*(char **)(self + 0x10) + 0x3D8));
}

void func_001A4C60(s32 arg0) {
    func_00238978();
    func_001A4CD0(arg0, 0);
}

s32 func_001A4F08(char *self, s32 value, void *arg)
{
    if (value == 12 && *(s32 *)arg == *(s32 *)(self + 0x30)) {
        s32 result = func_00257CF0(*(s32 *)((char *)arg + 4));
        if (result == *(s32 *)(self + 0x10)) {
            *(s32 *)(self + 0x40) = 1;
            return 1;
        }
    }
    return func_00238AD8(self, value, arg);
}

void func_001A4FC8(s32 arg0) {
    func_00238978();
    func_001A5038(arg0, 0);
}

void func_001A5680(s32 arg0) {
    func_00238978();
    func_001A5810(arg0, 0);
}

void func_001A56B0(s32 arg0) {
    func_00238980();
    func_001A5810(arg0, -1);
}

void func_001A5900(s32 arg0) {
    func_00238978();
    func_001A59C8(arg0, 0);
}

void func_001A5930(s32 arg0) {
    func_00238980();
    func_001A59C8(arg0, -1);
}

void func_001A5C90(void) {
    func_001A5B58(1, 0xFFFF);
}

void func_001A6488(void) {
    func_001A6350(1, 0xFFFF);
}

void func_001A64F0(s32 arg0) {
    func_00238978();
    func_001A6850(arg0, 0);
}

s32 func_001A6DD0(const float* a, const float* b)
{
    return a[4] < b[4] ? 1 : 0;
}

void func_001A7720(void) {
    func_001A75E8(1, 0xFFFF);
}

s32 func_001A7C58(void) {
    return 0;
}

s32 func_001A7C60(void) {
    return 0;
}
