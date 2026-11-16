// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

struct Obj_00130218 { u8 pad[0x1C]; void* value; };
extern void* func_0012FFB0(s32, void*, void*, void*, s32);
extern void func_0028ECE0(void*, void*, void*);
void* func_00130218(void* a0, void* a1, void* a2, void* a3)
{
    s32 kind = 14;
    if ((s32)a1 == *(s32*)((u8*)a3 + 0x30)) kind = 15;
    Obj_00130218* result = (Obj_00130218*)func_0012FFB0(7, a0, a1, a2, kind);
    result->value = a3;
    func_0028ECE0(a0, a1, result);
    return result;
}





extern void func_001317B0(void*);
extern void func_00132A50(void*);
extern void func_00133388(void*);
extern void func_00132438(void*);
extern void func_0024E988(void*,void*);
struct State_001323C8 { u8 pad0[0x10]; void* input; u8 pad14[0x1C]; s32 status; u8 pad34[0x4C]; void* ready; u8 pad84[0x4C]; s32 countD0; };
void func_001323C8(State_001323C8* self)
{
 func_001317B0(self); func_00132A50(self); func_00133388(self); func_00132438(self);
 if(self->ready && !self->status && self->countD0>=2) func_0024E988(self->input,(u8*)self+0x50);
}

extern void func_00134AE0(void*);
extern void func_00238AD8(void*,s32,void*);
void func_00134950(void* self,s32 type,void* data)
{
 if(type==10 && *(s32*)((u8*)data+8)==0x2AA && *(s32*)((u8*)self+0x30)==3) func_00134AE0(self);
 func_00238AD8(self,type,data);
}




