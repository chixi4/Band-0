
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204b67e(void)

{
  FUN_ram_40396966();
  if (DAT_ram_3fcc5238 == '\0') {
    FUN_ram_403951e8();
    _DAT_ram_3fcc5234 = FUN_ram_420122f2(2);
    if (_DAT_ram_3fcc5234 == 0) {
      FUN_ram_403951fe();
      FUN_ram_40396994();
      return 0;
    }
  }
  DAT_ram_3fcc5238 = DAT_ram_3fcc5238 + '\x01';
  FUN_ram_40396994();
  return 1;
}

