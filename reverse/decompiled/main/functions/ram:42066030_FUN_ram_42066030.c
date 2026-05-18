
uint FUN_ram_42066030(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x310);
  uVar1 = *(uint *)(*piVar5 + 0xb4);
  uVar4 = uVar1;
  if (uVar1 != 0) {
    if (param_3 < uVar1) {
      uVar4 = param_3;
    }
    FUN_ram_4039c11e(param_2,(*piVar5 + 0xb1) - uVar1,uVar4);
    param_3 = param_3 - uVar4;
    *(uint *)(*piVar5 + 0xb4) = *(int *)(*piVar5 + 0xb4) - uVar4;
    if (param_3 == 0) {
      return uVar4;
    }
    if (param_4 == 1) {
      return uVar4;
    }
    param_2 = param_2 + uVar4;
    uVar1 = uVar4;
  }
  do {
    puVar3 = (undefined4 *)*piVar5;
    uVar2 = (*(code *)puVar3[8])(puVar3[4],*puVar3,param_2,param_3,0,puVar3,(code *)puVar3[8]);
    if ((int)uVar2 < 1) {
      if ((uVar2 == 0xfffffffd) && (uVar1 != 0)) {
        return uVar1;
      }
      return uVar2;
    }
    param_3 = param_3 - uVar2;
    uVar4 = uVar4 + uVar2;
    param_2 = param_2 + uVar2;
    if (param_3 == 0) {
      return uVar4;
    }
  } while (param_4 == 2);
  return uVar4;
}

