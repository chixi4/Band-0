
int FUN_ram_420274c2(int *param_1,int param_2,int *param_3,int param_4,uint *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar7;
  int *piVar8;
  
  if (*param_1 == 0) {
    return -0x6100;
  }
  uVar7 = *(uint *)(*param_1 + 4);
  *param_5 = 0;
  piVar8 = (int *)(uVar7 & 0x1f);
  if (piVar8 == (int *)0x0) {
    return -0x6380;
  }
  uVar3 = uVar7 & 0xf000;
  if (uVar3 == 0x1000) {
    if (param_3 == piVar8) {
      iVar6 = *(int *)((uVar7 >> 0x18 & 0x7c) + 0x3c077be0);
      *param_5 = (uint)param_3;
      UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 4);
                    /* WARNING: Could not emulate address calculation at 0x4202752c */
                    /* WARNING: Treating indirect jump as call */
      iVar6 = (*UNRECOVERED_JUMPTABLE)
                        (param_1[0xf],param_1[2],param_2,param_4,0x1000,UNRECOVERED_JUMPTABLE);
      return iVar6;
    }
    return -0x6280;
  }
  if (uVar3 == 0x6000) {
    iVar6 = FUN_ram_420289de(param_1[0xf]);
    return iVar6;
  }
  if (param_2 == param_4) {
    if (param_1[9] != 0) {
      return -0x6100;
    }
    if ((uint)param_3 % (uint)piVar8 != 0) {
      return -0x6100;
    }
  }
  if (uVar3 != 0x2000) {
    if (uVar3 == 0x3000) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)((uVar7 >> 0x18 & 0x7c) + 0x3c077be0) + 0xc);
      piVar5 = param_1 + 10;
      piVar2 = param_1 + 9;
      piVar8 = (int *)param_1[2];
      piVar4 = param_3;
LAB_ram_420276c8:
      iVar6 = (*UNRECOVERED_JUMPTABLE)
                        (param_1[0xf],piVar8,piVar4,piVar2,piVar5,param_2,param_4,
                         UNRECOVERED_JUMPTABLE);
    }
    else {
      if (uVar3 == 0x4000) {
        UNRECOVERED_JUMPTABLE = *(code **)(*(int *)((uVar7 >> 0x18 & 0x7c) + 0x3c077be0) + 0x10);
        piVar8 = param_3;
        piVar4 = param_1 + 9;
      }
      else {
        if (uVar3 == 0x5000) {
          piVar2 = param_1 + 10;
          UNRECOVERED_JUMPTABLE = *(code **)(*(int *)((uVar7 >> 0x18 & 0x7c) + 0x3c077be0) + 0x14);
          piVar5 = param_1 + 5;
          piVar4 = param_1 + 9;
          piVar8 = param_3;
          goto LAB_ram_420276c8;
        }
        if (uVar3 != 0xa000) {
          return -0x6080;
        }
        if (param_1[9] != 0) {
          return -0x6080;
        }
        piVar8 = (int *)param_1[2];
        UNRECOVERED_JUMPTABLE = *(code **)(*(int *)((uVar7 >> 0x18 & 0x7c) + 0x3c077be0) + 0x18);
        piVar4 = param_3;
      }
      iVar6 = (*UNRECOVERED_JUMPTABLE)
                        (param_1[0xf],piVar8,piVar4,param_1 + 10,param_2,param_4,
                         UNRECOVERED_JUMPTABLE);
    }
    if (iVar6 == 0) {
      *param_5 = (uint)param_3;
      return 0;
    }
    return iVar6;
  }
  iVar6 = param_1[9];
  if (param_1[2] == 0) {
    piVar4 = (int *)((int)piVar8 - iVar6);
    if (param_1[3] == 0) {
LAB_ram_420275c0:
      if (piVar4 <= param_3) goto LAB_ram_420275c4;
    }
    else if (piVar4 < param_3) goto LAB_ram_420275c4;
    FUN_ram_40399daa(iVar6 + 0x14 + (int)param_1,param_2,param_3);
    param_1[9] = param_1[9] + (int)param_3;
  }
  else {
    if (param_1[2] == 1) {
      piVar4 = (int *)((int)piVar8 - iVar6);
      goto LAB_ram_420275c0;
    }
LAB_ram_420275c4:
    if (iVar6 != 0) {
      FUN_ram_40399daa(iVar6 + 0x14 + (int)param_1,param_2,(int)piVar8 - iVar6);
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(int *)((*(byte *)(*param_1 + 7) & 0x7c) + 0x3c077be0) + 8);
      iVar1 = (*UNRECOVERED_JUMPTABLE)
                        (param_1[0xf],param_1[2],piVar8,param_1 + 10,param_1 + 5,param_4,
                         UNRECOVERED_JUMPTABLE);
      if (iVar1 != 0) {
        return iVar1;
      }
      param_2 = param_2 + ((int)piVar8 - iVar6);
      *param_5 = *param_5 + (int)piVar8;
      param_4 = param_4 + (int)piVar8;
      param_1[9] = 0;
      param_3 = (int *)((int)param_3 + (iVar6 - (int)piVar8));
    }
    if (param_3 != (int *)0x0) {
      piVar4 = (int *)((uint)param_3 % (uint)piVar8);
      if (((piVar4 == (int *)0x0) && (param_1[2] == 0)) && (param_1[3] != 0)) {
        piVar4 = piVar8;
      }
      iVar6 = (int)param_3 - (int)piVar4;
      FUN_ram_40399daa(param_1 + 5,param_2 + iVar6,piVar4);
      param_1[9] = param_1[9] + (int)piVar4;
      if (iVar6 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(int *)((*(byte *)(*param_1 + 7) & 0x7c) + 0x3c077be0) + 8);
        iVar1 = (*UNRECOVERED_JUMPTABLE)
                          (param_1[0xf],param_1[2],iVar6,param_1 + 10,param_2,param_4,
                           UNRECOVERED_JUMPTABLE);
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

