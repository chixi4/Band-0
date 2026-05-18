
undefined4 FUN_ram_4209c3e0(char *param_1,uint param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  
  (*(code *)&SUB_ram_40010488)(param_3 + 4,0,0x14);
  param_3[1] = 2;
  param_3[2] = 2;
  *param_3 = 1;
  param_3[3] = 1;
  if (param_2 < 8) {
    return 0xffffffff;
  }
  if (*param_1 != -0x23) {
    return 0xfffffffe;
  }
  if ((uint)(byte)param_1[1] != param_2 - 2) {
    return 0xfffffffe;
  }
  iVar3 = FUN_ram_4209c052(param_1 + 2);
  if (iVar3 != 0x50f201) {
    return 0xfffffffe;
  }
  if (*(short *)(param_1 + 6) != 1) {
    return 0xfffffffe;
  }
  if (param_2 - 8 < 4) {
    if (param_2 != 8) {
      return 0xfffffffd;
    }
  }
  else {
    uVar4 = FUN_ram_4209c0de(param_1 + 8);
    param_3[2] = uVar4;
    uVar7 = param_2 - 0xc;
    if (uVar7 < 2) {
      uVar4 = 0xfffffffb;
    }
    else {
      param_3[1] = 0;
      iVar3 = param_2 - 0xe;
      uVar2 = (uint)*(ushort *)(param_1 + 0xc);
      pcVar1 = param_1 + 0xe;
      if (uVar2 == 0) {
        return 0xfffffffc;
      }
      if (iVar3 < (int)(uVar2 << 2)) {
        return 0xfffffffc;
      }
      uVar7 = 0;
      iVar8 = 0;
      pcVar10 = pcVar1;
      do {
        uVar5 = FUN_ram_4209c0de(pcVar10);
        uVar7 = uVar7 | uVar5;
        param_3[1] = uVar7;
        iVar8 = iVar8 + 1;
        pcVar10 = pcVar10 + 4;
      } while (iVar8 < (int)uVar2);
      iVar8 = (uVar2 - 1) * 4;
      uVar7 = uVar2 * -4 + iVar3;
      if (1 < (int)uVar7) {
        param_3[3] = 0;
        iVar3 = uVar2 * -4 + iVar3 + -2;
        uVar7 = (uint)*(ushort *)(param_1 + iVar8 + 0x12);
        if (uVar7 == 0) {
          return 0xfffffffa;
        }
        if ((int)(uVar7 << 2) <= iVar3) {
          uVar2 = 0;
          iVar9 = 0;
          pcVar10 = pcVar1 + iVar8 + 6;
          do {
            iVar6 = FUN_ram_4209c052(pcVar10);
            uVar5 = 1;
            if ((iVar6 != 0x50f201) && (uVar5 = 2, iVar6 != 0x50f202)) {
              uVar5 = (uint)(iVar6 == 0x50f200) << 4;
            }
            uVar2 = uVar2 | uVar5;
            param_3[3] = uVar2;
            iVar9 = iVar9 + 1;
            pcVar10 = pcVar10 + 4;
          } while (iVar9 < (int)uVar7);
          if ((int)(uVar7 * -4 + iVar3) < 2) {
            return 0;
          }
          param_3[4] = (uint)*(ushort *)(pcVar1 + iVar8 + 6 + uVar7 * 4);
          return 0;
        }
        return 0xfffffffa;
      }
      uVar4 = 0xfffffff9;
    }
    if (uVar7 == 1) {
      return uVar4;
    }
  }
  return 0;
}

