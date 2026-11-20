// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00169BF8(s32);
s32 func_00274710(s32, s32, s32, s32);
s32 func_001F5988(s32, s32);
s32 func_001F6498(s32, s32);
s32 func_0023CC40();
s32 func_001852E0(s32 *);
s32 func_00185328(s32 *, s32);
extern s32 D_0036C700;
s32 func_0022D318(s32);
s32 func_0023DDA0();
s32 func_00273E48(s32, s32, void *, s32);
s32 func_00273ED0(s32, s32, void *, s32);
s32 func_0011AF60(s32 *, void *);
s32 func_0011B028(s32 *, void *);
s32 func_0011B0C0(s32 *, void *);
extern s32 D_00479BE0;
s32 func_001C8970(void *, s32, s32 *, s32);
s32 func_0023C0B8();
void *func_00241268(void *);
s32 func_0028F068(void *, s32, s32);
extern s32 D_00346FC0;

struct T_1F5B88 { u8 pad[0x164]; s32 x164; u8 pad2[0x1B8-0x168]; s32 x1B8; };
struct S_1F5B88 { u8 pad[0x10]; void* x10; u8 pad2[0x3C-0x14]; s32 x3C; };
struct T_1F5B28 { u8 pad[0x10D0]; void* x10D0; };
struct S_1F5B28 { u8 pad[0x10]; void* x10; };
struct S_1F4E20 { u8 pad[8]; s32 f8; s32 fC; };
struct State_F43F8 { u8 pad0[0x16C]; s32 x16C; s32 x170; };
typedef void (*Fn_1F66D8)(u8*, s32, u8*);
extern void func_001F4EC0(S_1F4E20* self);
extern void func_001F4EC0(void*);
extern s32 func_001F43C8(u8*);
extern void func_001F43D0(u8*, s32);
extern void func_0023F400(void* a0, s32 a1);
extern void* func_001D2538(s32* a);
extern void* func_002BCAD8(void*, s32);
extern void func_001854C8(u8*, s32, void*);
extern void func_00238980(void*);
extern void func_00252FC0(void*, s32);
extern void func_00238978(void*);
extern void func_00170360(void*);
extern void func_001F5C58(void*);
extern void func_001F6148(void*, s32, void*);
extern void func_001F5CC8(void*);
void func_001F5B28(S_1F5B28* a0) ;
void func_001F5B88(S_1F5B88* a0) ;
void func_001F4950(u8* s, void* a1) ;
void func_001F43F8(State_F43F8* a, s32 v) ;
void func_001F66D8(u8* self, s32 a1) ;
void func_001F4E48(S_1F4E20* self);
void func_001F4E98(S_1F4E20* self);
void func_001F4E70(S_1F4E20* self);
void func_001F4E20(S_1F4E20* self);
s32 func_001F43C0(void) {
    return 0;
}

s32 func_001F43C8(void* p)
{
    return *(s32*)((char*)p + 0x16C);
}

s32 func_001F43F0(void* self)
{
    return *(s32*)((char*)self + 0x170);
}

s32 func_001F4430(void* p)
{
    return *(s32*)((char*)p + 0x174);
}

s32 func_001F4458(void* self)
{
    return *(s32*)((char*)self + 0x178);
}

void func_001F4500(s32 arg0, s32 arg1) {
    func_00274710(func_00169BF8(0x130), arg1, 1, arg0);
}

void func_001F47C8(char *self, s32 value)
{
    s32 old = *(s32 *)(self + 0x148);
    if (value != old) {
        if (old != 0) {
            func_00273ED0(old, 0, self, 1);
        }
        *(s32 *)(self + 0x148) = value;
        if (value != 0) {
            func_00273E48(value, 0, self, 1);
        }
    }
}

void func_001F48F8(void) {

}

s32 func_001F4B30(void* p) { return *(s32*)((char*)p + 0x110C); }

void func_001F4D28(void) {

}

void func_001F4D30(void) {

}

void func_001F4E10(void* self, s32 value)
{
    *(s32*)((char*)self + 0x10) = value;
}

void func_001F4EC0(void *obj)
{
    s32 result;
    s32 flag;

    result = func_0011B0C0(&D_00479BE0, obj);
    flag = 0;
    if (*(s32 *)((char *)obj + 0xC) == 0) {
        flag = *(s32 *)((char *)obj + 0x8) > 0;
    }
    if (result != flag) {
        if (flag != 0) {
            func_0011AF60(&D_00479BE0, obj);
        } else {
            func_0011B028(&D_00479BE0, obj);
        }
    }
}

void func_001F5AC0(void) {
    func_001F5988(1, 0xFFFF);
}

void func_001F5CC8(char* self)
{
    s32 v = *(s32*)(self + 0x38);
    if (v != 0) {
        func_0022D318(v);
    }
}

void func_001F65D0(void) {
    func_001F6498(1, 0xFFFF);
}

void func_001F6668(void *pgoal)
{
    s32 f1, f2;
    func_0023C0B8();
    void *pobject = func_00241268(pgoal);
    *(s32 *)((char *)pobject + 0xE0) = 1;
    func_0028F068(pgoal, *(s32 *)((char *)pgoal + 0x48), 0x16);
    func_0028F068(pgoal, *(s32 *)((char *)pgoal + 0x4C), 0);
    func_001C8970(pgoal, 1, &D_00346FC0, 0);
}

void func_001F7568(void) {
    func_0023CC40();
}

void func_001F7748(void* self)
{
    s32 r = func_0023DDA0();
    *(s32*)((char*)self + 0x160) = r;
}

void func_001F7C70(void) {
    func_00185328(&D_0036C700, func_001852E0(&D_0036C700) + 1);
}

void func_001F7FA8(void) {

}


void func_001F43F8(State_F43F8* a, s32 v) { a->x170 = v; func_001F43D0((u8*)a, func_001F43C8((u8*)a)); }
void func_001F4950(u8* s, void* a1) { u32 n = *(u32*)(s+0x4F6C); if (n < 4) { u32* arr = (u32*)(s+0x4F70); *(void**)&arr[n] = a1; *(u32*)(s+0x4F6C) = n+1; void* p = func_002BCAD8(a1, 1); if (*(void**)((u8*)p+8) == 0) { s32 local[2]; local[0]=0x10; local[1]=0x10; void* r = func_001D2538(local); *(void**)((u8*)p+8) = r; } } }
void func_001F4E20(S_1F4E20* self) { self->f8 = self->f8 + 1; func_001F4EC0(self); }
void func_001F4E48(S_1F4E20* self) { self->f8 = self->f8 - 1; func_001F4EC0(self); }
void func_001F4E70(S_1F4E20* self) { self->fC = self->fC + 1; func_001F4EC0(self); }
void func_001F4E98(S_1F4E20* self) { self->fC = self->fC - 1; func_001F4EC0(self); }
void func_001F5B28(S_1F5B28* a0) { func_00238978(a0); func_001854C8((u8*)&D_0036C700, 0x1A, a0->x10); func_00170360(((T_1F5B28*)a0->x10)->x10D0); func_001F5C58(a0); func_001F6148(a0, 0, 0); }
void func_001F5B88(S_1F5B88* a0) { func_00238980(a0); func_001F6148(a0, -1, 0); func_001F5CC8(a0); ((T_1F5B88*)a0->x10)->x164 = a0->x3C; func_001854C8((u8*)&D_0036C700, 0x1B, a0->x10); func_00252FC0(a0->x10, 0x41); ((T_1F5B88*)a0->x10)->x1B8 = 0; }
void func_001F66D8(u8* self, s32 a1) { func_0023F400(self, a1); u32 obj = *(u32*)(self + 0xC); s16 off = *(s16*)(obj + 0x1C0); obj = *(u32*)(obj + 0x1C4); ((Fn_1F66D8)obj)(self + off, a1, self + 0x160); }
