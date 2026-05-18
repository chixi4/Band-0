
undefined4 FUN_ram_4205ecf4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = 0x102;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x40) == 1) {
      iVar2 = FUN_ram_4209819e(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x10));
      if (iVar2 != 0) {
        return 0x5002;
      }
    }
    else if (*(int *)(iVar1 + 0x40) == 2) {
      return 0x5005;
    }
    *(undefined4 *)(iVar1 + 0x40) = 2;
    uVar3 = 0;
  }
  return uVar3;
}

