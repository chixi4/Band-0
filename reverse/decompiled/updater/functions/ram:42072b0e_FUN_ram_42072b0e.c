
int FUN_ram_42072b0e(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int aiStack_34 [4];
  
  pcVar8 = (char *)*param_1;
  if (param_2 - (int)pcVar8 < 1) {
    return -0x2460;
  }
  if (*pcVar8 == '\x17') {
    iVar10 = 2;
  }
  else {
    iVar10 = 4;
    if (*pcVar8 != '\x18') {
      return -0x2462;
    }
  }
  *param_1 = (int)(pcVar8 + 1);
  iVar1 = FUN_ram_4202b8a0(param_1,param_2,aiStack_34);
  if (iVar1 == 0) {
    if (((uint)(iVar10 != 2) * 2 + 0xc == aiStack_34[0]) ||
       ((aiStack_34[0] == (-(uint)(iVar10 != 2) & 2) + 0xd &&
        (*(char *)(*param_1 + aiStack_34[0] + -1) == 'Z')))) {
      iVar1 = *param_1;
      *param_1 = aiStack_34[0] + iVar1;
      uVar2 = FUN_ram_420726c0(iVar1);
      *param_3 = uVar2;
      if (uVar2 != 0xffffffff) {
        if (iVar10 == 4) {
          iVar1 = iVar1 + 2;
          iVar10 = uVar2 * 100;
          uVar2 = FUN_ram_420726c0(iVar1);
          *param_3 = uVar2;
          if (uVar2 == 0xffffffff) {
            return -0x2400;
          }
        }
        else {
          iVar10 = (-(uint)(0x31 < (int)uVar2) & 0xffffff9c) + 2000;
        }
        uVar2 = iVar10 + uVar2;
        *param_3 = uVar2;
        uVar3 = FUN_ram_420726c0(iVar1 + 2);
        param_3[1] = uVar3;
        uVar4 = FUN_ram_420726c0(iVar1 + 4);
        param_3[2] = uVar4;
        uVar5 = FUN_ram_420726c0(iVar1 + 6);
        param_3[3] = uVar5;
        uVar6 = FUN_ram_420726c0(iVar1 + 8);
        param_3[4] = uVar6;
        uVar7 = FUN_ram_420726c0(iVar1 + 10);
        param_3[5] = uVar7;
        if (uVar3 - 1 < 0xc) {
          uVar3 = 1 << (uVar3 - 1 & 0x1f);
          uVar9 = 0x1f;
          if (((((uVar3 & 0xad5) == 0) && (uVar9 = 0x1e, (uVar3 & 0x528) == 0)) &&
              (uVar9 = 0x1c, (uVar2 & 3) == 0)) && (uVar9 = 0x1d, uVar2 % 100 == 0)) {
            uVar9 = (uVar2 % 400 == 0) + 0x1c;
          }
          if (((uVar4 - 1 < uVar9) && (uVar5 < 0x18)) && ((uVar6 < 0x3c && (uVar7 < 0x3c)))) {
            return 0;
          }
        }
      }
    }
    return -0x2400;
  }
  return iVar1 + -0x2400;
}

