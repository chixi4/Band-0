
int FUN_ram_4206ae0a(int *param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
                    undefined4 param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_6 + 4);
  *param_3 = 0;
  *param_4 = 0;
  uVar3 = uVar2 & 0xf000;
  if (uVar3 == 0x2000) {
    if (param_1[4] == 0) {
      return -0x6100;
    }
  }
  else {
    if ((uVar2 & 0xb000) == 0x3000) {
      return 0;
    }
    if ((uVar2 & 0xe000) == 0x4000) {
      return 0;
    }
    if ((uVar3 - 0x6000 >> 0xc & 0xfffffffb) == 0) {
      return 0;
    }
    if (uVar3 == 0x9000) {
      return 0;
    }
  }
  if ((byte)(*(char *)(param_6 + 6) + 0xb4U) < 2) {
    return 0;
  }
  if (uVar3 == 0x1000) {
    uVar3 = param_1[9];
joined_r0x4206aeb2:
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
      if ((code *)param_1[3] == (code *)0x0) goto joined_r0x4206aeb2;
      uVar3 = param_1[0xe];
      if (uVar3 == 0) {
        uVar3 = uVar2 >> 3 & 0x1c;
      }
      (*(code *)param_1[3])(param_1 + 5,uVar3);
    }
    else if (uVar3 != (uVar2 & 0x1f)) {
      if (param_1[3] != 0) {
        return -0x6280;
      }
      if (uVar3 == 0) {
        return 0;
      }
      return -0x6280;
    }
    iVar1 = (**(code **)(*(int *)(&DAT_ram_3c0f9944 + (*(uint *)(*param_1 + 4) >> 0x18 & 0x7c)) + 8)
            )(param_1[0xf],param_1[2],*(uint *)(*param_1 + 4) & 0x1f,param_1 + 10,param_1 + 5,
              param_2,*(code **)(*(int *)(&DAT_ram_3c0f9944 +
                                         (*(uint *)(*param_1 + 4) >> 0x18 & 0x7c)) + 8));
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = *param_1;
    if (param_1[2] == 0) {
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = *(uint *)(iVar1 + 4) & 0x1f;
      }
                    /* WARNING: Could not recover jumptable at 0x4206af18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)param_1[4])(param_2,uVar2,param_3,param_4,iVar1,(code *)param_1[4]);
      return iVar1;
    }
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(uint *)(iVar1 + 4) & 0x1f;
    }
    *param_3 = uVar2;
  }
  return 0;
}

