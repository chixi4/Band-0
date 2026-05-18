
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42030408(int *param_1)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3fcb6ba8 == 0) {
    uVar1 = 6;
  }
  else {
    uVar1 = 3;
    if (param_1 != (int *)0x0) {
      *param_1 = _DAT_ram_3fcb6ba8 + 1;
      return 0;
    }
  }
  return uVar1;
}

