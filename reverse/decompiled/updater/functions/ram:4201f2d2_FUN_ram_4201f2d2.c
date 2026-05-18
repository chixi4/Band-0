
undefined4 FUN_ram_4201f2d2(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_ram_4201efea();
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x1101;
  }
  else {
    for (iVar4 = *(int *)(param_1 + 4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
      if (*(int **)(iVar4 + 0xc) == piVar1) {
        *(undefined1 *)(iVar4 + 0x12) = 0;
        FUN_ram_4201f290(param_1 + 4,iVar4);
      }
    }
    iVar4 = *piVar1;
    piVar3 = (int *)piVar1[1];
    if (iVar4 == 0) {
      *(int **)(param_1 + 0x10) = piVar3;
    }
    else {
      *(int **)(iVar4 + 4) = piVar3;
    }
    if (piVar3 == (int *)0x0) {
      *(int *)(param_1 + 0x14) = iVar4;
    }
    else {
      *piVar3 = iVar4;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    FUN_ram_4201e9a6(piVar1);
    thunk_FUN_ram_40390608(piVar1);
    for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
      iVar4 = FUN_ram_4039a06c(uVar2,param_2);
      if (iVar4 == 0) {
        FUN_ram_4201f0ea(param_1 + 0x1c,piVar1);
        (**(code **)(*piVar1 + 4))(piVar1);
        break;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

