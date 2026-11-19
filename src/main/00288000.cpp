// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00288A48(s32, s32);
s32 func_002894C8(s32, s32);
s32 func_0028B030(s32, s32);
s32 func_0017E1B8(s32 *, s32, s32, s32);
s32 func_00288C58(void *, s32);
extern s32 D_00475480;

void func_00288B80(void) {
    func_00288A48(1, 0xFFFF);
}

void func_00288FB0(char *self) {
    s32 result = func_0017E1B8(&D_00475480, 0x405, *(s32 *)(self + 0x54), 0);
    *(s32 *)(self + 0x50) = result;
    if (result == 0 || *(s32 *)self != 3) {
        func_00288C58(self, 0);
        return;
    }
    func_00288C58(self, 2);
}

void func_00289638(void) {
    func_002894C8(1, 0xFFFF);
}

void func_00289658(void) {
    func_002894C8(0, 0xFFFF);
}

s32 func_0028A470(void* self)
{
    return ++*(s32*)((char*)self + 0x4C);
}

void func_0028B168(void) {
    func_0028B030(1, 0xFFFF);
}

void func_0028B188(s32 arg0, s32 arg1) {
    *(s32*)(arg1 + 0x80) = 0;
    *(float*)(arg1 + 0x84) = 1.0f;
    *(s32*)(arg1 + 0x88) = arg1 + 0x80;
    *(s32*)(arg1 + 0x8C) = arg1 + 0x84;
}

struct Foo { char a[0x8]; u32 f8; char b[0x10]; void* f1C; char c[0x8]; void* f28; };

struct Big { char a[0x8]; u32 f8; char b[0x10]; void* f1C; char c[0x140]; void* f160; };

extern void func_001C7340(void*);

extern void func_0011AD60(void*, s32);

extern void func_001C9118(void*, s32);

extern void func_00289070(s32, s32, s32, s32, s32);

extern void func_0028A5A8(s32, s32, s32);

extern void func_0028A480(s32, s32, s32);

extern f32 D_003212DC;

extern void func_00169C90(void* a0, u32 a1, u32 a2);

extern u8 D_00355CC8[];

extern u8 D_00351570[];

extern u8 D_00355CA0[];

extern u8 D_00362A50[];

extern u8 D_00367990[];

extern u8 D_00368008[];

extern u8 D_00368988[];

extern u8 D_0036A850[];

Foo* func_00288370(Foo* self, u32 a1, u32 a2, void* a3) ;

Foo* func_00288370(Foo* self, u32 a1, u32 a2, void* a3) { func_00169C90(self, a1, a2); self->f1C = &D_0036A850; self->f8 = 0xC; self->f28 = a3; return self; }

void func_00289020(s32 p0) { func_00289070(p0, 0, 0x1A8, 0, -0x1); }

void func_00289048(s32 p0) { func_00289070(p0, 0, 0x1A8, 0x2, -0x1); }

void func_00289678(u8* self) { func_001C7340(self); *(f32*)(self + 0x40) = -1.0f; *(s32*)(self + 0x460) = -1; *(s32*)(self + 0x4C) = -1; func_0011AD60(self + 0x678, 0xA4); func_001C9118(self, 1); }

void func_0028A588(s32 p0) { func_0028A480(p0, 0x1, 0x1); }

void func_0028A620(s32 p0, s32 p1) { func_0028A5A8(p0, p1, 0x1); }
