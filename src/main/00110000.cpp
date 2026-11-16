// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"
struct Temp_00111B80 { u8 pad[0x10]; s32 value; s32 result; };
struct Temp_00110BA8 { u8 pad[0x10]; s32 value; s32 result; };
extern s32 func_002157C0(void*, s32);
extern void func_0012B270(void*, s32);
struct Temp_00110D78 { u8 pad[0x10]; s32 value; s32 result; };
extern s32 func_00215860(void*, s32);
struct Temp_00110F48 { u8 pad[0x10]; s32 value; s32 result; };
extern s32 func_002157F8(void*, s32);
struct Temp_00111A20 { u8 pad[0x10]; s32 value; s32 result; };
extern s32 func_0026A0E0(void*, s32);

typedef unsigned int Quad_001113F8 __attribute__((mode(TI)));
struct Temp_001113F8 { u8 pad[0x10]; s32 value; u8 tail[0x0C]; };
struct Stack_001113F8 { Quad_001113F8 result; Temp_001113F8 local; };

extern void func_001A03F8(void*, s32);
extern void func_00219420(void*, Quad_001113F8);

struct Temp_00111EA8 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_00110620 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_00111878 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_00110788 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_00110AA8 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_00110238 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_001116A0 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_001112D0 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_00110A20 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_001102C0 { u8 pad[0x10]; s32 value; s32 result; };

struct Temp_00111618 { u8 pad[0x10]; s32 value; s32 result; };

extern void* func_0012AF00(void*, void*);
extern void func_0012BC20(void*);
extern void func_0012BDD8(void*, s32);
extern void func_00147038(void*);
extern void func_001470D8(void*);
extern void func_00147178(void*);
extern void func_00147218(void*, s32);
extern void func_00147248(void*, s32);
extern void func_00184728(void*);
extern void func_00184778(void*);
extern void func_001A0580(void*);
extern void func_001A0588(void*, s32);
extern void func_001EA9A8(void*);
extern void func_001EA9B8(void*);
extern void func_001EB030(void*);
extern void func_001EB118(void*, s32);
extern void func_00214950(void*, s32);
extern void func_00214978(void*, s32);
extern void func_00215160(void*, s32);
extern void func_00215198(void*);
extern void func_00218358(void*, s32);
extern void func_00218B68(void*);
extern void func_00218BA0(void*);
extern void func_0021A418(void*);
extern void* func_0024B2B8(void*, s32, void*, void*, ...);
extern void func_0026A030(void*, s32);
extern void func_0026A088(void*);
extern void func_0026CD28(void*, s32);
extern void func_00285588(void*);
extern void func_00285590(void*, s32);
void* func_001100D0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00147038(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00110148(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001470D8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_001101C0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00147178(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00110238(void* a0, void* a1, s32, void* a3)
{
    Temp_00110238 local;
    local.value = 0x10;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00147218(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_001102C0(void* a0, void* a1, s32, void* a3)
{
    Temp_001102C0 local;
    local.value = 0x10;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00147248(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_001104B8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00184728(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00110530(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00184778(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_001105A8(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00285588(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00110620(void* a0, void* a1, s32, void* a3)
{
    Temp_00110620 local;
    local.value = 0x10;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00285590(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_00110788(void* a0, void* a1, s32, void* a3)
{
    Temp_00110788 local;
    local.value = 0x2002;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001EB118(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_00110810(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001EB030(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00110888(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001EA9A8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00110900(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001EA9B8(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00110A20(void* a0, void* a1, s32, void* a3)
{
    Temp_00110A20 local;
    local.value = 0x1086;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0026CD28(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_00110AA8(void* a0, void* a1, s32, void* a3)
{
    Temp_00110AA8 local;
    local.value = 0x1080;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00215160(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_00110B30(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00215198(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_001111E0(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00218B68(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00111258(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_00218BA0(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_001112D0(void* a0, void* a1, s32, void* a3)
{
    Temp_001112D0 local;
    local.value = 0x202F;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00218358(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_00111618(void* a0, void* a1, s32, void* a3)
{
    Temp_00111618 local;
    local.value = 0x7;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00214950(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_001116A0(void* a0, void* a1, s32, void* a3)
{
    Temp_001116A0 local;
    local.value = 0x6;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_00214978(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_00111800(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0021A418(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00111878(void* a0, void* a1, s32, void* a3)
{
    Temp_00111878 local;
    local.value = 0x2031;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_0026A030(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
void* func_00111900(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_0026A088(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00111E30(void* a0, void* a1, s32, void* a3)
{
    u8 local[0x10];
    func_0024B2B8(local, 0, a3, 0);
    func_0012BC20(local);
    func_0012BDD8(local, 0x22);
    func_001A0580(a1);
    func_0012AF00(a0, local);
    func_0012BC20(local);
    return a0;
}
void* func_00111EA8(void* a0, void* a1, s32, void* a3)
{
    Temp_00111EA8 local;
    local.value = 0x10;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001A0588(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00111B80(void* a0, void* a1, s32, void* a3)
{
    Temp_00111B80 local;
    local.value = 0;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    func_0012BC20(&local);
    func_0012BDD8(&local, 0x22);
    func_001A03F8(a1, local.result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_001113F8(void* a0, void* a1, s32, void* a3)
{
    Stack_001113F8 stack;
    stack.local.value = 2;
    func_0024B2B8(&stack.local, 1, a3, &stack.local.value, &stack.result);
    func_0012BC20(&stack.local);
    func_0012BDD8(&stack.local, 0x22);
    func_00219420(a1, stack.result);
    func_0012AF00(a0, &stack.local);
    func_0012BC20(&stack.local);
    return a0;
}

void* func_00110BA8(void* a0, void* a1, s32, void* a3)
{
    Temp_00110BA8 local;
    local.value = 0x1082;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    s32 result = func_002157C0(a1, local.result);
    func_0012B270(&local, result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00110D78(void* a0, void* a1, s32, void* a3)
{
    Temp_00110D78 local;
    local.value = 0x1082;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    s32 result = func_00215860(a1, local.result);
    func_0012B270(&local, result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00110F48(void* a0, void* a1, s32, void* a3)
{
    Temp_00110F48 local;
    local.value = 0x1082;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    s32 result = func_002157F8(a1, local.result);
    func_0012B270(&local, result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}

void* func_00111A20(void* a0, void* a1, s32, void* a3)
{
    Temp_00111A20 local;
    local.value = 0x2031;
    func_0024B2B8(&local, 1, a3, &local.value, &local.result);
    s32 result = func_0026A0E0(a1, local.result);
    func_0012B270(&local, result);
    func_0012AF00(a0, &local);
    func_0012BC20(&local);
    return a0;
}
