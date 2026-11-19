// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0013C050(s32 *, s32);
extern s32 D_00475480;
s32 func_0018FE80(s32);
s32 func_0018FF30(s32);
s32 func_0011B028(s32 *, void *);
s32 func_0023DCF0();
extern s32 D_00479950;

void func_0023CCA8(void) {

}

s32 func_0023CFB8(char* self)
{
    return *(s32*)(self + 0x50) + 0x40;
}

void func_0023DEA0(char *self)
{
    s32 target = func_0023DCF0();
    char *node = *(char **)(self + 0xDC);
    if (node != 0) {
        s64 flags = *(s64 *)(node + 0x70);
        if ((flags & 2) != 0) {
            *(s64 *)(node + 0x70) = flags & ~2;
            func_0011B028(&D_00479950, *(void **)(self + 0xDC));
        }
    }
}

void func_0023E108(void) {

}

void func_0023E110(void* self, void* out)
{
    unsigned long flags = *(unsigned long*)((char*)self + 0x128);
    if ((flags & 0x20) != 0) {
        *(int*)((char*)out + 0x94) = 0;
    }
}

void func_0023E128(void) {

}

void func_0023EBD0(s32 arg0) {
    func_0013C050(&D_00475480, arg0);
}

void func_0023EDC8(void) {

}

void func_0023EDD0(void) {

}

void func_0023EDD8(void) {

}

s32 func_0023EDE0(void) {
    return 0;
}

s32 func_0023FD98(void* self)
{
    u64 v = *(u64*)((char*)self + 0x120);
    return (s32)(v >> 58) & 1;
}

void func_0023FDA8(s32 arg0) {
    func_0018FE80(arg0 + 0x70);
}

void func_0023FDC8(s32 arg0) {
    func_0018FF30(arg0 + 0x70);
}


extern void func_0011AF60(void*, void*);

struct List_C0370 { s32 x0; s32 x4; s32 x8; };

struct Obj_1495F8 { u8 pad[0x108C]; void* f108C; };

struct Obj_15CF38 { u8 pad[0x28]; u64 flags; };

struct List_15AE18 { s32 x0, x4, x8, xC; };

struct Obj_15AE18 { u8 pad[0x3DE8]; List_15AE18 list; };

struct List_15B728 { s32 x0, x4, x8, xC; };

struct Obj_15B728 { u8 pad[0x3E50]; List_15B728 list; };

struct Node_23DCA0 { u8 pad[0x70]; u64 flags; };

struct Self_23DCA0 { u8 pad[0xDC]; Node_23DCA0* node; };

extern List_C0370 D_00479BC8;

extern u8 D_0036C668[];

extern u8 D_00479BBC[];

extern u8 D_00479944[];

void func_0023DCA0(Self_23DCA0* self) { Node_23DCA0* p = self->node; if (p) { u64 f = p->flags; if ((f & 1) == 0) { p->flags = f | 1; func_0011AF60(&D_00479944, self->node); } } }

void func_0023DD40(Self_23DCA0* self) { func_0023DCA0(self); Node_23DCA0* p = self->node; if (p) { u64 f = p->flags; if ((f & 2) == 0) { p->flags = f | 2; func_0011AF60(&D_00479950, self->node); } } }
