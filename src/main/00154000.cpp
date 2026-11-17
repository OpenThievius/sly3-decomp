// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0013ABC8(s32, s32);
s32 func_001C12B0(s32);
s32 func_0024E370();
s32 func_001C4018(s32);
s32 func_001F4830();
s32 func_00156690();
s32 func_00156B00(s32);
s32 func_001F4D28();
s32 func_00156E60(s32, s32);
s32 func_001573B0(s32, s32);
s32 func_001B40F0(void *, s32, s32, s32);
s32 func_0013B500(s32, s32);
void *func_002387A8(s32, s32);
s32 func_00155E30(s32, s32);
void *func_00185720(s32 *, s32);
extern s32 D_0036C700;
s32 func_00156900(void *);
s32 func_001BDBB0(void *, s32);
s32 func_0024F7C8();
s32 func_00208A08(s32, s32, s32);
s32 func_0023E178();
s32 func_00272FB0(s32, s32, s32);
s32 func_0024E3A8();
s32 func_00238970();
s32 func_00157688(void *, s32);
s32 func_00157950(s32);
s32 func_002389A0();
s32 func_00157800();
s32 func_001F43C8(s32);
s32 func_001F43D0(s32, s32);
s32 func_001F4430(s32);
s32 func_001F4438(s32, s32);
s32 func_001F48A0();
s32 func_00240E58(void *, s32, s32);
s32 func_00154EF0(void *, s32, s32, s32);
s32 func_001F1E18(s32);

s32 func_00154330(s32 value)
{
    if (value < 0x29) {
        if (value >= 0x26) {
            return 1;
        }
    }
    return 0;
}

void func_001545A8(char *self, s32 kind)
{
    if (kind != 0x14) {
        if (kind == 0x16) {
            *(s32 *)(self + 0x9FC) = kind;
            func_001B40F0(self + 0x500, 0xB, 0, 0);
        }
        return;
    }
    *(s32 *)(self + 0x9FC) = kind;
    func_001B40F0(self + 0x500, 0xB, 0, 0);
}

void func_001546B0(void) {

}

void func_00154750(void) {

}

s32 func_00154ED0(void* self)
{
    return *(s32*)((char*)self + 0x1294) == -1;
}

s32 func_00154EE0(void* p)
{
	return *(s32*)((char*)p + 0x508) != 9;
}

s32 func_00154F40(char* self)
{
    return *(s32*)(self + 0x508) != 0xC;
}

void func_00155308(void* pobject)
{
    *(int*)((char*)pobject + 0x11D8) = 0;
}

void func_00155310(void* self, s32 value)
{
    *(s32*)((char*)self + 0x1218) = value;
    *(float*)((char*)self + 0x121C) = 3.4028234663852886e+38f;
}

void func_00155CE0(s32 arg0) {
    func_0013ABC8(arg0 + 0x10D0, -1);
}

void func_00155D00(char *self)
{
    s32 a0 = *(s32 *)(self + 0x11B4);
    if (a0 != 0) {
        if (func_0013B500(a0, 0x3A) != 0) {
            void *obj = func_002387A8((s32)*(char **)(self + 0x11B4) + 0x29C, 0xDA);
            if (obj != 0) {
                if (*(char **)((char *)obj + 0x5C) == self) {
                    *(s32 *)((char *)obj + 0x60) = 0;
                }
            }
        }
    }
}

void func_001561B0(s32 arg0) {
    func_00155E30(arg0, *(s32 *)((char *)func_00185720(&D_0036C700, arg0) + 8));
}

void func_00156438(s32 arg0) {
    func_0024E370();
    func_001C12B0(arg0 + 0xA20);
}

s32 func_00156700(void* p)
{
    s32 r = 0;
    if (*(s32*)((char*)p + 0x2a0) > 0 || *(s32*)((char*)p + 0x115c) != 0) r = 1;
    return r;
}

s32 func_00156728(s32 arg0) {
    if (func_001F4830() == 0) {
        return 0;
    }
    return func_001C4018(arg0 + 0xE40) != 2;
}

void func_001567E8(s32 arg0, s32 arg1, s32 arg2) {
    func_001F48A0();
    func_001F43D0(arg0, func_001F43C8(arg0) + arg1);
    func_001F4438(arg0, func_001F4430(arg0) + arg2);
}

void func_00156850(char *self, s32 arg1, void *arg2) {
    s32 temp_v0 = func_0024F7C8();
    if (arg2 != 0) {
        s32 count = *(s32 *)(self + 0x13EC) + 1;
        *(s32 *)(self + 0x13EC) = count;
        if (count == 1) {
            func_00156900(self);
            func_001BDBB0(self + 0xF60, -1);
        }
    }
}

void func_00156928(void) {
    func_00156690();
}

s32 func_00156948(s32 arg0, s32 arg1)
{
    s32 temp_v0 = func_0023E178();
    s32 temp_v1 = func_00272FB0(arg0 + 0x1290, arg1, temp_v0);
    return func_00208A08(arg0 + 0x940, arg1, temp_v1);
}

s32 func_00156998(void* p)
{
    u32 v = *(u32*)((char*)p + 0xf64);
    return v < 3U;
}

s32 func_001569A8(void* p)
{
    return *(s32*)((char*)p + 0xF78) == 0;
}

s32 func_001569B8(char* self)
{
    return *(s32*)(self + 0xF78) == 1;
}

s32 func_001569C8(void* p)
{
    return *(s32*)((char*)p + 0xF78) == 2;
}

void func_001569D8(void* self)
{
    func_0024E3A8();
    *(f32*)((char*)self + 0x110C) = *(f32*)((char*)self + 0x1BC);
}

void func_00156A08(char *self, s32 value)
{
    *(s32 *)(self + 0x1444) = value;
    if (value != 0) {
        func_00240E58(self, 0x3FFFFFF, 2);
    } else {
        func_00240E58(self, 0x3FFFFFF, 0);
        func_00240E58(self, 0x10FF00, 2);
    }
}

s32 func_00156AB0(char* self)
{
    s32* p = *(s32**)(self + 0x1140);
    if (p != 0) {
        return p[0x30 / 4];
    }
    return *(s32*)(self + 0x113C);
}

void func_00156AD0(s32 arg0) {
    func_001F4D28();
    func_00156B00(arg0);
}

void func_00156DC0(char *self)
{
    s32 temp_v0;

    void *owner = *(void **)(self + 0x11B4);
    if (owner != 0) {
        temp_v0 = func_001F1E18((s32)owner);
        if (temp_v0 != 0) {
            if (func_0013B500(temp_v0, 0x67) == 0) {
                if (func_0013B500(temp_v0, 0x69) == 0) {
                    s32 s0 = temp_v0;
                    if (*(s32 *)(self + 0x145C) != 0) {
                        *(s32 *)(self + 0x1458) = s0;
                        func_00154EF0(self, *(s32 *)(self + 0x145C), s0, -1);
                    }
                }
            }
        }
    }
}

void func_00156E48(void* self, f32 value)
{
    f32* p = (f32*)((char*)self + 0x440);
    p[0] = value;
    p[1] = value;
    p[2] = 0.0f;
}

void func_00156F98(void) {
    func_00156E60(1, 0xFFFF);
}

void func_00156FB8(void* self, s32 value)
{
    *(s32*)((char*)self + 0) = value;
    *(float*)((char*)self + 4) = 1.0f;
}

s32 func_00157398(void* p)
{
    return *(s32*)((char*)p + 0x28);
}

void func_001573A0(void* self)
{
    *(float*)((char*)self + 0x24) = 3.4028235e+38f;
}

void func_001574E8(void) {
    func_001573B0(1, 0xFFFF);
}

void func_00157508(void* self)
{
    func_00238970();
    *(float*)((char*)self + 0x38) = -1.0f;
}

void func_00157648(char *self)
{
    s32 id = func_002389A0();
    if (func_00157950(*(s32 *)(self + 0x18)) != 0) {
        func_00157688(self, 0);
    }
}

s32 func_001577C0(char* self)
{
    if (func_00157800() == 0) return 0;
    return func_00157950(*(s32*)(self + 0x18));
}

void func_00157A80(char *self, s32 value)
{
    *(s32 *)(self + 0x50) = value == 0;
    if (*(s32 *)(self + 0x18) != 0) {
        *(s32 *)(*(char **)(self + 0x18) + 0xA0) = value == 0;
    }
}
