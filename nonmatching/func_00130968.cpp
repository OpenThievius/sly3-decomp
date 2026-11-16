// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: the compiler keeps the callback table base in a different temporary register.
#include "common.h"
extern void* func_001306F0(void*);
void* func_00130968(void* a0, void* a1, void* a2, void*)
{
    void* object = func_001306F0(*(void**)a0);
    s32 offset = *(s16*)((u8*)*(void**)((u8*)object + 0x18) + 0x30);
    ((void (*)(void*, void*, void*, void*))*(u32*)((u8*)*(void**)((u8*)object + 0x18) + 0x34))((u8*)object + offset, a0, a1, a2);
    return object;
}
