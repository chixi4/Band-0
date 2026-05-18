
undefined4
FUN_ram_420a92d6(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                undefined4 param_7,undefined1 param_8,uint param_9)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  undefined1 auStack_26c [12];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [64];
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [63];
  byte abStack_c1 [65];
  byte abStack_80 [76];
  
  pbVar14 = abStack_c1 + 1;
  (*(code *)&SUB_ram_40010488)(pbVar14,0,0x80);
  if (0x80 < param_2) {
    return 0xffffe080;
  }
  if (0x40 < param_4) {
    return 0xffffe080;
  }
  if (0x40 < param_6) {
    return 0xffffe080;
  }
  if (param_3 == 0) {
    if (param_4 != 0) {
      return 0xffffe080;
    }
    bVar2 = false;
  }
  else {
    bVar2 = param_4 != 0;
  }
  if (param_5 == 0) {
    if (param_6 != 0) {
      return 0xffffe080;
    }
    bVar2 = param_3 != 0 && param_4 != 0;
    bVar3 = false;
  }
  else {
    bVar3 = param_6 != 0;
  }
  FUN_ram_4206c444(param_7);
  uVar10 = FUN_ram_4206c71c();
  iVar5 = (uint)(0x20 < uVar10) * 0x40;
  iVar6 = iVar5 + 0x40;
  (*(code *)&SUB_ram_40010488)(auStack_240,param_8,iVar6);
  if (bVar3) {
    FUN_ram_420a928e(auStack_1c0,iVar6,param_5,param_6);
  }
  if (bVar2) {
    FUN_ram_420a928e(auStack_140,iVar6,param_3,param_4);
  }
  if (param_2 == 0) {
LAB_ram_420a93d2:
    uVar4 = 0;
  }
  else {
    while (iVar7 = FUN_ram_4206c444(param_7), iVar7 != 0) {
      FUN_ram_4206c48e(auStack_26c);
      iVar8 = FUN_ram_4206c572(auStack_26c,iVar7,0);
      if (iVar8 != 0) break;
      iVar8 = FUN_ram_4206c624(auStack_26c);
      if ((((iVar8 == 0) && (iVar8 = FUN_ram_4206c666(auStack_26c,auStack_240,iVar6), iVar8 == 0))
          && ((!bVar3 || (iVar8 = FUN_ram_4206c666(auStack_26c,auStack_1c0,iVar6), iVar8 == 0)))) &&
         ((!bVar2 || (iVar8 = FUN_ram_4206c666(auStack_26c,auStack_140,iVar6), iVar8 == 0)))) {
        iVar9 = FUN_ram_4206c6a0(auStack_26c,auStack_260);
        uVar15 = 1;
        iVar8 = iVar9;
        if (iVar9 == 0) {
          while ((iVar8 = iVar9, uVar15 < param_9 &&
                 (iVar8 = FUN_ram_4206c6da(iVar7,auStack_260,uVar10), iVar8 == 0))) {
            uVar15 = uVar15 + 1;
          }
        }
      }
      FUN_ram_4206c49a(auStack_26c);
      if (iVar8 != 0) break;
      uVar15 = uVar10;
      if (param_2 < uVar10) {
        uVar15 = param_2;
      }
      param_2 = param_2 - uVar15;
      FUN_ram_4039c11e(param_1,auStack_260,uVar15);
      param_1 = param_1 + uVar15;
      if (param_2 == 0) goto LAB_ram_420a93d2;
      FUN_ram_420a928e(pbVar14,iVar6,auStack_260,uVar10);
      pbVar12 = pbVar14 + iVar6;
      iVar7 = iVar6;
      do {
        bVar1 = pbVar12[-1];
        iVar7 = iVar7 + -1;
        pbVar12[-1] = bVar1 + 1;
        if (bVar1 != 0xff) break;
        pbVar12 = pbVar12 + -1;
      } while (iVar7 != 0);
      if (bVar3) {
        puVar11 = auStack_180 + iVar5;
        uVar15 = 0;
        iVar7 = iVar6;
        do {
          iVar7 = iVar7 + -1;
          pbVar12 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar13 = (uint)pbVar14[iVar7] + (uint)*pbVar12 + uVar15;
          uVar15 = uVar13 >> 8;
          *puVar11 = (char)uVar13;
        } while (iVar7 != 0);
      }
      if (bVar2) {
        puVar11 = auStack_100 + iVar5;
        uVar15 = 0;
        iVar7 = iVar6;
        do {
          iVar7 = iVar7 + -1;
          pbVar12 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar13 = (uint)pbVar14[iVar7] + (uint)*pbVar12 + uVar15;
          uVar15 = uVar13 >> 8;
          *puVar11 = (char)uVar13;
        } while (iVar7 != 0);
      }
    }
    uVar4 = 0xffffff92;
  }
  FUN_ram_4206d7da(auStack_1c0,0x80);
  FUN_ram_4206d7da(auStack_140,0x80);
  FUN_ram_4206d7da(pbVar14,0x80);
  FUN_ram_4206d7da(auStack_260);
  return uVar4;
}

