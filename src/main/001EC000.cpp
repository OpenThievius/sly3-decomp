// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001EB4C8(s32);
s32 func_001ECBB8(s32);
s32 func_001EB7A0(s32);
s32 func_001EBCD0(s32);
void func_001EF6E0(s32,s32);
void func_001EFD00(s32,s32);
s32 func_00152448();
s32 func_001C8970(s32, s32, s32 *, s32);
extern s32 D_003468A0;
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
s32 func_00152488();
s32 func_00155190(void *, s32);
s32 func_001C1410(void *, void *, void *);
s32 func_0023DDA0(void *, s32, s32);
s32 func_00258958(s32);

s32 func_001ED170(s32 arg0) {
    return func_001EB4C8(arg0 + 0xD0) != 0;
}

void func_001ED190(s32 arg0) {
    func_001ECBB8(arg0 + 0xD0);
}

void func_001ED1B0(s32 arg0) {
    func_001EB7A0(arg0 + 0xD0);
}

void func_001ED1D0(s32 arg0) {
    func_001EBCD0(arg0 + 0xD0);
}

f32 func_001EF588(char* self) { return *(f32*)(self + ((*(int*)(self + 0x30) - 1) << 2) + 0x240); }

s32 func_001EF5A0(void* p)
{
    s32 v = *(s32*)((char*)p + 0x288) + 1;
    *(s32*)((char*)p + 0x288) = v;
    return v;
}

void func_001EF6E0(s32 arg0, s32 arg1) {
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

void func_001EF818(void) {
    func_001EF6E0(1, 0xFFFF);
}

void func_001EFD00(s32 arg0, s32 arg1) {
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

void func_001EFE38(void) {
    func_001EFD00(1, 0xFFFF);
}

void func_001EFF30(s32 arg0) {
    func_00152448();
    func_001C8970(arg0, 0x35, &D_003468A0, 0);
}

void func_001EFF70(char *self)
{
    func_00152488();
    func_00258958(0x1480 + (s32)self);
    func_00258958(0x1530 + (s32)self);
    func_00155190(self, 0x2E);
    *(s32 *)(self + 0x1190) = func_0023DDA0(self, 0x22, 1);
    func_001C1410(self, self + 0x15F0, self + 0x16F0);
}

struct S_1EE9 { void* f0; void* f4; char pad[0x18]; };

extern void func_00238970(void*);

extern void func_00252E40(void*, s32);

extern f32 D_00324E60;

extern u8 D_00475480[];

extern void func_001C7340();

extern f32 D_003212DC;

extern s32 func_0013B500(void* a0, s32 a1);

extern void func_001F48F8(void* a0);

extern s32 func_001F4430(void* a0);

extern void func_001F4438(void* a0, s32 a1);

extern s32 func_001F43C8(void* a0);

extern s32 func_001F43D0(void* a0, s32 a1);

extern s32 func_0023E178(void* a0, void* a1);

extern void func_001F4A80(void* a0);

extern void func_00165B28(void* a0);

extern s32 func_0025CDD0(void* a0, void* a1);

extern s32 func_0025CEC8(void* a0, void* a1);

extern s32 func_0013CD00(s32 a0, s32 a1);

extern void func_002BAA50(void*, s32);

extern void func_002BBF40(void*, s32);

extern void func_0013BDE0(void*);

extern void func_0011E1F0(void*, void*);

extern u8 D_004799A0[];

extern void func_002BA960(void*, s32);

extern void func_002BEB58(void*, s32);

extern u8 D_00479C44[];

extern u8 D_00479C5C[];

extern void func_002BC7F0(void*, s32);

extern u8 D_00479C74[];

extern void func_0012BC20(void*);

extern void func_002B4E48(void*);

extern void func_002BA8F8(void*, s32);

extern void func_002B3B90(void*);

extern void func_002BACE0(void*, s32);

extern void func_002BAD40(void*, s32);

extern void func_002B4308(void*);

extern void func_002B4A88(void*);

extern u8 D_00479C10[];

extern u8 D_00479D44[];

extern u8 D_00479A14[];

extern u8 D_0047A418[];

extern void func_0011B028(void*, void*);

extern void func_0015AD18(void*, void*);

extern void func_002BADA0(void*, s32);

extern void func_002B3F48(void*);

extern void* func_001D2538(s32* a);

extern void* func_001190A8(void*);

extern void func_001ED820(void*, void*, void*);

extern void func_001C78A0(void*);

void func_001EE930(u8* s) ;

void func_001ED7B0(u8* s2, u8* a1) ;

void func_001EE9A0(void* a0, void* a1) ;

void func_001EF5B0(u8* self) ;

void func_001ED7B0(u8* s2, u8* a1) { void* p = func_001190A8(a1); if (p) { s32 local[2]; local[0]=0x30; local[1]=0x10; void* q = func_001D2538(local); *(void**)(s2+0x4DFC)=q; func_001ED820(q,p,a1); } }

void func_001EE900(s32 p0) { func_001C7340(); *(s32*)((u8*)(p0) + 0x110) = -0x1; *(s32*)((u8*)(p0) + 0x140) = -0x1; }

void func_001EE930(u8* s) { func_001C78A0(s); u8* base = D_00475480; s32 v = *(s32*)(base + 0x4510); u8* p = *(u8**)(base + 0x4DFC); v = v + 1; *(s32*)(base + 0x4510) = v; *(s32*)(p + 0x28) = v; }

void func_001EE9A0(void* a0, void* a1) { u32 idx = *(u32*)((char*)a0 + 0x40); if (idx >= 6) return; struct S_1EE9* s = &((struct S_1EE9*)((char*)a0 + 0x50))[idx]; *(u32*)((char*)a0 + 0x40) = idx + 1; if (func_0013B500(a1, 0x9) != 0) { s->f0 = a1; } else { s->f4 = a1; } }

void func_001EF5B0(u8* self) { s32 v = *(s32*)(self + 0x288) - 1; *(s32*)(self + 0x288) = v; if (v > 0) return; u8* base = D_0047A418; func_0011B028(base, self); func_0011E1F0(base - 0x18, self); }
