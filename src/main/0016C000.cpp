// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00166548(s32);
s32 func_00169E40();
s32 func_0016C7F8(s32, s32);
s32 func_0016E6C0(s32, s32);
s32 func_0016E8D8(s32);
s32 func_00238978();
s32 func_0016EBA0(s32, s32);
s32 func_0016ECF8(s32, s32);
s32 func_0016F610(s32, s32);
s32 func_001C7DC8();
s32 func_0016FAE8(s32, s32);
s32 func_0016FCF8(s32);
s32 func_001C8168();
s32 func_00170328(s32);
s32 func_001FCAC8();
s32 func_0016CB38(void *, s32);
s32 func_00252E40(s32, s32);
s32 func_00238980();
s32 func_00240DB0(s32);
s32 func_00252FC0(s32, s32);
s32 func_002BC760(void *, s32);
s32 func_00238AD8();
s32 func_00131568();
s32 func_0016D840(void *, s32);
s32 func_001854C8(s32 *, s32, s32);
extern s32 D_0036C700;
s32 func_001C9118(void *, s32);
s32 func_0028FD70();

struct T_16D038 { u8 pad0[0x10D0]; void* x10D0; };
struct U_16D038 { u8 pad0[0x14]; void* x14; };
struct S_16D038 { u8 pad0[0x10]; void* x10; u8 pad14[0x30-0x14]; void* x30; };
extern void func_00252E40(void*,s32);
extern void func_00238970(void*);
extern void func_0016C950();
extern void func_00238970();
extern void func_00169C90(void* a0, u32 a1, u32 a2);
extern u8 D_00355C50[];
extern void func_001854C8(u8*, s32, void*);
extern void func_001854C8(s32, s32, void*);
extern void func_0016C980(void*);
extern void func_001703C8(void*, void*, s32);
void func_0016D038(S_16D038* a0) ;
void* func_0016C608(void* self, u32 a1, u32 a2, void* a3, void* a4) ;
void func_0016D180(s32 p0);
void func_0016D000(s32 p0);
void func_0016D638(u8* s);
void func_0016C950(s32 p0);
void func_0016D088(s32 p0);
void func_0016E5A0(u8* s);
void func_0016C6A8(s32 *arg0) {
    func_00169E40();
    func_00166548(*arg0);
}

void func_0016C930(void) {
    func_0016C7F8(1, 0xFFFF);
}

void func_0016C980(char *self)
{
    func_00238978();
    func_00252E40(*(s32 *)(self + 0x10), *(s32 *)(self + 0x40));
    func_0016CB38(self, 0);
}

void func_0016C9C0(char *self)
{
    func_00238980();
    func_0016CB38(self, -1);
    func_00252FC0(*(s32 *)(self + 0x10), *(s32 *)(self + 0x40));
    func_002BC760(self + 0x30, 0);
    func_00240DB0(*(s32 *)(self + 0x10));
}

s32 func_0016D320(s32 arg0, s32 arg1)
{
    if (arg1 == 0x12) {
        return 1;
    }
    return func_00238AD8();
}

void func_0016D350(char* self)
{
    func_00131568();
    *(s32*)(self + 0x3C) = 0x23;
    *(s32*)(self + 0x50) = -1;
}

void func_0016D710(char *self) {
    func_00238980();
    func_0016D840(self, -1);
    func_001854C8(&D_0036C700, 0x19, *(s32 *)(self + 0x10));
    func_00252FC0(*(s32 *)(self + 0x10), 0x29);
}

s32 func_0016D940(void* p)
{
	s32 v = *(s32*)((char*)p + 0x30);
	return v == 2;
}

void func_0016D950(s32* self)
{
    func_00131568();
    self[0x3C / 4] = 0x2A;
    self[0x50 / 4] = -1;
}

s32 func_0016E588(char* self)
{
    s32 v = *(s32*)(self + 0x50);
    if (v == 3) return 7;
    return 1;
}

void func_0016E5D8(s32 arg0) {
    func_00238978();
    func_0016E6C0(arg0, func_0016E8D8(arg0));
}

void func_0016ECD8(void) {
    func_0016EBA0(1, 0xFFFF);
}

void func_0016EE30(void) {
    func_0016ECF8(1, 0xFFFF);
}

void func_0016F748(void) {
    func_0016F610(1, 0xFFFF);
}

void func_0016F9E8(void) {
    func_001C7DC8();
}

void func_0016FC20(void) {
    func_0016FAE8(1, 0xFFFF);
}

void func_0016FC40(char *self) {
    s32 flags = func_0028FD70();
    func_001C9118(self, 1);
    s32 value = *(s32 *)(self + 0x3C);
    if ((value ^ 1) & 1) {
        *(s32 *)value = *(s32 *)value | 2;
        return;
    }
    *(s32 *)(self + 0x3C) = value | 2;
}

void func_0016FC98(s32 arg0) {
    func_001C8168();
    func_0016FCF8(arg0);
}

void func_0016FCC8(s32 arg0) {
    func_001FCAC8();
    func_00170328(arg0);
}


void* func_0016C608(void* self, u32 a1, u32 a2, void* a3, void* a4) { func_00169C90(self, a1, a2); *(void**)((u8*)self + 0x20) = a3; *(void**)((u8*)self + 0x1C) = D_00355C50; *(void**)((u8*)self + 0x24) = a4; *(u32*)((u8*)self + 0x8) = 0xB; return self; }
void func_0016C950(s32 p0) { func_00238970(); *(s32*)((u8*)(p0) + 0x44) = -0x1; }
void func_0016D000(s32 p0) { func_0016C950(); *(s32*)((u8*)(p0) + 0x40) = 0x5; *(s32*)((u8*)(p0) + 0x3C) = (*(s32*)((u8*)(p0) + 0x10) + 0xC80); }
void func_0016D038(S_16D038* a0) { func_0016C980(a0); func_001854C8((u8*)&D_0036C700, 0xF, a0->x10); void* p2 = ((U_16D038*)a0->x30)->x14; void* p1 = ((T_16D038*)a0->x10)->x10D0; func_001703C8(p1, p2, 2); }
void func_0016D088(s32 p0) { func_0016C950(); *(s32*)((u8*)(p0) + 0x40) = 0x6; *(s32*)((u8*)(p0) + 0x3C) = (*(s32*)((u8*)(p0) + 0x10) + 0xAE0); }
void func_0016D180(s32 p0) { func_0016C950(); *(s32*)((u8*)(p0) + 0x40) = 0x7; *(s32*)((u8*)(p0) + 0x3C) = (*(s32*)((u8*)(p0) + 0x10) + 0xE20); }
void func_0016D638(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0x29); *(s32*)(s+0x30) = -1; }
void func_0016E5A0(u8* s) { func_00238970(s); func_00252E40(*(void**)(s+0x10), 0xC); *(s32*)(s+0x30) = -1; }
