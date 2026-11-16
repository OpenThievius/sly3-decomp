// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001C4718(s32, s32);
s32 func_001C4DC0(s32, s32);
s32 func_0017E1B8(s32 *, s32, s32, s32);
s32 func_00261050(s32, s32);
extern s32 D_00475480;
s32 func_001C4FF8(s32, s32);
s32 func_001C5868(s32);
s32 func_0028FDE0();
s32 func_001C78A0();
s32 func_001C5A40(s32);
s32 func_001C7938();
s32 func_001C5DA8(s32 *, s32);
s32 func_001C85C0();
s32 func_001C5C18(s32 *, s32);
s32 func_001C85E8();
s32 func_0028FF10();
s32 func_0028FF70();
s32 func_001C6D50(s32, s32);
s32 func_0011C330();
s32 func_001C7068(s32, s32);
s32 func_001C71E8(s32, s32);
s32 func_001519C8();
s32 **func_001C7ED8();
extern s32 func_001C7E88;

void func_001C4850(void) {
    func_001C4718(1, 0xFFFF);
}

void func_001C4EF8(void) {
    func_001C4DC0(1, 0xFFFF);
}

void func_001C4F18(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = func_0017E1B8(&D_00475480, 0x405, 0x424, 0);
    *arg0 = temp_v0;
    if (temp_v0 != 0) {
        func_00261050(temp_v0, 1);
    }
}

void func_001C4F68(s32 *arg0) {
    *arg0 = 0;
}

void func_001C5130(void) {
    func_001C4FF8(1, 0xFFFF);
}

void func_001C5300(s32 arg0) {
    func_0028FDE0();
    func_001C5868(arg0);
}

void func_001C5330(s32 arg0) {
    func_001C78A0();
    func_001C5868(arg0);
}

void func_001C53B0(s32 arg0) {
    func_001C7938();
    func_001C5A40(arg0);
}

void func_001C53E0(s32 arg0) {
    func_001C85C0();
    func_001C5DA8(&D_00475480, arg0);
}

void func_001C5418(s32 arg0) {
    func_001C85E8();
    func_001C5C18(&D_00475480, arg0);
}

void func_001C5450(s32 arg0) {
    func_0028FF10();
    func_001C5868(arg0);
}

void func_001C5480(s32 arg0) {
    func_0028FF70();
    func_001C5868(arg0);
}

void func_001C6E88(void) {
    func_001C6D50(1, 0xFFFF);
}

void func_001C71B0(s32 arg0) {
    if (func_0011C330() < 2) {
        func_001C7068(arg0, 5);
    }
}

void func_001C7320(void) {
    func_001C71E8(1, 0xFFFF);
}

s32 func_001C7D58(void) {
    return 0;
}

void func_001C7D98(void) {
    func_001519C8();
}

void func_001C7DB8(void) {

}

void func_001C7DC0(void) {

}

void func_001C7EB0(void) {
    *func_001C7ED8() = &func_001C7E88;
}
