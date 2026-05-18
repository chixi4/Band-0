
undefined4
FUN_ram_42079ada(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if ((param_2 == 0x3c071420) && (param_3 == -1)) {
    uVar2 = FUN_ram_42079954(param_1,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  piVar3 = (int *)0x0;
  piVar7 = *(int **)(param_1 + 4);
  piVar1 = piVar7;
  piVar6 = (int *)0x0;
  while (piVar5 = piVar1, piVar5 != (int *)0x0) {
    if (*piVar5 == param_2) {
      piVar3 = piVar5;
    }
    piVar6 = piVar5;
    piVar1 = (int *)piVar5[3];
  }
  if ((((piVar6 != (int *)0x0) && (piVar3 != (int *)0x0)) && ((piVar3[2] == 0 || (param_3 != -1))))
     && (((*piVar6 == param_2 || (piVar6[2] == 0)) || (param_3 != -1)))) {
    uVar2 = FUN_ram_42079a0a(piVar3,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  piVar3 = (int *)FUN_ram_40399d1a(1,0x10);
  if (piVar3 != (int *)0x0) {
    *piVar3 = param_2;
    piVar3[1] = 0;
    piVar3[2] = 0;
    iVar4 = FUN_ram_42079a0a(piVar3,param_3,param_4,param_5,param_6,param_7);
    if (iVar4 == 0) {
      if (piVar6 == (int *)0x0) {
        piVar3[3] = (int)piVar7;
        *(int **)(param_1 + 4) = piVar3;
        return 0;
      }
      piVar3[3] = piVar6[3];
      piVar6[3] = (int)piVar3;
      return 0;
    }
    thunk_FUN_ram_40390608(piVar3);
  }
  return 0x101;
}

