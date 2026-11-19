// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001742B0(s32, s32);
s32 func_001749A8(s32, s32);
s32 func_00174B00(s32, s32);
s32 func_00175678(s32, s32);
s32 func_00176210(s32, s32);
s32 func_00177098(s32, s32);
s32 func_001C7340();
s32 func_001C9118(s32, s32);
s32 func_0011AF60(s32 *, s32);
s32 func_001C78A0();
extern s32 D_00479B98;
s32 func_0011B028(s32 *, s32);
s32 func_001C7938();
s32 func_00177330(s32, s32);
s32 func_001F4950(s32 *, s32);
extern s32 D_00475480;
s32 func_00168AB0(void *, s32, s32, s32);
void *func_001750B0();
s32 func_0013BD88(s32, void *);
s32 func_0029F158();
s32 func_0029FA38(s32);
s32 func_0029FA60(s32);
extern s32 D_0036BD38;
extern s32 D_0036BD3C;
extern s32 D_0036BD40;
extern s32 D_0036BD44;
extern s32 D_0036BD48;

void func_001743E8(void) {
    func_001742B0(1, 0xFFFF);
}

void func_00174408(void) {
    func_0029FA60(1);
    func_0029F158();
    D_0036BD38 = func_0029FA38(0);
    D_0036BD3C = func_0029FA38(1);
    D_0036BD40 = func_0029FA38(2);
    D_0036BD44 = func_0029FA38(8);
    D_0036BD48 = func_0029FA38(9);
}

void func_001744C0(int* self)
{
	self[0] = 0;
	self[1] = 0;
	self[2] = 0;
	self[3] = 0;
}

void func_001744D8(void* p)
{
    s32 v = *(s32*)((char*)p + 4);
    *(s32*)((char*)p + 8) = 0;
    *(s32*)((char*)p + 0xC) = v;
}

void func_001746A8(void) {

}

void func_001749A0(void) {

}

void func_00174AE0(void) {
    func_001749A8(1, 0xFFFF);
}

void func_00174C38(void) {
    func_00174B00(1, 0xFFFF);
}

s32 func_00174FF0(s32 arg0, s32 arg1) {
    return arg0 + arg1;
}

s32 func_00174FF8(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 0x10);
}

s32 func_001751C0(void *self, void * unused, s32 value)
{
    s32 result;
    void *object = func_001750B0();
    s32 kind = *(s32 *)((char *)object + 0x448);
    result = func_00168AB0(object, 1, (kind == 0 ? 3 : 2), value);
    return result;
}

void func_00175208(s32 arg0, s32 arg1, s32 arg2) {
    func_00168AB0(func_001750B0(), 2, 2, arg2);
}

void func_001757B0(void) {
    func_00175678(1, 0xFFFF);
}

s32 func_00175BA8(char* p, s32 v)
{
	return *(s32*)(p + 0x60) + (((s32)((v - *(s32*)(p + 0x8)) * 0xCCCCCCCD) >> 3) * 0x60);
}

void func_00176348(void) {
    func_00176210(1, 0xFFFF);
}

void func_001771D0(void) {
    func_00177098(1, 0xFFFF);
}

void func_001771F0(s32 arg0) {
    func_001C7340();
    func_001C9118(arg0, 1);
}

void func_00177220(s32 arg0) {
    func_001C78A0();
    func_0011AF60(&D_00479B98, arg0);
}

void func_00177258(s32 arg0) {
    func_001C7938();
    func_0011B028(&D_00479B98, arg0);
}

void func_00177468(void) {
    func_00177330(1, 0xFFFF);
}

void func_00177838(s32 arg0) {
    func_001F4950(&D_00475480, arg0);
}

void func_00177B78(char *self, s32 mode, s32 value) {
    if (mode == 1) {
        if (value == *(s32 *)(self + 0x128)) {
            func_0013BD88(value, self);
            *(s32 *)(self + 0x128) = 0;
        } else if (value == *(s32 *)(self + 0x12C)) {
            func_0013BD88(value, self);
            *(s32 *)(self + 0x12C) = 0;
        }
    }
}

void* func_00177BD8(void* self, s32 value)
{
    if (value == 1) {
        *(s32*)((char*)self + 0xD0) = value;
    }
    return self;
}

struct S_174828 { u8 pad[0xC]; u8* cur; };

struct S_174000 { u8 pad0[0x4]; u32 f4; u8* begin; u8* cur; };

struct S_00119A38 { u8 pad0[0x30]; u8* ptr30; };

struct S_00175870 { u8 pad0[0x64]; u32 field64; };

struct S_001A2D30 { u8 pad0[0x30]; u8* ptr30; };

extern s32 D_00321188[];

extern u8 D_00350ED0[];

extern u32 D_0036AEAC;

extern u8 D_0035B528[];

extern void func_001D2818(void* self);

extern void func_0013B078(void* self, s32 arg);

extern void* func_001A30A8(void);

extern void func_001D2720(void* self);

extern void func_001748F8(void* self);

extern void func_001746A8(void* self);

extern void func_001744C0(void* self);

extern u32 func_00117BF0(void* a0, u32 a1, u32 a2, u32 a3);

void func_00174600(S_174000* self, void* a1, u32* out1, u32* out2, u32* out3) ;

void func_00174828(S_174828* self) ;

void func_001748B8(S_174828* self) ;

void func_00174550(S_174000* self, u32* out1, u32* out2) ;

void func_00174538(s32 p0, s32 p1, s32 p2) { *(s32*)((u8*)(p0) + 0x4) = p2; *(s32*)((u8*)(p0) + 0xC) = p2; *(s32*)((u8*)(p0) + 0x0) = (p2 + (p1 << 4)); }

void func_00174550(S_174000* self, u32* out1, u32* out2) { func_001748F8(self); func_001746A8(self); if (out1) *out1 = ((u32)(self->cur - (u8*)self->f4)) >> 4; if (out2) *out2 = self->f4; func_001744C0(self); }

void func_00174600(S_174000* self, void* a1, u32* out1, u32* out2, u32* out3) { func_001748F8(self); func_001746A8(self); u32 n = ((u32)(self->cur - (u8*)self->f4)) >> 4; if (out1) *out1 = n; if (out2) *out2 = self->f4; if (out3) *out3 = func_00117BF0(a1, n << 4, self->f4, 4); func_001744C0(self); }

void func_00174828(S_174828* self) { func_001748F8(self); u8* p = self->cur; self->cur = p + 0x10; *(u64*)p = 0x60000000ULL; *(u64*)(p + 8) = 0; }

void func_001748B8(S_174828* self) { func_001748F8(self); u8* p = self->cur; self->cur = p + 0x10; *(u64*)p = 0x70000000ULL; *(u64*)(p + 8) = 0; }

s32 func_00175098(s32 i) { return *(s32*)((u8*)D_00321188 + (i << 2)); }

void* func_001750E8(s32 i) { extern u8 D_003211C0[]; if (i == -1) return 0; return D_003211C0 + (i<<3); }

void func_00175870(S_00175870* self, s32 arg) { D_0036AEAC = self->field64; if (arg & 1) func_001D2818(self); }
