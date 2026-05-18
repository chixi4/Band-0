
int FUN_ram_42027784(int *param_1,undefined4 param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return -0x6100;
  }
  uVar1 = *(uint *)(iVar2 + 4);
  *param_3 = 0;
  *param_4 = 0;
  uVar3 = uVar1 & 0xf000;
  if (uVar3 == 0x2000) {
    if (param_1[4] == 0) {
      return -0x6100;
    }
  }
  else {
    if ((uVar1 & 0xb000) == 0x3000) {
      return 0;
    }
    if ((uVar1 & 0xe000) == 0x4000) {
      return 0;
    }
    if ((uVar3 - 0x6000 >> 0xc & 0xfffffffb) == 0) {
      return 0;
    }
    if (uVar3 == 0x9000) {
      return 0;
    }
  }
  if ((byte)(*(char *)(iVar2 + 6) + 0xb4U) < 2) {
    return 0;
  }
  if (uVar3 == 0x1000) {
    uVar3 = param_1[9];
joined_r0x42027838:
    if (uVar3 != 0) {
      return -0x6280;
    }
  }
  else {
    if (uVar3 != 0x2000) {
      return -0x6080;
    }
    uVar3 = param_1[9];
    if (param_1[2] == 1) {
      if ((code *)param_1[3] == (code *)0x0) goto joined_r0x42027838;
      uVar3 = param_1[0xe];
      if (uVar3 == 0) {
        uVar3 = uVar1 >> 3 & 0x1c;
      }
      (*(code *)param_1[3])(param_1 + 5,uVar3);
    }
    else if (uVar3 != (uVar1 & 0x1f)) {
      if (param_1[3] != 0) {
        return -0x6280;
      }
      if (uVar3 == 0) {
        return 0;
      }
      return -0x6280;
    }
    pcVar4 = *(code **)(*(int *)((*(uint *)(*param_1 + 4) >> 0x18 & 0x7c) + 0x3c077be0) + 8);
    iVar2 = (*pcVar4)(param_1[0xf],param_1[2],*(uint *)(*param_1 + 4) & 0x1f,param_1 + 10,
                      param_1 + 5,param_2,pcVar4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = *param_1;
    if (param_1[2] == 0) {
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0x1f;
      }
                    /* WARNING: Could not recover jumptable at 0x4202789e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*(code *)param_1[4])(param_2,uVar1,param_3,param_4,iVar2,(code *)param_1[4]);
      return iVar2;
    }
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = *(uint *)(iVar2 + 4) & 0x1f;
    }
    *param_3 = uVar1;
  }
  return 0;
}

