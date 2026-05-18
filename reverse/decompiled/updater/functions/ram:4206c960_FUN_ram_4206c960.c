
undefined4 FUN_ram_4206c960(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    uVar2 = 0x102;
    if (param_2 != 0) {
      iVar1 = (*(code *)&SUB_ram_400104a8)(param_3);
      iVar1 = FUN_ram_40399d1a(1,iVar1 + 1);
      *(int *)(param_2 + 4) = iVar1;
      uVar2 = 0x101;
      if (iVar1 != 0) {
        FUN_ram_4039a182(iVar1,param_3);
        piVar3 = *(int **)(param_1 + 4);
        *(undefined4 *)(param_2 + 0x3c) = 0;
        *piVar3 = param_2;
        *(int *)(param_1 + 4) = param_2 + 0x3c;
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  return 0x102;
}

