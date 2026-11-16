// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct Counted_12B1F8
{
    s16 kind;
    s32* count;
};
s32 func_00127FC8(s32, s32);
s32 func_00128120(s32, s32);
s32 func_00128278(s32, s32);
s32 func_00129870(s32, s32);
s32 func_00129CB8(s32, s32);
s32 func_0012A798(s32, s32);
s32 func_0012A8F8(s32, s32);
s32 func_0012AB70(s32, s32);
s32 func_0012ADA8(s32, s32);

void func_00128100(void) {
    func_00127FC8(1, 0xFFFF);
}

void func_00128258(void) {
    func_00128120(1, 0xFFFF);
}

void func_001283B0(void) {
    func_00128278(1, 0xFFFF);
}

void func_001299A8(void) {
    func_00129870(1, 0xFFFF);
}

void func_00129DF0(void) {
    func_00129CB8(1, 0xFFFF);
}

s32 *func_00129E10(s32 *arg0) {
    *arg0 = 0;
    return arg0;
}

void func_0012A8D8(void) {
    func_0012A798(1, 0xFFFF);
}

void func_0012AA30(void) {
    func_0012A8F8(1, 0xFFFF);
}

void func_0012ACA8(void) {
    func_0012AB70(1, 0xFFFF);
}

void func_0012AEE0(void) {
    func_0012ADA8(1, 0xFFFF);
}

Counted_12B1F8* func_0012B1F8(Counted_12B1F8* self, s32* count)
{
    self->count = count;
    self->kind = 30;
    (*count)++;
    return self;
}
