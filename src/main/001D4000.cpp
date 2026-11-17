// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001D45B0();
s32 func_001D3AE8(s32 *);
extern s32 D_0046F550;
s32 func_001D3918(s32 *);
s32 func_001D3B28(s32 *);
s32 func_001D5820(s32, s32);
s32 func_001D5B98(s32);
s32 func_001FC968();
s32 func_0023CC40();
s32 func_001D6A60(s32, s32);
s32 func_001C8970(s32, s32, s32 *, s32);
s32 func_0023C0B8();
extern s32 D_00345FB0;
s32 func_001309D8(s32);
s32 func_0014C7F0();
s32 func_001D7590(s32, s32);
s32 func_0016FA08(s32, void *);
s32 func_001D3960(s32 *, s32, s32, s32, s32);
s32 func_001D3818(s32 *, s32, s32);
s32 func_00283F70(s32 *);
extern s32 D_004BC230;
s32 func_001D6820(void *, s32, void *);
s32 func_001D69D8(void *);
s32 func_0023C580();
s32 func_0013BD00(s32, void *);
s32 func_0013BD88(s32, void *);
s32 func_001D6BB8();
s32 func_001D77E0(void *, s32, s32);
s32 func_001D7D10(void *);
s32 func_00238978(void *);
s32 func_00252E40(s32, s32);
s32 func_00238980();
s32 func_00252FC0(s32, s32);
s32 func_001D8AC0(s32);
s32 func_0021DD30(s32 *);
s32 func_0025AE28(s32 *);
extern s32 D_003751D0;
extern s32 D_0046F7A0;
extern s32 D_0046F810;
extern s32 D_0046FAA0;
extern s32 D_0046FBE0;
extern s32 D_0046FC30;
extern s32 D_0046FD00;
extern s32 D_00475480;

s32 func_001D47C0(void) {
    return func_001D45B0() == 0x57;
}

void func_001D47E8(void) {
    func_001D3AE8(&D_0046F550);
}

s32 func_001D4808(void) {
    s32 var_v0;

    var_v0 = 0;
    if (func_0025AE28(&D_00475480) == 0) {
        var_v0 = 0;
        if (func_0021DD30(&D_0046F550) == 0) {
            var_v0 = 0;
            if (func_0021DD30(&D_0046FAA0) == 0) {
                var_v0 = 0;
                if (func_0021DD30(&D_0046FC30) == 0) {
                    var_v0 = 0;
                    if (func_0021DD30(&D_0046F7A0) == 0) {
                        var_v0 = 0;
                        if (func_0021DD30(&D_0046F810) == 0) {
                            var_v0 = 0;
                            if (func_0021DD30(&D_003751D0) == 0) {
                                if (func_0021DD30(&D_0046FBE0) != 0) {
                                    return 0;
                                }
                                var_v0 = func_0021DD30(&D_0046FD00) == 0;
                                /* Duplicate return node #11. Try simplifying control flow for better match */
                                return var_v0;
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v0;
}

void func_001D4DE8(char *arg0) {
    func_0016FA08(*(s32 *)(arg0 + 0xC), arg0);
}

void func_001D4F80(void) {
    func_001D3918(&D_0046F550);
}

void func_001D4FA0(char *self)
{
    func_001D3960(&D_0046F550, *(s32 *)(self + 0x8), *(s32 *)(self + 0xC), 0, *(s32 *)(self + 0x18));
    if (self != 0) {
        *(s32 *)(self + 0x1C) |= 2;
    }
}

void func_001D4FF0(char *self)
{
    func_001D3818(&D_0046F550, *(s32 *)(self + 0x8), *(s32 *)(self + 0xC));
    if (self != 0) {
        *(s32 *)(self + 0x1C) |= 2;
    }
}

void func_001D5038(void) {
    func_001D3B28(&D_0046F550);
}

void func_001D5658(char *arg0) {
    s32 sp10;

    func_00283F70(&D_004BC230);
    if (arg0 != 0) {
        *(s32 *)(arg0 + 0x1C) |= 2;
    }
}

void func_001D5958(void) {
    func_001D5820(1, 0xFFFF);
}

void func_001D5B18(char *self)
{
    func_0023C580();
    func_001D69D8(self);
    func_001D6820(self, *(s32 *)(self + 0x16C), self + 0x1AC);
    func_001D6820(self, *(s32 *)(self + 0x190), self + 0x1B0);
}

void func_001D5B68(s32 arg0) {
    func_001FC968();
    func_001D5B98(arg0);
}

void func_001D5F18(void) {
    func_0023CC40();
}

s32 func_001D68F8(u32 arg0) {
    return arg0 < 6U;
}

void func_001D6B98(void) {
    func_001D6A60(1, 0xFFFF);
}

void func_001D6C00(s32 arg0) {
    func_0023C0B8();
    func_001C8970(arg0, 1, &D_00345FB0, 0);
}

void func_001D6D20(char *arg0, s32 arg1) {
    if (*(s32 *)(arg0 + 0x1F0) != 0) {
        func_0013BD88(*(s32 *)(arg0 + 0x1F0), arg0);
    }
    *(s32 *)(arg0 + 0x1F0) = arg1;
    if (arg1 != 0) {
        func_0013BD00(arg1, arg0);
    }
}

void func_001D6D70(s32 arg0) {
    func_0014C7F0();
    func_001309D8(arg0 + 0x248);
}

void func_001D6ED8(char* self, u32 value) { u32 i = *(u32*)(self + 0x218); if (i < 4) { *(u32*)(self + (i << 2) + 0x21C) = value; *(u32*)(self + 0x218) = i + 1; } }

void func_001D6F00(char *self, s32 value)
{
    u32 count = *(u32 *)(self + 0x22C);
    if (count < 4) {
        *(s32 *)(self + (count << 2) + 0x230) = value;
        *(u32 *)(self + 0x22C) = count + 1;
    }
}

void func_001D70A8(void* self)
{
    func_001D6BB8();
    *(float*)((char*)self + 0x254) = 1500.0f;
}

void func_001D76C8(void) {
    func_001D7590(1, 0xFFFF);
}

void func_001D7738(char *self)
{
    if (*(s32 *)(self + 0x38) != -1) {
        func_00252E40(*(s32 *)(self + 0x10), *(s32 *)(self + 0x38));
    }
    func_00238978(self);
    func_001D77E0(self, 4, 0);
    func_001D7D10(self);
}

void func_001D7790(char *self)
{
    func_00238980();
    func_001D77E0(self, -1, 0);
    if (*(s32 *)(self + 0x38) != -1) {
        func_00252FC0(*(s32 *)(self + 0x10), *(s32 *)(self + 0x38));
    }
}

s32 func_001D7F90(char* self)
{
    s32 state = *(s32*)(self + 0x30);
    s32 result = 0;
    if (state == 1) {
        result = func_001D8AC0(*(s32*)(self + 0x18));
        if (result != 0) {
            result = state;
        }
    }
    return result;
}
