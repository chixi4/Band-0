
undefined4 FUN_ram_4205dcee(undefined *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (param_1 == &DAT_ram_3c0f75a4) {
    uVar1 = 0xf3;
  }
  else if (param_1 == &DAT_ram_3c0f75a3) {
    uVar1 = 0xf2;
  }
  else {
    if (param_1 != &DAT_ram_3c0f75a2) {
      return 0;
    }
    uVar1 = 0xf1;
  }
  *param_2 = uVar1;
  return 1;
}

