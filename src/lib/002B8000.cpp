// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern s32 D_00350EA0;
s32 func_002BA318(s32);
s32 func_0011E1F0(s32 *, s32);
s32 func_0012BC20(s32);
s32 func_002B3F48(s32);
s32 func_002BADA0(s32, s32);
extern s32 D_004D2BB0;
s32 func_002B4E48(s32);
extern s32 D_004D2F10;
s32 func_002BBCC0();
extern s32 D_00351258;
extern s32 D_00351238;
extern s32 D_003532D0;
s32 func_00118DA0(s32, s32, s32);
s32 func_001D2818(s32);
s32 func_002BBEF0();
extern s32 D_00351340;
extern s32 D_00351318;
s32 func_002BBF08();
extern s32 D_003512F0;
extern s32 D_003512C8;
extern s32 D_003512A0;
extern s32 D_00351278;
s32 func_002B3B90(s32);
s32 func_002BA8A8(s32, s32);
s32 func_002BA8F8(s32, s32);
extern s32 D_004D2AD8;
s32 func_002BABA8(s32 *, s32);
s32 func_002BB8B8(s32 *, s32);

void func_002B8750(int* p)
{
    p[0] = 0;
    p[1] = 0;
}

s32 func_002B8840(s32 arg0) {
    return arg0;
}

s32 **func_002B89B8(s32 **arg0) {
    *arg0 = &D_00350EA0;
    return arg0;
}

s32 func_002BA000(s32 arg0) {
    return arg0;
}

s32 func_002BA008(s32 arg0) {
    return arg0;
}

void func_002BA1F8(s32 arg0, s32 arg1, s32 arg2) {
    func_00118DA0(arg2, 4, arg1);
}

void func_002BA3E8(s32 arg0) {
    func_002BA318(arg0 + 0x14);
}

void func_002BA690(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BA840(s32 arg0, s32 arg1) {
    func_002BA8F8(arg0 + 0xC, 2);
    func_002B3B90(arg0);
    func_002BA8A8(arg0, 0);
    if (arg1 & 1) {
        func_0011E1F0(&D_004D2AD8, arg0);
    }
}

void func_002BAA50(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    s32 *target = *arg0;
    if (target != 0) {
        if (--(*target) == 0) {
            func_002BABA8(target, 3);
        }
    }
    *arg0 = arg1;
}

void func_002BAB68(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    *arg0 = arg1;
}

void func_002BAB88(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    *arg0 = arg1;
}

void func_002BACE0(s32 arg0, s32 arg1) {
    func_002BADA0(arg0 + 0x14, 2);
    func_0012BC20(arg0 + 0xC);
    func_002B3F48(arg0);
    if (arg1 & 1) {
        func_0011E1F0(&D_004D2BB0, arg0);
    }
}

void func_002BAEB0(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    *arg0 = arg1;
}

void func_002BAF38(void) {

}

void func_002BAF40(void) {

}

void func_002BAF48(void) {

}

void func_002BAF50(void) {

}

void func_002BAF58(void) {

}

void func_002BAF60(void) {

}

void func_002BB770(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BB798(s32 arg0, s32 arg1) {
    func_0012BC20(arg0 + 8);
    func_002B4E48(arg0);
    if (arg1 & 1) {
        func_0011E1F0(&D_004D2F10, arg0);
    }
}

s32 **func_002BBBC8(s32 **arg0) {
    func_002BBCC0();
    *arg0 = &D_00351258;
    return arg0;
}

s32 **func_002BBC00(s32 **arg0) {
    func_002BBCC0();
    *arg0 = &D_00351238;
    return arg0;
}

s32 **func_002BBC88(s32 **arg0) {
    func_002BBCC0();
    *arg0 = &D_003532D0;
    return arg0;
}

s32 **func_002BBD40(s32 **arg0) {
    func_002BBEF0();
    *arg0 = &D_00351340;
    return arg0;
}

s32 **func_002BBD78(s32 **arg0) {
    func_002BBEF0();
    *arg0 = &D_00351318;
    return arg0;
}

s32 **func_002BBDB0(s32 **arg0) {
    func_002BBF08();
    *arg0 = &D_003512F0;
    return arg0;
}

s32 **func_002BBDE8(s32 **arg0) {
    func_002BBF08();
    *arg0 = &D_003512C8;
    return arg0;
}

s32 **func_002BBE20(s32 **arg0) {
    func_002BBF08();
    *arg0 = &D_003512A0;
    return arg0;
}

s32 **func_002BBE58(s32 **arg0) {
    func_002BBF08();
    *arg0 = &D_00351278;
    return arg0;
}

void func_002BBEC8(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BBF40(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    s32 *target = *arg0;
    if (target != 0) {
        s32 value = *target - 1;
        *target = value;
        if (value == 0) {
            func_002BB8B8(target, 3);
        }
    }
    *arg0 = arg1;
}

void func_002BBFE8(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}
