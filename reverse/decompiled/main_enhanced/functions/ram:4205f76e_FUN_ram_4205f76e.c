
undefined4 FUN_ram_4205f76e(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x102;
  }
  else {
    uVar1 = 0x5002;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x2c);
      uVar1 = 0x5002;
      if (iVar2 != 0) {
        *param_2 = iVar2;
        return 0;
      }
    }
  }
  return uVar1;
}

