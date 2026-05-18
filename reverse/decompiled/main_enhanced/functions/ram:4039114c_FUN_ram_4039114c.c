
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039114c(void)

{
  if ((_DAT_ram_3fcc4e40 & 1) != 0) {
    _DAT_ram_60000034 = _DAT_ram_60000034 & 0xfffffff2;
    _DAT_ram_60000080 = _DAT_ram_60000080 | 0x80000000;
  }
  if ((_DAT_ram_3fcc4e40 >> 1 & 1) != 0) {
    _DAT_ram_60010034 = _DAT_ram_60010034 & 0xfffffff2;
    _DAT_ram_60010080 = _DAT_ram_60010080 | 0x80000000;
  }
  _DAT_ram_3fcc4e40 = _DAT_ram_3fcc4e40 >> 2;
  return;
}

