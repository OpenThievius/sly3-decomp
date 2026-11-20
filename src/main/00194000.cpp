// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_00195278(s32, s32);
s32 func_002362D0(s32, s32, s32);
s32 func_00196FC0(s32, s32);
s32 func_0011AD60(s32, s32);
s32 func_001C7340();
s32 func_001971C8(s32);
s32 func_001C7DC8();
s32 func_00198540(s32, s32);
s32 func_00194280();
s32 func_00194480(s32, s32, s32 *);
extern s32 D_0036E260;
s32 func_00194308();
extern s32 D_0036E280;
s32 func_00182D60(s32, s32 *, s32 *);
extern s32 D_002C1D00;
extern s32 D_002C2630;
s32 func_001746C0(s32);
s32 func_001748F8(s32);
s32 func_0027E2A8(s32);
s32 func_0013B500(s32, s32);
s32 func_00197838(void *, s32, s32, s32);
s32 func_00238980();
s32 func_00238A38(void *);
s32 func_00252FC0(s32, s32);
s32 func_0011AD80(s32, void *);
void *func_0011E118(s32 *);
extern s32 D_00479D2C;

struct A96 { u8 pad[0x20]; };
extern void func_00174480(void* a0);
extern void func_00174538(void* a0, s32 a1, void* a2);
extern void func_00174708(void* a0, s32 a1, void* a2);
extern void func_001748B8(void* a0);
extern void func_00196890(void* a0);
extern u8 D_0036DCAC[];
extern u8 D_0036DCB0[];
extern s32 func_00271B20(s32, s32);
extern void func_00271B80(void*);
extern void func_00293380(s32, void*, s32);
extern void func_00293DF8(s32);
extern void func_00196228(void*, s32);
extern void func_00195A98(s32, void*, s32);
extern void func_00196050(s32, s32);
extern void func_00183000(void);
extern void func_001953D0(void);
extern void func_00195710(void);
extern u8 D_0036E670[];
extern u8 D_0036DBE0[];
extern s32 D_0036E690;
extern s32 D_0036E694;
extern u8 D_003AD0[];
extern u8 D_002CC778[];
extern u8 D_002C8C20[];
extern u8 D_003F90[];
extern u8 D_003638[];
extern void func_00238970(void*);
extern void func_00252E40(void*, s32);
extern u8* func_00197628(u8*,s32,u8*);
extern u8* func_00197628(u8*,s32,s32);
extern void func_00196AA8(s32, s32, s32);
extern void func_001748F8(void*);
extern void func_0027E2A8(void*);
extern void func_001746C0(void*);
extern void func_00197628(void*,s32,s32);
extern void func_00292034(void*, s32, s32);
extern void func_00182D60(void* self, void* a1, void* a2);
extern void func_0027E420(void* self, s32 a1, s32 a2, s32 a3, s32 a4, void* a5);
extern void func_0027E260(void* self, void* a1);
extern void func_0027E290(void* self);
extern void func_0027E290(void* self, s32 a1, s32 a2, s32 a3);
extern void func_0027E660(void* self, s32 a1, s32 a2, s32 a3);
extern u8 D_002C4BF0[];
extern u8 D_002C8C08[];
void* func_00197628(u8* a, void* b, void* c) ;
void func_00194280(s32, s32, void* self) ;
void func_00194308(s32, s32, void* self) ;
void func_00194380(s32, s32, void* self) ;
void func_00194408(s32, s32, void* self) ;
void func_00194480(void* self, s32 a1, s32 a2) ;
void func_00196AA8(u8* self, s32 a1, s32 a2) ;
struct Q { u64 x; } __attribute__((packed));
void func_001960F8(void);
void func_00197388(u8* a, u8* b, f32 x);
void func_001974C8(s32 p0, s32 p1);
void func_00197338(u8* a, u8* b, u8* c);
void func_00197528(u8* a, u8* b, u8* c, u8* d);
void func_00197298(u8* a, s32 v);
void func_001977F8(u8* s);
void func_00197488(s32 p0, s32 p1);
void func_001975C8(s32 p0);
void func_00197568(u8* a, u8* b, u8* c);
void func_00197608(s32 p0, s32 p1);
void func_001974A8(s32 p0, s32 p1);
void func_00197368(s32 p0, s32 p1);
void func_001975E8(s32 p0, s32 p1);
void func_001974E8(s32 p0);
void func_00197598(u8* a, u8* b, u8* c);
void func_001972B8(u8* a, u8* b);
void func_001972F8(u8* a, u8* b);
void func_00197508(s32 p0);
void func_00196A10(void);
void func_001944E8(s32 arg0, s32 arg1, s32 arg2) {
    func_00194280();
    func_00194480(arg2, 2, &D_0036E260);
}

void func_00194520(s32 arg0, s32 arg1, s32 arg2) {
    func_00194308();
    func_00194480(arg2, 2, &D_0036E280);
}

void func_00194AB8(s32 a0, s32 a1, s32 a2)
{
    func_00182D60(a2, &D_002C1D00, &D_002C2630);
}

void func_00194AE8(s32 arg0, s32 arg1, s32 arg2)
{
    func_001746C0(arg2);
    func_0027E2A8(arg2);
    func_001748F8(arg2);
}

void func_001953B0(void) {
    func_00195278(1, 0xFFFF);
}

s32 func_00196260(char* self, char* other)
{
    s32 same = 0;
    if (*(s32*)other == *(s32*)(self + 4) && *(s32*)(other + 4) == *(s32*)(self + 8)) {
        same = *(s32*)(other + 8) == *(s32*)(self + 12);
    }
    return same;
}

void func_00196880(void* self, f32 a, f32 b)
{
    *(f32*)((char*)self + 0x24) = a;
    *(f32*)((char*)self + 0x28) = b;
}

void func_00196F00(s32 arg0) {
    func_002362D0(1, arg0, 0);
}

void func_001970F8(void) {
    func_00196FC0(1, 0xFFFF);
}

s32 func_00197118(s32 value)
{
    if (func_0013B500(value, 12) == 0) {
        return (func_0013B500(value, 10) == 0) ? -1 : 1;
    }
    return 0;
}

void func_00197168(s32 arg0) {
    func_001C7340();
    func_0011AD60(arg0 + 0x40, 0x1C);
}

void func_00197198(s32 arg0) {
    func_001C7DC8();
    func_001971C8(arg0);
}

void *func_00197628(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_s0;

    temp_s0 = (s32 *)func_0011E118(&D_00479D2C);
    temp_s0[0] = arg1;
    temp_s0[1] = arg2;
    func_0011AD80(arg0 + 0x40, temp_s0);
    return temp_s0;
}

void func_00197690(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_00198540(arg1, arg0);
    }
}

void func_00197968(char *self) {
    func_00238980();
    func_00238A38(self);
    func_00197838(self, 0, 0, 0);
    func_00252FC0(*(s32 *)(self + 0x10), 0x35);
}


void func_00194280(s32, s32, void* self) { func_00182D60(self, D_002C4BF0, D_002C8C08); func_001746C0(self); s32 buf[4]; func_0027E420(self, 0xD, 0xB, 0xC, 0, buf); func_00292034((void*)buf[0], 0, 0x58); func_0027E260(self, D_003638); func_001748F8(self); }
void func_00194308(s32, s32, void* self) { func_001746C0(self); s32 buf[4]; func_0027E420(self, 0xD, 0xB, 0xC, 0, buf); func_00292034((void*)buf[0], 0, 0x58); func_0027E260(self, D_003F90); func_0027E2A8(self); func_001748F8(self); }
void func_00194380(s32, s32, void* self) { func_00182D60(self, D_002C8C20, D_002CC778); func_001746C0(self); s32 buf[4]; func_0027E420(self, 0xD, 0xB, 0xC, 0, buf); func_00292034((void*)buf[0], 0, 0x58); func_0027E260(self, D_003638); func_001748F8(self); }
void func_00194408(s32, s32, void* self) { func_001746C0(self); s32 buf[4]; func_0027E420(self, 0xD, 0xB, 0xC, 0, buf); func_00292034((void*)buf[0], 0, 0x58); func_0027E260(self, D_003AD0); func_0027E2A8(self); func_001748F8(self); }
void func_00194480(void* self, s32 a1, s32 a2) { func_001746C0(self); func_0027E290(self); func_0027E660(self, a1, a2, 0); func_0027E290(self); func_001748F8(self); }
void func_001960F8(void) { func_00271B80(&D_0036E670); func_00196228(&D_0036DBE0, 0); func_00195A98(2, &D_0036E260, 1); func_00195A98(2, &D_0036E280, 0); func_00196050(0, 0); D_0036E690 = func_00271B20(0, 1); D_0036E694 = func_00271B20(0, 1); func_00293380(2, (void*)func_001953D0, 0); func_00293DF8(2); func_00293380(0, (void*)func_00195710, 0); func_00293DF8(0); *(volatile u32*)0x10003010 = 0; func_00183000(); }
void func_00196A10(void) { A96 a[2]; func_00174480(&a[0]); func_00174538(&a[0], 2, &a[1]); func_00174708(&a[0], *(s32*)D_0036DCAC, &D_0036DCB0); func_001748B8(&a[0]); func_00196890(&a[1]); }
void func_00196AA8(u8* self, s32 a1, s32 a2) { s32 v = a1; func_00292034(self, 0, 0x630); *(s32*)(self + 0x4) = v; *(s32*)(self + 0x0) = v; *(s32*)(self + 0x8) = a2; }
void func_00197298(u8* a, s32 v) { func_00197628(a, 0, v); }
void func_001972B8(u8* a, u8* b) { u8* p = func_00197628(a, 1, -1); *(Q*)(p+8) = *(Q*)b; }
void func_001972F8(u8* a, u8* b) { u8* p = func_00197628(a, 0x2, -0x1); *(Q*)(p+0x8) = *(Q*)b; }
void func_00197338(u8* a, u8* b, u8* c) { u8* p = func_00197628(a, 3, b); *(u8**)(p+8)=c; }
void func_00197368(s32 p0, s32 p1) { func_00197628(p0, 0x4, p1); }
void func_00197388(u8* a, u8* b, f32 x) { u8* p = func_00197628(a, 5, b); *(f32*)(p+8)=x; }
void func_00197488(s32 p0, s32 p1) { func_00197628(p0, 0x8, p1); }
void func_001974A8(s32 p0, s32 p1) { func_00197628(p0, 0x9, p1); }
void func_001974C8(s32 p0, s32 p1) { func_00197628(p0, 0xA, p1); }
void func_001974E8(s32 p0) { func_00197628(p0, 0xB, -0x1); }
void func_00197508(s32 p0) { func_00197628(p0, 0xC, -0x1); }
void func_00197528(u8* a, u8* b, u8* c, u8* d) { u8* p=func_00197628(a,0xD,b); u8* y=c; u8* x=d; *(u8**)(p+8)=y; *(u8**)(p+0xC)=x; }
void func_00197568(u8* a, u8* b, u8* c) { u8* p = func_00197628(a, 0xE, b); *(u8**)(p+8)=c; }
void func_00197598(u8* a, u8* b, u8* c) { u8* p = func_00197628(a, 0xF, b); *(u8**)(p+8)=c; }
void func_001975C8(s32 p0) { func_00197628(p0, 0x10, -0x1); }
void func_001975E8(s32 p0, s32 p1) { func_00197628(p0, 0x11, p1); }
void func_00197608(s32 p0, s32 p1) { func_00197628(p0, 0x12, p1); }
void func_001977F8(u8* s) { func_00238970(s); *(s32*)(s+0x54) = 0; *(s32*)(s+0x4C) = -1; *(s32*)(s+0x50) = -1; func_00252E40(*(void**)(s+0x10), 0x35); }
