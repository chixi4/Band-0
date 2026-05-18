
undefined4 FUN_ram_403929c0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_ram_403927bc();
    if (*(int *)(param_1 + 4) == 0) {
      if ((uVar1 & 0xfffff) != 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 4) + 8) & uVar1 & 0xfffff) != 0) {
        return 0;
      }
      FUN_ram_40397422(**(undefined4 **)(param_1 + 4),param_3);
    }
    *(undefined1 *)(param_1 + 9) = 0;
  }
  else {
    FUN_ram_403927b6();
  }
  return 1;
}

