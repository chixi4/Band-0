
undefined1 * FUN_ram_4207ac08(uint param_1)

{
  undefined1 *puVar1;
  
  if (param_1 == 0x15) {
    puVar1 = &DAT_ram_600c0000;
  }
  else {
    if (0x15 < param_1) {
      if (param_1 != 0x17) {
        return &DAT_ram_600c0010;
      }
      return &DAT_ram_600c0000;
    }
    if (0xe < param_1) {
      if (param_1 - 0x10 < 3) {
        return &DAT_ram_600c0014;
      }
      return &DAT_ram_600c0010;
    }
    if (param_1 < 9) {
      return &DAT_ram_600c0010;
    }
    puVar1 = (undefined1 *)0x60026000;
  }
  return puVar1 + 0x14;
}

