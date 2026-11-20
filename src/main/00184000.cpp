// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00184778(s32);
s32 func_001FCAC8();
void func_001847C0(s32,s32);
s32 func_0011C2B8(s32);
s32 func_0011C438(s32);
s32 func_001854C8(s32 *, s32, s32);
s32 func_001C6EA8(s32 *);
s32 func_002A9288();
extern s32 D_0036C700;
extern s32 D_00370AF0;
s32 func_00171A50(s32 *);
extern s32 D_0036BD20;
void func_00186298(s32);
s32 func_00186338(s32);
s32 func_00187CB8();
extern s32 D_004794C4;
s32 func_001878E0(void *, s32);
s32 func_00189F38(s32, s32);
extern s32 D_004794CC;
s32 func_00188A38(s32);
s32 func_0011E100(s32 *, s32, s32, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;
s32 func_00186610(s32);
s32 func_0013B500(s32, s32);
s32 func_00155ED8(s32, s32);
s32 func_001F4AD0(s32 *, s32);
extern s32 D_00475480;
struct G_00475480 { u8 pad0[0x402C]; s32 x402C; s32 x4030; s32 x4034; };
extern void func_001854C8(s32, s32, void*);

struct S_1871C0 { u8 pad[0xB8]; s32 xB8; };
extern void func_00186EE0(s32, s32, s32, s32);
extern void func_001FC8F8();
extern void func_001C7340(void*);
extern void func_0011AD60(void*, s32);
extern void func_0024B330(void*, void*, s32, s32, void*, void*);
extern void func_0012BC20(void*);
extern void* func_001859A8(s32, void*);
extern void func_001854C8(u8*, s32, void*);
extern s32 func_00186900(void*);
extern u8 D_004BC230[];
extern s32 func_002852B0(u8*);
extern void func_002846A8(u8*);
extern void func_00284778(u8*);
extern void func_00283F70(u8*);
extern void func_00187270(void*);
extern void func_001874E8(void*);
void func_001871C0(S_1871C0* a0) ;
void* func_00185A08(void* self) ;
void func_00185E40(u8* self) ;
void func_00186EA0(s32 p0, s32 p1, s32 p2);
void func_001860D8(u8* a, s32 v);
void func_00184520(s32 p0);
void func_00186E80(s32 p0, s32 p1);
void func_00186EC0(s32 p0, s32 p1, s32 p2);
void func_00184550(s32 arg0) {
    func_001FCAC8();
    func_00184778(arg0);
}

void func_001847C0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        temp_v0 = D_0036AE78 + 1;
        D_0036AE78 = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0_2 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_3 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_4 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_5 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_6 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_6;
        if (temp_v0_6 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
}

void func_001848F8(void) {
    func_001847C0(1, 0xFFFF);
}

void func_00184918(void) {
    func_0011C2B8(0);
    func_0011C438(func_002A9288());
    func_001854C8(&D_0036C700, 0, 0);
    func_001C6EA8(&D_00370AF0);
}

void func_001849E8(void) {
    func_00171A50(&D_0036BD20);
}

void func_001856E0(char* self, u32 index, s32 value)
{
    if (index < 2U) {
        *(s32*)(self + (index << 2) + 0x10) = value;
    }
}

int func_00185980(int bit)
{
    if (bit == -1) return 0;
    return (int)(1UL << bit);
}

s32 func_001859A8(s32 count, s32 *items)
{
    s32 *cursor;
    s32 remaining;
    s32 flags;

    flags = 0;
    if (count > 0) {
        cursor = items;
        remaining = count;
        do {
            s32 item = *cursor;
            remaining -= 1;
            cursor += 1;
            flags |= func_00185980(item);
        } while (remaining != 0);
    }
    return flags;
}

s32 func_00185FD8(void* p)
{
    s32* f = (s32*)((char*)p + 0x50);
    if (*f != 0) return 0;
    return *(s32*)((char*)p + 0xF0) != 3;
}

void func_001861F8(void) {

}

void func_00186248(s32 arg0) {
    if (func_00187CB8() == 0) {
        if (D_004794C4 != 0) {
            func_00186298(D_004794C4);
        }
        func_00186338(arg0);
    }
}

void func_00186298(s32 arg0) {
    if (func_00187CB8() != 0) {
        func_00186610(arg0);
    }
}

void func_00186DA0(s32 arg0) {
    s32 temp_v0;

    if (func_00187CB8() == 0) {
        func_001854C8(&D_0036C700, 0x1F, arg0);
        temp_v0 = func_001F4AD0(&D_00475480, 0);
        if ((temp_v0 != 0) && (func_0013B500(temp_v0, 0x33) != 0)) {
            func_00155ED8(temp_v0, 5);
        }
        func_00186248(arg0);
    }
}

s32 func_00186FE8(char *arg0)
{
    s32 id;
    if (D_004794CC != 0) {
        id = func_00189F38(D_004794CC, 0);
    } else {
        id = func_00189F38(*(s32 *)(arg0 + 0x54), 0);
    }
    return func_001878E0(arg0, 8);
}

void func_001878A0(void *pgoal)
{
    s32 f = func_001FCAC8();
    if (*(s32 *)((char *)pgoal + 0xB8) == 8) {
        func_001878E0(pgoal, 0);
    }
}

s32 func_00187CD0(char* p)
{
	s32 v = 0;
	s32 x = *(s32*)(p + 0x58);
	if (x != 0) {
		v = func_00188A38(x) != 0;
	}
	return v;
}


void func_00184520(s32 p0) { func_001FC8F8(); *(s32*)((u8*)(p0) + 0x70) = 0; *(s32*)((u8*)(p0) + 0x74) = 0; }
void* func_00185A08(void* self) { void* arr[8]; s32 tmp[4]; s32 counter; func_0024B330(tmp, self, 0x1047, 0x6, &counter, arr); void* result = func_001859A8(counter, arr); func_0012BC20(tmp); return result; }
void func_00185E40(u8* self) { func_001C7340(self); *(s32*)(self + 0x60) = -1; *(s32*)(self + 0x64) = -1; func_0011AD60(self + 0x80, 0x74); func_0011AD60(self + 0x8C, 0x4C); *(s32*)(self + 0x4C) = -1; *(s32*)(self + 0x40) = -1; *(s32*)(self + 0xC8) = -1; *(s32*)(self + 0xCC) = -1; *(s32*)(self + 0xF8) = -1; ((G_00475480*)&D_00475480)->x4030++; }
void func_001860D8(u8* a, s32 v) { s32 n = *(s32*)(a+0x44); if (n < 0x8) { s32* p = (s32*)((n<<2) + *(s32*)(a+0x48)); *p = v; *(s32*)(a+0x44) = n+1; } }
void func_00186E80(s32 p0, s32 p1) { func_00186EE0(p0, p1, -0x1, -0x1); }
void func_00186EA0(s32 p0, s32 p1, s32 p2) { func_00186EE0(p0, p1, p2, -0x1); }
void func_00186EC0(s32 p0, s32 p1, s32 p2) { func_00186EE0(p0, p1, -0x1, p2); }
void func_001871C0(S_1871C0* a0) { if (a0->xB8) return; func_001854C8((u8*)&D_0036C700, 0x24, a0); if (func_00186900(a0)) { func_001878E0(a0, 1); return; } u8* s = D_004BC230; if (func_002852B0(s)) { func_002846A8(s); func_00284778(s); func_00283F70(s); } else { func_00187270(a0); func_001874E8(a0); } }
