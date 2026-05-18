
undefined4 FUN_ram_42068852(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_30 [4];
  
  local_30[0] = 0;
  local_30[1] = 1;
  local_30[2] = 0;
  local_30[3] = 1;
  if ((param_1 != param_2) || (iVar1 = FUN_ram_4206826c(local_30), param_2 = local_30, iVar1 == 0))
  {
    if (param_1 == param_3) {
      iVar1 = FUN_ram_4206826c(local_30 + 2,param_1);
      if (iVar1 != 0) goto LAB_ram_42068882;
      param_3 = local_30 + 2;
    }
    uVar3 = (uint)*(ushort *)((int)param_2 + 6);
    while ((uVar3 != 0 && (*(int *)(*param_2 + uVar3 * 4 + -4) == 0))) {
      uVar3 = uVar3 - 1;
    }
    uVar4 = (uint)*(ushort *)((int)param_3 + 6);
    while ((uVar4 != 0 && (*(int *)(*param_3 + uVar4 * 4 + -4) == 0))) {
      uVar4 = uVar4 - 1;
    }
    iVar1 = FUN_ram_420680a2(param_1,uVar3 + uVar4);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_42068310(param_1,0), iVar1 == 0)) {
      FUN_ram_42069e5e(*param_1,*param_2,uVar3,*param_3,uVar4);
      if (uVar3 == 0 || uVar4 == 0) {
        sVar2 = 1;
      }
      else {
        sVar2 = (short)param_2[1] * (short)param_3[1];
      }
      *(short *)(param_1 + 1) = sVar2;
      uVar5 = 0;
      goto LAB_ram_42068884;
    }
  }
LAB_ram_42068882:
  uVar5 = 0xfffffff0;
LAB_ram_42068884:
  FUN_ram_42068078(local_30 + 2);
  FUN_ram_42068078(local_30);
  return uVar5;
}

