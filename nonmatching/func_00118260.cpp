// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: The capacity and copy logic match; register allocation and multiply scheduling still differ.
#include "common.h"
struct Buffer_00118260 { u8* data; s32 count; u32 unknown8; s32 stride; };
extern void func_001181A8(void*, s32);
extern void func_00291E8C(void*, void*, s32);
void func_00118260(Buffer_00118260* self, void* source, s32 count)
{
    func_001181A8(self, self->count + count);
    func_00291E8C(self->data + self->stride * count, source, self->stride * count);
    self->count += count;
}
