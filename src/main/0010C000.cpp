// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct Temp_0010C018 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010C258 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010C2E0 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010C3F8 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010C900 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010C988 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010CDE0 { u8 pad[0x10]; s32 value; u8 tail[0x0C]; };
struct Temp_0010CE70 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010CEF8 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010CF80 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010D138 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010D1C0 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010D398 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010D420 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010D4A8 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010DB10 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010E1E0 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010EAA0 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010EEE0 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010EF68 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010F580 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010F9F8 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_0010FA80 { u8 pad[0x10]; s32 value; s32 result; };
struct Stack_0010CDE0 { u8 output[0x30]; Temp_0010CDE0 local; };
extern void* func_0012AF00(void*, void*);
extern void func_0012B2F0(void*, s32);
extern void func_0012B768(void*, s32);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void func_00130BC0(void*, s32);
extern void func_00130C20(void*, s32);
extern void func_001399A0(void*);
extern void func_001399F0(void*);
extern void func_00146E68(void*);
extern void func_0014DB68(void*);
extern void func_0014DB70(void*, s32);
extern void func_0014ED90(void*, s32);
extern void func_0015F6A0(void*, s32);
extern void func_001716F8(void*, s32);
extern void func_001717A8(void*);
extern void func_00171808(void*);
extern void func_001739A8(void*);
extern void func_00186E80(void*, s32);
extern void func_00187040(void*);
extern void func_00188540(void*);
extern void func_00189710(void*);
extern void func_001897C8(void*);
extern void func_00189880(void*);
extern void func_00189938(void*);
extern void func_00189DA0(void*, s32);
extern void func_00198348(void*, s32);
extern void func_0019CD48(void*, s32);
extern void func_0019E1A0(void*);
extern void func_0019E1F8(void*);
extern s32 func_001A2198(void*, s32);
extern void func_001CAF30(void*, s32);
extern void func_001E0380(void*, s32);
extern void func_001E2358(void*);
extern void func_001E28E8(void*);
extern void func_001E8E40(void*, s32);
extern s32 func_001FBE30(void*, s32);
extern s32 func_001FBEA0(void*);
extern s32 func_001FBF08(void*);
extern void func_001FC060(void*, s32);
extern void func_001FC090(void*, s32);
extern void func_001FC0E0(void*, s32);
extern void func_0020ADE0(void*);
extern void func_0021E930(void*, s32);
extern void func_0022DB08(void*);
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_00260270(void*, s32);
extern void func_00260298(void*, s32);
extern void func_00262280(void*, s32);
extern void func_00262450(void*, s32);
extern void func_00262708(void*, void*);



void* func_0010C018(void* a0, void* a1, s32, void* a3)
{
    Temp_0010C018 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E0380(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010C0A0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001E2358(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010C1E0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001E28E8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010C258(void* a0, void* a1, s32, void* a3)
{
    Temp_0010C258 local;
    local.value = 0x2005;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00130BC0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010C2E0(void* a0, void* a1, s32, void* a3)
{
    Temp_0010C2E0 local;
    local.value = 0x2005;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00130C20(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010C3F8(void* a0, void* a1, s32, void* a3)
{
    Temp_0010C3F8 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    s32 result = func_001A2198(a1, local.result);
    func_0012B2F0(&local, result != 0);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010C678(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001739A8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010C900(void* a0, void* a1, s32, void* a3)
{
    Temp_0010C900 local;
    local.value = 0x6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00262450(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010C988(void* a0, void* a1, s32, void* a3)
{
    Temp_0010C988 local;
    local.value = 0x6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00262280(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010CDE0(void* a0, void* a1, s32, void* a3)
{
    Stack_0010CDE0 stack;
    stack.local.value = 4;
    func_0024B2B8(&stack.local, 1, a3, &stack.local.value, stack.output);
    func_0012BC20(&stack.local);
    func_0012BDD8(&stack.local, 0x22);
    func_00262708(a1, stack.output);
    func_0012AF00(a0, &stack.local);
    func_0012BC20(&stack.local);
    return a0;
}

void* func_0010CE70(void* a0, void* a1, s32, void* a3)
{
    Temp_0010CE70 local;
    local.value = 0x6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00260270(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010CEF8(void* a0, void* a1, s32, void* a3)
{
    Temp_0010CEF8 local;
    local.value = 0x6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00260298(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010CF80(void* a0, void* a1, s32, void* a3)
{
    Temp_0010CF80 local;
    local.value = 0x2033;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001E8E40(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010D0C0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0014DB68(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010D138(void* a0, void* a1, s32, void* a3)
{
    Temp_0010D138 local;
    local.value = 0x6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0014DB70(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010D1C0(void* a0, void* a1, s32, void* a3)
{
    Temp_0010D1C0 local;
    local.value = 0x6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0014ED90(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010D248(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    s32 result = func_001FBEA0(a1);
    func_0012B2F0(local, result != 0);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010D2B8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    s32 result = func_001FBE30(a1, 0);
    func_0012B768(local, result);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010D328(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    s32 result = func_001FBF08(a1);
    func_0012B768(local, result);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010D398(void* a0, void* a1, s32, void* a3)
{
    Temp_0010D398 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001FC060(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010D420(void* a0, void* a1, s32, void* a3)
{
    Temp_0010D420 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001FC090(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010D4A8(void* a0, void* a1, s32, void* a3)
{
    Temp_0010D4A8 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001FC0E0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010D760(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0022DB08(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010DB10(void* a0, void* a1, s32, void* a3)
{
    Temp_0010DB10 local;
    local.value = 0x10;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00186E80(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010DDA0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00187040(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010E1E0(void* a0, void* a1, s32, void* a3)
{
    Temp_0010E1E0 local;
    local.value = 0;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00189DA0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010E460(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00189710(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010E4D8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001897C8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010E550(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00189880(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010E5C8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00189938(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010E640(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00188540(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010EAA0(void* a0, void* a1, s32, void* a3)
{
    Temp_0010EAA0 local;
    local.value = 0x10;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0021E930(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010EE68(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0020ADE0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010EEE0(void* a0, void* a1, s32, void* a3)
{
    Temp_0010EEE0 local;
    local.value = 0x6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00198348(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010EF68(void* a0, void* a1, s32, void* a3)
{
    Temp_0010EF68 local;
    local.value = 0x2090;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0015F6A0(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010F580(void* a0, void* a1, s32, void* a3)
{
    Temp_0010F580 local;
    local.value = 0x202F;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0019CD48(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010F788(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0019E1A0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010F800(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0019E1F8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010F9F8(void* a0, void* a1, s32, void* a3)
{
    Temp_0010F9F8 local;
    local.value = 0x2033;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001CAF30(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010FA80(void* a0, void* a1, s32, void* a3)
{
    Temp_0010FA80 local;
    local.value = 0x2033;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001716F8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_0010FB08(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001717A8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010FB80(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00171808(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010FCC0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001399F0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010FD38(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001399A0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}

void* func_0010FF08(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00146E68(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}


extern s32 func_00260758(void*,s32);
extern void func_0012B2F0(void*,s32);
void* func_0010CD60(void* out,void* object,s32 unused,void* arg)
{
 u8 temp[0x18]; *(s32*)(temp+0x10)=6;
 func_0024B2B8(temp,1,arg,temp+0x10,temp+0x14);
 s32 value=func_00260758(object,*(s32*)(temp+0x14));
 func_0012B2F0(temp,value!=0);
 func_0012AF00(out,temp); func_0012BC20(temp); return out;
}


