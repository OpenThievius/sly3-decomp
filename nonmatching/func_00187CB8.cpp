// SPDX-License-Identifier: AGPL-3.0-or-later
// Near miss: retail forms the address in $v0 and loads into $v0; this C forms it in $v1
// (lui $v1 / lw $v0, ($v1)). The same C is EXACT with -O1, which breaks other functions,
// so the C's shape is still to find.
#include "common.h"

extern s32 D_004794C4;

s32 func_00187CB8(s32 value)
{
    return D_004794C4 == value;
}
