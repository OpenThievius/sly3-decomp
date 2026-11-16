// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: call flow matches, but the compiler allocates a larger temporary frame and reorders the quad copy.
#include "common.h"
struct Quad_00126F68 { s32 word[4]; } __attribute__((aligned(16)));
struct Obj_00126F68 { u8 pad[0x14]; Quad_00126F68* source; u8 pad2[0x8]; void* d; void* a; };
extern void func_0012BDD8(void*, s32);
extern Quad_00126F68 func_001C94E8(void*, void*, Quad_00126F68);
extern void* func_0012AF00(void*, void*);
extern void func_0012BC20(void*);
void* func_00126F68(void* out, void* x, Obj_00126F68* obj)
{
 Quad_00126F68 temp;
 func_0012BDD8(&temp, 24);
 temp=func_001C94E8(obj->a,obj->d,*obj->source);
 func_0012AF00(out,&temp);
 *obj->source=temp;
 func_0012BC20(&temp);
 return out;
}
