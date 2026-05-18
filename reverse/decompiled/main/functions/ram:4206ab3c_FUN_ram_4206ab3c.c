
int FUN_ram_4206ab3c(int *param_1,int param_2,int *param_3,int param_4,uint *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  int *piVar9;
  
  if (*param_1 == 0) {
    return -0x6100;
  }
  uVar7 = *(uint *)(*param_1 + 4);
  *param_5 = 0;
  piVar9 = (int *)(uVar7 & 0x1f);
  if (piVar9 == (int *)0x0) {
    return -0x6380;
  }
  uVar3 = uVar7 & 0xf000;
  if (uVar3 == 0x1000) {
    if (param_3 == piVar9) {
      iVar6 = *(int *)(&DAT_ram_3c0f9944 + (uVar7 >> 0x18 & 0x7c));
      *param_5 = (uint)param_3;
                    /* WARNING: Could not emulate address calculation at 0x4206abc2 */
                    /* WARNING: Treating indirect jump as call */
      iVar6 = (**(code **)(iVar6 + 4))
                        (param_1[0xf],param_1[2],param_2,param_4,0x1000,*(code **)(iVar6 + 4));
      return iVar6;
    }
    return -0x6280;
  }
  if (uVar3 == 0x6000) {
    iVar6 = FUN_ram_4206c058(param_1[0xf]);
    return iVar6;
  }
  if (param_2 == param_4) {
    if (param_1[9] != 0) {
      return -0x6100;
    }
    if ((uint)param_3 % (uint)piVar9 != 0) {
      return -0x6100;
    }
  }
  if (uVar3 != 0x2000) {
    if (uVar3 == 0x3000) {
      pcVar8 = *(code **)(*(int *)(&DAT_ram_3c0f9944 + (uVar7 >> 0x18 & 0x7c)) + 0xc);
      piVar5 = param_1 + 10;
      piVar2 = param_1 + 9;
      piVar9 = (int *)param_1[2];
      piVar4 = param_3;
LAB_ram_4206ad42:
      iVar6 = (*pcVar8)(param_1[0xf],piVar9,piVar4,piVar2,piVar5,param_2,param_4,pcVar8);
    }
    else {
      if (uVar3 == 0x4000) {
        pcVar8 = *(code **)(*(int *)(&DAT_ram_3c0f9944 + (uVar7 >> 0x18 & 0x7c)) + 0x10);
        piVar9 = param_3;
        piVar4 = param_1 + 9;
      }
      else {
        if (uVar3 == 0x5000) {
          piVar2 = param_1 + 10;
          pcVar8 = *(code **)(*(int *)(&DAT_ram_3c0f9944 + (uVar7 >> 0x18 & 0x7c)) + 0x14);
          piVar5 = param_1 + 5;
          piVar4 = param_1 + 9;
          piVar9 = param_3;
          goto LAB_ram_4206ad42;
        }
        if (uVar3 != 0xa000) {
          return -0x6080;
        }
        if (param_1[9] != 0) {
          return -0x6080;
        }
        piVar9 = (int *)param_1[2];
        pcVar8 = *(code **)(*(int *)(&DAT_ram_3c0f9944 + (uVar7 >> 0x18 & 0x7c)) + 0x18);
        piVar4 = param_3;
      }
      iVar6 = (*pcVar8)(param_1[0xf],piVar9,piVar4,param_1 + 10,param_2,param_4,pcVar8);
    }
    if (iVar6 == 0) {
      *param_5 = (uint)param_3;
      return 0;
    }
    return iVar6;
  }
  iVar6 = param_1[9];
  if (param_1[2] == 0) {
    piVar4 = (int *)((int)piVar9 - iVar6);
    if (param_1[3] == 0) {
LAB_ram_4206ac3a:
      if (piVar4 <= param_3) goto LAB_ram_4206ac3e;
    }
    else if (piVar4 < param_3) goto LAB_ram_4206ac3e;
    FUN_ram_4039c11e(iVar6 + 0x14 + (int)param_1,param_2,param_3);
    param_1[9] = param_1[9] + (int)param_3;
  }
  else {
    if (param_1[2] == 1) {
      piVar4 = (int *)((int)piVar9 - iVar6);
      goto LAB_ram_4206ac3a;
    }
LAB_ram_4206ac3e:
    if (iVar6 != 0) {
      FUN_ram_4039c11e(iVar6 + 0x14 + (int)param_1,param_2,(int)piVar9 - iVar6);
      iVar1 = (**(code **)(*(int *)(&DAT_ram_3c0f9944 + (*(byte *)(*param_1 + 7) & 0x7c)) + 8))
                        (param_1[0xf],param_1[2],piVar9,param_1 + 10,param_1 + 5,param_4,
                         *(code **)(*(int *)(&DAT_ram_3c0f9944 + (*(byte *)(*param_1 + 7) & 0x7c)) +
                                   8));
      if (iVar1 != 0) {
        return iVar1;
      }
      param_2 = param_2 + ((int)piVar9 - iVar6);
      *param_5 = *param_5 + (int)piVar9;
      param_4 = param_4 + (int)piVar9;
      param_1[9] = 0;
      param_3 = (int *)((int)param_3 + (iVar6 - (int)piVar9));
    }
    if (param_3 != (int *)0x0) {
      piVar4 = (int *)((uint)param_3 % (uint)piVar9);
      if (((piVar4 == (int *)0x0) && (param_1[2] == 0)) && (param_1[3] != 0)) {
        piVar4 = piVar9;
      }
      iVar6 = (int)param_3 - (int)piVar4;
      FUN_ram_4039c11e(param_1 + 5,param_2 + iVar6,piVar4);
      param_1[9] = param_1[9] + (int)piVar4;
      if (iVar6 != 0) {
        iVar1 = (**(code **)(*(int *)(&DAT_ram_3c0f9944 + (*(byte *)(*param_1 + 7) & 0x7c)) + 8))
                          (param_1[0xf],param_1[2],iVar6,param_1 + 10,param_2,param_4,
                           *(code **)(*(int *)(&DAT_ram_3c0f9944 + (*(byte *)(*param_1 + 7) & 0x7c))
                                     + 8));
        if (iVar1 == 0) {
          *param_5 = *param_5 + iVar6;
          return 0;
        }
        return iVar1;
      }
    }
  }
  return 0;
}

