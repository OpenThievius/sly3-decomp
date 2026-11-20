// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
extern u8 D_00479B50[];
void func_0011B028(void* a, void* b);
s32 func_001A05B0(s32, s32);
s32 func_0011AF60(s32 *, s32);
extern s32 D_00479B14;
s32 func_0015CE68(s32);
s32 func_0022DCC8();
extern s32 D_00479B20;
s32 func_001C81B8();
extern s32 D_00479B2C;
extern s32 D_00479B08;
extern s32 D_00479B38;
s32 func_0025D350(s32 *, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00475480;
s32 func_001858D0(s32 *, s32, s32, s32, s32, s32);
extern s32 D_0036C700;
s32 func_0013B500(s32, s32);
s32 func_001A20F8();
s32 func_001DF7E8(s32, s32);
extern s32 D_00479BA4;
s32 func_001A2B30(s32, s32);
s32 func_001A31B0(s32, s32);
extern s32 D_00479B44;
s32 func_001A35B0(s32, s32);
s32 func_001A3860(s32, s32);
s32 func_00238978();
f32 func_0022DFB0(void *);
f32 func_0022DFD8(void *);
s32 func_001FC968();
s32 func_001A2D80();
s32 func_001A3018();
s32 func_001854C8(s32 *, s32, s32);
s32 func_001A4800(void *, s32, s32);
s32 func_002541F8(s32, s32);
s32 func_00238980();
s32 func_00252FC0(s32, s32);
s32 func_0017E1B8(s32 *, s32, s32, void *);
s32 func_001A1E58();

struct Vobj_1A0F28 { u8 pad0[8]; s16 delta; u8 padA[2]; u8* (*fn)(u8*); };
extern s32 func_0028FD70(u8*);
extern void func_001C9118(void*, s32);
extern void func_001A0708(u8*);
extern s32 func_0022D708(u8*);
struct Data_A37 { s32 x0; u8 pad4[0x8 - 0x4]; s32 x8; };
struct Inner_A37 { u8 pad0[0x10A8]; s32 x10A8; };
struct Self_A37 { u8 pad0[0x10]; Inner_A37* x10; u8 pad14[0x34 - 0x14]; void* x34; };
struct S_001A2D30 { u8 pad[0x30]; void* ptr30; };
extern s32 func_00238AD8(s32 a0);
extern s32 func_00254F80(void* a0);
extern s32 func_00238AD8(s32 a0, s32 a1, s32 a2);
extern u8 D_0035B528[];
extern void func_001D2818(void* self);
extern void func_001A30A8();
extern void func_00260E30(void*);
extern void func_0019FF00(void*,s32);
extern void func_00252E40(void*,s32);
extern void func_00238970(void*);
extern void func_0011AF60(void*,void*);
void func_001A13E0(u8* a);
void func_001A3508(u8* self);
void func_001A3A48(u8* s);
void func_001A0950(u8* a);
void func_001A2800(u8* self);
void func_001A1D70(u8* a);
void func_001A1020(u8* self);
void func_001A14D8(u8* self);
void func_001A3708(u8* s);
void func_001A0A50(u8* self);
void func_001A0F28(u8* a);
void func_001A24C0(u8* self);
s32 func_001A37B0(Self_A37* a0, s32 a1, Data_A37* a2);
void func_001A1EF8(u8* self);
void func_001A1828(u8* self);
void func_001A2D30(S_001A2D30* self, s32 arg);
void func_001A0130(u8* a);
void func_001A0548(char* self, u32 a, u32 b, u32 c, u32 d)
{
    u32 n = *(u32*)(self + 0x20C);
    if (n < 8) {
        *(u32*)(self + 0x20C) = n + 1;
        u32* slot = (u32*)(self + (n * 16U + 0x18C));
        slot[0] = a;
        slot[1] = b;
        slot[2] = c;
        slot[3] = d;
    }
}

void func_001A0580(void* self)
{
    *(int*)((char*)self + 0x20C) = 0;
}

void func_001A0588(void* self, s32 value)
{
    u32 i = *(u32*)((char*)self + 0x224);
    if (i < 4) {
        *(s32*)((char*)self + (i << 2) + 0x214) = value;
        *(u32*)((char*)self + 0x224) = i + 1;
    }
}

void func_001A06E8(void) {
    func_001A05B0(1, 0xFFFF);
}

s32 func_001A0730(void) {
    return 0;
}

void func_001A0738(void* self, s32 value, s32* out)
{
    *out = 0;
}

void func_001A0830(void) {

}

s32 func_001A0948(void) {
    return 0;
}

void func_001A0A28(s32 arg0) {
    func_0011AF60(&D_00479B14, arg0);
}

void func_001A0BA0(s32 arg0) {
    func_0022DCC8();
    func_0015CE68(arg0 + 0x1A8);
}

s32 func_001A0BD0(void *pgoal, f32 *pguard)
{
    if (*(s32 *)((char *)pgoal + 0xD4) != 0) {
        pguard[0] = func_0022DFB0(pgoal);
        pguard[1] = func_0022DFD8(pgoal);
        return 1;
    }
    return 0;
}

void func_001A0FF8(s32 arg0) {
    func_0011AF60(&D_00479B20, arg0);
}

void func_001A1160(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xF8);
}

void func_001A14B0(s32 arg0) {
    func_0011AF60(&D_00479B2C, arg0);
}

void func_001A1610(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xF8);
}

void func_001A17D8(s32 *arg0) {
    func_001FC968();
    *(s32 *)((char *)arg0 + 0x178) = 0;
}

void func_001A1800(s32 arg0) {
    func_0011AF60(&D_00479B08, arg0);
}

void func_001A1ED0(s32 arg0) {
    func_0011AF60(&D_00479B38, arg0);
}

void func_001A1FC0(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xF8);
}

void func_001A1FF0(char* self, char* other)
{
    *(s32*)(self + 0xF0) |= *(s32*)(other + 0x164);
}

void func_001A2080(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0025D350(&D_00475480, arg0 + 0x12C, 4, arg0 + 0x128, 1, arg1, arg2, arg3);
}

void func_001A20C0(s32 arg0, s32 arg1, s32 arg2) {
    func_001858D0(&D_0036C700, arg0 + 0x170, 4, arg0 + 0x16C, arg1, arg2);
}

s32 func_001A2198(void* a0, void* a1)
{
    s32 v = *(s32*)((char*)a0 + 0xF0);
    v &= *(s32*)((char*)a1 + 0x164);
    return v != 0;
}

void func_001A2228(char *self)
{
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;

    func_001A1E58();
    temp_v0 = func_0017E1B8(&D_00475480, 4, *(s32 *)(self + 0x194), self);
    *(s32 *)(self + 0x198) = temp_v0;
    temp_v0 = func_0017E1B8(&D_00475480, 4, *(s32 *)(self + 0x19C), self);
    *(s32 *)(self + 0x1A0) = temp_v0;
    temp_v0 = func_0017E1B8(&D_00475480, 4, *(s32 *)(self + 0x1A4), self);
    *(s32 *)(self + 0x1A8) = temp_v0;
}

void func_001A22A8(s32 arg0, s32 arg1) {
    func_001A20F8();
    if (func_0013B500(arg1, 0x35) != 0) {
        func_001DF7E8(arg1, arg0);
    }
}

void func_001A24E8(void* item)
{
    func_0011B028(D_00479B50, item);
}

void func_001A25B0(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0x148);
}

void func_001A27D8(s32 arg0) {
    func_0011AF60(&D_00479BA4, arg0);
}

s32 func_001A29B0(void* p)
{
    return *(s32*)((char*)p + 0x178);
}

void func_001A2C68(void) {
    func_001A2B30(1, 0xFFFF);
}

void func_001A3058(char* self)
{
    if (*(s32*)(self + 0x3C) >= 0) {
        func_001A3018();
        return;
    }
    if (*(s32*)(self + 0x50) >= 0) {
        func_001A2D80();
        return;
    }
    *(s32*)(self + 0x10) = 0;
    *(s32*)(self + 0x14) = 0;
}

void func_001A32E8(void) {
    func_001A31B0(1, 0xFFFF);
}

void func_001A34D8(s32 arg0) {
    func_001C81B8();
    func_0015CE68(arg0 + 0xD0);
}

void func_001A3530(s32 arg0) {
    func_0011AF60(&D_00479B44, arg0);
}

void func_001A35A8(void* self, s32 value)
{
    *(s32*)((char*)self + 0x148) = value;
}

void func_001A36E8(void) {
    func_001A35B0(1, 0xFFFF);
}

void func_001A3740(s32 arg0) {
    func_00238978();
    func_001A3860(arg0, 0);
}

void func_001A3A80(char *self)
{
    func_00238978();
    func_001A4800(self, 3, 0);
    func_002541F8(*(s32 *)(self + 0x10), *(s32 *)(self + 0x30));
    func_001854C8(&D_0036C700, 0x1C, *(s32 *)(self + 0x10));
}

void func_001A3AD8(char *self)
{
    func_00238980();
    func_001A4800(self, -1, 0);
    func_00252FC0(*(s32 *)(self + 0x10), 0x31);
    func_002541F8(*(s32 *)(self + 0x10), 0);
}


void func_001A0130(u8* a) { func_0019FF00(a, 1); func_00260E30(a); }
void func_001A0950(u8* a) { (void)func_0022D708(a); u8* s1 = a; u8* s0 = s1+0x1A8; func_001A0708(s1+0x180); Vobj_1A0F28* v = *(Vobj_1A0F28**)(s0+0x14); u8* r = v->fn(s0 + v->delta); *(u64*)(r+0x28) |= 0x8000ULL << 45; *(f32*)(s0) = 1250.0f; *(s32*)(s0+0x18) = -1; v = *(Vobj_1A0F28**)(s0+0x14); u8* r2 = v->fn(s0 + v->delta); s32 p = *(s32*)(r2+0x3C); if (!(p & 1)) *(s32*)p &= -0x41; else *(s32*)(r2+0x3C) = p & -0x41; func_001C9118(s1, 2); *(s32*)(s1+0x1CC) = 3; }
void func_001A0A50(u8* self) { func_0011B028(&D_00479B14, self); }
void func_001A0F28(u8* a) { (void)func_0028FD70(a); u8* s = a; u8* s1 = s+0xF8; func_001A0708(s+0xD0); func_001C9118(s, 2); Vobj_1A0F28* v = *(Vobj_1A0F28**)(s1+0x14); u8* r = v->fn(s1 + v->delta); *(u64*)(r+0x28) |= 0x8000ULL << 45; *(f32*)(s+0xF8) = 1250.0f; *(s32*)(s1+0x18) = -1; v = *(Vobj_1A0F28**)(s1+0x14); u8* r2 = v->fn(s1 + v->delta); s32 p = *(s32*)(r2+0x3C); if (!(p & 1)) *(s32*)p &= -0x41; else *(s32*)(r2+0x3C) = p & -0x41; }
void func_001A1020(u8* self) { func_0011B028(&D_00479B20, self); }
void func_001A13E0(u8* a) { (void)func_0028FD70(a); u8* s = a; u8* s1 = s+0xF8; func_001A0708(s+0xD0); func_001C9118(s, 2); Vobj_1A0F28* v = *(Vobj_1A0F28**)(s1+0x14); u8* r = v->fn(s1 + v->delta); *(u64*)(r+0x28) |= 0x8000ULL << 45; *(f32*)(s+0xF8) = 1250.0f; *(s32*)(s1+0x18) = -1; v = *(Vobj_1A0F28**)(s1+0x14); u8* r2 = v->fn(s1 + v->delta); s32 p = *(s32*)(r2+0x3C); if (!(p & 1)) *(s32*)p &= -0x41; else *(s32*)(r2+0x3C) = p & -0x41; }
void func_001A14D8(u8* self) { func_0011B028(&D_00479B2C, self); }
void func_001A1828(u8* self) { func_0011B028(&D_00479B08, self); }
void func_001A1D70(u8* a) { (void)func_0028FD70(a); u8* s = a; u8* s1 = s+0xF8; func_001A0708(s+0xD0); func_001C9118(s, 2); *(s32*)(s+0xE0) = 1; *(f32*)(s+0x120) = 200.0f; *(s32*)(s+0xF0) = 0; Vobj_1A0F28* v = *(Vobj_1A0F28**)(s1+0x14); u8* r = v->fn(s1 + v->delta); *(u64*)(r+0x28) |= 0x8000ULL << 45; *(f32*)(s+0xF8) = 1250.0f; *(s32*)(s1+0x18) = -1; v = *(Vobj_1A0F28**)(s1+0x14); u8* r2 = v->fn(s1 + v->delta); s32 p = *(s32*)(r2+0x3C); if (!(p & 1)) *(s32*)p &= -0x41; else *(s32*)(r2+0x3C) = p & -0x41; }
void func_001A1EF8(u8* self) { func_0011B028(&D_00479B38, self); }
void func_001A24C0(u8* self) { func_0011AF60(D_00479B50, self); }
void func_001A2800(u8* self) { func_0011B028(&D_00479BA4, self); }
void func_001A2D30(S_001A2D30* self, s32 arg) { self->ptr30 = D_0035B528; func_001A30A8(); if (arg & 1) func_001D2818(self); }
void func_001A3508(u8* self) { func_0011B028(&D_00479B44, self); }
void func_001A3708(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x3); *(s32*)(s+0x38) = -1; }
s32 func_001A37B0(Self_A37* a0, s32 a1, Data_A37* a2) { if (a1 == 0xA) { void* p = a0->x34; if (p == 0) goto fail; s32 r = func_00254F80(p); if (r != a2->x0) goto fail; switch (a2->x8) { case 0x4A: a0->x10->x10A8 = 1; return 1; case 0x4B: a0->x10->x10A8 = 0; return 1; } } fail: a0 = (Self_A37*)a0; call: return func_00238AD8((s32)a0, a1, (s32)a2); }
void func_001A3A48(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x31); *(s32*)(s+0x34) = -1; }
