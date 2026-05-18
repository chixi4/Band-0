
undefined * FUN_ram_420a85d4(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 == 3) {
    return &DAT_ram_3c0fb6a0;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      puVar1 = &DAT_ram_3c0fb700;
    }
    else {
      puVar1 = (undefined *)0x0;
      if (param_1 == 2) {
        return &DAT_ram_3c0fb6d0;
      }
    }
  }
  else {
    puVar1 = (undefined *)0x0;
    if (param_1 == 4) {
      return &DAT_ram_3c0fb670;
    }
  }
  return puVar1;
}

