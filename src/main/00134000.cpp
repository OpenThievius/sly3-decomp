// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001309D8(s32);
s32 func_00135D30(s32, s32);
s32 func_00137738(s32, s32);
s32 func_001355C8(void *, s32);
s32 func_00238978();
s32 func_002541F8(s32, s32);
s32 func_00238980();
s32 func_00252FC0(s32, s32);
s32 func_00135A50(void *, s32);
s32 func_00259D10(s32);
s32 func_00259D50(s32);
s32 func_00119128(s32);
s32 func_00135FB0(void *, s32, s32 *);
s32 func_001519C8();
extern s32 D_0036B118;
f32 *func_00136880();

s32 func_00134AB8(void* p)
{
	s32 v = *(s32*)((char*)p + 0x30);
	if (v < 4) {
		if (v > 0) {
			return 1;
		}
	}
	return 0;
}

void func_001353D0(s32 arg0) {
    func_001309D8(arg0 + 0xF0);
}

void func_00135428(char *arg0)
{
    func_00238978();
    func_002541F8(*(s32 *)(arg0 + 0x10), *(s32 *)(arg0 + 0x30));
    func_001355C8(arg0, 0);
}

void func_00135468(char *self)
{
	func_00238980();
	func_001355C8(self, -1);
	func_00252FC0(*(s32 *)(self + 0x10), 0x44);
}

void func_00135800(char *self)
{
    func_00238978();
    func_00135A50(self, 0);
    func_00259D10(*(s32 *)(self + 0x10) + 0x4B0);
}

void func_00135840(char *self)
{
    func_00238980();
    func_00135A50(self, -1);
    func_00252FC0(*(s32 *)(self + 0x10), 0x21);
    func_00259D50(*(s32 *)(self + 0x10) + 0x4B0);
}

void func_00135E68(void) {
    func_00135D30(1, 0xFFFF);
}

void func_00135EE8(char *self, s32 arg1)
{
    s32 temp_v0;

    func_001519C8();
    temp_v0 = func_00119128(arg1);
    *(s32 *)(self + 0xA4) = temp_v0;
    if (temp_v0 == 0) {
        *(s32 *)(self + 0xA8) = 1;
        func_00135FB0(self, arg1, &D_0036B118);
    }
}

f32 func_001368E0(void) { f32 *p = func_00136880(); f32 r = 0.0f; if (p != 0) r = *p; return r; }

void func_00137870(void) {
    func_00137738(1, 0xFFFF);
}

s32 func_00137890(void* p)
{
    s32 v = *(s32*)((char*)p + 0x10) + 1;
    *(s32*)((char*)p + 0x10) = v;
    return v;
}
