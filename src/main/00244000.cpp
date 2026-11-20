// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00244A10(s32, s32);
s32 func_00245A30(s32, s32);
s32 func_00245FA0(s32);
s32 *func_00246E98(s32 *, s32);
extern s32 D_00474FF0;
s32 func_00291058(s32);
s32 func_00291088(s32);
s32 func_0011E1F0(s32 *, s32);
extern s32 D_0047500C;
s32 func_00246040(s32, s32, s32);
s32 func_00246B70(s32);
s32 func_00291CE8(s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00475024;
extern s32 D_00349850;

extern void func_0011E118(void*);
extern void func_002B8670(void*);
extern u8 D_00365D50[];
u8* func_00244BC8(u8* a);
void func_00246B70();
void func_00245FA0();
void func_00244B48(void) {
    func_00244A10(1, 0xFFFF);
}

void func_00245130(void* self, f32 value) { *((f32*)((char*)self + 0x38)) = value; }

void func_002459F8(s32 arg0) {
    func_00245A30(func_00245FA0(0x70), arg0);
}

s32 func_00245A88(char *arg0)
{
    s32 *temp_v0;

    temp_v0 = func_00246E98(&D_00474FF0, *(s32 *)(arg0 + 0x60));
    s32 v1;
    if (temp_v0 != 0) {
        v1 = *temp_v0;
    } else {
        v1 = -1;
    }
    return v1;
}

void func_00245DA0(void* p)
{
    func_00291058(*(s32*)((char*)p + 0x44));
}

void func_00245DC0(void* pobject)
{
    func_00291088(*(s32*)((char*)pobject + 0x44));
}

void func_00245F58(char* self)
{
    *(u16*)(self + 0x58) = *(u16*)(self + 0x58) + 1;
}

void func_00245FC0(s32 arg0) {
    func_0011E1F0(&D_0047500C, arg0);
}

s32 func_00245FE8(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    return func_00246040(func_00246B70(0x3C0), arg0, arg1);
}

s32 func_002463A0(void* self)
{
    s32 flags = *(s32*)((char*)self + 0x3B8);
    if ((flags & 4) == 0) {
        return 1;
    }
    return 2;
}

void func_00246538(char *arg0)
{
    func_00291CE8(0x524B5553, 2, *(s32 *)(arg0 + 0x44), 0, 0, 0, 0);
}

s32 func_00246570(void* p)
{
	return func_00291CE8(0x524B5553, 3, *(s32*)((char*)p + 0x44), 0, 0, 0, 0);
}

void func_002465A8(char* self)
{
    func_00291CE8(0x524B5553, 4, *(s32*)(self + 0x44), 0, 0, 0, 0);
}

void func_00246838(void) {

}

void func_00246B28(void* self)
{
    u16 v = *(u16*)((char*)self + 0x58);
    v += 1;
    *(u16*)((char*)self + 0x58) = v;
}

void func_00246B90(s32 arg0) {
    func_0011E1F0(&D_00475024, arg0);
}

s32 func_00246E10(char* self, s32 key)
{
    for (char* p = *(char**)(self + 0xEC); p != 0; p = *(char**)(p + 0x44)) {
        if (*(s32*)(p + 0x40) == key) {
            return (s32)p;
        }
    }
    return 0;
}

s32 func_00246E68(char* self, s32 key)
{
    s32 node = *(s32*)(self + 0xF0);
    while (node != 0) {
        if (*(s32*)(node + 0x40) == key) {
            return node;
        }
        node = *(s32*)((char*)node + 0x44);
    }
    return 0;
}

s32 func_00246EF0(char* self, s32 key)
{
    s32 found;
    for (found = *(s32*)(self + 0xF0); found != 0; found = *(s32*)(found + 0x44)) {
        if (found == key)
            return 1;
    }
    return *(s32*)(self + 0xF4) == key ? 0 : 2;
}

s32 func_00246F30(void* self, u32 index)
{
    if (index >= 7U) return -1;
    return *(s32*)((u32)&D_00349850 + index * 4);
}

void func_00247EC0(void) {

}


u8* func_00244BC8(u8* a) { func_002B8670(a); *(void**)(a+0xC) = &D_00365D50; *(f32*)(a+0x10) = 1.0f; *(f32*)(a+0x48) = 1.0f; *(f32*)(a+0x30) = 300.0f; *(f32*)(a+0x34) = 3000.0f; return a; }
void func_00245FA0() { func_0011E118(&D_0047500C); }
void func_00246B70() { func_0011E118(&D_00475024); }
