
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403946d4(void)

{
  FUN_ram_40396966();
  _DAT_ram_3fcc5250 = _DAT_ram_3fcc5250 + 1;
  if (_DAT_ram_3fcc5250 == 1) {
    FUN_ram_40394a58();
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x10000000;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xefffffff;
    FUN_ram_40394a68();
  }
  FUN_ram_40396994();
  return;
}

