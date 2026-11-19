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

extern u8 D_00475480[];

extern void func_00136908(s32,s32,s32,void*);

extern void func_00252E40(void*,s32);

extern void func_00238970(void*);

extern void func_002BAA50(void*, s32);

extern void func_002BBF40(void*, s32);

extern void func_0013BDE0(void*);

extern void func_0011E1F0(void*, void*);

extern u8 D_004799A0[];

extern u8 D_004D2AD8[];

extern void func_002BA960(void*, s32);

extern void func_002BEB58(void*, s32);

extern u8 D_00479C44[];

extern u8 D_00479C5C[];

extern void func_002BC7F0(void*, s32);

extern u8 D_00479C74[];

extern void func_0012BC20(void*);

extern void func_002B4E48(void*);

extern u8 D_004D2F10[];

extern void func_002BA8F8(void*, s32);

extern void func_002B3B90(void*);

extern void func_002BACE0(void*, s32);

extern void func_002BAD40(void*, s32);

extern void func_002B4308(void*);

extern u8 D_004D2C88[];

extern void func_002B4A88(void*);

extern u8 D_004D2E38[];

extern u8 D_00479C10[];

extern u8 D_00479D44[];

extern u8 D_00479A14[];

extern u8 D_0047A418[];

extern void func_0011B028(void*, void*);

extern void func_0015AD18(void*, void*);

extern void func_002BADA0(void*, s32);

extern void func_002B3F48(void*);

extern u8 D_004D2BB0[];

void func_001378A0(u8* self) ;

void func_001344A0(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x2B); *(s32*)(s+0x30) = -1; }

void func_001353F0(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x44); *(s32*)(s+0x34) = -1; }

void func_001357C8(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x21); *(s32*)(s+0x30) = -1; }

void func_00135F80(s32 p0) { *(s32*)((u8*)(p0) + 0xA8) = 0; *(s32*)((u8*)(p0) + 0x4C) = 0; *(s32*)((u8*)(p0) + 0x50) = 0; *(s32*)((u8*)(p0) + 0x54) = 0; *(s32*)((u8*)(p0) + 0x58) = 0; *(s32*)((u8*)(p0) + 0x88) = 0; *(s32*)((u8*)(p0) + 0x8C) = 0; *(s32*)((u8*)(p0) + 0x90) = 0; *(s32*)((u8*)(p0) + 0x94) = 0; *(s32*)((u8*)(p0) + 0x98) = 0; *(s32*)((u8*)(p0) + 0x9C) = 0; }

s32 func_00137428(s32 p0, s32 p1, s32 p2) { s32 local; func_00136908(p0,p1,p2,&local); return local; }

void func_001378A0(u8* self) { s32 v = *(s32*)(self + 0x10) - 1; *(s32*)(self + 0x10) = v; if (v > 0) return; func_002BAA50(self, 0); func_002BBF40(self + 4, 0); func_0013BDE0(self); func_0011E1F0(D_004799A0, self); }
