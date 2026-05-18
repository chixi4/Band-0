
int FUN_ram_4206d8e8(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [76];
  
  uVar13 = 0xffffffff;
  if (param_3 == 0) {
    return -0x6c00;
  }
  if (*(int *)(param_3 + 0xc) == 0) {
    return -0x6c00;
  }
  uVar8 = *(uint *)(param_3 + 0x14);
  if (*(uint *)(param_3 + 0x10) < uVar8) {
    return -0x6c00;
  }
  if (*(uint *)(param_3 + 0x10) - uVar8 < *(uint *)(param_3 + 0x18)) {
    return -0x6c00;
  }
  iVar10 = *(int *)(param_3 + 0xc) + uVar8;
  iVar2 = FUN_ram_4206ee9a(param_2);
  if (iVar2 == 3) {
    iVar12 = *(int *)(param_2 + 4);
    iVar7 = *(int *)(param_2 + 8);
    iVar2 = param_3;
    if (iVar12 != iVar7) {
      if (*(uint *)(param_3 + 0x18) < 8) {
        return -0x7180;
      }
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 8;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) - 8;
      iVar2 = iVar10;
      iVar10 = iVar10 + 8;
    }
    uVar8 = *(uint *)(param_3 + 0x18);
    uVar11 = *(uint *)(param_2 + 0x10);
    if (uVar8 < uVar11) {
      return -0x7180;
    }
    *(uint *)(param_3 + 0x18) = uVar8 - uVar11;
    FUN_ram_4206d50a(auStack_80,param_2 + 0x24,iVar7,iVar2);
    FUN_ram_4206d568(auStack_f0,&uStack_100,param_3);
    iVar10 = FUN_ram_42027a50(param_2 + 0x98,auStack_80,iVar12,auStack_f0,uStack_100,iVar10,uVar8,
                              iVar10,*(int *)(param_3 + 0x10) - (iVar10 - *(int *)(param_3 + 0xc)),
                              &uStack_104,uVar11);
    if (iVar10 != 0) {
      if (iVar10 == -0x6300) {
        return -0x7180;
      }
      return iVar10;
    }
    bVar1 = true;
    if (*(uint *)(param_3 + 0x18) != uStack_104) {
      return -0x6c00;
    }
    goto LAB_ram_4206da22;
  }
  if (1 < iVar2 - 1U) {
    return -0x6c00;
  }
  uVar13 = *(uint *)(param_3 + 0x18);
  if (uVar13 < (uint)(*(int *)(param_2 + 4) << 1)) {
    return -0x7180;
  }
  if (uVar13 < *(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) + 1U) {
    return -0x7180;
  }
  bVar1 = false;
  if (iVar2 == 2) {
    *(uint *)(param_3 + 0x18) = uVar13 - *(int *)(param_2 + 0xc);
    FUN_ram_4206d568(auStack_f0,&uStack_100,param_3);
    iVar7 = param_2 + 0x40;
    iVar2 = FUN_ram_42029264(iVar7,auStack_f0,uStack_100);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_42029264(iVar7,iVar10,*(undefined4 *)(param_3 + 0x18));
      if (iVar2 == 0) {
        iVar2 = FUN_ram_4202927a(iVar7,auStack_80);
        bVar1 = false;
        if (iVar2 == 0) {
          iVar2 = FUN_ram_42029306(iVar7);
          if (iVar2 != 0) goto LAB_ram_4206dc7e;
          iVar2 = FUN_ram_42027c12(*(int *)(param_3 + 0x18) + iVar10,auStack_80,
                                   *(undefined4 *)(param_2 + 0xc));
          if (iVar2 == 0) {
            bVar1 = true;
            iVar2 = 0;
          }
          else {
            iVar2 = -0x7180;
            bVar1 = false;
          }
        }
      }
      else {
LAB_ram_4206dc7e:
        bVar1 = false;
      }
    }
    FUN_ram_420293a6(auStack_80,*(undefined4 *)(param_2 + 0xc));
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  uVar13 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_3 + 0x18) % uVar13 != 0) {
    return -0x7180;
  }
  uVar3 = FUN_ram_40399daa(param_2 + 0x24,iVar10);
  iVar10 = iVar10 + uVar13;
  iVar2 = *(int *)(param_3 + 0x18) - uVar13;
  *(uint *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + uVar13;
  *(int *)(param_3 + 0x18) = iVar2;
  iVar2 = FUN_ram_42027970(param_2 + 0x98,uVar3,uVar13,iVar10,iVar2,iVar10,&uStack_104);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar8 = *(uint *)(param_3 + 0x18);
  if (uVar8 != uStack_104) {
    return -0x6c00;
  }
  uVar11 = (uint)*(byte *)(iVar10 + uVar8 + -1);
  iVar2 = uVar11 + 1;
  if (!bVar1) {
    iVar2 = *(int *)(param_2 + 0xc) + 1 + uVar11;
  }
  uVar13 = FUN_ram_4206d4d0(uVar8,iVar2);
  uVar15 = (uVar11 & uVar13) + 1;
  uVar14 = uVar8;
  if (0x100 < uVar8) {
    uVar14 = 0x100;
  }
  uVar6 = 0;
  for (uVar14 = uVar8 - uVar14; uVar14 < uVar8; uVar14 = uVar14 + 1) {
    uVar4 = FUN_ram_4206d4d0(uVar14,uVar8 - uVar15);
    uVar5 = FUN_ram_4206d4be(uVar11 & uVar13 ^ (uint)*(byte *)(iVar10 + uVar14));
    uVar6 = uVar6 + (~uVar5 & uVar4 & 1);
  }
  uVar11 = FUN_ram_4206d4be(uVar6 ^ uVar15);
  uVar13 = ~uVar11 & uVar13;
  iVar2 = uVar8 - (uVar15 & uVar13);
  *(int *)(param_3 + 0x18) = iVar2;
  if (!bVar1) {
    (*(code *)&SUB_ram_40010488)(auStack_e0,0,0x30);
    (*(code *)&SUB_ram_40010488)(auStack_b0,0,0x30);
    uVar11 = iVar2 - *(int *)(param_2 + 0xc);
    *(uint *)(param_3 + 0x18) = uVar11;
    FUN_ram_4206d568(auStack_f0,&uStack_100,param_3);
    uVar14 = (uVar15 & uVar13) + uVar11;
    uVar8 = uVar14;
    if (uVar14 < 0x100) {
      uVar8 = 0x100;
    }
    uVar8 = uVar8 - 0x100;
    iVar2 = FUN_ram_4202914c(*(undefined4 *)(param_2 + 0x40));
    iVar7 = 0x40;
    if (iVar2 == 10) {
      iVar7 = 0x80;
    }
    iVar12 = *(int *)(param_2 + 0x48);
    uVar3 = FUN_ram_42029140(*(undefined4 *)(param_2 + 0x40));
    FUN_ram_42028e32(auStack_fc);
    iVar2 = FUN_ram_42028f3c(auStack_fc,*(undefined4 *)(param_2 + 0x40),0);
    if (iVar2 == 0) {
      iVar9 = param_2 + 0x40;
      iVar2 = FUN_ram_4202905e(iVar9,auStack_f0,uStack_100);
      if ((iVar2 == 0) && (iVar2 = FUN_ram_4202905e(param_2 + 0x40,iVar10,uVar8), iVar2 == 0)) {
        (*(code *)&SUB_ram_40010488)(auStack_e0,0x21,uVar3);
        for (uVar15 = uVar8; uVar15 <= uVar14; uVar15 = uVar15 + 1) {
          iVar2 = FUN_ram_42028eb8(auStack_fc,iVar9);
          if ((iVar2 != 0) || (iVar2 = FUN_ram_420290a6(auStack_fc,auStack_80), iVar2 != 0))
          goto LAB_ram_4206dd00;
          uVar6 = FUN_ram_4206d4be(uVar15 ^ uVar11);
          FUN_ram_42027cd6(~uVar6,auStack_e0,auStack_80,0,uVar3);
          if ((uVar15 < uVar14) && (iVar2 = FUN_ram_4202905e(iVar9,iVar10 + uVar15,1), iVar2 != 0))
          goto LAB_ram_4206dd00;
        }
        iVar2 = FUN_ram_420290a6(iVar9,auStack_80);
        if ((((iVar2 == 0) && (iVar2 = FUN_ram_42029004(iVar9), iVar2 == 0)) &&
            (iVar2 = FUN_ram_4202905e(iVar9,iVar12 + iVar7,iVar7), iVar2 == 0)) &&
           ((iVar2 = FUN_ram_4202905e(iVar9,auStack_e0,uVar3), iVar2 == 0 &&
            (iVar2 = FUN_ram_420290a6(iVar9,auStack_e0), iVar2 == 0)))) {
          iVar2 = FUN_ram_42029306(iVar9);
        }
      }
    }
LAB_ram_4206dd00:
    FUN_ram_42028e3e(auStack_fc);
    if (iVar2 == 0) {
      FUN_ram_42027d10(auStack_b0,iVar10,*(undefined4 *)(param_3 + 0x18),uVar8,uVar14,
                       *(undefined4 *)(param_2 + 0xc));
      iVar10 = FUN_ram_42027c12(auStack_b0,auStack_e0,*(undefined4 *)(param_2 + 0xc));
      bVar1 = true;
      if (iVar10 != 0) {
        uVar13 = 0;
      }
    }
    FUN_ram_420293a6(auStack_b0,*(undefined4 *)(param_2 + 0xc));
    FUN_ram_420293a6(auStack_e0,*(undefined4 *)(param_2 + 0xc));
    if (iVar2 != 0) {
      return iVar2;
    }
  }
LAB_ram_4206da22:
  if (uVar13 == 0) {
    return -0x7180;
  }
  if (!bVar1) {
    return -0x6c00;
  }
  return 0;
}

