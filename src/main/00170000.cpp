// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
struct Target_172CE0
{
    u8 pad0[0xE0];
    s32 xe0;
};
struct Owner_172CE0
{
    u8 pad0[0x50];
    Target_172CE0* target;
};
s32 func_00170C98(s32, s32);
s32 func_00170F60(s32, s32);
s32 func_001FC968();
s32 func_00171538(s32, s32);
s32 func_001F3C80();
s32 func_001718D8(s32, s32);
f32 func_00171C98();
s32 func_00171DD8(s32, f32);
s32 func_00172328(s32, s32);
s32 func_00172480(s32, s32);
s32 func_001735B8(s32, s32);
s32 func_0011B0C0(s32 *, s32);
extern s32 D_00479C04;
s32 func_0011AF60(s32 *, s32);
s32 func_001C78A0();
extern s32 D_00479B80;
s32 func_0011B028(s32 *, s32);
s32 func_00174048(s32, s32);
s32 func_001C7938();
void *func_00170528();
s32 func_001A9878();
s32 func_001A99D0(void *, s32);
s32 func_001731B0();
s32 func_00173228(void *);
s32 func_001C9118(void *, s32);
s32 func_0028FD70();
s32 func_00170410(void *, void *, s32);
s32 func_001C8970(void *, s32, s32 *, s32);
s32 func_0023AAE8(s32, void *, s32, s32, void *);
s32 func_0023C580();
extern s32 D_00344880;

struct Res_72E60 { u8 pad0[0xC]; s32 fC; };
struct Node_72E60 { u8 pad0[0xE0]; s32 fE0; };
extern void func_001C7340(void*);
extern void func_00170F60(void*,s32);
extern void func_00239FE0(s32,s32);
extern void func_00292034(void*,s32,s32);
extern void func_001727F8(s32, s32, s32, s32);
extern void func_001F3B50();
extern void func_001C7340();
extern void func_0023AE08();
extern void func_002BAA50(void*, s32);
extern void func_002BBF40(void*, s32);
extern void func_0013BDE0(void*);
extern void func_0011E1F0(void*, void*);
extern u8 D_00479C10[];
extern s32 func_00173428(void* a);
extern s32 func_00172F48(void* a);
extern s32 func_00173068(void* a);
extern void func_00172D68(void* a, void* b, s32 c);
extern Res_72E60* func_00185720(void* a, void* b);
extern u8 D_0036C700[];
struct P_173710 { u64 x; } __attribute__((packed));
extern P_173710 D_00321150;
struct S_001731B0 {
    u8 dummy;
};
struct S_00172E60 {
    u8 pad0[0x4C];
    void* f4C;
    void* f50;
    s32 f54;
};
s32 func_001731B0(S_001731B0* self) ;
void func_00172E60(S_00172E60* self, void* arg) ;
void func_001738F0(u8* self) ;
void func_00172878(s32 p0, s32 p1, s32 p2);
void func_00171050(u8* s);
void func_00173710(u8* self);
void func_00171108(s32 p0);
void func_00171A30(u8* a);
void func_001728C8(s32 p0, s32 p1, s32 p2);
void func_001725D8(s32 p0);
void func_00172850(s32 p0, s32 p1);
void func_001728A0(s32 p0, s32 p1);
void func_00170DF0(s32 p0);
void func_00170118(void *self, void *other, void *arg)
{
    if (other != 0) {
        if (other != *(void **)((char *)self + 0xD0)) {
            if (func_00170528() == 0) {
                u32 n = *(u32 *)((char *)self + 0xD8);
                if (n < 32) {
                    *(u32 *)((char *)self + 0xD8) = n + 1;
                    u32 *entry = (u32 *)((char *)self + ((n * 0x14) + 0xDC));
                    entry[0] = (u32)other;
                    entry[1] = (u32)arg;
                    func_00170410(self, entry, 0);
                }
            }
        }
    }
}

s32 func_00170500(void)
{
    void *p = func_00170528();
    if (p != 0) {
        return *(s32 *)((char *)p + 8);
    }
    return -1;
}

void func_00170DD0(void) {
    func_00170C98(1, 0xFFFF);
}

void func_00170E20(char *self)
{
    s32 v = func_0023C580();
    func_001C8970(self, 2, &D_00344880, 0);
    *(s32 *)(self + 0x144) = 0;
    func_0023AAE8(*(s32 *)(self + 0x138), self, 0x73D, 0, self + 0x13C);
    s32 flags = *(s32 *)(self + 0x3C);
    if ((flags ^ 1) & 1) {
        *(s32 *)flags = *(s32 *)flags | 2;
    } else {
        *(s32 *)(self + 0x3C) = flags | 2;
    }
}

void func_00170EA0(s32 arg0) {
    func_001FC968();
    func_00170F60(arg0, -1);
    func_00170F60(arg0, 3);
}

s32 func_001710E0(char* self)
{
    s32 r = 0;
    if (*(s32*)(self + 0x130) == 3) {
        r = *(s32*)(self + 0x140) == *(s32*)(self + 0x144);
    }
    return r;
}

void func_00171188(s32 arg0) {
    func_001F3C80();
    func_00171538(arg0, -1);
}

void func_00171508(void *obj)
{
    func_001A9878();
    func_001A99D0((char *)obj + 0x1D4, *(s32 *)((char *)obj + 0x134));
}

void func_00171718(void* self, s32 value) { u32 i = *(u32*)((char*)self + 0x1A4); if (i < 6U) { *(u32*)((char*)self + (i << 2) + 0x1A8) = value; *(u32*)((char*)self + 0x1A4) = i + 1; } }

void func_00171A10(void) {
    func_001718D8(1, 0xFFFF);
}

void func_00171A50(void* self)
{
    *(int*)((char*)self + 8) = 0;
}

void func_00171D98(s32 arg0, f32 fparg0) {
    func_00171DD8(arg0, func_00171C98() + fparg0);
}

void func_00172460(void) {
    func_00172328(1, 0xFFFF);
}

void func_001725B8(void) {
    func_00172480(1, 0xFFFF);
}

s32 func_00172CC8(void* self)
{
    s32* p = *(s32**)((char*)self + 0x58);
    s32 r = -1;
    if (p != 0)
        r = *(s32*)((char*)p + 0xE0);
    return r;
}

s32 func_00172CE0(Owner_172CE0* self)
{
    s32 result = -1;
    Target_172CE0* target = self->target;
    if (target)
        result = target->xe0;
    return result;
}

s32 func_00172CF8(char* self) { s32 r = -1; if (*(s32*)(self + 0x50)) r = *(s32*)(*(char**)(self + 0x50) + 0xEC); return r; }

s32 func_00173428(char* self)
{
    s32 one = 0;
    if (*(s32*)(self + 0x50) != 0) {
        one = *(s32*)(self + 0x64) == 0;
    }
    return one;
}

void func_00173448(char *self)
{
    if (++*(s32 *)(self + 0x64) == 1) {
        if (func_001731B0() != 0) {
            func_00173228(self);
        }
    }
}

void func_00173498(void *obj)
{
    s32 count = *(s32 *)((char *)obj + 0x64) - 1;
    *(s32 *)((char *)obj + 0x64) = count;
    if (count == 0) {
        if (func_001731B0() != 0) {
            func_00173228(obj);
        }
    }
}

void func_001736F0(void) {
    func_001735B8(1, 0xFFFF);
}

void func_001738E0(void* self)
{
    s32 n = *(s32*)((char*)self + 0x10);
    *(s32*)((char*)self + 0x10) = n + 1;
}

s32 func_00173A98(s32 arg0) {
    return func_0011B0C0(&D_00479C04, arg0) == 0;
}

void func_00173F30(char *self)
{
    func_0028FD70();
    s32 flags = func_001C9118(self, 0);
    s32 bit = *(s32 *)(self + 0x3C);
    if ((bit ^ 1) & 1) {
        *(s32 *)bit |= 2;
        return;
    }
    *(s32 *)(self + 0x3C) = bit | 2;
}

void func_00173F88(s32 arg0) {
    func_001C78A0();
    func_0011AF60(&D_00479B80, arg0);
}

void func_00173FC0(s32 arg0) {
    func_001C7938();
    func_00174048(arg0, 1);
    func_0011B028(&D_00479B80, arg0);
}


void func_00170DF0(s32 p0) { func_0023AE08(); *(s32*)((u8*)(p0) + 0x130) = -0x1; }
void func_00171050(u8* s) { extern s32 D_003210E4; s32 g = D_003210E4; *(s32*)(s+0x144)=0; func_00239FE0(*(s32*)(s+0x13C), g); func_00170F60(s, 3); }
void func_00171108(s32 p0) { func_001F3B50(); *(s32*)((u8*)(p0) + 0x190) = -0x1; *(s32*)((u8*)(p0) + 0x198) = -0x1; }
void func_00171A30(u8* a) { func_00292034(a, 0, 0x18); }
void func_001725D8(s32 p0) { func_001C7340(); *(s32*)((u8*)(p0) + 0x48) = -0x1; }
void func_00172850(s32 p0, s32 p1) { func_001727F8(p0, 0, p1, -0x1); }
void func_00172878(s32 p0, s32 p1, s32 p2) { func_001727F8(p0, 0x2, p1, p2); }
void func_001728A0(s32 p0, s32 p1) { func_001727F8(p0, 0x1, p1, -0x1); }
void func_001728C8(s32 p0, s32 p1, s32 p2) { func_001727F8(p0, 0x3, p1, p2); }
void func_00172E60(S_00172E60* self, void* arg) { if (arg == self->f50) return; s32 s2 = -1; s32 s4 = func_00172F48(self); s32 s3 = func_00173068(self); func_00172D68(self, self->f50, 1); self->f50 = arg; self->f54 = 0; func_00172D68(self, arg, 0); void* p = self->f50; if (p) { s32 v1 = ((Node_72E60*)p)->fE0; if ((v1 ^ 0x75C) != 0) s2 = v1; } Res_72E60* r = func_00185720(D_0036C700, self->f4C); r->fC = s2; s32 v0 = func_00173428(self); if ((s4 && !v0) || (s3 && v0)) func_00173228(self); }
s32 func_001731B0(S_001731B0* self) { s32 a = func_00172F48(self); s32 c = func_00173068(self); s32 b = func_00173428(self); return (a && !b) || (c && b); }
void func_00173710(u8* self) { func_001C7340(self); *(f32*)(self + 0x44) = 1500.0f; *(P_173710*)(self + 0x48) = D_00321150; *(f32*)(self + 0x50) = 0.25f; *(s32*)(self + 0x3C) |= 0x80; }
void func_001738F0(u8* self) { s32 v = *(s32*)(self + 0x10) - 1; *(s32*)(self + 0x10) = v; if (v > 0) return; func_002BAA50(self, 0); func_002BBF40(self + 4, 0); func_0013BDE0(self); func_0011E1F0(D_00479C10, self); }
