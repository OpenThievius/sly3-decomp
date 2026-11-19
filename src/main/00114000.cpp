// SPDX-License-Identifier: AGPL-3.0-or-later
#include "common.h"

s32 func_001D27F0(s32);
s32 func_002B8638(s32);
s32 func_002B7140(s32);
s32 func_002B80D8(s32);
s32 func_002B71B0(s32);
s32 func_002B71E8(s32);
s32 func_002B7258(s32);
s32 func_002B8408(s32);
s32 func_002B8478(s32);
s32 func_002B8440(s32);
s32 func_002B7220(s32);
s32 func_002B8350(s32);
s32 func_002B7E00(s32);
s32 func_002B7E38(s32);
s32 func_002B7E70(s32);
s32 func_002B7EA8(s32);
s32 func_002B7EE0(s32);
s32 func_002B7F18(s32);
extern s32 D_003409E0;
extern s32 D_003409F4;
extern s32 D_00340A08;
extern s32 D_00340A1C;
extern s32 D_00340A30;
extern s32 D_00340A44;
extern s32 D_00340A58;
extern s32 D_00340A6C;
extern s32 D_00340A80;
extern s32 D_00340A94;
extern s32 D_00340AA8;
extern s32 D_00340ABC;
extern s32 D_00340AD0;
extern s32 D_00340AE4;
extern s32 D_00340AF8;
extern s32 D_00340B0C;
extern s32 D_00340B20;
extern s32 D_00340B34;
extern s32 D_00340B48;
extern s32 D_00340B5C;
extern s32 D_00340B70;
extern s32 D_00340B84;
extern s32 D_00340B98;
extern s32 D_00340BAC;
extern s32 D_00340BC0;
extern s32 D_00340BD4;
extern s32 D_00340BE8;
extern s32 D_00340BFC;
extern s32 D_00340C10;
extern s32 D_00340C24;
extern s32 D_00340C38;
extern s32 D_00340C4C;
extern s32 D_00340C60;
extern s32 D_00340C74;
extern s32 D_00340C88;
extern s32 D_00340C9C;
extern s32 D_00340CB0;
extern s32 D_00340CC4;
extern s32 D_00340CD8;
extern s32 D_00340CEC;
extern s32 D_00340D00;
extern s32 D_00340D14;
extern s32 D_00340D28;
extern s32 D_00340D3C;
extern s32 D_00340D50;
extern s32 D_00340D64;
extern s32 D_00340D78;
extern s32 D_00340D8C;
extern s32 D_00340DA0;
extern s32 D_00340DB4;
extern s32 D_00340DC8;
extern s32 D_00340DDC;
extern s32 D_00340DF0;
extern s32 D_00340E04;
extern s32 D_00340E18;
extern s32 D_00340E2C;
extern s32 D_00340E40;
extern s32 D_00340E54;
extern s32 D_00340E68;
extern s32 D_00340E7C;
extern s32 D_00340E90;
extern s32 D_00340EA4;
extern s32 D_00340EB8;
extern s32 D_00340ECC;
extern s32 D_00340EE0;
extern s32 D_00340EF4;
extern s32 D_00340F08;
extern s32 D_00340F1C;
extern s32 D_00340F30;
extern s32 D_00340F44;
extern s32 D_00340F58;
extern s32 D_00340F6C;
extern s32 D_00340F80;
extern s32 D_00340F94;
extern s32 D_00340FA8;
extern s32 D_00340FBC;
extern s32 D_00340FD0;
extern s32 D_00340FE4;
extern s32 D_00340FF8;
extern s32 D_0034100C;
extern s32 D_00341020;
extern s32 D_00341034;
extern s32 D_00341048;
extern s32 D_0034105C;
extern s32 D_00341070;
extern s32 D_00341084;
extern s32 D_00341098;
extern s32 D_003410AC;
extern s32 D_003410C0;
extern s32 D_003410D4;
extern s32 D_003410E8;
extern s32 D_003410FC;
extern s32 D_00341110;
extern s32 D_00341124;
extern s32 D_00341138;
extern s32 D_0034114C;
extern s32 D_00341160;
extern s32 D_00341174;
extern s32 D_00341188;
extern s32 D_0034119C;
extern s32 D_003411B0;
extern s32 D_003411C4;
extern s32 D_003411D8;
extern s32 D_003411EC;
extern s32 D_00341200;
extern s32 D_00341214;
extern s32 D_00341228;
extern s32 D_0034123C;
extern s32 D_00341250;
extern s32 D_00341264;
extern s32 D_00341278;
extern s32 D_0034128C;
extern s32 D_003412A0;
extern s32 D_003412B4;
extern s32 D_003412C8;
extern s32 D_003412DC;
extern s32 D_003412F0;
extern s32 D_00341304;
extern s32 D_00341318;
extern s32 D_0034132C;
extern s32 D_00341340;
extern s32 D_00341354;
extern s32 D_00341368;
extern s32 D_0034137C;
extern s32 D_00341390;
extern s32 D_003413A4;
extern s32 D_003413B8;
extern s32 D_003413CC;
extern s32 D_003413E0;
extern s32 D_003413F4;
extern s32 D_00341408;
extern s32 D_0034141C;
extern s32 D_00341430;
extern s32 D_00341444;
extern s32 D_00341458;
extern s32 D_0034146C;
extern s32 D_00341480;
extern s32 D_00341494;
extern s32 D_003414A8;
extern s32 D_003414BC;
extern s32 D_003414D0;
extern s32 D_003414E4;
extern s32 D_003414F8;
extern s32 D_0034150C;
extern s32 D_00341520;
extern s32 D_00341534;
extern s32 D_00341548;
extern s32 D_0034155C;
extern s32 D_00341570;
extern s32 D_00341584;
extern s32 D_00341598;
extern s32 D_003415AC;
extern s32 D_003415C0;
extern s32 D_003415D4;
extern s32 D_003415E8;
extern s32 D_003415FC;
extern s32 D_00341610;
extern s32 D_00341624;
extern s32 D_00341638;
extern s32 D_0034164C;
extern s32 D_00341660;
extern s32 D_00341674;
extern s32 D_00341688;
extern s32 D_0034169C;
extern s32 D_003416B0;
extern s32 D_003416C4;
extern s32 D_003416D8;
extern s32 D_003416EC;
extern s32 D_00341700;
extern s32 D_00341714;
extern s32 D_00341728;
extern s32 D_0034173C;
extern s32 D_00341750;
extern s32 D_00341764;
extern s32 D_00341778;
extern s32 D_0034178C;
extern s32 D_003417A0;
extern s32 D_003417B4;
extern s32 D_003417C8;
extern s32 D_003417DC;
extern s32 D_003417F0;
extern s32 D_00341804;
extern s32 D_00341818;
extern s32 D_0034182C;
extern s32 D_00341840;
extern s32 D_00341854;
extern s32 D_00341868;
extern s32 D_0034187C;
extern s32 D_00341890;
extern s32 D_003418A4;
extern s32 D_003418B8;
extern s32 D_003418CC;
extern s32 D_003418E0;
extern s32 D_003418F4;
extern s32 D_00341908;
extern s32 D_0034191C;
extern s32 D_00341930;
extern s32 D_00341944;
extern s32 D_00341958;
extern s32 D_0034196C;
extern s32 D_00341980;
extern s32 D_00341994;
extern s32 D_003419A8;
extern s32 D_003419BC;
extern s32 D_003419D0;
extern s32 D_003419E4;
extern s32 D_003419F8;
extern s32 D_00341A0C;
extern s32 D_00341A20;
extern s32 D_00341A34;
extern s32 D_00341A48;
extern s32 D_00341A5C;
extern s32 D_00341A70;
extern s32 D_00341A84;
extern s32 D_00341A98;
extern s32 D_00341AAC;
extern s32 D_00341AC0;
extern s32 D_00341AD4;
extern s32 D_00341AE8;
extern s32 D_00341AFC;
extern s32 D_00341B10;
extern s32 D_00341B24;
extern s32 D_00341B38;
extern s32 D_00341B4C;
extern s32 D_00341B60;
extern s32 D_00341B74;
extern s32 D_00341B88;
extern s32 D_00341B9C;
extern s32 D_00341BB0;
extern s32 D_00341BC4;
extern s32 D_00341BD8;
extern s32 D_00341BEC;
extern s32 D_00341C00;
extern s32 D_00341C14;
extern s32 D_00341C28;
extern s32 D_00341C3C;
extern s32 D_00341C50;
extern s32 D_00341C64;
extern s32 D_00341C78;
extern s32 D_00341C8C;
extern s32 D_00341CA0;
extern s32 D_00341CB4;
extern s32 D_00341CC8;
extern s32 D_00341CDC;
extern s32 D_00341CF0;
extern s32 D_00341D04;
extern s32 D_00341D18;
extern s32 D_00341D2C;
extern s32 D_00341D40;
void func_001158B0(s32,s32);
s32 func_00115A10(s32, s32);
s32 func_00115D18(s32, s32);
s32 func_00117BF0(s32, s32, s32, s32);
s32 func_00271700(s32);
s32 func_0011E100(s32 *, s32, s32, s32);
extern s32 D_0036AE78;
extern s32 D_0036AE7C;
extern s32 D_0036AE80;
extern s32 D_0036AE84;
extern s32 D_0036AE88;
extern s32 D_0036AE8C;
extern s32 D_0036B080;
extern s32 D_004D2AD8;
extern s32 D_004D2BB0;
extern s32 D_004D2C88;
extern s32 D_004D2D60;
extern s32 D_004D2E38;
extern s32 D_004D2F10;

void func_00114000(void) {
    func_002B8638(func_001D27F0(0x40));
}

void func_00114028(void) {
    func_002B7140(func_001D27F0(0x80));
}

void func_00114050(void) {
    func_002B80D8(func_001D27F0(0x40));
}

void func_00114078(void) {
    func_002B71B0(func_001D27F0(0x50));
}

void func_001140A0(void) {
    func_002B71E8(func_001D27F0(0x110));
}

void func_001140C8(void) {
    func_002B7258(func_001D27F0(0x50));
}

void func_001140F0(void) {
    func_002B8408(func_001D27F0(0xB0));
}

void func_00114118(void) {
    func_002B8478(func_001D27F0(0xD0));
}

void func_00114140(void) {
    func_002B8440(func_001D27F0(0xE0));
}

void func_00114168(void) {
    func_002B7220(func_001D27F0(0x40));
}

void func_00114190(void) {
    func_002B8350(func_001D27F0(0x40));
}

void func_001141B8(void) {
    func_002B7E00(func_001D27F0(0x70));
}

void func_001141E0(void) {
    func_002B7E38(func_001D27F0(0x60));
}

void func_00114208(void) {
    func_002B7E70(func_001D27F0(0xB0));
}

void func_00114230(void) {
    func_002B7EA8(func_001D27F0(0x40));
}

void func_00114258(void) {
    func_002B7EE0(func_001D27F0(0x40));
}

void func_00114280(void) {
    func_002B7F18(func_001D27F0(0x40));
}

s32 *func_001142A8(void) {
    return &D_003409E0;
}

s32 *func_001142B8(void) {
    return &D_003409F4;
}

s32 *func_001142C8(void) {
    return &D_00340A08;
}

s32 *func_001142D8(void) {
    return &D_00340A1C;
}

s32 *func_001142E8(void) {
    return &D_00340A30;
}

s32 *func_001142F8(void) {
    return &D_00340A44;
}

s32 *func_00114308(void) {
    return &D_00340A58;
}

s32 *func_00114318(void) {
    return &D_00340A6C;
}

s32 *func_00114328(void) {
    return &D_00340A80;
}

s32 *func_00114338(void) {
    return &D_00340A94;
}

s32 *func_00114348(void) {
    return &D_00340AA8;
}

s32 *func_00114358(void) {
    return &D_00340ABC;
}

s32 *func_00114368(void) {
    return &D_00340AD0;
}

s32 *func_00114378(void) {
    return &D_00340AE4;
}

s32 *func_00114388(void) {
    return &D_00340AF8;
}

s32 *func_00114398(void) {
    return &D_00340B0C;
}

s32 *func_001143A8(void) {
    return &D_00340B20;
}

s32 *func_001143B8(void) {
    return &D_00340B34;
}

s32 *func_001143C8(void) {
    return &D_00340B48;
}

s32 *func_001143D8(void) {
    return &D_00340B5C;
}

s32 *func_001143E8(void) {
    return &D_00340B70;
}

s32 *func_001143F8(void) {
    return &D_00340B84;
}

s32 *func_00114408(void) {
    return &D_00340B98;
}

s32 *func_00114418(void) {
    return &D_00340BAC;
}

s32 *func_00114428(void) {
    return &D_00340BC0;
}

s32 *func_00114438(void) {
    return &D_00340BD4;
}

s32 *func_00114448(void) {
    return &D_00340BE8;
}

s32 *func_00114458(void) {
    return &D_00340BFC;
}

s32 *func_00114468(void) {
    return &D_00340C10;
}

s32 *func_00114478(void) {
    return &D_00340C24;
}

s32 *func_00114488(void) {
    return &D_00340C38;
}

s32 *func_00114498(void) {
    return &D_00340C4C;
}

s32 *func_001144A8(void) {
    return &D_00340C60;
}

s32 *func_001144B8(void) {
    return &D_00340C74;
}

s32 *func_001144C8(void) {
    return &D_00340C88;
}

s32 *func_001144D8(void) {
    return &D_00340C9C;
}

s32 *func_001144E8(void) {
    return &D_00340CB0;
}

s32 *func_001144F8(void) {
    return &D_00340CC4;
}

s32 *func_00114508(void) {
    return &D_00340CD8;
}

s32 *func_00114518(void) {
    return &D_00340CEC;
}

s32 *func_00114528(void) {
    return &D_00340D00;
}

s32 *func_00114538(void) {
    return &D_00340D14;
}

s32 *func_00114548(void) {
    return &D_00340D28;
}

s32 *func_00114558(void) {
    return &D_00340D3C;
}

s32 *func_00114568(void) {
    return &D_00340D50;
}

s32 *func_00114578(void) {
    return &D_00340D64;
}

s32 *func_00114588(void) {
    return &D_00340D78;
}

s32 *func_00114598(void) {
    return &D_00340D8C;
}

s32 *func_001145A8(void) {
    return &D_00340DA0;
}

s32 *func_001145B8(void) {
    return &D_00340DB4;
}

s32 *func_001145C8(void) {
    return &D_00340DC8;
}

s32 *func_001145D8(void) {
    return &D_00340DDC;
}

s32 *func_001145E8(void) {
    return &D_00340DF0;
}

s32 *func_001145F8(void) {
    return &D_00340E04;
}

s32 *func_00114608(void) {
    return &D_00340E18;
}

s32 *func_00114618(void) {
    return &D_00340E2C;
}

s32 *func_00114628(void) {
    return &D_00340E40;
}

s32 *func_00114638(void) {
    return &D_00340E54;
}

s32 *func_00114648(void) {
    return &D_00340E68;
}

s32 *func_00114658(void) {
    return &D_00340E7C;
}

s32 *func_00114668(void) {
    return &D_00340E90;
}

s32 *func_00114678(void) {
    return &D_00340EA4;
}

s32 *func_00114688(void) {
    return &D_00340EB8;
}

s32 *func_00114698(void) {
    return &D_00340ECC;
}

s32 *func_001146A8(void) {
    return &D_00340EE0;
}

s32 *func_001146B8(void) {
    return &D_00340EF4;
}

s32 *func_001146C8(void) {
    return &D_00340F08;
}

s32 *func_001146D8(void) {
    return &D_00340F1C;
}

s32 *func_001146E8(void) {
    return &D_00340F30;
}

s32 *func_001146F8(void) {
    return &D_00340F44;
}

s32 *func_00114708(void) {
    return &D_00340F58;
}

s32 *func_00114718(void) {
    return &D_00340F6C;
}

s32 *func_00114728(void) {
    return &D_00340F80;
}

s32 *func_00114738(void) {
    return &D_00340F94;
}

s32 *func_00114748(void) {
    return &D_00340FA8;
}

s32 *func_00114758(void) {
    return &D_00340FBC;
}

s32 *func_00114768(void) {
    return &D_00340FD0;
}

s32 *func_00114778(void) {
    return &D_00340FE4;
}

s32 *func_00114788(void) {
    return &D_00340FF8;
}

s32 *func_00114798(void) {
    return &D_0034100C;
}

s32 *func_001147A8(void) {
    return &D_00341020;
}

s32 *func_001147B8(void) {
    return &D_00341034;
}

s32 *func_001147C8(void) {
    return &D_00341048;
}

s32 *func_001147D8(void) {
    return &D_0034105C;
}

s32 *func_001147E8(void) {
    return &D_00341070;
}

s32 *func_001147F8(void) {
    return &D_00341084;
}

s32 *func_00114808(void) {
    return &D_00341098;
}

s32 *func_00114818(void) {
    return &D_003410AC;
}

s32 *func_00114828(void) {
    return &D_003410C0;
}

s32 *func_00114838(void) {
    return &D_003410D4;
}

s32 *func_00114848(void) {
    return &D_003410E8;
}

s32 *func_00114858(void) {
    return &D_003410FC;
}

s32 *func_00114868(void) {
    return &D_00341110;
}

s32 *func_00114878(void) {
    return &D_00341124;
}

s32 *func_00114888(void) {
    return &D_00341138;
}

s32 *func_00114898(void) {
    return &D_0034114C;
}

s32 *func_001148A8(void) {
    return &D_00341160;
}

s32 *func_001148B8(void) {
    return &D_00341174;
}

s32 *func_001148C8(void) {
    return &D_00341188;
}

s32 *func_001148D8(void) {
    return &D_0034119C;
}

s32 *func_001148E8(void) {
    return &D_003411B0;
}

s32 *func_001148F8(void) {
    return &D_003411C4;
}

s32 *func_00114908(void) {
    return &D_003411D8;
}

s32 *func_00114918(void) {
    return &D_003411EC;
}

s32 *func_00114928(void) {
    return &D_00341200;
}

s32 *func_00114938(void) {
    return &D_00341214;
}

s32 *func_00114948(void) {
    return &D_00341228;
}

s32 *func_00114958(void) {
    return &D_0034123C;
}

s32 *func_00114968(void) {
    return &D_00341250;
}

s32 *func_00114978(void) {
    return &D_00341264;
}

s32 *func_00114988(void) {
    return &D_00341278;
}

s32 *func_00114998(void) {
    return &D_0034128C;
}

s32 *func_001149A8(void) {
    return &D_003412A0;
}

s32 *func_001149B8(void) {
    return &D_003412B4;
}

s32 *func_001149C8(void) {
    return &D_003412C8;
}

s32 *func_001149D8(void) {
    return &D_003412DC;
}

s32 *func_001149E8(void) {
    return &D_003412F0;
}

s32 *func_001149F8(void) {
    return &D_00341304;
}

s32 *func_00114A08(void) {
    return &D_00341318;
}

s32 *func_00114A18(void) {
    return &D_0034132C;
}

s32 *func_00114A28(void) {
    return &D_00341340;
}

s32 *func_00114A38(void) {
    return &D_00341354;
}

s32 *func_00114A48(void) {
    return &D_00341368;
}

s32 *func_00114A58(void) {
    return &D_0034137C;
}

s32 *func_00114A68(void) {
    return &D_00341390;
}

s32 *func_00114A78(void) {
    return &D_003413A4;
}

s32 *func_00114A88(void) {
    return &D_003413B8;
}

s32 *func_00114A98(void) {
    return &D_003413CC;
}

s32 *func_00114AA8(void) {
    return &D_003413E0;
}

s32 *func_00114AB8(void) {
    return &D_003413F4;
}

s32 *func_00114AC8(void) {
    return &D_00341408;
}

s32 *func_00114AD8(void) {
    return &D_0034141C;
}

s32 *func_00114AE8(void) {
    return &D_00341430;
}

s32 *func_00114AF8(void) {
    return &D_00341444;
}

s32 *func_00114B08(void) {
    return &D_00341458;
}

s32 *func_00114B18(void) {
    return &D_0034146C;
}

s32 *func_00114B28(void) {
    return &D_00341480;
}

s32 *func_00114B38(void) {
    return &D_00341494;
}

s32 *func_00114B48(void) {
    return &D_003414A8;
}

s32 *func_00114B58(void) {
    return &D_003414BC;
}

s32 *func_00114B68(void) {
    return &D_003414D0;
}

s32 *func_00114B78(void) {
    return &D_003414E4;
}

s32 *func_00114B88(void) {
    return &D_003414F8;
}

s32 *func_00114B98(void) {
    return &D_0034150C;
}

s32 *func_00114BA8(void) {
    return &D_00341520;
}

s32 *func_00114BB8(void) {
    return &D_00341534;
}

s32 *func_00114BC8(void) {
    return &D_00341548;
}

s32 *func_00114BD8(void) {
    return &D_0034155C;
}

s32 *func_00114BE8(void) {
    return &D_00341570;
}

s32 *func_00114BF8(void) {
    return &D_00341584;
}

s32 *func_00114C08(void) {
    return &D_00341598;
}

s32 *func_00114C18(void) {
    return &D_003415AC;
}

s32 *func_00114C28(void) {
    return &D_003415C0;
}

s32 *func_00114C38(void) {
    return &D_003415D4;
}

s32 *func_00114C48(void) {
    return &D_003415E8;
}

s32 *func_00114C58(void) {
    return &D_003415FC;
}

s32 *func_00114C68(void) {
    return &D_00341610;
}

s32 *func_00114C78(void) {
    return &D_00341624;
}

s32 *func_00114C88(void) {
    return &D_00341638;
}

s32 *func_00114C98(void) {
    return &D_0034164C;
}

s32 *func_00114CA8(void) {
    return &D_00341660;
}

s32 *func_00114CB8(void) {
    return &D_00341674;
}

s32 *func_00114CC8(void) {
    return &D_00341688;
}

s32 *func_00114CD8(void) {
    return &D_0034169C;
}

s32 *func_00114CE8(void) {
    return &D_003416B0;
}

s32 *func_00114CF8(void) {
    return &D_003416C4;
}

s32 *func_00114D08(void) {
    return &D_003416D8;
}

s32 *func_00114D18(void) {
    return &D_003416EC;
}

s32 *func_00114D28(void) {
    return &D_00341700;
}

s32 *func_00114D38(void) {
    return &D_00341714;
}

s32 *func_00114D48(void) {
    return &D_00341728;
}

s32 *func_00114D58(void) {
    return &D_0034173C;
}

s32 *func_00114D68(void) {
    return &D_00341750;
}

s32 *func_00114D78(void) {
    return &D_00341764;
}

s32 *func_00114D88(void) {
    return &D_00341778;
}

s32 *func_00114D98(void) {
    return &D_0034178C;
}

s32 *func_00114DA8(void) {
    return &D_003417A0;
}

s32 *func_00114DB8(void) {
    return &D_003417B4;
}

s32 *func_00114DC8(void) {
    return &D_003417C8;
}

s32 *func_00114DD8(void) {
    return &D_003417DC;
}

s32 *func_00114DE8(void) {
    return &D_003417F0;
}

s32 *func_00114DF8(void) {
    return &D_00341804;
}

s32 *func_00114E08(void) {
    return &D_00341818;
}

s32 *func_00114E18(void) {
    return &D_0034182C;
}

s32 *func_00114E28(void) {
    return &D_00341840;
}

s32 *func_00114E38(void) {
    return &D_00341854;
}

s32 *func_00114E48(void) {
    return &D_00341868;
}

s32 *func_00114E58(void) {
    return &D_0034187C;
}

s32 *func_00114E68(void) {
    return &D_00341890;
}

s32 *func_00114E78(void) {
    return &D_003418A4;
}

s32 *func_00114E88(void) {
    return &D_003418B8;
}

s32 *func_00114E98(void) {
    return &D_003418CC;
}

s32 *func_00114EA8(void) {
    return &D_003418E0;
}

s32 *func_00114EB8(void) {
    return &D_003418F4;
}

s32 *func_00114EC8(void) {
    return &D_00341908;
}

s32 *func_00114ED8(void) {
    return &D_0034191C;
}

s32 *func_00114EE8(void) {
    return &D_00341930;
}

s32 *func_00114EF8(void) {
    return &D_00341944;
}

s32 *func_00114F08(void) {
    return &D_00341958;
}

s32 *func_00114F18(void) {
    return &D_0034196C;
}

s32 *func_00114F28(void) {
    return &D_00341980;
}

s32 *func_00114F38(void) {
    return &D_00341994;
}

s32 *func_00114F48(void) {
    return &D_003419A8;
}

s32 *func_00114F58(void) {
    return &D_003419BC;
}

s32 *func_00114F68(void) {
    return &D_003419D0;
}

s32 *func_00114F78(void) {
    return &D_003419E4;
}

s32 *func_00114F88(void) {
    return &D_003419F8;
}

s32 *func_00114F98(void) {
    return &D_00341A0C;
}

s32 *func_00114FA8(void) {
    return &D_00341A20;
}

s32 *func_00114FB8(void) {
    return &D_00341A34;
}

s32 *func_00114FC8(void) {
    return &D_00341A48;
}

s32 *func_00114FD8(void) {
    return &D_00341A5C;
}

s32 *func_00114FE8(void) {
    return &D_00341A70;
}

s32 *func_00114FF8(void) {
    return &D_00341A84;
}

s32 *func_00115008(void) {
    return &D_00341A98;
}

s32 *func_00115018(void) {
    return &D_00341AAC;
}

s32 *func_00115028(void) {
    return &D_00341AC0;
}

s32 *func_00115038(void) {
    return &D_00341AD4;
}

s32 *func_00115048(void) {
    return &D_00341AE8;
}

s32 *func_00115058(void) {
    return &D_00341AFC;
}

s32 *func_00115068(void) {
    return &D_00341B10;
}

s32 *func_00115078(void) {
    return &D_00341B24;
}

s32 *func_00115088(void) {
    return &D_00341B38;
}

s32 *func_00115098(void) {
    return &D_00341B4C;
}

s32 *func_001150A8(void) {
    return &D_00341B60;
}

s32 *func_001150B8(void) {
    return &D_00341B74;
}

s32 *func_001150C8(void) {
    return &D_00341B88;
}

s32 *func_001150D8(void) {
    return &D_00341B9C;
}

s32 *func_001150E8(void) {
    return &D_00341BB0;
}

s32 *func_001150F8(void) {
    return &D_00341BC4;
}

s32 *func_00115108(void) {
    return &D_00341BD8;
}

s32 *func_00115118(void) {
    return &D_00341BEC;
}

s32 *func_00115128(void) {
    return &D_00341C00;
}

s32 *func_00115138(void) {
    return &D_00341C14;
}

s32 *func_00115148(void) {
    return &D_00341C28;
}

s32 *func_00115158(void) {
    return &D_00341C3C;
}

s32 *func_00115168(void) {
    return &D_00341C50;
}

s32 *func_00115178(void) {
    return &D_00341C64;
}

s32 *func_00115188(void) {
    return &D_00341C78;
}

s32 *func_00115198(void) {
    return &D_00341C8C;
}

s32 *func_001151A8(void) {
    return &D_00341CA0;
}

s32 *func_001151B8(void) {
    return &D_00341CB4;
}

s32 *func_001151C8(void) {
    return &D_00341CC8;
}

s32 *func_001151D8(void) {
    return &D_00341CDC;
}

s32 *func_001151E8(void) {
    return &D_00341CF0;
}

s32 *func_001151F8(void) {
    return &D_00341D04;
}

s32 *func_00115208(void) {
    return &D_00341D18;
}

s32 *func_00115218(void) {
    return &D_00341D2C;
}

s32 *func_00115228(void) {
    return &D_00341D40;
}

void func_001158B0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        D_0036B080 = 0x130;
        temp_v1 = D_0036AE78 + 1;
        D_0036AE78 = temp_v1;
        if (temp_v1 == 1) {
            func_0011E100(&D_004D2AD8, 0x10, 0x800, 0x10);
        }
        temp_v0 = D_0036AE7C + 1;
        D_0036AE7C = temp_v0;
        if (temp_v0 == 1) {
            func_0011E100(&D_004D2BB0, 0x18, 0x400, 0x10);
        }
        temp_v0_2 = D_0036AE80 + 1;
        D_0036AE80 = temp_v0_2;
        if (temp_v0_2 == 1) {
            func_0011E100(&D_004D2C88, 0x18, 0x100, 0x10);
        }
        temp_v0_3 = D_0036AE84 + 1;
        D_0036AE84 = temp_v0_3;
        if (temp_v0_3 == 1) {
            func_0011E100(&D_004D2D60, 0x1C, 0x400, 0x10);
        }
        temp_v0_4 = D_0036AE88 + 1;
        D_0036AE88 = temp_v0_4;
        if (temp_v0_4 == 1) {
            func_0011E100(&D_004D2E38, 0xC, 0x100, 0x10);
        }
        temp_v0_5 = D_0036AE8C + 1;
        D_0036AE8C = temp_v0_5;
        if (temp_v0_5 == 1) {
            func_0011E100(&D_004D2F10, 0x18, 0x100, 0x10);
        }
    }
}

void func_001159F0(void) {
    func_001158B0(1, 0xFFFF);
}

void func_00115CF8(void) {
    func_00115A10(1, 0xFFFF);
}

void func_00117B20(void) {
    func_00115D18(1, 0xFFFF);
}

s32 func_00117C60(s32 arg0, s32 arg1, s32 arg2)
{
    return func_00117BF0(arg0, (s32)(func_00271700(arg1) + 1) << 1, arg1, arg2);
}

void func_00117D40(void) {

}

void func_00117DC8(void) {

}

void func_00117E78(void* self, s32 a1, s32 a2)
{
    *(s32*)((char*)self + 4) = a1;
    *(s32*)((char*)self + 8) = a2;
    *(s32*)((char*)self + 0xC) = 0;
}

void func_00117E88(void* pobject)
{
    *(int*)((char*)pobject + 0xC) = 0;
}

void func_00117F40(void) {

}

extern void func_00117E78(void*,s32,s32);

extern void func_002B89B8(void*);

extern void func_001D25B0(void*);

extern void func_001D2470(void*);

void func_00117CB8(s32 a, s32 v) { s32 local[2]; local[1]=0x10; local[0]=v; func_001D2470(local); }

void func_00117CE0(s32 a, s32 v1, s32 v2) { s32 local[2]; local[1]=v2; local[0]=v1; func_001D2470(local); }

void func_00117D48(s32 a, s32 v) { s32 local[2]; local[1]=0x10; local[0]=v; func_001D25B0(local); }

void func_00117D70(s32 a, s32 v1, s32 v2) { s32 local[2]; local[1]=v2; local[0]=v1; func_001D25B0(local); }

void* func_00117E30(u8* s) { extern u8 D_00350E10[]; func_002B89B8(s); *(void**)s = &D_00350E10; func_00117E78(s, 0, 0); return s; }
