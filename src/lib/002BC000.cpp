// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern s32 D_00352B70;
s32 func_002BBEF0();
extern s32 D_003532F0;
extern s32 D_00353C60;
s32 func_001D2798(s32, s32);
s32 func_001D2818(s32);
extern s32 D_00353CA8;
s32 func_002BC7F0();
extern s32 D_00340BFC;
extern s32 D_00340C38;
extern s32 D_00357B08;
s32 func_002BE6E0();
s32 func_00173428(s32);

s32 **func_002BC090(s32 **arg0) {
    *arg0 = &D_00352B70;
    return arg0;
}

s32 func_002BC340(void) {
    return 0;
}

void func_002BC350(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

s32 **func_002BC378(s32 **arg0) {
    func_002BBEF0();
    *arg0 = &D_003532F0;
    return arg0;
}

void func_002BC3B0(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BC3D8(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BC468(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BC490(s32 arg0, s32 arg1)
{
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

s32 **func_002BC4B8(s32 **arg0) {
    *arg0 = &D_00353C60;
    return arg0;
}

void func_002BC4D8(s32 arg0, s32 arg1) {
    func_001D2798(arg0 + 4, 2);
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

s32 **func_002BC5A0(s32 **arg0) {
    *arg0 = &D_00353CA8;
    return arg0;
}

s32 func_002BC5B8(s32 arg0) {
    return arg0;
}

s32 func_002BC5C0(char* self)
{
    s32 v = 0;
    s32 flag = *(s32*)(self + 0x1108);
    if (flag != 0) {
        v = func_00173428(flag) != 0;
    }
    return v;
}

void func_002BC5F0(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BC618(s32 arg0, s32 arg1)
{
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

s32 func_002BC640(void* self, s32 value)
{
    return value;
}

s32 func_002BC648(void* self, s32 value) { s32 scaled = value / *(s32*)((char*)self + 0x10); return scaled == 0 ? 0 : scaled; }

s32 func_002BC668(s32 arg0, s32 arg1) {
    return arg1 << 4;
}

s32 func_002BC670(s32 arg0, s32 arg1) {
    return arg1 << 4;
}

s32 func_002BC678(s32 arg0) {
    return arg0;
}

s32 func_002BC680(s32 arg0) {
    return arg0 + 0x130;
}

s32 func_002BC6E8(s32 arg0) {
    return arg0;
}

s32 func_002BC6F0(s32 arg0) {
    return arg0 + 0x120;
}

s32 func_002BC758(s32 arg0) {
    return arg0;
}

void func_002BC7D0(void) {
    func_002BC7F0();
}

void func_002BC878(f32* out, f32 a, f32 b)
{
    out[0] = a;
    out[1] = b;
}

void func_002BC888(void* self, f32 x, f32 y)
{
    *(f32*)((char*)self + 8) = x;
    *(f32*)((char*)self + 0xC) = y;
}

void func_002BC8B0(void* self, s32 value) { *(s32*)((char*)self + 0x14) = value; }

void func_002BC8B8(void* self, s32 value)
{
    *(s32*)((char*)self + 0x18) = value;
}

void func_002BC900(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

s32 *func_002BD388(void) {
    return &D_00340BFC;
}

s32 *func_002BDDF8(void) {
    return &D_00340C38;
}

s32 **func_002BDE08(s32 **arg0) {
    *arg0 = &D_00357B08;
    return arg0;
}

void func_002BE1D8(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BE200(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

f32 func_002BE228(f32 fparg0) {
    return fparg0;
}

f32 func_002BE2E8(f32 fparg0) {
    return fparg0 * 16.0f;
}

f32 func_002BE2F8(f32 fparg0) {
    return fparg0 * 16.0f;
}

f32 func_002BE308(f32 *arg0) {
    return *arg0;
}

f32 func_002BE310(void* p)
{
    return *(f32*)((char*)p + 4);
}

f32 func_002BE318(void* p)
{
    return *(f32*)((char*)p + 8);
}

void func_002BE3A0(s32 arg0, s32 arg1) {
    (void)arg0;
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

s32 func_002BE3C8(s32 arg0) {
    return arg0 + 0x1A8;
}

s32 func_002BE3D0(s32 arg0) {
    return arg0;
}

s32 func_002BE3D8(s32 arg0) {
    return arg0 + 0x180;
}

s32 func_002BE3E0(s32 arg0) {
    return arg0 + 0xF8;
}

s32 func_002BE3E8(s32 arg0) {
    return arg0;
}

s32 func_002BE3F0(s32 arg0) {
    return arg0 + 0xD0;
}

s32 func_002BE3F8(s32 arg0) {
    return arg0 + 0xF8;
}

s32 func_002BE400(s32 arg0) {
    return arg0;
}

s32 func_002BE408(s32 arg0) {
    return arg0 + 0xD0;
}

s32 func_002BE410(s32 arg0) {
    return arg0 + 0x158;
}

s32 func_002BE418(s32 arg0) {
    return arg0;
}

s32 func_002BE420(s32 arg0) {
    return arg0 + 0x130;
}

s32 func_002BE428(s32 arg0) {
    return arg0 + 0xF8;
}

s32 func_002BE430(s32 arg0) {
    return arg0;
}

s32 func_002BE438(s32 arg0) {
    return arg0 + 0xD0;
}

s32 func_002BE440(s32 arg0) {
    return arg0 + 0x148;
}

s32 func_002BE448(s32 arg0) {
    return arg0;
}

s32 func_002BE450(s32 arg0) {
    return arg0 + 0x120;
}

s32 func_002BE458(s32 arg0) {
    return arg0 + 0x158;
}

s32 func_002BE460(s32 arg0) {
    return arg0;
}

s32 func_002BE490(s32 arg0) {
    return arg0 + 0xD0;
}

s32 func_002BE498(s32 arg0) {
    return arg0 + 0xEC;
}

void func_002BE4E0(s32 arg0, s32 arg1) {
    (void)arg0;
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BE508(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

s32 func_002BE570(void) {
    return 0;
}

void func_002BE6A0(void) {
    func_002BE6E0();
}

void func_002BE6C0(void) {
    func_002BE6E0();
}
