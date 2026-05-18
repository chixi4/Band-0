
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390be2(void)

{
  FUN_ram_4039691e();
  FUN_ram_40396966();
  if (DAT_ram_3fcb8c1c == '\0') {
    _DAT_ram_60026014 = _DAT_ram_60026014 | 0x78078f;
  }
  DAT_ram_3fcb8c1c = DAT_ram_3fcb8c1c + '\x01';
  if (DAT_ram_3fcb8c29 == '\0') {
    _DAT_ram_60026014 = _DAT_ram_60026014 | 0x20000000;
  }
  DAT_ram_3fcb8c29 = DAT_ram_3fcb8c29 + '\x01';
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

