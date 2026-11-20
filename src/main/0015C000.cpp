// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0025D350(s32 *, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00475480;
s32 func_001858D0(s32 *, s32, s32, s32, s32, s32);
extern s32 D_0036C700;
s32 func_0015BE30(s32);
s32 func_0023C580();
s32 func_0015BE10(s32);
s32 func_001FC968();
s32 func_0015D100();
s32 func_0015C178(s32, s32);
s32 func_001FC8F8();
s32 func_0015DB10(s32, s32);
s32 func_0015E078(s32, s32);
s32 func_0015FCF8(s32);
s32 func_0015FE68(s32);
s32 func_001600F0(s32);
s32 func_00161140(s32);
s32 func_00161380(s32);
s32 func_002389A0();
s32 func_0015BF28(s32);
s32 func_00244F08(s32, void *);
s32 func_002459F8(s32);
s32 func_0015C4A8(s32, s32);
s32 func_0015C6D0();
s32 func_0015D908();
extern f32 D_0036BB98;
s32 func_0015F050(void *, s32);
s32 func_00238980();
s32 func_00248ED0(s32 *);
s32 func_00251A58(s32, s32);
s32 func_00252FC0(s32, s32);
extern s32 D_00474FF0;
s32 func_00238970();
s32 func_00252E40(s32, s32);
s32 func_001F43C8(s32);
s32 func_001F43D0(s32, s32);
s32 func_001F4430(s32);
s32 func_001F4438(s32, s32);
s32 func_001F48A0();
s32 func_0015FD58(void *, s32);
s32 func_00160960(void *, s32, s32);
s32 func_001614E8(void *, s32);
s32 func_00161C60(s32, s32);
s32 func_00259D50(s32);

struct P8_15 { u64 x; } __attribute__((packed));
extern void func_00238970(void*);
extern void func_00252E40(void*, s32);
extern void func_00248EC0(void*);
extern void func_00248EC0(s32);
extern void func_0024AEF8(u8*,u8*,s32,u8*);
extern void func_0015D8C8(void*, s32);
extern void func_0015C760(void*);
extern void func_0015D8C8(s32, s32);
extern void* func_0011E118(void*);
extern void* func_0011AD80(void*, void*);
void* func_0015DC68(u8* a, void* b, P8_15 c, void* d) ;
void func_0015E380(u8* s);
void func_0015D8A8(s32 p0);
void* func_0015C5D8(u8* a, u8* b);
void func_0015D728(u8* self);
void* func_0015D6A0(u8* a, u8* b);
void func_0015C5D0(void) {

}

void func_0015C610(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0025D350(&D_00475480, arg0 + 0x78, 4, arg0 + 0x74, arg1, arg2, arg3, arg4);
}

void func_0015C650(s32 arg0, s32 arg1, s32 arg2) {
    func_001858D0(&D_0036C700, arg0 + 0xBC, 4, arg0 + 0xB8, arg1, arg2);
}

void func_0015C730(s32 arg0) {
    func_0023C580();
    func_0015BE30(arg0 + 0x130);
}

void func_0015C760(s32 arg0) {
    func_001FC968();
    func_0015BE10(arg0 + 0x130);
}

s32 func_0015C958(char *self)
{
    s32 temp_a0;

    func_0015BF28((s32)self + 0x130);
    temp_a0 = *(s32 *)(self + 0x224);
    if (temp_a0 != -1) {
        return func_00244F08(func_002459F8(temp_a0), self);
    }
    return -1;
}

void func_0015CB70(char *self, s32 value)
{
    u32 count = *(u32 *)(self + 0x228);
    if (count < 4) {
        *(s32 *)(self + (count << 2) + 0x22C) = value;
        *(u32 *)(self + 0x228) = count + 1;
    }
}

void func_0015CF18(void) {
    func_0015D100();
}

s32 func_0015D0E0(char* self)
{
    s32 value = 0;
    if (*(s32*)(self + 0x17C) == 0) {
        value = *(s32*)(self + 0x138) == 0;
    }
    return value;
}

void func_0015D288(s32 arg0) {
    func_0015C178(arg0 + 0x120, 0);
}

void func_0015D2A8(s32 arg0) {
    func_001FC8F8();
    func_0015BE10(arg0 + 0x120);
}

s32 func_0015D2D8(s32 *arg0, s32 *arg1) {
    return (s32) (*arg0 - *arg1) >> 6;
}

void func_0015D6D8(s32 arg0) {
    func_0015C6D0();
    func_0015C4A8(arg0 + 0x130, 0x32);
    *(float*)(arg0 + 0x264) = 0.75f;
    *(float*)(arg0 + 0x268) = 1.0f;
    *(s32*)(arg0 + 0x138) = 0;
}

void func_0015D8C8(void* self, s32 value)
{
    if (value != *(s32*)((char*)self + 0x250)) {
        *(s32*)((char*)self + 0x250) = value;
        *(f32*)((char*)self + 0x254) = D_0036BB98;
        if (value == 2) {
            func_0015D908();
        }
    }
}

void func_0015DC48(void) {
    func_0015DB10(1, 0xFFFF);
}

void func_0015E1B0(void) {
    func_0015E078(1, 0xFFFF);
}

s32 func_0015E418(char *arg0)
{
    func_00238980();
    func_0015F050(arg0, -1);
    func_00252FC0(*(s32 *)(arg0 + 0x10), 0x36);
    func_00248ED0(&D_00474FF0);
    func_00251A58(*(s32 *)(arg0 + 0x10), 1);
}

void func_0015F740(s32 arg0, s32 arg1, s32 arg2) {
    func_001F48A0();
    func_001F43D0(arg0, func_001F43C8(arg0) + arg1);
    func_001F4438(arg0, func_001F4430(arg0) + arg2);
}

void func_0015F7A8(char* self)
{
    func_00238970();
    *(s32*)(self+0x30)=-1;
    *(s32*)(self+0x38)=-1;
    *(s32*)(self+0x40)=-1;
    *(s32*)(self+0x70)=-1;
    func_00252E40(*(s32*)(self+0x10),0x42);
}

void func_0015F898(char *self)
{
    func_00238980();
    func_00160960(self, -1, 0);
    func_001614E8(self, -1);
    func_0015FD58(self, -1);
    func_00259D50((s32)*(char **)(self + 0x10) + 0x4B0);
    func_00252FC0((s32)*(char **)(self + 0x10), 0x42);
    func_00161C60((s32)*(char **)(self + 0x10), -1);
}

void func_0015FCA8(s32 arg0) {
    func_002389A0();
    func_0015FCF8(arg0);
    func_001600F0(arg0);
    func_00161380(arg0);
    func_0015FE68(arg0);
    func_00161140(arg0);
}


void* func_0015C5D8(u8* a, u8* b) { func_0024AEF8(a, *(u8**)(b+0x5C), 7, b+0x60); return a; }
void* func_0015D6A0(u8* a, u8* b) { func_0024AEF8(a, *(u8**)(b+0x23C), 0x2002, *(u8**)(b+0x240)); return a; }
void func_0015D728(u8* self) { func_0015C760(self); func_0015D8C8(self, 0); }
void func_0015D8A8(s32 p0) { func_0015D8C8(p0, 0x1); }
void* func_0015DC68(u8* a, void* b, P8_15 c, void* d) { void* p = func_0011E118(a + 0x442C); *(void**)p = b; *(P8_15*)((u8*)p + 4) = c; *(void**)((u8*)p + 0xC) = d; return func_0011AD80(a + 0x4444, p); }
void func_0015E380(u8* s) { func_00238970(s); func_00248EC0(&D_00474FF0); func_00252E40(*(void**)(s+0x10), 0x36); *(s32*)(s+0x30) = -1; *(s32*)(s+0x40) = -1; *(s32*)(s+0x3C) = -1; }
