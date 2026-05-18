
int FUN_ram_4203049e(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                    undefined4 param_6)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  int *piVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_104 [8];
  undefined1 auStack_fc [24];
  int local_e4 [4];
  undefined1 auStack_d4 [15];
  byte abStack_c5 [9];
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [8];
  undefined1 auStack_ac [120];
  
  iVar4 = FUN_ram_4203040e(param_1,param_3);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = FUN_ram_4202df5a(param_1,param_4);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar5 = FUN_ram_4202f906(param_1);
  iVar4 = -0x4f80;
  if (iVar5 == 2) {
    FUN_ram_4202f918(local_e4);
    FUN_ram_4202476a(auStack_104);
    FUN_ram_4202f08e(abStack_c5 + 1,4);
    if (param_5 == 0) {
      return -0x4f80;
    }
    iVar5 = FUN_ram_420249f4(auStack_104,param_4);
    if (((iVar5 == 0) && (iVar5 = FUN_ram_4202fa5c(local_e4,param_4), iVar5 == 0)) &&
       (iVar5 = FUN_ram_42024a98(param_2,1), iVar5 == 0)) {
      iVar4 = param_2 + 0x10;
      iVar5 = FUN_ram_42024a98(iVar4,0);
      if (iVar5 == 0) {
        FUN_ram_42024774(param_2 + 8);
        iVar12 = param_1 + 4;
        do {
          iVar5 = FUN_ram_42024d4a(local_e4,iVar12);
          if (iVar5 < 0) {
            FUN_ram_4202476a(auStack_fc);
            iVar5 = FUN_ram_42025e02(auStack_fc,2,iVar12,param_5,param_6);
            if ((iVar5 == 0) &&
               (iVar5 = FUN_ram_4202f224(param_1,local_e4,local_e4,auStack_fc), iVar5 == 0)) {
              iVar5 = FUN_ram_4202f224(param_1,auStack_d4,auStack_d4,auStack_fc);
            }
            FUN_ram_42024774(auStack_fc);
            if (iVar5 == -0xe) {
              iVar5 = -0x4d00;
            }
            else if (iVar5 == 0) {
              iVar6 = *(int *)(param_1 + 0x40);
              goto LAB_ram_42030710;
            }
            break;
          }
          iVar5 = FUN_ram_42024ec8(local_e4,local_e4,iVar12);
        } while (iVar5 == 0);
      }
    }
LAB_ram_420305c8:
    FUN_ram_4202f596(local_e4);
    FUN_ram_42024774(auStack_104);
    FUN_ram_4202f0b6(abStack_c5 + 1,4);
    iVar4 = 0;
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  iVar5 = FUN_ram_4202f906(param_1);
  if (iVar5 != 1) {
    return iVar4;
  }
  uVar11 = *(uint *)(param_1 + 0x40);
  uVar18 = 2;
  if (4 < uVar11) {
    uVar18 = 4;
  }
  uVar21 = uVar18 - 1;
  uVar20 = 1 << (uVar21 & 0x1f);
  iVar5 = FUN_ram_4202939a(uVar20,0x18);
  uVar11 = ((uVar11 - 1) + uVar18) / uVar18;
  uVar15 = uVar20 & 0xff;
  iVar4 = -0x4d80;
  if (iVar5 == 0) goto LAB_ram_42030932;
  uVar13 = 0;
  do {
    iVar4 = uVar13 * 0x18;
    uVar13 = uVar13 + 1;
    FUN_ram_4202f918(iVar4 + iVar5);
  } while ((uVar13 & 0xff) < uVar15);
  (*(code *)&SUB_ram_40010488)(local_e4,0,0x1c);
  pbVar14 = abStack_c5 + 1;
  FUN_ram_4202f08e(pbVar14,4);
  iVar4 = FUN_ram_4202fa5c(iVar5,param_4);
  if (iVar4 == 0) {
    for (uVar13 = 0; uVar13 != uVar21 * uVar11; uVar13 = uVar13 + 1) {
      uVar8 = 1 << (uVar13 / uVar11 & 0x1f);
      iVar12 = (uVar8 & 0xff) * 0x18 + iVar5;
      if (((uVar13 % uVar11 == 0) &&
          (iVar4 = FUN_ram_4202fa5c(iVar12,((uVar8 & 0xff) >> 1) * 0x18 + iVar5), iVar4 != 0)) ||
         (iVar4 = FUN_ram_4202f67c(param_1,iVar12,iVar12,pbVar14), iVar4 != 0))
      goto LAB_ram_42030902;
    }
    piVar16 = local_e4;
    iVar4 = 0;
    uVar13 = 1;
    piVar10 = piVar16;
    do {
      iVar12 = uVar13 * 0x18;
      uVar13 = (uVar13 & 0x7f) << 1;
      iVar4 = iVar4 + 1;
      *piVar10 = iVar12 + iVar5;
      piVar10 = piVar10 + 1;
    } while (uVar13 < uVar15);
    iVar4 = FUN_ram_4202f378(param_1,local_e4,iVar4);
    if (iVar4 == 0) {
      uVar13 = 1;
      do {
        iVar12 = uVar13 * 0x18 + iVar5;
        uVar8 = uVar13;
        while (uVar8 != 0) {
          iVar4 = (uVar8 - 1) * 0x18;
          iVar4 = FUN_ram_4202fad4(param_1,iVar4 + iVar12,iVar5 + iVar4,iVar12,pbVar14);
          uVar8 = uVar8 - 1;
          if (iVar4 != 0) goto LAB_ram_42030902;
        }
        uVar13 = (uVar13 & 0x7f) << 1;
      } while (uVar13 < uVar15);
      iVar4 = iVar5 + 0x18;
      do {
        *piVar16 = iVar4;
        iVar4 = iVar4 + 0x18;
        piVar16 = piVar16 + 1;
      } while (iVar4 != (0x18 << (uVar21 & 0x1f)) + iVar5);
      iVar4 = FUN_ram_4202f378(param_1,local_e4,uVar20 - 1);
      if (iVar4 == 0) {
        iVar12 = iVar5 + 0x10;
        uVar20 = 0;
        do {
          uVar20 = uVar20 + 1 & 0xff;
          FUN_ram_42024774(iVar12);
          iVar12 = iVar12 + 0x18;
        } while (uVar20 < uVar15);
      }
    }
  }
LAB_ram_42030902:
  FUN_ram_4202f0b6(pbVar14,4);
  if (iVar4 != 0) goto LAB_ram_42030932;
  FUN_ram_4202476a(auStack_fc);
  FUN_ram_4202476a(local_e4);
  iVar4 = FUN_ram_42024ae6(param_1 + 0x34,0);
  if (iVar4 != 1) {
    iVar4 = -0x4f80;
    goto LAB_ram_42030932;
  }
  iVar12 = FUN_ram_42024ae6(param_3,0);
  iVar4 = FUN_ram_420249f4(auStack_fc,param_3);
  if (((iVar4 == 0) && (iVar4 = FUN_ram_42025026(local_e4,param_1 + 0x34,param_3), iVar4 == 0)) &&
     (iVar4 = FUN_ram_42024808(auStack_fc,local_e4,iVar12 == 0), iVar4 == 0)) {
    (*(code *)&SUB_ram_40010488)(pbVar14,0,uVar11 + 1);
    pbVar17 = pbVar14;
    for (uVar20 = 0; uVar11 != uVar20; uVar20 = uVar20 + 1) {
      uVar21 = 0;
      do {
        iVar6 = FUN_ram_42024ae6(auStack_fc);
        *pbVar17 = *pbVar17 | (byte)(iVar6 << (uVar21 & 0x1f));
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar18);
      pbVar17 = pbVar17 + 1;
    }
    bVar9 = 0;
    pbVar17 = pbVar14;
    while (pbVar14 + uVar11 != pbVar17) {
      bVar1 = pbVar17[1];
      bVar3 = bVar1 ^ bVar9;
      bVar7 = (~bVar3 & 1) * *pbVar17;
      *pbVar17 = *pbVar17 | ~bVar3 << 7;
      pbVar17[1] = bVar7 ^ bVar3;
      bVar9 = bVar1 & bVar9 | bVar7 & bVar3;
      pbVar17 = pbVar17 + 1;
    }
  }
  FUN_ram_42024774(local_e4);
  FUN_ram_42024774(auStack_fc);
  if (iVar4 != 0) goto LAB_ram_42030932;
  FUN_ram_4202f918(auStack_fc);
  FUN_ram_4202f08e(local_e4,4);
  iVar6 = FUN_ram_4202f138(param_1,param_2,iVar5,uVar15,abStack_c5[uVar11 + 1]);
  iVar4 = iVar6;
  if (iVar6 == 0) {
    if (param_5 == 0) {
LAB_ram_42030bc8:
      while (iVar4 = iVar6, uVar11 != 0) {
        uVar11 = uVar11 - 1;
        iVar4 = FUN_ram_4202f67c(param_1,param_2,param_2,local_e4);
        if (((iVar4 != 0) ||
            (iVar4 = FUN_ram_4202f138(param_1,auStack_fc,iVar5,uVar15,pbVar14[uVar11]), iVar4 != 0))
           || (iVar4 = FUN_ram_4202fad4(param_1,param_2,param_2,auStack_fc,local_e4), iVar4 != 0))
        break;
      }
    }
    else {
      FUN_ram_4202476a(auStack_104);
      iVar4 = FUN_ram_42025e02(auStack_104,2,param_1 + 4,param_5,param_6);
      if ((iVar4 == 0) &&
         (iVar4 = FUN_ram_4202f224(param_1,param_2 + 0x10,param_2 + 0x10,auStack_104), iVar4 == 0))
      {
        iVar19 = param_2 + 8;
        iVar4 = FUN_ram_4202f224(param_1,iVar19,iVar19,auStack_104);
        if ((iVar4 == 0) &&
           ((iVar4 = FUN_ram_4202f224(param_1,auStack_104,auStack_104), iVar4 == 0 &&
            (iVar4 = FUN_ram_4202f224(param_1,param_2,param_2,auStack_104), iVar4 == 0)))) {
          iVar4 = FUN_ram_4202f224(param_1,iVar19,iVar19,auStack_104);
        }
      }
      FUN_ram_42024774(auStack_104);
      if (iVar4 == -0xe) {
        iVar4 = -0x4d00;
      }
      else if (iVar4 == 0) goto LAB_ram_42030bc8;
    }
  }
  FUN_ram_4202f596(auStack_fc);
  FUN_ram_4202f0b6(local_e4,4);
  if ((iVar4 == 0) && (iVar4 = FUN_ram_4202f0de(param_1,param_2,iVar12 == 0), iVar4 == 0)) {
    iVar4 = FUN_ram_4202f2d8(param_1,param_2);
  }
LAB_ram_42030932:
  if ((iVar5 != *(int *)(param_1 + 0x58)) && (iVar5 != 0)) {
    uVar11 = 0;
    do {
      iVar12 = uVar11 * 0x18;
      uVar11 = uVar11 + 1;
      FUN_ram_4202f9ba(iVar12 + iVar5);
    } while ((uVar11 & 0xff) < uVar15);
    FUN_ram_420293a0(iVar5);
  }
  if (iVar4 != 0) {
    FUN_ram_4202f9ba(param_2);
  }
  return iVar4;
LAB_ram_42030710:
  if (iVar6 == -1) {
    iVar5 = FUN_ram_4202595e(0,iVar4,iVar4,iVar12);
    if ((iVar5 == 0) && (iVar5 = FUN_ram_4202f224(param_1,param_2,param_2,iVar4), iVar5 == 0)) {
      iVar5 = FUN_ram_42024a98(iVar4,1);
    }
    goto LAB_ram_420305c8;
  }
  uVar2 = FUN_ram_42024ae6(param_3,iVar6);
  iVar5 = FUN_ram_4202488e(param_2,local_e4,uVar2);
  if ((((((((iVar5 != 0) || (iVar5 = FUN_ram_4202488e(iVar4,auStack_d4,uVar2), iVar5 != 0)) ||
          (iVar5 = FUN_ram_4202f518(param_1,abStack_c5 + 1,param_2,iVar4), iVar5 != 0)) ||
         ((iVar5 = FUN_ram_4202f1d4(param_1,auStack_bc,param_2,iVar4), iVar5 != 0 ||
          (iVar5 = FUN_ram_4202f518(param_1,auStack_b4,local_e4,auStack_d4), iVar5 != 0)))) ||
        (iVar5 = FUN_ram_4202f1d4(param_1,auStack_ac,local_e4,auStack_d4), iVar5 != 0)) ||
       (((iVar5 = FUN_ram_4202f224(param_1,auStack_ac,auStack_ac,abStack_c5 + 1), iVar5 != 0 ||
         (iVar5 = FUN_ram_4202f224(param_1,auStack_b4,auStack_b4,auStack_bc), iVar5 != 0)) ||
        ((iVar5 = FUN_ram_4202f224(param_1,abStack_c5 + 1,abStack_c5 + 1), iVar5 != 0 ||
         (((iVar5 = FUN_ram_4202f224(param_1,auStack_bc,auStack_bc), iVar5 != 0 ||
           (iVar5 = FUN_ram_4202f224(param_1,param_2,abStack_c5 + 1,auStack_bc), iVar5 != 0)) ||
          (iVar5 = FUN_ram_4202f1d4(param_1,abStack_c5 + 1,abStack_c5 + 1,auStack_bc), iVar5 != 0)))
         ))))) ||
      ((iVar5 = FUN_ram_4202f224(param_1,iVar4,param_1 + 0xc,abStack_c5 + 1), iVar5 != 0 ||
       (iVar5 = FUN_ram_4202f518(param_1,iVar4,auStack_bc,iVar4), iVar5 != 0)))) ||
     ((iVar5 = FUN_ram_4202f518(param_1,local_e4,auStack_ac,auStack_b4), iVar5 != 0 ||
      (((iVar5 = FUN_ram_4202f224(param_1,local_e4,local_e4), iVar5 != 0 ||
        (iVar5 = FUN_ram_4202f1d4(param_1,auStack_d4,auStack_ac,auStack_b4), iVar5 != 0)) ||
       ((iVar5 = FUN_ram_4202f224(param_1,auStack_d4,auStack_d4), iVar5 != 0 ||
        (((iVar5 = FUN_ram_4202f224(param_1,auStack_d4,auStack_104), iVar5 != 0 ||
          (iVar5 = FUN_ram_4202f224(param_1,iVar4,abStack_c5 + 1,iVar4), iVar5 != 0)) ||
         (iVar5 = FUN_ram_4202488e(param_2,local_e4,uVar2), iVar5 != 0))))))))))
  goto LAB_ram_420305c8;
  iVar5 = FUN_ram_4202488e(iVar4,auStack_d4,uVar2);
  iVar6 = iVar6 + -1;
  if (iVar5 != 0) goto LAB_ram_420305c8;
  goto LAB_ram_42030710;
}

