
undefined1 * FUN_ram_420b4690(uint param_1)

{
  undefined1 *puVar1;
  
  if (param_1 == 0x16) {
    puVar1 = (undefined1 *)0x60026000;
  }
  else {
    if (0x16 < param_1) {
      if (param_1 != 0x17) {
        return &DAT_ram_600c0018;
      }
      return &DAT_ram_600c0004;
    }
    if (0x12 < param_1) {
      if (param_1 != 0x15) {
        return &DAT_ram_600c0018;
      }
      return &DAT_ram_600c001c;
    }
    if (0xf < param_1) {
      return &DAT_ram_600c001c;
    }
    if (param_1 - 9 < 6) {
      return &DAT_ram_60026018;
    }
    puVar1 = &DAT_ram_600c0000;
  }
  return puVar1 + 0x18;
}

