// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: the compiler alternates vector registers for the second and fourth quadword copies.
#include "common.h"
typedef unsigned int Quad_001302A0 __attribute__((mode(TI)));
struct __attribute__((aligned(16))) Obj_001302A0 { u8 pad[0x1C]; void* value; Quad_001302A0 copy[4]; };
extern void* func_0012FFB0(s32, void*, void*, void*, void*);
extern void func_0028ECE0(void*, void*, void*);
void* func_001302A0(void* a0, void* a1, void* a2, void* a3, void* a4, Quad_001302A0* a5)
{
    Obj_001302A0* result = (Obj_001302A0*)func_0012FFB0(6, a0, a1, a2, a3);
    result->value = a4;
    result->copy[0] = a5[0];
    result->copy[1] = a5[1];
    result->copy[2] = a5[2];
    result->copy[3] = a5[3];
    func_0028ECE0(a0, a1, result);
    return result;
}
