
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42051fe6(void)

{
  uint uVar1;
  
  FUN_ram_42058690(0x420420e8,0);
  FUN_ram_420585b0(_DAT_ram_3fcc52c0,0x420420e8,0);
  uVar1 = _DAT_ram_3fcc52c0 << 1;
  if ((150000 < uVar1) || (uVar1 <= _DAT_ram_3fcc52c0)) {
    uVar1 = 150000;
  }
  _DAT_ram_3fcc52c0 = uVar1;
  return;
}

