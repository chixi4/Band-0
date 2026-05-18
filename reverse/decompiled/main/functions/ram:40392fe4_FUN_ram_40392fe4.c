
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40392fe4(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = 0x103;
    if (_DAT_ram_3fcc5260 != 0) {
      FUN_ram_40392b7e(0x103);
      uVar1 = 0x103;
      if (*param_1 != 0 || param_1[1] != 0) {
        FUN_ram_40392b8e(param_1);
        uVar1 = 0;
      }
      FUN_ram_40392b6e();
    }
    return uVar1;
  }
  return 0x102;
}

