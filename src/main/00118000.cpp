// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern void func_0011AF60(void*, void*);
extern void func_0011AF90(void*, void*);
struct Link_0011AFC0 { void* first; u32 pad4; s32 offset; };
s32 func_00117F48(s32, s32);
s32 func_00118308(s32, s32);
s32 func_00118A90(s32, s32);
s32 func_00118CD8();
s32 func_001192D8(s32, s32);
s32 func_00119A90(s32, s32);
s32 func_00119FA0(s32, s32);
s32 func_0011A120(s32, s32);
s32 func_0011A778(s32, s32);
s32 func_0011A958(s32, s32);
s32 func_0011AAB0(s32, s32);
s32 func_0011AC08(s32, s32);
s32 func_0011B138(s32, s32);
s32 func_0011BBF0(s32, s32);
s32 func_0011BDF8(s32, s32);
s32 func_0011E100(s32 *, s32, s32, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;

void func_001180B8(void) {
    func_00117F48(1, 0xFFFF);
}

void func_00118440(void) {
    func_00118308(1, 0xFFFF);
}

void func_00118BC8(void) {
    func_00118A90(1, 0xFFFF);
}

void func_00118C30(void* p)
{
	*(int*)((char*)p + 0x10) = 0;
	*(int*)((char*)p + 0x4) = 0;
	*(int*)((char*)p + 0x14) = 0;
	*(int*)((char*)p + 0x8) = 0;
	*(int*)((char*)p + 0x18) = 0;
	*(int*)((char*)p + 0x1C) = 0;
}

void func_00118DA0(void) {
    func_00118CD8();
}

void func_00118E10(void* self, s32 a, s32 b)
{
    *(s32*)((char*)self + 0x20) = a;
    *(s32*)((char*)self + 0x0) = (*(s32*)((char*)self + 0x0) | 2);
    *(s32*)((char*)self + 0x24) = b;
}

void func_001192F8(s32 a, s32 b)
{
    func_001192D8(a, b);
    func_001192D8(a, b + 0x10);
    func_001192D8(a, b + 0x20);
}

void func_00119A68(void* p)
{
    *(s32*)((char*)p + 0x10) = *(s32*)((char*)p + 0x38);
    *(s32*)((char*)p + 0x14) = *(s32*)((char*)p + 0x34);
    *(s32*)((char*)p + 0x34) = 0;
}

void func_00119BC8(void) {
    func_00119A90(1, 0xFFFF);
}

void func_0011A0D8(void) {
    func_00119FA0(1, 0xFFFF);
}

void func_0011A258(void) {
    func_0011A120(1, 0xFFFF);
}

void func_0011A8B0(void) {
    func_0011A778(1, 0xFFFF);
}

void func_0011AA90(void) {
    func_0011A958(1, 0xFFFF);
}

void func_0011ABE8(void) {
    func_0011AAB0(1, 0xFFFF);
}

void func_0011AD40(void) {
    func_0011AC08(1, 0xFFFF);
}

void func_0011AD60(void* self, s32 value)
{
    *(s32*)((char*)self + 8) = value;
}

void func_0011AD68(s32 *arg0) {
    *arg0 = 0;
}

s32 func_0011AEF8(s32 *arg0) {
    return *arg0 == 0;
}

void func_0011AF38(void* self, s32 value)
{
    *(s32*)((char*)self + 8) = value;
}

void func_0011AFC0(Link_0011AFC0* self, void* target, void* replacement)
{
    if (target == 0)
    {
        func_0011AF60(self, replacement);
    }
    else if (target == self->first)
    {
        func_0011AF90(self, replacement);
    }
    else
    {
        s32 offset = self->offset;
        u8* destination = (u8*)replacement + offset;
        u8* source = (u8*)target + offset;
        u32 value = *(u32*)(source + 4);
        *(void**)destination = target;
        *(u32*)(destination + 4) = value;
        *(u32*)(source + 4) = (u32)replacement;
        *(void**)(value + offset) = replacement;
    }
}

s32 func_0011B0F0(s32 *arg0) {
    return *arg0 == 0;
}

void func_0011B270(void) {
    func_0011B138(1, 0xFFFF);
}

void func_0011BD28(void) {
    func_0011BBF0(1, 0xFFFF);
}

void func_0011BF30(void) {
    func_0011BDF8(1, 0xFFFF);
}

void func_0011BFB8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        temp_v0 = D_0036AE78 + 1;
        D_0036AE78 = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0_2 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_3 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_4 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_5 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_6 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_6;
        if (temp_v0_6 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
}
