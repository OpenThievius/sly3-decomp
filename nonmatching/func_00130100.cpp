// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: register save order and quadword copy scheduling differ from retail.
#include "common.h"

struct __attribute__((aligned(16))) Copy_00130100 { s32 word[4]; };
struct __attribute__((aligned(16))) Obj_00130100 { u8 pad[0x20]; Copy_00130100 copy[4]; };
extern void* func_0012FFB0(s32, void*, void*, void*);
extern void func_0028ECE0(void*, void*, void*);

void* func_00130100(void* a0, void* a1, void* a2, void* a3, void* a4)
{
    Obj_00130100* result = (Obj_00130100*)func_0012FFB0(11, a0, a1, a2);
    Copy_00130100* source = (Copy_00130100*)a4;
    result->copy[0] = source[0];
    result->copy[1] = source[1];
    result->copy[2] = source[2];
    result->copy[3] = source[3];
    func_0028ECE0(a0, a1, result);
    return result;
}
