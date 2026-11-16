// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct Quad_0011D830 { u32 words[4]; } __attribute__((aligned(16)));
struct Block_0011D830 { Quad_0011D830 quad[4]; } __attribute__((aligned(16)));
extern void func_0011D768(void*, void*);
extern void func_0011D558(void*, void*, void*);

void func_0011D830(void* source, void* key, Block_0011D830* output)
{
    Block_0011D830 result;
    Block_0011D830 workspace;
    func_0011D768(&workspace, source);
    func_0011D558(&result, key, &workspace);
    output->quad[0] = result.quad[0];
    output->quad[1] = result.quad[1];
    output->quad[2] = result.quad[2];
    output->quad[3] = result.quad[3];
}
