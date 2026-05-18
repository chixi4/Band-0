
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390b4c(void)

{
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  if (DAT_ram_3fcb172c == '\0') {
    _DAT_ram_60026014 = _DAT_ram_60026014 | 0x78078f;
  }
  DAT_ram_3fcb172c = DAT_ram_3fcb172c + '\x01';
  if (DAT_ram_3fcb1739 == '\0') {
    _DAT_ram_60026014 = _DAT_ram_60026014 | 0x20000000;
  }
  DAT_ram_3fcb1739 = DAT_ram_3fcb1739 + '\x01';
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

