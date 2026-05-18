
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204ae62(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = 0;
    if ((_DAT_ram_600c0008 & 4) != 0) {
      return 0x1e0;
    }
  }
  else {
    uVar1 = 0x11;
    if (param_1 != 2) {
      if (param_1 == 0) {
        uVar1 = FUN_ram_4204ae30();
        return uVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e(0x11);
    }
  }
  return uVar1;
}

