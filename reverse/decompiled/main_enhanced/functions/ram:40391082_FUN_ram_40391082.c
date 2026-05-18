
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40391082(void)

{
  _DAT_ram_3fcc4e40 = 0;
  if (((_DAT_ram_600c0018 & 4) == 0) && ((_DAT_ram_600c0010 & 4) != 0)) {
    _DAT_ram_60000034 = _DAT_ram_60000034 & 0xfffffffb | 9;
    _DAT_ram_60000080 = _DAT_ram_60000080 | 0x80000000;
    _DAT_ram_3fcc4e40 = 1;
    do {
    } while ((0x8001U >> (_DAT_ram_6000006c >> 4 & 0xf) & 1) == 0);
  }
  if (((_DAT_ram_600c0018 & 0x20) == 0) && ((_DAT_ram_600c0010 & 0x20) != 0)) {
    _DAT_ram_60010034 = _DAT_ram_60010034 & 0xfffffffb | 9;
    _DAT_ram_60010080 = _DAT_ram_60010080 | 0x80000000;
    _DAT_ram_3fcc4e40 = _DAT_ram_3fcc4e40 | 2;
    do {
    } while ((0x8001U >> (_DAT_ram_6001006c >> 4 & 0xf) & 1) == 0);
  }
  return;
}

