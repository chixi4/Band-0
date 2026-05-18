
undefined * FUN_ram_4206c444(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 == 8) {
    return &DAT_ram_3c0f9c94;
  }
  if (param_1 < 9) {
    if (param_1 == 3) {
      puVar1 = &DAT_ram_3c0f9ca4;
    }
    else {
      puVar1 = (undefined *)0x0;
      if (param_1 == 5) {
        return &DAT_ram_3c0f9c9c;
      }
    }
  }
  else {
    puVar1 = (undefined *)0x0;
    if (param_1 == 9) {
      return &DAT_ram_3c0f9c8c;
    }
  }
  return puVar1;
}

