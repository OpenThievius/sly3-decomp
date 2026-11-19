// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001C8BF0();
s32 func_002643C8();
extern f32 D_0036BBD8;
s32 func_00262128(s32 *, s32);
extern s32 D_00475480;
s32 func_00260F18(void *, s32, s32, s32);
s32 func_00263028(void *, void *, s32);
s32 func_0011AF60(s32 *, void *);
s32 func_0011B028(s32 *, void *);
s32 func_0011B0C0(s32 *, void *);
extern s32 D_0047979C;

void func_00260270(void* self, s32 value)
{
    u32 i = *(u32*)((char*)self + 0x120);
    if (i < 16) {
        *(s32*)((char*)self + (i << 3) + 0x124) = value;
        *(u32*)((char*)self + 0x120) = i + 1;
    }
}

void func_00260298(void* self, s32 value) { u32 i = *(u32*)((char*)self + 0x1a4); if (i < 0x20) { *(u32*)((char*)self + (i << 3) + 0x1a8) = value; *(u32*)((char*)self + 0x1a4) = i + 1; } }

s32 func_00260558(char* self, s32 kind)
{
    switch (kind) {
    case 0x360: return (s32)(self + 0x2A8);
    case 0x361: return (s32)(self + 0x2AC);
    case 0x362: return (s32)(self + 0x2B0);
    }
    return func_002643C8();
}

s32 func_00260640(char* self, s32 kind)
{
    switch (kind) {
    case 0x360: return (s32)(self + 0x128);
    case 0x361: return (s32)(self + 0x12C);
    case 0x362: return (s32)(self + 0x130);
    }
    return func_002643C8();
}

s32 func_00260738(const char* self) { s32 answer = 0; if (*(s32*)(self + 0x48) < 2) { answer = *(s32*)(self + 0x54) < 2; } return answer; }

void func_00260E30(char *self)
{
    s32 r0 = func_00263028(self, *(void **)(self + 0x74), 0x376);
    s32 flag = r0 != 0 ? 0x376 : -1;
    s32 r1 = func_00263028(self, *(void **)(self + 0x74), 0x377);
    s32 flag2 = r1 != 0 ? 0x377 : 0x37B;
    s32 r2 = func_00263028(self, *(void **)(self + 0x74), 0x378);
    s32 flag3 = r2 != 0 ? 0x378 : -1;
    func_00260F18(self, flag, flag2, flag3);
}

void func_00261030(char* self)
{
    if (*(int*)(self + 0x48) == 2) {
        *(f32*)(self + 0x4C) = D_0036BBD8;
    }
}

void func_00261050(void* self, s32 value)
{
    if (*(s32*)((char*)self + 0x54) != value) {
        *(s32*)((char*)self + 0x54) = value;
        *(f32*)((char*)self + 0x58) = D_0036BBD8;
    }
}

void func_00261508(void) {
    func_001C8BF0();
}

s32 func_00261BD0(char *self)
{
    if (*(s32 *)(self + 0x6C) == -1) {
        return 0;
    }
    return func_00262128(&D_00475480, *(s32 *)(self + 0x94)) == 0;
}

void func_00263080(char *self, char *other)
{
    s32 mode = *(s32 *)(self + 0x98);
    if (mode == (s32)other) return;
    if (mode == 0) {
        if (func_0011B0C0(&D_0047979C, self)) {
            func_0011B028(&D_0047979C, self);
        }
    }
    *(s32 *)(self + 0x98) = (s32)other;
    if (other == 0) {
        if (func_0011B0C0(&D_0047979C, (char *)self)) {
            return;
        }
        func_0011AF60(&D_0047979C, self);
    }
}

struct Self_260D78 { u8 pad[0xBC]; s32 fBC; };

struct Self_263080 { u8 pad[0x98]; void* f98; };

extern u8 D_0000C0[];

extern void func_0024B330(void*, void*, s32, s32, void*, void*);

extern void func_0012BC20(void*);

extern void func_001748F8(void* self);

extern void func_001746C0(void* self);

extern void func_0027E260(void* self, void* a1);

extern void func_0027E2A8(void* self);

extern void func_0027E660(void* self, s32 a1, s32 a2, s32 a3);

extern u8 D_004BB1F0[];

extern void func_00182D60(void* self, void* a1, void* a2);

extern void func_0027E4C0(void* self, s32 a1, s32 a2, void* a3, s32 a4);

extern void func_0027E228(void* self, s32 a1, s32 a2);

extern void func_001747A0(void* self, void* a1);

extern u32 D_004BADB0;

extern u8 D_002C1420[];

extern u8 D_002C1CF0[];

extern u8 D_0036E340[];

extern u8 D_004BAD10[];

extern u8 D_004BB0B0[];

extern u8 D_004BB0D0[];

extern u8 D_004BB0F0[];

extern u8 D_004BB120[];

extern u8 D_004BB1A0[];

extern u8 D_004BB160[];

extern u8 D_004BADC0[];

extern u8 D_00000100[];

void func_00260020(s32, s32, void* self) ;

void func_002601B8(s32, s32, void* self) ;

void func_00260D78(Self_260D78* self, void* list) ;

void* func_00260558(u8* a, s32 id) ;

void* func_00260640(u8* a, s32 id) ;

void func_00260020(s32, s32, void* self) { func_00182D60(self, D_002C1420, D_002C1CF0); func_001746C0(self); func_0027E2A8(self); func_001747A0(self, D_0036E340); func_0027E228(self, 0, 0); func_0027E4C0(self, 0xC, 7, D_004BAD10, 0xF); func_0027E4C0(self, 0xC, 2, D_004BB0B0, 0x17); func_0027E4C0(self, 0xC, 2, D_004BB0D0, 0x19); func_0027E4C0(self, 0xC, 3, D_004BB0F0, 0x1B); func_0027E4C0(self, 0xC, 4, D_004BB120, 0x1E); func_0027E4C0(self, 0xC, 3, D_004BB1A0, 0x22); func_0027E4C0(self, 0xC, 4, D_004BB160, 0x25); func_0027E228(self, 0x34, 0x1E6); func_0027E260(self, D_0000C0); func_0027E2A8(self); func_0027E660(self, (s32)D_004BADB0, (s32)D_004BADC0, 0); func_0027E2A8(self); func_0027E260(self, D_00000100); func_0027E2A8(self); func_001748F8(self); }

void func_002601B8(s32, s32, void* self) { func_001746C0(self); func_0027E2A8(self); func_0027E660(self, 2, (s32)D_004BB1F0, 0); func_0027E260(self, D_0000C0); func_0027E2A8(self); func_001748F8(self); }

void func_00260D78(Self_260D78* self, void* list) { s32 tmp[5]; func_0024B330(tmp, list, 0x10, 0xA, &tmp[4], &self->fBC); func_0012BC20(tmp); void* object = *(void**)((u8*)self + 0xC); s32 offset = *(s16*)((u8*)object + 0x1C0); object = *(void**)((u8*)object + 0x1C4); ((void (*)(void*))object)((u8*)self + offset); }
