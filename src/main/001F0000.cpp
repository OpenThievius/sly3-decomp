// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001F1180(s32, s32);
s32 func_001F12D8(s32, s32);
s32 func_001F1430(s32);
s32 func_001F15E0(s32, s32);
s32 func_001F1F88(s32, s32);
s32 func_001F2F08(s32, s32);
s32 func_0011AF60(s32 *, s32);
extern s32 D_00479AE4;
s32 func_0011B028(s32 *, s32);
s32 func_0015CE68(s32);
s32 func_0022DCC8();
s32 func_001F39F8(s32, s32);
s32 func_001C3D18(void *, s32, s32);
s32 func_0024E400();
s32 func_001C8970(void *, s32, s32 *, s32);
s32 func_0023AAE8(s32, void *, s32, s32, void *);
s32 func_0023C580();
extern s32 D_00346F70;
s32 func_001FC090(s32, s32);
s32 func_00119830(s32);
s32 func_0023C0B8();
s32 func_00153D40(void *, void *);
extern f32 D_0036BB98;
s32 func_0013A9E0(void *);
s32 func_001B5910(void *);
s32 func_001B88E0(void *);
s32 func_001C2870(void *);
s32 func_0024E2B8();

s32 func_001F0E28(void* p)
{
    s32 v = *(s32*)((char*)p + 0x1470);
    return v == 1;
}

s32 func_001F0F48(char* self)
{
	s32 value = *(s32*)(self + 0x1470);
	if (value < 5) {
		if (value >= 0) {
			return 1;
		}
	}
	return 0;
}

void func_001F1008(char *self, char *other) {
    if (*(s32 *)(self + 0x1470) != 0 && *(s32 *)(self + 0x50C) != 0) {
        *(f32 *)(self + 0x1154) = D_0036BB98;
    }
    func_00153D40(self, other);
    s32 n = *(s32 *)(self + 0x1470);
    if (n < 5) {
        if (n >= 3) {
            *(s32 *)(other + 0x6C) |= 1;
        }
    }
}

void func_001F1080(char *self)
{
    s32 state;
    func_0024E2B8();
    state = *(s32 *)(self + 0x1470);
    switch (state) {
    case 5:
        func_001B88E0(self + 0x320);
        return;
    case 6:
        func_001B5910(self + 0x500);
        return;
    case 7:
        func_001C2870(self + 0xE40);
        return;
    case 8:
        func_0013A9E0(self + 0x10D0);
        break;
    }
}

void func_001F1120(char *obj, s32 a, s32 b)
{
    s32 *table;

    func_0024E400();
    if (*(s32 *)(obj + 0x1470) == 7) {
        func_001C3D18(obj + 0xE40, a, b);
    }
}

void func_001F12B8(void) {
    func_001F1180(1, 0xFFFF);
}

void func_001F1410(void) {
    func_001F12D8(1, 0xFFFF);
}

void func_001F15C0(void) {
    func_001F1430(0);
}

void func_001F1718(void) {
    func_001F15E0(1, 0xFFFF);
}

s32 func_001F1F78(void* p)
{
    return *(s32*)((char*)p + 0x498) < *(s32*)((char*)p + 0x494);
}

void func_001F2390(void) {
    func_001F1F88(1, 0xFFFF);
}

s32 func_001F23B0(char *self)
{
    func_0023C580();
    func_001C8970(self, 1, &D_00346F70, 0);
    return func_0023AAE8(*(s32 *)(self + 0x1A0), self, -1, 0, (void *)(self + 0x1A4));
}

void func_001F2950(char* self)
{
    s32* f = (s32*)self;
    if (*(s32*)(self+0x198) != 0 && *(s32*)(self+0x19C) != 0) {
        func_001FC090(*(s32*)(self+0x198), *(s32*)(self+0x19C));
    }
    *(s32*)(self+0x19C) = 0;
    *(s32*)(self+0x198) = 0;
    *(s32*)(self+0x194) = 0;
}

void func_001F3040(void) {
    func_001F2F08(1, 0xFFFF);
}

void func_001F3160(s32 arg0) {
    func_0011AF60(&D_00479AE4, arg0);
}

void func_001F3188(s32 arg0) {
    func_0011B028(&D_00479AE4, arg0);
}

void func_001F32B8(s32 arg0) {
    func_0022DCC8();
    func_0015CE68(arg0 + 0x1A8);
}

void func_001F39E8(void* self, s32 value)
{
    *(s32*)((char*)self + 0x1A0) = value == 0;
}

void func_001F3B30(void) {
    func_001F39F8(1, 0xFFFF);
}

void func_001F3BC8(s32 arg0, s32 arg1) {
    func_0023C0B8();
    func_00119830(arg1);
}
