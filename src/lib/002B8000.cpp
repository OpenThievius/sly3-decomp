// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

extern s32 D_00350EA0;
s32 func_002BA318(s32);
s32 func_0011E1F0(s32 *, s32);
s32 func_0012BC20(s32);
s32 func_002B3F48(s32);
s32 func_002BADA0(s32, s32);
extern s32 D_004D2BB0;
s32 func_002B4E48(s32);
extern s32 D_004D2F10;
s32 func_002BBCC0();
extern s32 D_00351258;
extern s32 D_00351238;
extern s32 D_003532D0;
s32 func_00118DA0(s32, s32, s32);
s32 func_001D2818(s32);
s32 func_002BBEF0();
extern s32 D_00351340;
extern s32 D_00351318;
s32 func_002BBF08();
extern s32 D_003512F0;
extern s32 D_003512C8;
extern s32 D_003512A0;
extern s32 D_00351278;
s32 func_002B3B90(s32);
s32 func_002BA8A8(s32, s32);
s32 func_002BA8F8(s32, s32);
extern s32 D_004D2AD8;
s32 func_002BABA8(s32 *, s32);
s32 func_002BB8B8(s32 *, s32);

void func_002B8750(int* p)
{
    p[0] = 0;
    p[1] = 0;
}

s32 func_002B8840(s32 arg0) {
    return arg0;
}

s32 **func_002B89B8(s32 **arg0) {
    *arg0 = &D_00350EA0;
    return arg0;
}

s32 func_002BA000(s32 arg0) {
    return arg0;
}

s32 func_002BA008(s32 arg0) {
    return arg0;
}

void func_002BA1F8(s32 arg0, s32 arg1, s32 arg2) {
    func_00118DA0(arg2, 4, arg1);
}

void func_002BA3E8(s32 arg0) {
    func_002BA318(arg0 + 0x14);
}

void func_002BA690(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BA840(s32 arg0, s32 arg1) {
    func_002BA8F8(arg0 + 0xC, 2);
    func_002B3B90(arg0);
    func_002BA8A8(arg0, 0);
    if (arg1 & 1) {
        func_0011E1F0(&D_004D2AD8, arg0);
    }
}

void func_002BAA50(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    s32 *target = *arg0;
    if (target != 0) {
        if (--(*target) == 0) {
            func_002BABA8(target, 3);
        }
    }
    *arg0 = arg1;
}

void func_002BAB68(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    *arg0 = arg1;
}

void func_002BAB88(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    *arg0 = arg1;
}

void func_002BACE0(s32 arg0, s32 arg1) {
    func_002BADA0(arg0 + 0x14, 2);
    func_0012BC20(arg0 + 0xC);
    func_002B3F48(arg0);
    if (arg1 & 1) {
        func_0011E1F0(&D_004D2BB0, arg0);
    }
}

void func_002BAEB0(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    *arg0 = arg1;
}

void func_002BAF38(void) {

}

void func_002BAF40(void) {

}

void func_002BAF48(void) {

}

void func_002BAF50(void) {

}

void func_002BAF58(void) {

}

void func_002BAF60(void) {

}

void func_002BB770(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BB798(s32 arg0, s32 arg1) {
    func_0012BC20(arg0 + 8);
    func_002B4E48(arg0);
    if (arg1 & 1) {
        func_0011E1F0(&D_004D2F10, arg0);
    }
}

s32 **func_002BBBC8(s32 **arg0) {
    func_002BBCC0();
    *arg0 = &D_00351258;
    return arg0;
}

s32 **func_002BBC00(s32 **arg0) {
    func_002BBCC0();
    *arg0 = &D_00351238;
    return arg0;
}

s32 **func_002BBC88(s32 **arg0) {
    func_002BBCC0();
    *arg0 = &D_003532D0;
    return arg0;
}

s32 **func_002BBD40(s32 **arg0) {
    func_002BBEF0();
    *arg0 = &D_00351340;
    return arg0;
}

s32 **func_002BBD78(s32 **arg0) {
    func_002BBEF0();
    *arg0 = &D_00351318;
    return arg0;
}

s32 **func_002BBDB0(s32 **arg0) {
    func_002BBF08();
    *arg0 = &D_003512F0;
    return arg0;
}

s32 **func_002BBDE8(s32 **arg0) {
    func_002BBF08();
    *arg0 = &D_003512C8;
    return arg0;
}

s32 **func_002BBE20(s32 **arg0) {
    func_002BBF08();
    *arg0 = &D_003512A0;
    return arg0;
}

s32 **func_002BBE58(s32 **arg0) {
    func_002BBF08();
    *arg0 = &D_00351278;
    return arg0;
}

void func_002BBEC8(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

void func_002BBF40(s32 **arg0, s32 *arg1) {
    if (arg1 != 0) {
        *arg1 += 1;
    }
    s32 *target = *arg0;
    if (target != 0) {
        s32 value = *target - 1;
        *target = value;
        if (value == 0) {
            func_002BB8B8(target, 3);
        }
    }
    *arg0 = arg1;
}

void func_002BBFE8(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_001D2818(arg0);
    }
}

typedef long long v2l __attribute__((vector_size(16)));

struct B_271B20 { u8 pad[4]; s32 x4; s32 x8; u8 pad2[0xC]; };

extern void func_002BACE0(void* p, s32 mode);

extern void func_002BA840(void* p, s32 mode);

extern u8 D_00475480[];

extern u8 D_00351D28[];

extern u8 D_00351368[];

extern u8 D_0035BB68[];

extern void func_002B89A0(void*);

extern u8 D_00360C48[];

extern u8 D_00364250[];

extern void func_002B56A0(void*);

extern u8 D_003614C0[];

extern void func_002B86C8(void*);

extern u8 D_00350A60[];

extern void func_002B8798(void*);

extern u8 D_00357768[];

extern u8 D_00350C28[];

extern void func_002B5328(void*);

extern void func_002B8700(void*);

extern u8 D_0035C358[];

extern u8 D_00365408[];

extern void func_002B8670(void*);

extern u8 D_0035FC60[];

extern u8 D_0035F070[];

extern u8 D_0035D400[];

extern u8 D_0035D488[];

extern u8 D_0035D510[];

extern u8 D_0035D598[];

extern u8 D_0035D620[];

extern u8 D_0035D6A8[];

extern u8 D_0035D730[];

extern u8 D_0035D7C0[];

extern void func_002B8408(void*);

extern u8 D_0035D850[];

extern u8 D_0035BAE0[];

extern u8 D_0035B770[];

extern u8 D_0035B7F8[];

extern u8 D_0035B880[];

extern u8 D_0035B908[];

extern u8 D_0035B990[];

extern u8 D_0035BA18[];

extern u8 D_00358988[];

extern u8 D_003583F0[];

extern u8 D_00358368[];

extern u8 D_003582E0[];

extern u8 D_00355DB8[];

extern u8 D_00355E40[];

extern u8 D_00355EC8[];

extern void func_002B58E8(void*);

extern u8 D_00355F50[];

extern void func_002B7D58(void*);

extern u8 D_00351CC0[];

extern u8 D_00351390[];

extern u8 D_003511F8[];

extern u8 D_0035BBD8[];

extern u8 D_0035B4E8[];

extern u8 D_00354E58[];

extern u8 D_00350DE8[];

extern f32 D_003212DC;

extern void func_00292034(void*, s32, s32);

extern void func_0019A2D0(u8*, s32*);

extern void func_00238980(u8*);

extern void func_00238978(u8*);

extern void func_0011B028(void*, void*);

extern void func_002936A0(u8*);

extern void* func_002387A8(u8*, s32);

extern s32 D_0034A69C;

extern u8 D_004CC728[];

extern s32 D_0034A6B8;

extern u8 D_004CCBE8[];

extern s32 D_0036C694;

extern s32 D_0036C674;

extern u8 D_0036C698[];

extern u8* D_00468D00;

extern u8 D_00370AD0[];

extern u8 D_00358E18[];

extern void func_002BAA50(void*, s32);

extern void func_002BBF40(void*, s32);

extern void func_0013BDE0(void*);

extern u8 D_004799A0[];

extern void func_002BA960(void*, s32);

extern void func_002BEB58(void*, s32);

extern u8 D_00479C44[];

extern u8 D_00479C5C[];

extern void func_002BC7F0(void*, s32);

extern u8 D_00479C74[];

extern void func_002BAD40(void*, s32);

extern void func_002B4308(void*);

extern u8 D_004D2C88[];

extern void func_002B4A88(void*);

extern u8 D_004D2E38[];

extern u8 D_00479C10[];

extern u8 D_00479D44[];

extern u8 D_00479A14[];

extern u8 D_0047A418[];

extern void func_0015AD18(void*, void*);

u8* func_002B81F0(u8* p) ;

void func_002BB798(u8* a, s32 flag) ;

void* func_002B8030(u8* self) { func_002B7D58(self); *(void**)(self+0xC) = &D_00355F50; return self; }

void* func_002B8068(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_00355EC8; return self; }

void* func_002B80A0(u8* self) { func_002B7D58(self); *(void**)(self+0xC) = &D_00355E40; return self; }

void* func_002B80D8(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_00355DB8; return self; }

void* func_002B8110(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_003582E0; return self; }

void* func_002B8148(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_00358368; return self; }

void* func_002B8180(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_003583F0; return self; }

void* func_002B81B8(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_00358988; return self; }

u8* func_002B81F0(u8* p) { func_002B58E8(p); *(void**)(p + 0xC) = D_00358E18; func_00292034(p + 0x30, 0, 0x10); return p; }

void* func_002B8238(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035BA18; return self; }

void* func_002B8270(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035B990; return self; }

void* func_002B82A8(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035B908; return self; }

void* func_002B82E0(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035B880; return self; }

void* func_002B8318(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035B7F8; return self; }

void* func_002B8350(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035B770; return self; }

void* func_002B8388(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035BAE0; return self; }

void* func_002B8408(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035D850; return self; }

void* func_002B8440(u8* self) { func_002B8408(self); *(void**)(self+0xC) = &D_0035D7C0; return self; }

void* func_002B8478(u8* self) { func_002B8408(self); *(void**)(self+0xC) = &D_0035D730; return self; }

void* func_002B84B0(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035D6A8; return self; }

void* func_002B84E8(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035D620; return self; }

void* func_002B8520(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035D598; return self; }

void* func_002B8558(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035D510; return self; }

void* func_002B8590(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035D488; return self; }

void* func_002B85C8(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035D400; return self; }

void* func_002B8600(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035F070; return self; }

void* func_002B8638(u8* self) { func_002B58E8(self); *(void**)(self+0xC) = &D_0035FC60; return self; }

void* func_002B8690(u8* self) { func_002B8670(self); *(void**)(self+0xC) = &D_00365408; return self; }

void* func_002B86C8(u8* self) { func_002B8670(self); *(void**)(self+0xC) = &D_0035C358; return self; }

u8* func_002B8700(u8* a) { *(void**)(a + 0x14) = &D_00350DE8; return a; }

void* func_002B8718(u8* self) { func_002B8700(self); *(void**)(self+0x14) = &D_00350DE8; return self; }

void* func_002B8760(u8* self) { func_002B5328(self); *(void**)(self+0xC) = &D_00350C28; return self; }

void* func_002B8798(u8* self) { func_002B5328(self); *(void**)(self+0xC) = &D_00357768; return self; }

void* func_002B87D0(u8* self) { func_002B8798(self); *(void**)(self+0xC) = &D_00350A60; return self; }

void* func_002B8808(u8* self) { func_002B86C8(self); *(void**)(self+0xC) = &D_003614C0; return self; }

u8* func_002B8848(u8* a) { *(void**)(a + 0xEC) = &D_00354E58; return a; }

void* func_002B8860(u8* self) { func_002B56A0(self); *(void**)(self+0xC) = &D_00364250; return self; }

u8* func_002B8898(u8* a) { *(void**)(a + 0x24) = &D_0035B4E8; return a; }

void* func_002B8910(u8* self) { func_002B56A0(self); *(void**)(self+0xC) = &D_00360C48; return self; }

void* func_002B8948(u8* self) { func_002B89A0(self); *(void**)(self+0x2C) = &D_0035BB68; return self; }

s32 func_002B8980(u8* a, s32 a1) { *(s32*)((u8*)a + 0x1A0) = 0; return (s32)a; }

s32 func_002B8990(u8* a, s32 a1) { *(s32*)((u8*)a + 0x14) = 0; return (s32)a; }

u8* func_002B89A0(u8* a) { *(void**)(a + 0x2C) = &D_0035BBD8; return a; }

void* func_002B9FF0(u8* a, v2l v) { *(v2l*)a = v; return a; }

void* func_002BA808(u8* a, u8* b) { v2l v = *(v2l*)b; *(v2l*)a = v; return a; }

void* func_002BA818(u8* a, v2l v) { *(v2l*)a = v; return a; }

void func_002BA8A8(u8* a, s32 flag) { func_002BA960(a, 0); if (flag & 1) func_0011E1F0((s32*) &D_004D2AD8, (s32)a); }

void func_002BA8F8(u8* self, s32 arg) { u8* p = *(u8**)(self + 0); if (p) { u32 v = *(u16*)(p + 2) - 1; *(u16*)(p + 2) = (u16)v; if (!(v << 16)) func_002BA840(p, 3); } if (arg & 1) func_001D2818((s32)self); }

void func_002BA960(u8* self, s32 arg) { func_0012BC20((s32)self); if (arg & 1) func_001D2818((s32)self); }

void func_002BABA8(u8* self, s32 flag) { void* p = *(void**)(self + 0xC); if (p) { s32 v = *(s32*)p - 1; *(s32*)p = v; if (v == 0) func_002BACE0(p, 3); } func_002BAD40(self + 8, 2); func_002B4308(self); if (flag & 1) func_0011E1F0((s32*) &D_004D2C88, (s32)self); }

void func_002BAD40(u8* self, s32 arg) { u8* p = *(u8**)(self + 0); if (p) { s32 v = *(s32*)(p + 0) - 1; *(s32*)(p + 0) = v; if (v == 0) func_002BABA8(p, 3); } if (arg & 1) func_001D2818((s32)self); }

void func_002BADA0(u8* self, s32 arg) { u8* p = *(u8**)(self + 0); if (p) { s32 v = *(s32*)(p + 0) - 1; *(s32*)(p + 0) = v; if (v == 0) func_002BACE0(p, 3); } if (arg & 1) func_001D2818((s32)self); }

void func_002BB8B8(u8* self, s32 flag) { void* p = *(void**)(self + 8); if (p) { s32 v = *(s32*)p - 1; *(s32*)p = v; if (v == 0) func_002BACE0(p, 3); } func_002B4A88(self); if (flag & 1) func_0011E1F0((s32*) &D_004D2E38, (s32)self); }

u8* func_002BBC38(u8* a) { *(void**)(a + 0x18) = &D_003511F8; return a; }

u8* func_002BBCC0(u8* a) { *(void**)(a + 0x0) = &D_00351390; return a; }

void* func_002BBE90(u8* s) { func_002B8670(s); *(s32*)(s+0x5C)=0; *(void**)(s+0xC) = &D_00351D28; return s; }

u8* func_002BBEF0(u8* a) { *(void**)(a + 0x0) = &D_00351CC0; return a; }

void* func_002BBF08(u8* self) { func_002BBEF0(self); *(void**)(self+0x0) = &D_00351368; return self; }
