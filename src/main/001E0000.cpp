// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_0013CD00(s32, s32);
s32 func_00156948();
s32 func_001C8F20(s32, s32);
s32 func_00272FB0(void *, s32, s32);

s32 func_001E0988(void* self)
{
    s32 v = *(s32*)((char*)self + 0x1520);
    return v == 1;
}

s32 func_001E0D68(char *self, s32 arg1)
{
    s32 result;
    s32 temp_v0;

    result = func_00156948();
    if (*(s32 *)(self + 0x156C) != 0 && func_001C8F20(arg1, *(s32 *)(self + 0x156C)) != 0) {
        result = func_0013CD00(result, 3);
    } else if (*(s32 *)(self + 0x1520) == 0x10) {
        result = func_00272FB0(self + 0x18E0, arg1, result);
    }
    return result;
}

struct S_1E2778 { u8 pad[0x1400]; s32 flag; };

struct S_001E0DF8 { u8 pad0[0x1108]; void* f1108; u8 pad110C[0x1890 - 0x110C]; s32 f1890; u8 pad1894[0x18A0 - 0x1894]; s32 f18A0; u8 pad18A4[0x18DC - 0x18A4]; s32 f18DC; };

extern f32 D_003212DC;

extern u8 D_003249C0[];

extern s32 func_00173428(void* a);

extern u8 D_0036C700[];

extern void func_001854C8(u8*, s32, void*);

void func_001E2778(S_1E2778* a0, s32 a1) ;


s32 func_001E0DF8(S_001E0DF8* self) ;

s32 func_001E0DF8(S_001E0DF8* self) { void* a = self->f1108; s32 cond = 0; if (a) cond = func_00173428(a) != 0; if (cond) return 0; if (self->f18DC) return self->f18A0; if (self->f1890 == -1) return 1; return self->f18A0; }

void* func_001E2768() { return &D_003249C0; }

void func_001E2778(S_1E2778* a0, s32 a1) { a0->flag = a1; func_001854C8(D_0036C700, 0x4D, a0); a0->flag = -1; }
