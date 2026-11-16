// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void func_0013BC80(void*);
extern void func_0013BCC0(void*);
extern void* func_0012AF00(void*, void*);
extern void func_001C8FB0(void*, s32);
extern void func_001C7EB0(void*);
extern void func_00241A98(void*);
extern void func_0023FE38(void*, s32);
extern void func_0023FEC0(void*, s32);
extern void func_0023FF30(void*);
extern void func_00240000(void*, s32);
extern void func_00240080(void*, s32);
extern s32 func_00240E10(void*, s32);
extern void func_00240DB0(void*);
extern void func_002412C8(void*, f32);
extern void func_00241338(void*, f32);
extern void* func_0012B270(void*, s32);
extern s32 func_002419F0(void*, s32);
extern s32 func_0023FAE8(void*, s32);
extern s32 func_0023FB68(void*, s32);
extern s32 func_00241EA8(void*, s32);
extern void* func_0012B768(void*, s32);
extern void func_0014B7A8(void*);
extern void func_0014B7D8(void*);
extern f32 func_001368E0(void*, s32);
extern void* func_0012B2B0(void*, f32);
extern s32 func_00138BA8(void*, s32);
extern void func_00137B00(void*);
extern void func_0028F978(void*, s32);
extern void func_00244C28(void*);
extern void func_00244C70(void*);
extern void func_00244CA8(void*, f32);
extern void func_00248740(void*);
extern s32 func_00248858(void*, s32);
extern f32 func_00246E40(void*, s32);
extern void func_00248EC0(void*);
extern void func_00248ED0(void*);
extern void func_00248EE0(void*);
extern void func_00248EF0(void*);
extern s32 func_00248130(void*, s32);
extern s32 func_002482F0(void*, s32);
extern f32 func_002483D8(void*);
extern void func_00248A10(void*, f32);
extern void func_00167D38(void*, s32);
extern void func_00166548(void*);
extern s32 func_001C8F20(void*, s32);
extern s32 func_001C8768(void*, s32);
extern void* func_0012B2F0(void*, s32);
extern void func_0013B808(void*, s32);
extern s32 func_002387A8(void*, s32);
extern void func_00256720(void*, s32);
extern void func_00256758(void*, s32);
extern void func_00256818(void*);
extern void func_00254288(void*, s32);
extern void func_00274660(void*);

struct Temp_100A00
{
    u8 pad0[0x10];
    s32 value;
    s32 result;
    u8 pad18[0x20 - 0x18];
};

struct Temp_101290
{
    u8 pad0[0x10];
    s32 value;
    f32 result;
    u8 pad18[0x20 - 0x18];
};

void* func_00100760(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0x15;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0013B808(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001007E8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0013BC80(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00100860(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0013BCC0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_001008D8(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2F0(&local, func_001C8768(a1, local.result) != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00100A00(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001C8FB0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00100A88(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* object = *(void**)((u8*)a1 + 0x0C);
    s32 offset = *(s16*)((u8*)object + 0x40);
    object = *(void**)((u8*)object + 0x44);
    ((void (*)(void*))object)((u8*)a1 + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00100B08(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001C7EB0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00100B80(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* object = *(void**)((u8*)a1 + 0x0C);
    s32 offset = *(s16*)((u8*)object + 0x48);
    object = *(void**)((u8*)object + 0x4C);
    ((void (*)(void*))object)((u8*)a1 + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00100C00(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2F0(&local, func_001C8F20(a1, local.result) != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00100C80(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00241A98(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00100D90(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0023FE38(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00100E18(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0023FEC0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00100EA0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0023FF30(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00100F18(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00240000(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00100FA0(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00240080(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001010D0(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0x1011;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B270(&local, func_00240E10(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00101150(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00240DB0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00101290(void* a0, void* a1, s32, void* a3)
{
    Temp_101290 local;

    local.value = 1;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_002412C8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00101318(void* a0, void* a1, s32, void* a3)
{
    Temp_101290 local;

    local.value = 1;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00241338(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001014F0(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B768(&local, func_002419F0(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00101570(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B768(&local, func_0023FAE8(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001015F0(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B768(&local, func_0023FB68(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00101710(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B768(&local, func_00241EA8(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00101928(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0014B7A8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_001019A0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0014B7D8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00101EC8(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2B0(&local, func_001368E0(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00101F48(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 5;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00138BA8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00102090(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00137B00(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00102108(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0028F978(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00102188(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00244C28(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00102200(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00244C70(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00102278(void* a0, void* a1, s32, void* a3)
{
    Temp_101290 local;

    local.value = 1;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00244CA8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00102500(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00248740(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00102578(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0x10;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2F0(&local, func_00248858(a1, local.result) != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001025F8(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0x10;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2B0(&local, func_00246E40(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00102678(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00248EC0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_001026F0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00248ED0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00102768(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00248EE0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_001027E0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00248EF0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00102858(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0x13;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B768(&local, func_00248130(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001028D8(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0x13;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_002482F0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00102960(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012B2B0(local, func_002483D8(a1));
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_001029D0(void* a0, void* a1, s32, void* a3)
{
    Temp_101290 local;

    local.value = 1;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00248A10(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00102BC0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* object = *(void**)((u8*)a1 + 0x0C);
    s32 offset = *(s16*)((u8*)object + 0x1C0);
    object = *(void**)((u8*)object + 0x1C4);
    ((void (*)(void*))object)((u8*)a1 + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00102C40(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* object = *(void**)((u8*)a1 + 0x0C);
    s32 offset = *(s16*)((u8*)object + 0x1C8);
    object = *(void**)((u8*)object + 0x1CC);
    ((void (*)(void*))object)((u8*)a1 + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00102CC0(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 0x1004;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00167D38(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00102D48(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00166548(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00103108(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00274660(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00103438(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B768(&local, func_002387A8((u8*)a1 + 0x29C, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001034B8(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00256720(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00103540(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00256758(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001035C8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];

    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00256818(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00103ED8(void* a0, void* a1, s32, void* a3)
{
    Temp_100A00 local;

    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00254288(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
