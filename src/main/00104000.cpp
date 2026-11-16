// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void func_0012B768(void*, s32);
extern void* func_0012AF00(void*, void*);
extern void func_0012B2F0(void*, s32);
extern s32 func_002542C8(void*, s32);
extern void func_002542E8(void*);
extern void func_00254320(void*, s32);
extern void func_00254348(void*, s32);
extern void func_002543F8(void*);
extern void func_00254400(void*, s32);
extern void func_00254428(void*, s32);
extern void func_002544D8(void*);
extern s32 func_002533C0(void*, s32);
extern s32 func_001F1738(void*, s32);
extern s32 func_001F1780(void*, s32);
extern s32 func_00198540(void*, s32);
extern s32 func_001985A8(void*, s32);
extern s32 func_001985F0(void*, s32);
extern s32 func_00170500(void*, s32);
extern void* func_0012B270(void*, s32);
extern void func_00257798(void*);
extern void func_0016FF08(void*, s32);
extern void func_001701B0(void*, s32);
extern void func_00170328(void*);
extern s32 func_00239DB8(void*, s32);
extern s32 func_00239FE0(void*, s32);
extern void func_00239C20(void*);
extern void func_0014CB98(void*, f32);
extern void func_0014CE20(void*);
extern void func_001D6ED8(void*, s32);
extern void func_001D6F00(void*, s32);
extern void func_0015C260(void*, s32);
extern void func_0015C2B8(void*, s32);
extern void func_0015C340(void*, s32);
extern void func_0015C4A8(void*, s32);
extern void func_0015C4F8(void*, s32);
extern void func_002237F8(void*, s32);
extern void func_00223820(void*, s32);
extern void func_00223858(void*);
extern void func_002248F0(void*);
extern void func_00139510(void*, s32);
extern void func_00139538(void*, s32);
extern void func_00139590(void*);
extern void func_001395C0(void*, s32);
extern void func_00212770(void*, s32);
extern void func_00172710(void*, s32);
extern void func_00172850(void*, s32);
extern void func_001728A0(void*, s32);
extern void func_00172D10(void*, s32);
extern void func_00172AE8(void*, s32);
extern s32 func_001FE728(void*, s32);
extern s32 func_001FE950(void*, s32);
extern void func_00203078(void*);
extern void func_00203030(void*);
extern void func_001FD400(void*);
extern void func_001FD4D0(void*, s32);
extern void func_00178138(void*, f32);
extern void func_00178150(void*);
extern void func_00178160(void*);
extern void func_00177838(void*);
extern void func_00179E10(void*);
extern f32 func_0023A850(void*, s32);
extern void func_0012B2B0(void*, f32);
extern void func_00197690(void*, s32);
extern void func_00197298(void*, s32);
extern void func_001FD460(void*, s32*);
extern void func_001FD2C0(void*, void*);
extern void func_001972B8(void*, void*);
extern void func_001972F8(void*, void*);
struct Temp_Quad128 { u64 low; u64 high; };
extern s32 func_0027F258(void*, Temp_Quad128);
extern void func_0015CB70(void*, s32);
extern void func_0015C260(void*, s32);
extern void func_0015C2B8(void*, s32);
extern void func_0015C340(void*, s32);
extern void func_0015C4A8(void*, s32);
extern void func_0015C4F8(void*, s32);

struct Temp_104000
{
    u8 pad0[0x10];
    s32 value;
    s32 result;
    u8 pad18[0x20 - 0x18];
};

struct Temp_104Float
{
    u8 pad0[0x10];
    s32 value;
    f32 result;
    u8 pad18[0x20 - 0x18];
};

void* func_00104008(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_002542C8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104090(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_002542E8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00104108(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00254320(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104190(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00254348(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104218(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_002543F8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00104290(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00254400(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104318(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00254428(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001043A0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_002544D8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00104418(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x100F;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2F0(&local, func_002533C0(a1, local.result) != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104578(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 5;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001F1738(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104600(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001F1780(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104688(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001F1780(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104710(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2086;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00198540(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104798(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2086;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001985A8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104820(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2086;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2F0(&local, func_001985F0(a1, local.result) != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001049F0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B270(&local, func_00170500(*(void**)((u8*)a1 + 0x10D0), local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104C18(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00257798(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00104EB8(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0016FF08(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00104FE8(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001701B0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105070(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00170328(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00105190(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B270(&local, func_00170500(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105810(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00239DB8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105898(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2B0(&local, func_0023A850(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105918(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00239FE0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001059A0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00239C20(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00105A18(void* a0, void* a1, s32, void* a3)
{
    Temp_104Float local;
    local.value = 1;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0014CB98(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105AA0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0014CE20(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00105B18(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001D6ED8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105BA0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001D6F00(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105CE0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C260((u8*)a1 + 0x130, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105D68(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C2B8((u8*)a1 + 0x130, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105DF0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C340((u8*)a1 + 0x130, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105E78(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C4A8((u8*)a1 + 0x130, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105F00(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C4F8((u8*)a1 + 0x130, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00105F88(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015CB70(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00106238(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* table = *(void**)((u8*)a1 + 0x21C);
    u8* base = (u8*)a1 + 0x130;
    s32 offset = *(s16*)((u8*)table + 0x10);
    table = *(void**)((u8*)table + 0x14);
    ((void (*)(void*))table)(base + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_001062C0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* table = *(void**)((u8*)a1 + 0x21C);
    u8* base = (u8*)a1 + 0x130;
    s32 offset = *(s16*)((u8*)table + 0x18);
    table = *(void**)((u8*)table + 0x1C);
    ((void (*)(void*))table)(base + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00106348(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C260((u8*)a1 + 0x120, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001063D0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C2B8((u8*)a1 + 0x120, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00106458(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C340((u8*)a1 + 0x120, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001064E0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C4A8((u8*)a1 + 0x120, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00106568(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015C4F8((u8*)a1 + 0x120, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00106818(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* table = *(void**)((u8*)a1 + 0x20C);
    u8* base = (u8*)a1 + 0x120;
    s32 offset = *(s16*)((u8*)table + 0x10);
    table = *(void**)((u8*)table + 0x14);
    ((void (*)(void*))table)(base + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_001068A0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* table = *(void**)((u8*)a1 + 0x20C);
    u8* base = (u8*)a1 + 0x120;
    s32 offset = *(s16*)((u8*)table + 0x18);
    table = *(void**)((u8*)table + 0x1C);
    ((void (*)(void*))table)(base + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00106928(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_002237F8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001069B0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00223820(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00106A38(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00223858(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00106BF0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_002248F0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00106C68(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00139510(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00106CF0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00139538(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00106D78(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00139590(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00106DF0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001395C0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00106E78(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x202F;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00212770(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00106F00(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00172710(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107030(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00172850(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107160(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001728A0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107290(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00172D10(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107318(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00172AE8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001073A0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012B768(local, func_001FE728(a1, 1));
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00107410(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B768(&local, func_001FE950(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107490(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00203078(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00107508(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00203030(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00107580(void* a0, void* a1, s32, void* a3)
{
    u8 result[0x10];
    Temp_104000 local;
    local.value = 10;
    func_0024B2B8(&local, 1, a3, &local.value, result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001FD2C0(a1, result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001077A8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001FD400(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00107820(void* a0, void* a1, s32, void* a3)
{
    u8 result[0x10];
    Temp_104000 local;
    local.value = 10;
    func_0024B2B8(&local, 1, a3, &local.value, result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001FD460(a1, (s32*)result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001078B0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 5;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001FD4D0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107A58(void* a0, void* a1, s32, void* a3)
{
    Temp_104Float local;
    local.value = 1;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00178138(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107AE0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00178150(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00107B58(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00178160(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00107BD0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00177838(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00107C48(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00179E10(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00107DB0(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 0x203A;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00197690(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107E38(void* a0, void* a1, s32, void* a3)
{
    Temp_104000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00197298(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107EC0(void* a0, void* a1, s32, void* a3)
{
    u8 result[0x10];
    Temp_104000 local;
    local.value = 10;
    func_0024B2B8(&local, 1, a3, &local.value, result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001972B8(a1, result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00107F50(void* a0, void* a1, s32, void* a3)
{
    u8 result[0x10];
    Temp_104000 local;
    local.value = 10;
    func_0024B2B8(&local, 1, a3, &local.value, result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001972F8(a1, result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
