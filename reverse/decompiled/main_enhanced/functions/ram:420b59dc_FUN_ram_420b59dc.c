
undefined4 FUN_ram_420b59dc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0x102;
  }
  if (((param_2 != 0) && (param_3 != 0)) && (*(int *)(param_1 + 4) == param_3)) {
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(iVar2 * 4 + 0x3fcc26d8) = param_2;
    if (iVar2 == 0) {
      uVar1 = 0x40386836;
    }
    else {
      if (iVar2 != 1) {
        return 0x106;
      }
      uVar1 = 0x420a58fa;
    }
    *(int *)(iVar2 * 4 + 0x3fcc26cc) = param_3;
    iVar2 = FUN_ram_42084c84(iVar2,uVar1);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 0x103;
    }
    return uVar1;
  }
  return 0x102;
}

