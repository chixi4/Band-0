
undefined4 FUN_ram_4209c1ca(char *param_1,uint param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  
  (*(code *)&SUB_ram_40010488)(param_3 + 4,0,0x14);
  *param_3 = 2;
  param_3[1] = 8;
  param_3[2] = 8;
  param_3[3] = 1;
  param_3[7] = 0x20;
  if (param_2 < 4) {
    return 0xffffffff;
  }
  if (*param_1 != '0') {
    return 0xfffffffe;
  }
  if ((uint)(byte)param_1[1] != param_2 - 2) {
    return 0xfffffffe;
  }
  if (*(short *)(param_1 + 2) != 1) {
    return 0xfffffffe;
  }
  if (param_2 - 4 < 4) {
    if (param_2 != 4) {
      return 0xfffffffd;
    }
  }
  else {
    uVar2 = FUN_ram_4209c070(param_1 + 4);
    param_3[2] = uVar2;
    uVar5 = param_2 - 8;
    if (uVar5 < 2) {
      uVar2 = 0xfffffffb;
      uVar3 = 1;
    }
    else {
      param_3[1] = 0;
      iVar7 = param_2 - 10;
      uVar6 = (uint)*(ushort *)(param_1 + 8);
      pcVar1 = param_1 + 10;
      if (uVar6 == 0) {
        return 0xfffffffc;
      }
      if (iVar7 < (int)(uVar6 << 2)) {
        return 0xfffffffc;
      }
      uVar5 = 0;
      iVar9 = 0;
      pcVar10 = pcVar1;
      do {
        uVar3 = FUN_ram_4209c070(pcVar10);
        uVar5 = uVar5 | uVar3;
        param_3[1] = uVar5;
        iVar9 = iVar9 + 1;
        pcVar10 = pcVar10 + 4;
      } while (iVar9 < (int)uVar6);
      iVar9 = (uVar6 - 1) * 4;
      uVar5 = 1;
      uVar3 = uVar6 * -4 + iVar7;
      iVar7 = uVar6 * -4 + 4 + iVar7;
      if (1 < (int)uVar3) {
        param_3[3] = 0;
        pcVar10 = pcVar1 + iVar9 + 6;
        iVar8 = iVar7 + -6;
        uVar5 = (uint)*(ushort *)(param_1 + iVar9 + 0xe);
        if (uVar5 == 0) {
          return 0xfffffffa;
        }
        if (iVar8 < (int)(uVar5 << 2)) {
          return 0xfffffffa;
        }
        uVar6 = 0;
        iVar11 = 0;
        pcVar12 = pcVar10;
        do {
          iVar4 = FUN_ram_4209c052(pcVar12);
          uVar3 = 1;
          if (((iVar4 != 0xfac01) && (uVar3 = 2, iVar4 != 0xfac02)) &&
             (uVar3 = 0x80, iVar4 != 0xfac05)) {
            uVar3 = (uint)(iVar4 == 0xfac06) << 8;
          }
          uVar6 = uVar6 | uVar3;
          param_3[3] = uVar6;
          iVar11 = iVar11 + 1;
          pcVar12 = pcVar12 + 4;
        } while (iVar11 < (int)uVar5);
        iVar11 = (uVar5 - 1) * 4;
        iVar8 = iVar8 + uVar5 * -4;
        if (iVar8 < 2) {
          return 0;
        }
        param_3[4] = (uint)*(ushort *)(pcVar1 + iVar11 + iVar9 + 10);
        if (iVar8 < 4) {
          return 0;
        }
        uVar5 = (iVar7 + uVar5 * -4) - 10;
        uVar6 = (uint)*(ushort *)((int)(pcVar1 + iVar11 + iVar9 + 10) + 2);
        if (uVar6 <= uVar5 >> 4) {
          param_3[5] = uVar6;
          param_3[6] = pcVar10 + iVar11 + 8;
          if ((int)(uVar5 + uVar6 * -0x10) < 4) {
            return 0;
          }
          uVar2 = FUN_ram_4209c070(pcVar10 + iVar11 + 8 + uVar6 * 0x10);
          param_3[7] = uVar2;
          iVar7 = FUN_ram_4209c15a();
          if (iVar7 != 0) {
            return 0;
          }
          return 0xfffffff6;
        }
        return 0xfffffff7;
      }
      uVar2 = 0xfffffff9;
    }
    if (uVar3 == uVar5) {
      return uVar2;
    }
  }
  return 0;
}

