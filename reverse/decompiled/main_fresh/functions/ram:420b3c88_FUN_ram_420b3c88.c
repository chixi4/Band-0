
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b3c88(int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 == 1) {
    if (_DAT_ram_3fcc5254 == 0) {
      return 0x103;
    }
    puVar1 = &DAT_ram_3fcc5254;
  }
  else {
    if (param_1 != 0) {
      return 0;
    }
    if (_DAT_ram_3fcc5258 == 0) {
      return 0x103;
    }
    puVar1 = &DAT_ram_3fcc5258;
  }
  FUN_ram_403917f8(puVar1);
  return 0;
}

