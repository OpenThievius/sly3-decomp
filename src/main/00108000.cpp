// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void* func_0012AF00(void*, void*);
extern s32 func_00197368(void*, s32);
extern s32 func_00197488(void*, s32);
extern s32 func_001974A8(void*, s32);
extern s32 func_001974C8(void*, s32);
extern void func_001974E8(void*);
extern void func_00197508(void*);
extern s32 func_001975E8(void*, s32);
extern s32 func_00197608(void*, s32);
extern s32 func_00225EE8(void*, s32);
extern void func_00226010(void*);
extern void func_00226050(void*);
extern void func_002261A0(void*, s32);
extern s32 func_002261F0(void*, s32);
extern s32 func_00226270(void*, s32);
extern void func_002262B0(void*);
extern void func_00154B48(void*, s32);
extern s32 func_00154DA0(void*);
extern s32 func_00154ED0(void*);
extern void func_0012B2F0(void*, s32);
extern void func_0012B270(void*, s32);
extern void func_0012B768(void*, s32);
extern void func_00154D40(void*, s32);
extern s32 func_00154EE0(void*);
extern void func_00154BA8(void*, s32);
extern void func_00154C00(void*, s32);
extern s32 func_00154F40(void*);
extern void func_00155308(void*);
extern void func_00155E30(void*, s32);
extern void func_00155ED8(void*, s32);
extern void func_00155F28(void*);
extern void func_001561F0(void*, s32);
extern s32 func_00154758(void*, s32);
extern void func_001528E0(void*);
extern s32 func_001C21D0(void*, s32);
extern s32 func_001C21E0(void*, s32);
extern void func_001AFAA8(void*, s32);
extern void func_0027FA30(void*);
extern void func_0027FCC8(void*);
extern void func_00280298(void*);
extern void func_002802B8(void*);
extern void func_001C93A8(void*);
extern void func_001F8260(void*);
extern void func_001F9030(void*, s32);
extern void func_001F9028(void*);
extern void func_00289020(void*);
extern void func_00289048(void*);
extern s32 func_001F4AD0(void*, s32);
extern s32 func_001A9478(void*, s32);
extern s32 func_001B6E58(void*, s32);
extern void func_0028A558(void*);
extern void func_0028A588(void*);
extern void func_0028AF48(void*);
extern void func_0017D820(void*, s32);
extern void func_0017D840(void*, s32);
extern void func_001E5B00(void*, s32);
extern void func_001E5B68(void*);
extern void func_001E5BC8(void*, s32);
extern void func_001E5C70(void*, s32);
extern void func_001E5CA0(void*, s32);
extern void func_001E5CD0(void*, s32);
extern void func_001E5D60(void*, s32);
extern void func_0023FE38(void*, s32);
extern void func_001E5DB8(void*, s32);
extern void func_00240000(void*, s32);
extern void func_001E5E10(void*, s32);
extern void func_001E5E48(void*, s32);
extern void func_0023FEC0(void*, s32);
extern void func_001E5EA0(void*, s32);
extern void func_00240080(void*, s32);
extern void func_001E5070(void*, s32, s32);
extern void func_001E50B0(void*, s32);
extern void func_001DF7E8(void*, s32);
extern void func_0017D7D0(void*);
extern void func_0012B2F0(void*, s32);

struct Temp_108000
{
    u8 pad0[0x10];
    s32 value;
    s32 result;
    u8 pad18[0x20 - 0x18];
};

void* func_00108088(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00197368(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00108378(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00197488(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00108400(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001974A8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00108488(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001974C8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001085C8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001974E8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00108640(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00197508(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00108760(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001975E8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001087E8(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00197608(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00108918(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00225EE8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001089A0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00226010(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00108A18(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00226050(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00108A90(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_002261A0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00108B18(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_002261F0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00108BA0(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2F0(&local, func_00226270(a1, local.result) != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00108C20(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_002262B0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00108D50(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00154B48(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00108DD8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012B2F0(local, func_00154DA0(a1) != 0);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00108F98(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012B2F0(local, func_00154ED0(a1) != 0);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00109008(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00154D40(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00109090(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012B2F0(local, func_00154EE0(a1) != 0);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00109100(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x202F;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00154BA8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00109188(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00154C00(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001092C0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012B2F0(local, func_00154F40(a1) != 0);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_001094B8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00155308(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_001095C0(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00155E30(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00109648(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x103B;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00155ED8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001096D0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00155F28(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00109748(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2033;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001561F0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00109A30(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x1040;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B270(&local, func_00154758(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00109AB0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001528E0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00109D40(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x1087;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B270(&local, func_001C21D0((u8*)a1 + 0xE40, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00109DC0(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x1087;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B270(&local, func_001C21E0((u8*)a1 + 0xE40, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00109E40(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2011;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001AFAA8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00109F58(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0027FA30(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_00109FD0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0027FCC8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010A0F0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00280298(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010A168(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_002802B8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010A4A0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    void* object = *(void**)((u8*)a1 + 0x0C);
    s32 offset = *(s16*)((u8*)object + 0x2D0);
    object = *(void**)((u8*)object + 0x2D4);
    ((void (*)(void*))object)((u8*)a1 + offset);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010A520(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001C93A8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010A6C8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001F8260(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010A7E8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001F9028(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010A860(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001F9030(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010A8E8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00289020(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010A960(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00289048(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010AA80(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x1069;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B768(&local, func_001F4AD0(a1, local.result));
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010ADB8(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x1069;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012B2F0(&local, func_001A9478(a1, local.result) != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010AE38(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001B6E58(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010B058(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0028A558(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010B0D0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0028A588(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010B148(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0028AF48(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010B278(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0017D7D0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010B2F0(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2005;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0017D820(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010B378(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2031;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0017D840(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010B5F8(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5B00(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010B680(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001E5B68(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010B6F8(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 5;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5BC8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010B780(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x1004;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5C70(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010B808(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x1003;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5CA0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010B890(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 5;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5CD0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010B918(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5D60(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010B9A0(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0023FE38(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010BA28(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5DB8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010BAB0(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00240000(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010BB38(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5E10(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010BBC0(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5E48(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010BC48(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0023FEC0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010BCD0(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E5EA0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010BD58(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00240080(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010BE88(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001E5070(a1, 0, 0);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010BF08(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E50B0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010BF90(void* a0, void* a1, s32, void* a3)
{
    Temp_108000 local;
    local.value = 0x2022;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001DF7E8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

typedef unsigned int Quad_00109EC8 __attribute__((mode(TI)));
struct Temp_00109EC8 { u8 pad[0x10]; s32 value; u8 tail[0x0C]; };
struct Stack_00109EC8 { Quad_00109EC8 result; Temp_00109EC8 local; };
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void func_001AFBE0(void*, Quad_00109EC8);
extern void* func_0012AF00(void*, void*);
void* func_00109EC8(void* a0, void* a1, s32, void* a3)
{
    Stack_00109EC8 stack;
    stack.local.value = 2;
    func_0024B2B8(&stack.local, 1, a3, &stack.local.value, &stack.result);
    func_0012BC20(&stack.local);
    func_0012BDD8(&stack.local, 0x22);
    func_001AFBE0(a1, stack.result);
    func_0012AF00(a0, &stack.local);
    func_0012BC20(&stack.local);
    return a0;
}
