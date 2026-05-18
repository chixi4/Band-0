
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207ae74(void)

{
  FUN_ram_40393ad0();
  _DAT_ram_3fcb65b8 = _DAT_ram_3fcb65b8 + 1;
  if (_DAT_ram_3fcb65b8 == 1) {
    _DAT_ram_6004e844 = _DAT_ram_6004e844 & 0xfffbffff;
    _DAT_ram_6004e848 = _DAT_ram_6004e848 | 0x10000;
  }
  FUN_ram_40393ae0();
  return;
}

