// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
struct Obj_00130218 { u8 pad[0x1C]; void* value; };
extern void* func_0012FFB0(s32, void*, void*, void*, s32);
extern void func_0028ECE0(void*, void*, void*);
extern void func_001317B0(void*);
extern void func_00132A50(void*);
extern void func_00133388(void*);
extern void func_00132438(void*);
extern void func_0024E988(void*,void*);
struct State_001323C8 { u8 pad0[0x10]; void* input; u8 pad14[0x1C]; s32 status; u8 pad34[0x4C]; void* ready; u8 pad84[0x4C]; s32 countD0; };
extern void func_00134AE0(void*);
extern void func_00238AD8(void*,s32,void*);
extern s32 D_004799B8;
s32 func_0011E1F0(s32 *, s32);
s32 func_0012F410(s32);
s32 func_00130A20(s32, s32);
s32 func_00130CD0(s32, s32, s32, void *);
s32 func_00169BF8(s32);
s32 func_00169CE0(s32);
s32 func_00169C40(s32);
s32 func_00130EC8(s32, s32);
s32 func_001C9118(s32, s32);
s32 func_0028FD70();
s32 func_00131410(s32, s32);
s32 func_00131770();
s32 func_00132C58(s32, s32);
s32 func_00238A38(s32);
extern f32 D_0036BB98;
s32 func_00133810(s32, s32);
s32 func_00133EC0(void *, s32, s32);
s32 func_00238980();
s32 func_00252FC0(s32, s32);
s32 func_00238978();
s32 func_0012FFB0(s32, s32, s32, s32, s32);
s32 func_0028ECE0(s32, s32, s32);

struct Foo { char a[0x8]; u32 f8; char b[0x10]; void* f1C; char c[0x8]; void* f28; };
extern void func_00131770(void*);
extern void func_00131610(void*,s32);
extern void func_00238980(void*);
extern void func_00252E40(void*,s32);
extern void func_00238970(void*);
extern void func_00131568();
extern void func_00238970();
extern void func_00169C90(void* a0, u32 a1, u32 a2);
extern u8 D_00351570[];
Foo* func_00130CD0(Foo* self, u32 a1, u32 a2, void* a3) ;
void func_00133A58(u8* s);
void func_00131568(s32 p0);
void func_00131770(u8* s);
void func_00131B80(s32 p0);
s32 func_00130010(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_0012FFB0(5, arg0, arg1, arg2, -1);
    func_0028ECE0(arg0, arg1, temp_v0);
    return temp_v0;
}

void* func_00130218(void* a0, void* a1, void* a2, void* a3)
{
    s32 kind = 14;
    if ((s32)a1 == *(s32*)((u8*)a3 + 0x30)) kind = 15;
    Obj_00130218* result = (Obj_00130218*)func_0012FFB0(7, a0, a1, a2, kind);
    result->value = a3;
    func_0028ECE0(a0, a1, result);
    return result;
}

void func_001306C8(s32 arg0) {
    func_0011E1F0(&D_004799B8, arg0);
}

void func_001309D8(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 != 0) {
        func_0012F410(temp_s0);
        func_001306C8(temp_s0);
        *arg0 = 0;
    }
}

void func_00130B58(void) {
    func_00130A20(1, 0xFFFF);
}

void func_00130BC0(char *self, s32 arg1)
{
    if (*(s32 *)(self + 0xD0) == 0) {
        *(s32 *)(self + 0xD0) = func_00130CD0(func_00169BF8(0x24), arg1, 0xD, self);
        func_00169CE0(*(s32 *)(self + 0xD0));
    }
}

void func_00130C20(s32 arg0) {
    func_00169C40(arg0 + 0xD0);
}

s32 func_00130C88(s32 arg0) {
    return arg0 + 0x114;
}

s32 func_00130C90(void* p)
{
    return ++*(s32*)((char*)p + 0x118);
}

s32 func_00130CA0(void* p)
{
	s32 v = *(s32*)((char*)p + 0x118) - 1;
	*(s32*)((char*)p + 0x118) = v;
	return v;
}

s32 func_00130CB0(char* self)
{
    s32* p = *(s32**)(self + 0xD0);
    if (p == 0) return 0;
    return *p;
}

void func_00131000(void) {
    func_00130EC8(1, 0xFFFF);
}

void func_00131020(s32 arg0) {
    func_0028FD70();
    func_001C9118(arg0, 0);
}

void func_00131548(void) {
    func_00131410(1, 0xFFFF);
}

void func_00132390(s32 arg0) {
    func_00131770();
    func_00132C58(arg0, 4);
    func_00238A38(arg0);
}

void func_001323C8(State_001323C8* self)
{
 func_001317B0(self); func_00132A50(self); func_00133388(self); func_00132438(self);
 if(self->ready && !self->status && self->countD0>=2) func_0024E988(self->input,(u8*)self+0x50);
}

void func_00133510(void* self, s32 value)
{
    if (*(s32*)((char*)self + 0xD8) != value) {
        *(s32*)((char*)self + 0xD8) = value;
        *(f32*)((char*)self + 0xDC) = D_0036BB98;
    }
}

void func_00133A38(void) {
    func_00133810(1, 0xFFFF);
}

void func_00133A90(char *self)
{
    func_00238980();
    func_00133EC0(self, -1, 0);
    func_00252FC0(*(s32 *)(self + 0x10), 0x43);
}

void func_00133AD0(char *self)
{
    func_00238978();
    func_00133EC0(self, *(s32 *)(self + 0x3C), 0);
}

void func_00134950(void* self,s32 type,void* data)
{
 if(type==10 && *(s32*)((u8*)data+8)==0x2AA && *(s32*)((u8*)self+0x30)==3) func_00134AE0(self);
 func_00238AD8(self,type,data);
}


Foo* func_00130CD0(Foo* self, u32 a1, u32 a2, void* a3) { func_00169C90(self, a1, a2); self->f1C = &D_00351570; self->f8 = 5; *(void**)((char*)self + 0x20) = a3; return self; }
void func_00131568(s32 p0) { func_00238970(); *(s32*)((u8*)(p0) + 0x3C) = 0; *(s32*)((u8*)(p0) + 0x30) = -0x1; }
void func_00131770(u8* s) { func_00238980(s); func_00131610(s, 1); func_00252FC0(*(s32*)(s+0x10), *(s32*)(s+0x3C)); }
void func_00131B80(s32 p0) { func_00131568(); *(s32*)((u8*)(p0) + 0x3C) = 0x2; }
void func_00133A58(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x43); *(s32*)(s+0x30) = -1; }
