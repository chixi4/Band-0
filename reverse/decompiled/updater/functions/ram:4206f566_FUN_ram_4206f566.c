
undefined4 FUN_ram_4206f566(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x17) {
    iVar1 = 0;
  }
  else {
    if (param_1 != 0x1d) {
      return 0;
    }
    iVar1 = 1;
  }
  return *(undefined4 *)(iVar1 * 0xc + 0x3c07a774);
}

