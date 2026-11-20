// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0011D740(s32, s32);
s32 func_0012AF00(s32, void *);
s32 func_0012BC20(void *);
s32 func_0012BDD8(void *, s32);
s32 func_0011D830(s32, s32, s32);
s32 func_0012AF38(void *, s32);
s32 func_0012B008(void *, s32);
s32 func_0021F5D0(s32, s32);
s32 func_00127730(s32, s32);
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

typedef s32 Q_12[4] __attribute__((aligned(16)));
struct S4 { u8 pad[4]; s32 p; };
extern u8 D_00475480[];
extern void func_00125E98(u8*,u8*,u8*,u8*,s32);
extern void func_0013BAC8(void*,s32);
extern void func_00124248(void*, s32, s32);
extern s32 func_0025E7A8(void*);
extern s32 func_0025E150(void*);
extern s32 D_004794CC;
extern s32 D_004794C8;
extern s32 D_004794C4;
extern void func_0012B218(void*, s32);
extern void* func_0012AF00(void*, void*);
extern void func_0012B2F0(void*, s32);
extern void* func_0012B008(u8*, Q_12*);
extern void* func_0011D628(u8*, void*);
extern s32 func_0021F410(void*);
void* func_00124B30(void* a0, void*, S4* a2) ;
void* func_00127600(void* a0, void*, S4* a2) ;
void* func_00127BC8(void* self);
void* func_00127DC8(void* self);
void* func_00124360(u8* self, s32 p1, s32 p2);
void* func_00127F48(void* self);
void* func_001274E0(u8* self);
void* func_00125FD0(u8* a, u8* b, u8* c, u8* d);
void* func_001243C0(u8* self, s32 p1, s32 p2);
void* func_00125A30(u8* self);
void* func_00127A88(void* self);
void* func_00124390(u8* self, s32 p1, s32 p2);
void* func_00127D88(void* self);
void* func_00127EC8(void* self);
void* func_00127D08(void* self);
void* func_00127A48(void* self);
void* func_00125AC8(u8* self);
void* func_001278C8(void* self);
void* func_00127CC8(void* self);
void* func_00127E88(void* self);
void* func_00127888(void* self);
void* func_001242D0(u8* self, s32 p1, s32 p2);
void* func_00127B48(void* self);
void* func_00127C08(void* self);
void* func_00127AC8(void* self);
void* func_00125A68(u8* self);
void* func_00127E48(void* self);
void* func_001243F0(u8* self, s32 p1, s32 p2);
void* func_00127988(void* self);
void* func_00124330(u8* self, s32 p1, s32 p2);
void* func_00127B88(void* self);
void* func_00125A98(u8* self);
void* func_00127B08(void* self);
void* func_00126000(u8* a, u8* b, u8* c, u8* d);
void* func_00124300(u8* self, s32 p1, s32 p2);
void* func_00127A08(void* self);
void* func_00125DC0(u8* a, s32 b, u8* c);
void* func_00126030(u8* a, u8* b, u8* c, u8* d);
void* func_00127F88(void* self);
void* func_00127948(void* self);
void* func_00127908(void* self);
void* func_001279C8(void* self);
void* func_00125FA0(u8* a, u8* b, u8* c, u8* d);
void* func_00127C88(void* self);
void* func_00124420(u8* self, s32 p1, s32 p2);
void* func_00125B38(u8* self);
void* func_00127D48(void* self);
void* func_00127C48(void* self);
void* func_00127F08(void* self);
void* func_00127E08(void* self);
s32 func_00124B90(s32 arg0, s32 arg1, s32 arg2) {
    char sp[0x10];
    func_0012BDD8(sp, 0x19);
    s32 temp_a1 = *(s32 *)(sp + 4);
    func_0011D740(*(s32 *)(arg2 + 4), temp_a1);
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

s32 func_00124BF0(s32 arg0, s32 unused_a1, char *arg2) {
    char sp[0x10];
    func_0012BDD8(sp, 0x19);
    s32 temp_a2 = *(s32 *)(arg2 + 0xC);
    s32 temp_a0 = *(s32 *)(arg2 + 4);
    func_0011D830(temp_a0, temp_a2, *(s32 *)(sp + 4));
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

s32 func_00124D80(s32 arg0, void *arg1, void *arg2) {
    char sp[0x10];
    func_0012AF38(sp, *(s32 *)((char *)arg2 + 4) + 0x30);
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

s32 func_00124DC8(s32 arg0, void *arg1, void *arg2) {
    char sp[0x10];
    func_0012B008(sp, *(s32 *)((char *)arg2 + 4));
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

s32 func_00127658(s32 arg0, void *arg1, void *arg2)
{
    char sp[0x10];
    func_0012BDD8(sp, 0x22);
    func_0021F5D0(*(s32 *)((char *)arg2 + 4), *(s32 *)((char *)arg2 + 0xC));
    func_0012AF00(arg0, sp);
    func_0012BC20(sp);
    return arg0;
}

void func_00127868(void) {
    func_00127730(1, 0xFFFF);
}

void func_00127FC8(s32 arg0, s32 arg1) {
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


void* func_001242D0(u8* self, s32 p1, s32 p2) { func_00124248(self, p2, 0); return self; }
void* func_00124300(u8* self, s32 p1, s32 p2) { func_00124248(self, p2, 0x1); return self; }
void* func_00124330(u8* self, s32 p1, s32 p2) { func_00124248(self, p2, 0x2); return self; }
void* func_00124360(u8* self, s32 p1, s32 p2) { func_00124248(self, p2, 0x3); return self; }
void* func_00124390(u8* self, s32 p1, s32 p2) { func_00124248(self, p2, 0x4); return self; }
void* func_001243C0(u8* self, s32 p1, s32 p2) { func_00124248(self, p2, 0x5); return self; }
void* func_001243F0(u8* self, s32 p1, s32 p2) { func_00124248(self, p2, 0x6); return self; }
void* func_00124420(u8* self, s32 p1, s32 p2) { func_00124248(self, p2, 0x7); return self; }
void* func_00124B30(void* a0, void*, S4* a2) { u8 local2[0x10]; u8 local[0x40]; func_0011D628(local, (void*)(s64)a2->p); func_0012B008(local2, (Q_12*)local); func_0012AF00(a0, local2); func_0012BC20(local2); return a0; }
void* func_00125A30(u8* self) { s32 r = func_0025E150(self); *(s32*)(self+4) = r; *(u16*)self = 0x13; return self; }
void* func_00125A68(u8* self) { func_0012B218(self, D_004794C4); return self; }
void* func_00125A98(u8* self) { func_0012B218(self, D_004794C8); return self; }
void* func_00125AC8(u8* self) { func_0012B218(self, D_004794CC); return self; }
void* func_00125B38(u8* self) { s32 r = func_0025E7A8(self); *(s32*)(self+4) = r; *(u16*)self = 0x13; return self; }
void* func_00125DC0(u8* a, s32 b, u8* c) { func_0013BAC8(D_00475480, *(s32*)((u8*)c+0x4)); func_0012BDD8(a, 0x22); return a; }
void* func_00125FA0(u8* a, u8* b, u8* c, u8* d) { func_00125E98(a, b, c, d, 0x72); return a; }
void* func_00125FD0(u8* a, u8* b, u8* c, u8* d) { func_00125E98(a, b, c, d, 0x73); return a; }
void* func_00126000(u8* a, u8* b, u8* c, u8* d) { func_00125E98(a, b, c, d, 0x74); return a; }
void* func_00126030(u8* a, u8* b, u8* c, u8* d) { func_00125E98(a, b, c, d, 0x75); return a; }
void* func_001274E0(u8* self) { func_0012BDD8(self, 0x22); return self; }
void* func_00127600(void* a0, void*, S4* a2) { u8 local[0x10]; *(s16*)local = -1; func_0012B2F0(local, func_0021F410((void*)(s64)a2->p) != 0); func_0012AF00(a0, local); func_0012BC20(local); return a0; }
void* func_00127888(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_001278C8(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127908(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127948(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127988(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_001279C8(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127A08(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127A48(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127A88(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127AC8(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127B08(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127B48(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127B88(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127BC8(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127C08(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127C48(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127C88(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127CC8(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127D08(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127D48(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127D88(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127DC8(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127E08(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127E48(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127E88(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127EC8(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127F08(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127F48(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
void* func_00127F88(void* self) { s16 x = -1; func_0012AF00(self, &x); func_0012BC20(&x); return self; }
