// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0011E118(s32 *);
extern s32 D_00479DB4;
s32 func_0011E1F0(s32 *, s32);
s32 func_0025DEF8(s32 *, s32);
extern s32 D_00475480;
s32 func_00150690(s32, s32, s32, s32);
s32 func_0017E1B8(s32 *, s32, s32, s32);
s32 func_001D27F0(s32);
s32 func_00241AA0();
s32 func_00256278(s32, s32);
s32 func_00242830(s32, s32);
void *func_00241B60();
s32 func_0028F260(s32, void *, f32);
s32 func_0013C958(s32);
s32 func_002429C8();
s32 func_00242B90(s32, s32);
s32 func_0013B500(s32, s32);
s32 func_00237DD8(s32, f32, f32);
s32 func_00237298(s32, f32, f32);

s32 func_00240970(void* p)
{
    s32 v = *(s32*)((unsigned char*)p + 0x10) + 1;
    *(s32*)((unsigned char*)p + 0x10) = v;
    return v;
}

void func_002409E0(void) {
    func_0011E118(&D_00479DB4);
}

void func_00240A00(s32 arg0) {
    func_0011E1F0(&D_00479DB4, arg0);
}

s32 func_00240DA0(void* p1, void* p2)
{
    s32 v0 = *(s32*)((char*)p2 + 0x50);
    return v0 != 0;
}

void func_00240DB0(s32 arg0) {
    func_0025DEF8(&D_00475480, arg0);
}

s32 func_00240DD8(s32 flags)
{
    s32 count = 0;
    s32 bit = 1;
    while (count < 26 && (flags & bit) == 0) {
        count++;
        bit <<= 1;
    }
    return count;
}

void func_00241248(s8* self, s8 value) { self[0x124] = value; }

u8 func_00241250(void* self)
{
    return *(u8*)((u8*)self + 0x124);
}

void func_00241258(s8* self, s8 value)
{
    *(s8*)(self + 0x125) = value;
}

u8 func_00241260(void* self) { return *(u8*)((char*)self + 0x125); }

void func_00241268(s32 arg0) {
    if (func_0017E1B8(&D_00475480, 2, 0x1A6, arg0) == 0) {
        func_00150690(0x11, arg0, 0x1A6, -1);
    }
}

s32 func_002412C0(void* p)
{
    return *(s32*)((char*)p + 0xD8);
}

s32 func_002415E0(void* self)
{
    u64 flags = *(u64*)((char*)self + 0x120);
    return (s32)(flags >> 0x3D) & 1;
}

void func_002417F8(char *arg0, f32 fparg0, f32 fparg1) {
    s32 var_s0;
    s32 var_s1;
    var_s1 = 0;
    if (*(s32 *)(arg0 + 0x94) > 0) {
        do {
            var_s0 = *(s32 *)(*(char **)(arg0 + 0x98) + var_s1 * 4);
            if (func_0013B500(var_s0, 0xB3) != 0) {
                func_00237DD8(var_s0, fparg0, fparg1);
            }
            var_s1 += 1;
        } while (var_s1 < *(s32 *)(arg0 + 0x94));
    }
}

void func_00241890(char *arg0, f32 fparg0, f32 fparg1)
{
    for (s32 i = 0; i < *(s32 *)(arg0 + 0x94); i++) {
        s32 temp_s0;
        s32 temp_v0;

        temp_s0 = *(s32 *)(*(s32 *)(arg0 + 0x98) + i * 4);
        temp_v0 = func_0013B500(temp_s0, 0xB3);
        if (temp_v0 != 0) {
            func_00237298(temp_s0, fparg0, fparg1);
        }
    }
}

void func_00241A98(void* a0)
{
    *(int*)((char*)a0 + 0xA4) = 0;
}

void func_00241AD8(s32 arg0) {
    if (func_00241AA0() == 0) {
        func_00256278(func_001D27F0(0xAC), arg0);
    }
}

void func_00241C10(f32 x)
{
    void *p = func_00241B60();
    if (p) *(f32 *)((char *)p + 8) = x;
}

f32 func_00241C40(void* self)
{
    f32* table = *(f32**)((char*)self + 0xD8);
    f32* entry = 0;
    if (table != 0) {
        entry = *(f32**)((char*)table + 0xDC);
    }
    if (entry != 0) {
        return entry[2];
    }
    return 0.0f;
}

void func_00241C70(f32 x)
{
    void *p = func_00241B60();
    if (p) * (f32 *)((char *)p + 0xC) = x;
}

void func_00241CD0(f32 x)
{
    void *p = func_00241B60();
    if (p) * (f32 *)((char *)p + 4) = x;
}

s32 func_00241D30(void* p)
{
	s64 v = *(s64*)((char*)p + 0x128);
	return (s32)((v << 27) >> 32) & 1;
}

void func_00241D48(char* self, s32 flag) { s64 v = *(s64*)(self + 0x128); *(s64*)(self + 0x128) = (v & ~(1ULL << 5)) | ((s64)(flag & 1) << 5); }

s32 func_00241D68(void* p)
{
	s64 v = *(s64*)((char*)p + 0x128);
	return (s32)((v << 0x19) >> 32) & 0x1;
}

void func_00241D80(void* self, s32 value)
{
    s64 bits = (s64)(value & 1) << 7;
    s64* word = (s64*)((char*)self + 0x128);
    *word = (*word & -129) | bits;
}

s32 func_00241DC0(void* p)
{
    s64 v = *(s64*)((char*)p + 0x128);
    return (s32)((v << 31) >> 32) & 0x1;
}

s32 func_00241DD8(const char* self)
{
    s64 v = *(s64*)(self + 0x128);
    return (s32)((v << 24) >> 32) & 1;
}

void func_00241DF0(void* self, s32 value)
{
    s64 bits = (s64)(value & 1) << 8;
    s64* word = (s64*)((char*)self + 0x128);
    *word = (*word & ~0x100) | bits;
}

void func_00242488(char *arg0, f32 fparg0)
{
    char *temp_v1;

    temp_v1 = *(char **)(arg0 + 0x24);
    *(short *)(temp_v1 + 0xAC) = (short)(fparg0 * 1000.0f);
    func_0028F260(*(s32 *)(arg0 + 0x20), *(void **)(arg0 + 0x24), fparg0 * 1000.0f);
}

void func_002429A8(void) {
    func_00242830(1, 0xFFFF);
}

void func_00242A58(s32 arg0) {
    func_0013C958(arg0);
    func_002429C8();
    func_00242B90(arg0, 1);
    func_0013C958(arg0);
    func_00242B90(arg0, 6);
}
