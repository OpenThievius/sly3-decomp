// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00297948();
s32 func_00294438(s32);
s32 func_002944E8(s32);
s32 func_00295970();
s32 func_00293AB0(s32);
s32 func_002995A0(s32, s32);
s32 func_00299648();

s32 func_002954F8(s32 unused, s32 a1, s32 a2)
{
    if (a2 != 0) {
        func_00294438(a2);
    }
    return 1;
}

s32 func_00295520(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        func_002944E8(arg2);
    }
    return 1;
}

void func_00295950(char* self)
{
    s32* word = (s32*)(self + 0x10);
    s32 v = *word;
    v &= 0xFFFFFFFE;
    *(s32*)(self + 0x10) = v;
    *(s32*)(self + 0x18) = 0;
}

s32 func_002959A0(void* p, s32 value)
{
    if (value < 0) {
        return func_00295970();
    }
    if (value < *(s32*)((char*)p + 0x20)) {
        return *(s32*)((char*)p + 0x1C) + (value << 6);
    }
    return func_00295970();
}

void func_002979C0(void) {
    func_00297948();
}

s32 func_00297F70(void)
{
    if (func_00293AB0(4) & 0x40000) {
        func_00299648();
        func_002995A0(1, 1);
        func_002995A0(0, 1);
        return 1;
    }
    return 0;
}

struct S_295AB0 { u8 pad0[0x24]; s32 f24; s32 f28; s32 f2C; };

extern s32 func_00299C68(void* a0, void* a1, s32 a2, s32 a3, s32 a4, s32 a5);

struct B_271B20 { u8 pad[4]; s32 x4; s32 x8; u8 pad2[0xC]; };

extern void func_002999F0();

extern s32 D_0034A610;

extern void func_00292034(void*, s32, s32);

extern void func_0019A2D0(u8*, s32*);

extern void func_00238980(u8*);

extern void func_00238978(u8*);

extern void func_0011B028(void*, void*);

extern void func_002936A0(u8*);

extern void func_002B58E8(u8*);

extern void* func_002387A8(u8*, s32);

extern s32 D_0034A69C;

extern u8 D_004CC728[];

extern s32 D_0034A6B8;

extern u8 D_004CCBE8[];

extern s32 D_0036C694;

extern s32 D_0036C674;

extern u8 D_0036C698[];

extern u8* D_00468D00;

extern u8 D_00370AD0[];

extern u8 D_00358E18[];

s32 func_00296AF0() ;

s32 func_00297B80() ;

void func_00295880() { func_002999F0(); D_0034A610 = 0; }

s32 func_00295AB0(s32 a0, s32 a1, s32 a2, S_295AB0* a3) { return func_00299C68((void*)0x80000008, a3, 0x40, a3->f24, a3->f28, a3->f2C) ? 0 : 0x800; }

s32 func_00295C18(s32 a0, s32 a1, s32 a2, void* a3) { return func_00299C68((void*)0x80000008, a3, 0x40, 0, 0, 0) ? 0 : 0x800; }

s32 func_00296AF0() { D_0034A69C = 0; func_00292034(D_004CC728, 0, 4); return 0; }

s32 func_00297B80() { D_0034A6B8 = -1; func_00292034(D_004CCBE8, 0, 4); return 0; }
