// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
s32 func_0023AE08();
s32 func_00240E58(s32, s32, s32);
s32 func_0011B028(s32 *, s32);
s32 func_0023CE08();
extern s32 D_00479B68;
s32 func_0011AF60(s32 *, s32);
s32 func_0023CEC0();
s32 func_001E5FC8();
void func_001E60A8(s32,s32);
s32 func_001C78A0();
extern s32 D_0047A26C;
void *func_001E5F60(s32, s32);
s32 func_0023FE38(s32, s32);
s32 func_00240000(s32, s32);
s32 func_0023FEC0(s32, s32);
s32 func_00240080(s32, s32);
s32 func_001EE220(s32, void *);
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

struct Self_1E7EF0 { u8 pad[0x1C8]; void* f1C8; };
extern void func_001E73D8(void*);
extern s32 func_0011B0C0(void*,void*);
extern void* func_001E5F60(void*,s32);
extern void func_0011AF60(void*,void*);
extern void func_0011B028(void*,void*);
extern void* func_001D2538(s32* a);
extern void func_0022D780(void*);
extern void* func_001D25B0(void*);
void func_001E5D30(u8* a, u8* b) ;
void func_001E5E10(u8* a, s32 b) ;
void func_001E5EF8(u8* a, u8* b, u8* c) ;
void func_001E6238(u8* s) ;
void func_001E7EF0(Self_1E7EF0* self, void* item);
void func_001E5D00(u8* a, u8* b);
void func_001E5CD0(u8* a, u8* b);
void func_001E5C10(u8* a, u8* b);
void func_001E5CA0(u8* a, u8* b);
void func_001E5C40(u8* a, u8* b);
void func_001E5C70(u8* a, u8* b);
void func_001E4B10(s32 arg0, s32 arg1) {
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

void func_001E4C48(void) {
    func_001E4B10(1, 0xFFFF);
}

void func_001E4C68(s32 arg0) {
    func_0023AE08();
    func_00240E58(arg0, 0x03FFFFFF, 2);
    func_00240E58(arg0, 0x88001, 0);
}

void func_001E4E78(s32 arg0) {
    func_0023CE08();
    func_0011B028(&D_00479B68, arg0);
}

void func_001E4EB0(s32 arg0) {
    func_0023CEC0();
    func_0011AF60(&D_00479B68, arg0);
}

void func_001E5D60(s32 arg0, s32 arg1)
{
    if (func_001E5FC8() == 0) {
        func_0023FE38(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 2) + 4) = arg1;
}

void func_001E5DB8(s32 arg0, s32 arg1) {
    if (func_001E5FC8() == 0) {
        func_00240000(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 4) + 4) = arg1;
}

void func_001E5E48(s32 arg0, s32 arg1) {
    if (func_001E5FC8() == 0) {
        func_0023FEC0(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 3) + 4) = arg1;
}

void func_001E5EA0(s32 arg0, s32 arg1)
{
    if (func_001E5FC8() == 0) {
        func_00240080(arg0, arg1);
        return;
    }
    *(s32 *)((char *)func_001E5F60(arg0, 5) + 4) = arg1;
}

s32 func_001E5FF8(void) {
    return func_001E5FC8() == 0;
}

s32 func_001E6018(char* self)
{
    if (func_001E5FC8() == 0) {
        return 0;
    }
    return *(s32*)(self + 0x144) + (*(s32*)(self + 0x13C) * 0x10);
}

void func_001E60A8(s32 arg0, s32 arg1) {
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

void func_001E61E0(void) {
    func_001E60A8(1, 0xFFFF);
}

void func_001E6310(s32 arg0) {
    func_001C78A0();
    func_0011AF60(&D_0047A26C, arg0);
}

void func_001E73D8(char *self) {
    s32 target = *(s32 *)(self + 0x1CC);
    if (target != 0) {
        func_001EE220(target, self);
        *(s32 *)(self + 0x1CC) = 0;
    }
}


void func_001E5C10(u8* a, u8* b) { void* p = func_001E5F60(a, 6); *(void**)((u8*)p+4) = b; }
void func_001E5C40(u8* a, u8* b) { void* p = func_001E5F60(a, 0x7); *(void**)((u8*)p+0x4) = b; }
void func_001E5C70(u8* a, u8* b) { void* p = func_001E5F60(a, 0x8); *(void**)((u8*)p+0x4) = b; }
void func_001E5CA0(u8* a, u8* b) { void* p = func_001E5F60(a, 0x9); *(void**)((u8*)p+0x4) = b; }
void func_001E5CD0(u8* a, u8* b) { void* p = func_001E5F60(a, 0xA); *(void**)((u8*)p+0x4) = b; }
void func_001E5D00(u8* a, u8* b) { void* p = func_001E5F60(a, 0xB); *(void**)((u8*)p+0x4) = b; }
void func_001E5D30(u8* a, u8* b) { void* p = func_001E5F60(a, 0); *(void**)((u8*)p+4) = b; }
void func_001E5E10(u8* a, s32 b) { if (b == -1) b = *(s32*)(a + 0x18); void* p = func_001E5F60(a, 1); *(s32*)((u8*)p+4) = b; }
void func_001E5EF8(u8* a, u8* b, u8* c) { void* p = func_001E5F60(a, 0xC); s32 local[2]; local[0] = 0x8; local[1] = 0x10; void* q = func_001D25B0(local); *(void**)((u8*)p+4) = q; *(void**)q = b; *(void**)((u8*)*(void**)((u8*)p+4)+4) = c; }
void func_001E6238(u8* s) { func_0022D780(s); s32 v = (*(s32*)(s+0xD8) << 4) - 0x10; s32 local[2]; local[1]=0x10; local[0]=v; void* p = func_001D2538(local); *(void**)(s+0x1DC) = p; }
void func_001E7EF0(Self_1E7EF0* self, void* item) { self->f1C8 = item; func_0011AF60((char*)item + 0x1B4, self); func_001E73D8(self); void* list = &D_0047A26C; if (func_0011B0C0(list, self) != 0) func_0011B028(list, self); }
