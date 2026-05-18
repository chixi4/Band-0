
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42011d60(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  uVar4 = (_DAT_ram_60008850 & 7) * 8 + (_DAT_ram_6000884c >> 0x1d);
  uVar6 = (_DAT_ram_60008854 & 7) * 8 + (_DAT_ram_60008850 >> 0x1d);
  uVar7 = _DAT_ram_6000884c >> 0x15;
  uVar13 = _DAT_ram_60008854 >> 3;
  uVar12 = _DAT_ram_6000884c >> 0xe & 0x7f;
  uVar8 = uVar7 & 0xff;
  uVar1 = _DAT_ram_60008850 >> 3 & 0xf;
  uVar5 = _DAT_ram_60008850 >> 0xe & 0x1ff;
  uVar2 = _DAT_ram_60008850 >> 0x17 & 0x3f;
  uVar14 = uVar13 & 0xff;
  if (0x3f < uVar12) {
    uVar12 = -(_DAT_ram_6000884c >> 0xe & 0x3f);
  }
  if ((char)uVar7 < '\0') {
    uVar8 = -(uVar7 & 0x7f);
  }
  if ((uVar4 & 0x20) != 0) {
    uVar4 = -(uVar4 & 0x1f);
  }
  if (7 < uVar1) {
    uVar1 = -(_DAT_ram_60008850 >> 3 & 7);
  }
  if (0xff < uVar5) {
    uVar5 = -(_DAT_ram_60008850 >> 0xe & 0xff);
  }
  if (0x1f < uVar2) {
    uVar2 = -(_DAT_ram_60008850 >> 0x17 & 0x1f);
  }
  if ((uVar6 & 0x20) != 0) {
    uVar6 = -(uVar6 & 0x1f);
  }
  if ((char)uVar13 < '\0') {
    uVar14 = -(uVar13 & 0x7f);
  }
  iVar9 = uVar8 + uVar12 + 0x2c1 + 0x1f6;
  iVar15 = uVar6 + uVar5 + uVar2 + 0x4b5;
  iVar10 = (-((int)(uVar1 * 0x11) / -10) - (int)((iVar9 - (uVar12 + 0x2c1)) * 0x11) / -0x18) / 0x11;
  iVar3 = 0xf;
  iVar11 = (int)(iVar15 - (uVar14 + 0x35c)) / 0x12;
  uVar1 = iVar11 * -0x10 + iVar15;
  do {
    if (iVar10 * -0x1a + uVar4 + iVar9 + 10 + iVar10 * param_2 <= uVar1) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    uVar1 = uVar1 + iVar11;
  } while (iVar3 != 0x20);
  return 0x1f;
}

