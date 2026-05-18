
int * FUN_ram_42062c52(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)*param_1;
  piVar3 = (int *)0x0;
  while (piVar5 = piVar4, piVar5 != (int *)0x0) {
    iVar1 = FUN_ram_40399d6c(param_2 + 0x19,piVar5 + 0x19,6);
    if (iVar1 == 0) {
      iVar1 = piVar5[0x15];
      if (((iVar1 == param_2[0x15]) &&
          (iVar2 = FUN_ram_40399d6c(piVar5 + 5,param_2 + 5,iVar1), iVar2 == 0)) &&
         (iVar2 = FUN_ram_40399d6c(piVar5 + 1,param_2 + 1,0x10), iVar2 == 0)) {
        thunk_FUN_ram_40390608(param_2);
        return piVar5;
      }
      if (piVar3 == (int *)0x0) {
        *param_1 = *piVar5;
      }
      else {
        *piVar3 = *piVar5;
      }
      if (piVar5[0x1f] == 0) {
        FUN_ram_42062bd0(param_1,param_2[0x1e],piVar5 + 5,iVar1);
      }
      FUN_ram_42062b1a(param_1,piVar5,1);
      break;
    }
    piVar3 = piVar5;
    piVar4 = (int *)*piVar5;
  }
  if ((9 < param_1[1]) && (piVar4 = (int *)*param_1, piVar4 != (int *)0x0)) {
    piVar3 = (int *)*piVar4;
    if (*(int **)(param_1[2] + 0x1c0) == piVar4) {
      if (piVar3 == (int *)0x0) goto LAB_ram_42062d20;
      **(int **)(param_1[2] + 0x1c0) = *piVar3;
      piVar4 = piVar3;
    }
    else {
      *param_1 = (int)piVar3;
    }
    FUN_ram_42062b1a(param_1,piVar4,0);
  }
LAB_ram_42062d20:
  piVar4 = (int *)0x0;
  for (piVar3 = (int *)*param_1; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if (((uint)param_2[0x17] < (uint)piVar3[0x17]) ||
       ((piVar3[0x17] == param_2[0x17] && ((uint)param_2[0x16] < (uint)piVar3[0x16])))) break;
    piVar4 = piVar3;
  }
  if (piVar4 == (int *)0x0) {
    *param_2 = *param_1;
    *param_1 = (int)param_2;
    FUN_ram_42062b3e(param_1);
  }
  else {
    *param_2 = *piVar4;
    *piVar4 = (int)param_2;
  }
  param_1[1] = param_1[1] + 1;
  return param_2;
}

