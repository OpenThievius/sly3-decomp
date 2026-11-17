// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct ListNode_001229A8 { u8 pad0[0x0C]; ListNode_001229A8* next; };
struct Input_001229A8 { s16 type; u8 pad2[2]; ListNode_001229A8* head; u8 pad8[4]; s32 count; };
extern void func_0012BDD8(void*, s32);
extern void func_0012B3B0(void*, void*);
extern void* func_0012AF00(void*, void*);
extern void func_0012BC20(void*);
s32 func_0011E100(s32 *, s32, s32, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;

void func_00120F58(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        temp_v0 = D_0036AE78 + 1;
        D_0036AE78 = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0_2 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_3 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_4 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_5 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_6 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_6;
        if (temp_v0_6 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
}

void func_00121090(void) {
    func_00120F58(1, 0xFFFF);
}

char* func_00122638(char* out, s32 flag, char* in)
{
    s32 one;
    s32 value;

    value = 0;
    if (*(s16*)(in + 0x0) == 0x1F) {
        value = *(s32*)(in + 0x4) == 0;
    }
    *(s32*)(out + 4) = value;
    *(s16*)out = 0x15;
    return out;
}

void* func_001229A8(void* output, s32, Input_001229A8* input)
{
    u8 local[0x10];
    func_0012BDD8(local, 0);
    if (input->type != 0x1D)
        goto cleanup;
    {
        ListNode_001229A8* node = input->head;
        s32 index = 0;
        while (node)
        {
            if (index == input->count)
            {
                func_0012B3B0(local, node);
                break;
            }
            node = node->next;
            index++;
        }
    }
cleanup:
    func_0012AF00(output, local);
    func_0012BC20(local);
    return output;
}
