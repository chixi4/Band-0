
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b493c(void)

{
  FUN_ram_4039691e();
  FUN_ram_40396966();
  FUN_ram_40394c42();
  _DAT_ram_3fcc4e38 = _DAT_ram_3fcc4e38 + 1;
  if (_DAT_ram_3fcc4e38 == 1) {
    _DAT_ram_60040000 = _DAT_ram_60040000 | 0x18000040;
  }
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

