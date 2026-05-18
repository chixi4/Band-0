
int FUN_ram_4201f106(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  piVar2 = (int *)FUN_ram_4201efea(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)thunk_FUN_ram_4039047a(0x68);
    if (piVar3 == (int *)0x0) {
      return 0x101;
    }
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = (int)param_2;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0xe] = 0;
    piVar3[0xf] = 0;
    piVar3[0x10] = 0;
    piVar3[0x19] = 0;
    piVar2 = piVar3;
  }
  else {
    for (piVar3 = *(int **)(param_1 + 0x1c); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (param_2 == piVar3) {
        FUN_ram_4201f0ea(param_1 + 0x1c,param_2);
        (**(code **)(*param_2 + 4))(param_2);
        break;
      }
    }
    piVar3 = (int *)0x0;
  }
  iVar4 = FUN_ram_4201eb5c(piVar2,param_3,param_4);
  if (piVar3 != (int *)0x0) {
    if (iVar4 == 0) {
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 != 0) {
        *(int **)(iVar5 + 4) = piVar3;
      }
      *piVar3 = iVar5;
      iVar5 = *(int *)(param_1 + 0x10);
      piVar3[1] = 0;
      *(int **)(param_1 + 0x14) = piVar3;
      if (iVar5 == 0) {
        *(int **)(param_1 + 0x10) = piVar3;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    else {
      FUN_ram_4201e9a6(piVar3);
      thunk_FUN_ram_40390608(piVar3);
    }
  }
  return iVar4;
}

