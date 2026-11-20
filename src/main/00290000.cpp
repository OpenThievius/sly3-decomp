// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0028FFD8();
void func_00290560(s32,s32);
s32 func_002914C0(s32, s32, s32, s32, s32);
s32 func_00291290(s32, s32, s32);
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

extern void func_002914C0(s32,s32,void*,s32,s32);
struct Arg3_00291D30;
extern void func_002914C0(s32,s32,Arg3_00291D30*,s32,s64);
extern void func_00291290(s32,s32,void*);
typedef long long v2l __attribute__((vector_size(16)));
extern void func_00290078(void*);
extern void func_0011D558(void*,s32,void*);
void func_002910E8(s32 p0);
void func_00291B48(s32 p0,s32 p1,s32 p2,s32 p3,s32 p4,s32 p5);
void func_00291C48(s32 p0, s32 p1);
void func_00291218(s32 p0,s32 p1,s32 p2,s32 p3);
void func_00290E68(s32 p0);
void func_00290F00(s32 p0);
void func_00291CE8(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6);
void func_00291148(s32 p0, s32 p1, s32 p2);
void func_00291D30(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7, u64 p8);
void func_00290ED0(s32 p0);
void func_00291058(s32 p0);
void func_00291D90(s32 p0,s32 p1,s32 p2,s32 p3,s32 p4,s32 p5);
void func_00291000(s32 p0);
void* func_00290228(u8* s, s32 p1);
void func_002911D0(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7);
void func_002919E8(s32 p0);
void func_00291118(s32 p0);
void func_00291088(s32 p0);
void func_00291BE8(s32 p0,s32 p1,s32 p2,s32 p3,s32 p4);
void func_00290F50(s32 p0, s32 p1);
void func_00291CA8(s32 p0,s32 p1,s32 p2,s32 p3,s32 p4,s32 p5,s32 p6);
void func_00290E98(s32 p0, s32 p1);
s32 func_002900D0(s32 arg0) {
    func_0028FFD8();
    return arg0 + 0x90;
}

void func_00290560(s32 arg0, s32 arg1) {
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

void func_00290698(void) {
    func_00290560(1, 0xFFFF);
}

void func_00290E38(void) {
    func_002914C0(8, 0, 0, 0, 0);
}

void func_00290FA0(s32 arg0) {
    func_002914C0(0x5C, 0x30, arg0, 0, 0);
}

void func_00290FD0(s32 arg0, s32 arg1, s32 arg2) {
    func_002914C0(0x5C, 0x30, arg0, arg1, arg2);
}

void func_002910B8(void) {
    func_002914C0(0x18, 0, 0, 0, 0);
}

void func_00291B88(void) {
    func_00291290(0x3D, 0, 0);
}

void func_00291BC0(void) {
    func_00291290(0x3C, 0, 0);
}

void func_00291C20(void) {
    func_00291290(0x40, 0, 0);
}

void func_00291C78(void) {
    func_00291290(0x5B, 0, 0);
}


void* func_00290228(u8* s, s32 p1) { v2l buf[4]; func_0011D558(buf, p1, s+0x50); *(v2l*)(s+0x50)=buf[0]; *(v2l*)(s+0x60)=buf[1]; *(v2l*)(s+0x70)=buf[2]; *(v2l*)(s+0x80)=buf[3]; func_00290078(s); }
void func_00290E68(s32 p0) { s32 buf = p0; func_002914C0(6, 4, &buf, 0, 0); }
void func_00290E98(s32 p0, s32 p1) { s32 buf[2]; buf[0]=p0; buf[1]=p1; func_002914C0(0x9, 0x8, buf, 0, 0); }
void func_00290ED0(s32 p0) { s32 buf = p0; func_00291290(0xA, 0x4, &buf); }
void func_00290F00(s32 p0) { s32 buf = p0; func_002914C0(0xB, 0x4, &buf, 0, 0); }
void func_00290F50(s32 p0, s32 p1) { s32 buf[2]; buf[0]=p0; buf[1]=p1; func_00291290(0x1A, 8, buf); }
void func_00291000(s32 p0) { s32 buf = p0; func_002914C0(0x15, 0x4, &buf, 0, 0); }
void func_00291058(s32 p0) { s32 buf = p0; func_002914C0(0x13, 0x4, &buf, 0, 0); }
void func_00291088(s32 p0) { s32 buf = p0; func_002914C0(0x14, 0x4, &buf, 0, 0); }
void func_002910E8(s32 p0) { s32 buf = p0; func_002914C0(0x16, 0x4, &buf, 0, 0); }
void func_00291118(s32 p0) { s32 buf = p0; func_002914C0(0x17, 0x4, &buf, 0, 0); }
void func_00291148(s32 p0, s32 p1, s32 p2) { s32 buf=p0; func_002914C0(0x19, 4, &buf, p1, p2); }
void func_002911D0(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7) { s32 buf[6]; buf[0]=p0; buf[1]=p1; buf[2]=p2; buf[3]=p3; buf[4]=p4; buf[5]=p5; func_002914C0(0x21,0x18,buf,p6,p7); }
void func_00291218(s32 p0,s32 p1,s32 p2,s32 p3) { s32 buf[4]; buf[0]=p0;buf[1]=p1;buf[2]=p2;buf[3]=p3; func_002914C0(0x22,0x10,buf,0,0); }
void func_002919E8(s32 p0) { s32 buf = p0; func_00291290(0x36, 0x4, &buf); }
void func_00291B48(s32 p0,s32 p1,s32 p2,s32 p3,s32 p4,s32 p5) { s32 buf[6]; buf[0]=p0; buf[1]=p1; buf[2]=p2; buf[3]=p3; buf[4]=p4; buf[5]=p5; func_00291290(0x3B, 0x18, buf); }
void func_00291BE8(s32 p0,s32 p1,s32 p2,s32 p3,s32 p4) { s32 buf[5]; buf[0]=p0; buf[1]=p1; buf[2]=p2; buf[3]=p3; buf[4]=p4; func_00291290(0x3E, 0x14, buf); }
void func_00291C48(s32 p0, s32 p1) { s32 buf[2]; buf[0]=p0; buf[1]=p1; func_00291290(0x5A, 0x8, buf); }
void func_00291CA8(s32 p0,s32 p1,s32 p2,s32 p3,s32 p4,s32 p5,s32 p6) { s32 buf[7]; buf[0]=p0; buf[1]=p1; buf[2]=p2; buf[3]=p3; buf[4]=p4; buf[5]=p5; buf[6]=p6; func_00291290(0x4C, 0x1C, buf); }
void func_00291CE8(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6) { s32 buf[7]; buf[0]=p0; buf[1]=p1; buf[2]=p2; buf[3]=p3; buf[4]=p4; buf[5]=p5; buf[6]=p6; func_002914C0(0x4C,0x1C,buf,0,0); }
void func_00291D30(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7, u64 p8) { s32 buf[7]; buf[0]=p0; buf[1]=p1; buf[2]=p2; buf[3]=p3; buf[4]=p4; buf[5]=p5; buf[6]=p6; func_002914C0(0x4C,0x1C,(Arg3_00291D30*)buf,p7,p8); }
void func_00291D90(s32 p0,s32 p1,s32 p2,s32 p3,s32 p4,s32 p5) { s32 buf[4]; buf[0]=p0;buf[1]=p1;buf[2]=p2;buf[3]=p3; func_002914C0(0x68, p2+0xC, buf, p4, p5); }
