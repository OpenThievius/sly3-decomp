// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00169BF8(s32);
s32 func_00274710(s32, s32, s32, s32);
s32 func_001F5988(s32, s32);
s32 func_001F6498(s32, s32);
s32 func_0023CC40();
s32 func_001852E0(s32 *);
s32 func_00185328(s32 *, s32);
extern s32 D_0036C700;
s32 func_0022D318(s32);
s32 func_0023DDA0();
s32 func_00273E48(s32, s32, void *, s32);
s32 func_00273ED0(s32, s32, void *, s32);
s32 func_0011AF60(s32 *, void *);
s32 func_0011B028(s32 *, void *);
s32 func_0011B0C0(s32 *, void *);
extern s32 D_00479BE0;
s32 func_001C8970(void *, s32, s32 *, s32);
s32 func_0023C0B8();
void *func_00241268(void *);
s32 func_0028F068(void *, s32, s32);
extern s32 D_00346FC0;

s32 func_001F43C0(void) {
    return 0;
}

s32 func_001F43C8(void* p)
{
    return *(s32*)((char*)p + 0x16C);
}

s32 func_001F43F0(void* self)
{
    return *(s32*)((char*)self + 0x170);
}

s32 func_001F4430(void* p)
{
    return *(s32*)((char*)p + 0x174);
}

s32 func_001F4458(void* self)
{
    return *(s32*)((char*)self + 0x178);
}

void func_001F4500(s32 arg0, s32 arg1) {
    func_00274710(func_00169BF8(0x130), arg1, 1, arg0);
}

void func_001F47C8(char *self, s32 value)
{
    s32 old = *(s32 *)(self + 0x148);
    if (value != old) {
        if (old != 0) {
            func_00273ED0(old, 0, self, 1);
        }
        *(s32 *)(self + 0x148) = value;
        if (value != 0) {
            func_00273E48(value, 0, self, 1);
        }
    }
}

void func_001F48F8(void) {

}

s32 func_001F4B30(void* p) { return *(s32*)((char*)p + 0x110C); }

void func_001F4D28(void) {

}

void func_001F4D30(void) {

}

void func_001F4E10(void* self, s32 value)
{
    *(s32*)((char*)self + 0x10) = value;
}

void func_001F4EC0(void *obj)
{
    s32 result;
    s32 flag;

    result = func_0011B0C0(&D_00479BE0, obj);
    flag = 0;
    if (*(s32 *)((char *)obj + 0xC) == 0) {
        flag = *(s32 *)((char *)obj + 0x8) > 0;
    }
    if (result != flag) {
        if (flag != 0) {
            func_0011AF60(&D_00479BE0, obj);
        } else {
            func_0011B028(&D_00479BE0, obj);
        }
    }
}

void func_001F5AC0(void) {
    func_001F5988(1, 0xFFFF);
}

void func_001F5CC8(char* self)
{
    s32 v = *(s32*)(self + 0x38);
    if (v != 0) {
        func_0022D318(v);
    }
}

void func_001F65D0(void) {
    func_001F6498(1, 0xFFFF);
}

void func_001F6668(void *pgoal)
{
    s32 f1, f2;
    func_0023C0B8();
    void *pobject = func_00241268(pgoal);
    *(s32 *)((char *)pobject + 0xE0) = 1;
    func_0028F068(pgoal, *(s32 *)((char *)pgoal + 0x48), 0x16);
    func_0028F068(pgoal, *(s32 *)((char *)pgoal + 0x4C), 0);
    func_001C8970(pgoal, 1, &D_00346FC0, 0);
}

void func_001F7568(void) {
    func_0023CC40();
}

void func_001F7748(void* self)
{
    s32 r = func_0023DDA0();
    *(s32*)((char*)self + 0x160) = r;
}

void func_001F7C70(void) {
    func_00185328(&D_0036C700, func_001852E0(&D_0036C700) + 1);
}

void func_001F7FA8(void) {

}
