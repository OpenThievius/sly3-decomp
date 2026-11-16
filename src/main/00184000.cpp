// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_00184778(s32);
s32 func_001FCAC8();
s32 func_001847C0(s32, s32);
s32 func_0011C2B8(s32);
s32 func_0011C438(s32);
s32 func_001854C8(s32 *, s32, s32);
s32 func_001C6EA8(s32 *);
s32 func_002A9288();
extern s32 D_0036C700;
extern s32 D_00370AF0;
s32 func_00171A50(s32 *);
extern s32 D_0036BD20;
s32 func_00186298(s32);
s32 func_00186338(s32);
s32 func_00187CB8();
extern s32 D_004794C4;
s32 func_001878E0(void *, s32);
s32 func_00189F38(s32, s32);
extern s32 D_004794CC;
s32 func_00188A38(s32);

void func_00184550(s32 arg0) {
    func_001FCAC8();
    func_00184778(arg0);
}

void func_001848F8(void) {
    func_001847C0(1, 0xFFFF);
}

void func_00184918(void) {
    func_0011C2B8(0);
    func_0011C438(func_002A9288());
    func_001854C8(&D_0036C700, 0, 0);
    func_001C6EA8(&D_00370AF0);
}

void func_001849E8(void) {
    func_00171A50(&D_0036BD20);
}

void func_001856E0(char* self, u32 index, s32 value)
{
    if (index < 2U) {
        *(s32*)(self + (index << 2) + 0x10) = value;
    }
}

int func_00185980(int bit)
{
    if (bit == -1) return 0;
    return (int)(1UL << bit);
}

s32 func_001859A8(s32 count, s32 *items)
{
    s32 *cursor;
    s32 remaining;
    s32 flags;

    flags = 0;
    if (count > 0) {
        cursor = items;
        remaining = count;
        do {
            s32 item = *cursor;
            remaining -= 1;
            cursor += 1;
            flags |= func_00185980(item);
        } while (remaining != 0);
    }
    return flags;
}

s32 func_00185FD8(void* p)
{
    s32* f = (s32*)((char*)p + 0x50);
    if (*f != 0) return 0;
    return *(s32*)((char*)p + 0xF0) != 3;
}

void func_001861F8(void) {

}

void func_00186248(s32 arg0) {
    if (func_00187CB8() == 0) {
        if (D_004794C4 != 0) {
            func_00186298(D_004794C4);
        }
        func_00186338(arg0);
    }
}

s32 func_00186FE8(char *arg0)
{
    s32 id;
    if (D_004794CC != 0) {
        id = func_00189F38(D_004794CC, 0);
    } else {
        id = func_00189F38(*(s32 *)(arg0 + 0x54), 0);
    }
    return func_001878E0(arg0, 8);
}

void func_001878A0(void *pgoal)
{
    s32 f = func_001FCAC8();
    if (*(s32 *)((char *)pgoal + 0xB8) == 8) {
        func_001878E0(pgoal, 0);
    }
}

s32 func_00187CD0(char* p)
{
	s32 v = 0;
	s32 x = *(s32*)(p + 0x58);
	if (x != 0) {
		v = func_00188A38(x) != 0;
	}
	return v;
}
