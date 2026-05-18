
int FUN_ram_4204ebd2(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *apiStack_24 [4];
  
  uVar1 = (*(code *)&SUB_ram_400104a8)(param_2);
  if (0x10 < uVar1) {
    return 0x102;
  }
  uVar1 = FUN_ram_42049518();
  iVar2 = FUN_ram_4204e9c8(param_1,param_2);
  if (iVar2 == 0) {
    if (uVar1 == 0) {
      return -1;
    }
    apiStack_24[0] = (int *)0x0;
    iVar2 = FUN_ram_4204f556(param_2,apiStack_24);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*apiStack_24[0] + 0x24))();
      iVar2 = FUN_ram_4204eae4(param_1,apiStack_24[0],0,uVar3 / uVar1);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x20);
        if (iVar2 != 0) {
          *(int **)(iVar2 + 8) = apiStack_24[0];
        }
        apiStack_24[0][1] = iVar2;
        iVar2 = *(int *)(param_1 + 0x1c);
        apiStack_24[0][2] = 0;
        *(int **)(param_1 + 0x20) = apiStack_24[0];
        if (iVar2 == 0) {
          *(int **)(param_1 + 0x1c) = apiStack_24[0];
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        goto LAB_ram_4204ec50;
      }
    }
    if (apiStack_24[0] != (int *)0x0) {
      (**(code **)(*apiStack_24[0] + 4))();
    }
  }
  else {
LAB_ram_4204ec50:
    iVar2 = 0;
  }
  return iVar2;
}

