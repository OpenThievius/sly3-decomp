// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001742B0(s32, s32);
s32 func_001749A8(s32, s32);
s32 func_00174B00(s32, s32);
s32 func_00175678(s32, s32);
s32 func_00176210(s32, s32);
s32 func_00177098(s32, s32);
s32 func_001C7340();
s32 func_001C9118(s32, s32);
s32 func_0011AF60(s32 *, s32);
s32 func_001C78A0();
extern s32 D_00479B98;
s32 func_0011B028(s32 *, s32);
s32 func_001C7938();
s32 func_00177330(s32, s32);
s32 func_001F4950(s32 *, s32);
extern s32 D_00475480;
s32 func_00168AB0(void *, s32, s32, s32);
void *func_001750B0();
s32 func_0013BD88(s32, void *);

void func_001743E8(void) {
    func_001742B0(1, 0xFFFF);
}

void func_001744C0(int* self)
{
	self[0] = 0;
	self[1] = 0;
	self[2] = 0;
	self[3] = 0;
}

void func_001744D8(void* p)
{
    s32 v = *(s32*)((char*)p + 4);
    *(s32*)((char*)p + 8) = 0;
    *(s32*)((char*)p + 0xC) = v;
}

void func_001746A8(void) {

}

void func_001749A0(void) {

}

void func_00174AE0(void) {
    func_001749A8(1, 0xFFFF);
}

void func_00174C38(void) {
    func_00174B00(1, 0xFFFF);
}

s32 func_00174FF0(s32 arg0, s32 arg1) {
    return arg0 + arg1;
}

s32 func_00174FF8(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 0x10);
}

s32 func_001751C0(void *self, void * unused, s32 value)
{
    s32 result;
    void *object = func_001750B0();
    s32 kind = *(s32 *)((char *)object + 0x448);
    result = func_00168AB0(object, 1, (kind == 0 ? 3 : 2), value);
    return result;
}

void func_001757B0(void) {
    func_00175678(1, 0xFFFF);
}

s32 func_00175BA8(char* p, s32 v)
{
	return *(s32*)(p + 0x60) + (((s32)((v - *(s32*)(p + 0x8)) * 0xCCCCCCCD) >> 3) * 0x60);
}

void func_00176348(void) {
    func_00176210(1, 0xFFFF);
}

void func_001771D0(void) {
    func_00177098(1, 0xFFFF);
}

void func_001771F0(s32 arg0) {
    func_001C7340();
    func_001C9118(arg0, 1);
}

void func_00177220(s32 arg0) {
    func_001C78A0();
    func_0011AF60(&D_00479B98, arg0);
}

void func_00177258(s32 arg0) {
    func_001C7938();
    func_0011B028(&D_00479B98, arg0);
}

void func_00177468(void) {
    func_00177330(1, 0xFFFF);
}

void func_00177838(s32 arg0) {
    func_001F4950(&D_00475480, arg0);
}

void func_00177B78(char *self, s32 mode, s32 value) {
    if (mode == 1) {
        if (value == *(s32 *)(self + 0x128)) {
            func_0013BD88(value, self);
            *(s32 *)(self + 0x128) = 0;
        } else if (value == *(s32 *)(self + 0x12C)) {
            func_0013BD88(value, self);
            *(s32 *)(self + 0x12C) = 0;
        }
    }
}

void* func_00177BD8(void* self, s32 value)
{
    if (value == 1) {
        *(s32*)((char*)self + 0xD0) = value;
    }
    return self;
}
