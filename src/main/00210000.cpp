// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0020EE28();
s32 func_00210410(s32, s32);
s32 func_001F3C80();
s32 func_0020EE58();
s32 func_002100E8(s32);
s32 func_00166548(s32);
s32 func_00169E40();
void func_002108A0(s32,s32);
void func_00210FB8(s32,s32);
void func_00212328(s32,s32);
void func_00213098(s32,s32);
s32 func_001F3BF8();
s32 func_001F4670(s32, s32);
void func_00213830(s32,s32);
s32 func_00150690(s32, s32, s32, s32);
extern s32 D_00468D24;
s32 func_0011B028(s32 *, s32);
s32 func_0023CE08();
extern s32 D_00479BEC;
s32 func_0011AF60(s32 *, s32);
s32 func_0023CEC0();
s32 func_00169BF8(s32);
s32 func_00210658(s32, s32, s32, void *);
s32 func_001A9878();
s32 func_001A99D0(void *, s32);
s32 func_0021A450(s32, void *);
s32 func_0023BBE0();
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
s32 func_00210C90(void *, s32);

extern void func_00210C08(void* a0, void* a1);
struct P104_00210BD8 { u8 x[0x104]; };
extern P104_00210BD8 D_00348068[];
struct Self_2136D8 { u8 pad[0x230]; s32 f230; s32 f234; };
struct Foo { char a[0x8]; u32 f8; char b[0x10]; void* f1C; char c[0x8]; void* f28; };
extern void func_00210D78(s32, s32, s32);
extern void func_00210C90(s32, s32);
extern void func_00169C90(void* a0, u32 a1, u32 a2);
extern u8 D_00362A50[];
extern void func_0024B330(void*, void*, s32, s32, void*, void*);
extern void func_0012BC20(void*);
extern void func_00213728(void*, s32);
Foo* func_00210658(Foo* self, u32 a1, u32 a2, void* a3) ;
void func_002136D8(Self_2136D8* self, void* list) ;
void func_00210BD8(void* a0, s32 a1);
void func_00210D58(s32 p0);
void func_00210A60(s32 p0, s32 p1);
void func_00210008(s32 arg0) {
    func_0020EE28();
    func_00210410(arg0, 0);
}

void func_00210038(s32 arg0) {
    func_001F3C80();
    func_00210410(arg0, -1);
}

void func_00210068(char *obj, void *arg)
{
    *(s32 *)(obj + 0x214) = func_00210658(func_00169BF8(0x40), (s32)arg, 0xB, obj);
}

void func_002100B8(s32 arg0) {
    func_0020EE58();
    func_002100E8(arg0);
}

void func_00210760(s32 *arg0) {
    func_00169E40();
    func_00166548(*arg0);
}

void func_002108A0(s32 arg0, s32 arg1) {
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

void func_002109D8(void) {
    func_002108A0(1, 0xFFFF);
}

void func_002109F8(void *obj, s32 first, s32 second)
{
    s32 *field;

    if (*(s32 *)((char *)obj + 8) == 0) {
        func_00210C90(obj, 1);
        field = (s32 *)((char *)obj + 4);
    } else {
        func_00210C90(obj, 3);
        field = (s32 *)((char *)obj + 4);
    }
    *(s32 *)((char *)obj + 0) = first;
    *(s32 *)((char *)obj + 4) = second;
}

void func_00210EC0(char* self)
{
    if (*(int*)(self + 0x1C) == 0) {
        *(int*)(self + 0x1C) = 1;
    }
}

void func_00210FB8(s32 arg0, s32 arg1) {
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

void func_002110F0(void) {
    func_00210FB8(1, 0xFFFF);
}

s32 *func_00211110(s32 *arg0) {
    *arg0 = 0;
    return arg0;
}

void func_00211120(void* self, u32 value) {
    u32 i = *(u32*)self;
    if (i < 0x100U) {
        *(u32*)((char*)self + (i << 2) + 4) = value;
        *(u32*)self = i + 1;
    }
}

void func_00212328(s32 arg0, s32 arg1) {
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

void func_00212460(void) {
    func_00212328(1, 0xFFFF);
}

void func_00213098(s32 arg0, s32 arg1) {
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

void func_002131D0(void) {
    func_00213098(1, 0xFFFF);
}

void func_00213220(s32 arg0) {
    func_001F3BF8();
    func_001F4670(arg0, 1);
}

void func_002133E8(void *pgoal)
{
    func_001A9878();
    func_001A99D0((char *)pgoal + 0x24C, *(s32 *)((char *)pgoal + 0x134));
}

void func_002136A0(char* self, u32 a, u32 b, u32 c)
{
    s32 n = *(s32*)(self + 0x19C);
    if ((u32)n < 12) {
        *(s32*)(self + 0x19C) = n + 1;
        u32* p = (u32*)(self + ((n * 12 + 0x1A0)));
        p[0] = a;
        p[1] = b;
        p[2] = c;
    }
}

void func_00213830(s32 arg0, s32 arg1) {
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

void func_00213968(void) {
    func_00213830(1, 0xFFFF);
}

void func_00213988(void) {
    if (D_00468D24 == 0) {
        D_00468D24 = func_00150690(0x9B, 0, 0x797, -1);
    }
}

void func_00213E20(s32 arg0) {
    func_0023CE08();
    func_0011B028(&D_00479BEC, arg0);
}

void func_00213E58(s32 arg0) {
    func_0023CEC0();
    func_0011AF60(&D_00479BEC, arg0);
}

void func_00213FD0(char *self)
{
    func_0023BBE0();
    if (*(s32 *)(self + 0x1B0) == 7 && *(s32 *)(self + 0x518) == 2) {
        func_0021A450(D_00468D24, self);
    }
}


Foo* func_00210658(Foo* self, u32 a1, u32 a2, void* a3) { func_00169C90(self, a1, a2); self->f1C = &D_00362A50; self->f8 = 0xF; *(void**)((char*)self + 0x20) = a3; return self; }
void func_00210A60(s32 p0, s32 p1) { func_00210C90(p0, 0x3); *(s32*)((u8*)(p0) + 0x20) = 0; }
void func_00210BD8(void* a0, s32 a1) { func_00210C08(a0, (void*)&D_00348068[a1]); }
void func_00210D58(s32 p0) { func_00210D78(p0, 0, 0); }
void func_002136D8(Self_2136D8* self, void* list) { s32 tmp[4]; func_0024B330(tmp, list, 6, 6, &self->f230, &self->f234); func_0012BC20(tmp); func_00213728(self, 0); }
