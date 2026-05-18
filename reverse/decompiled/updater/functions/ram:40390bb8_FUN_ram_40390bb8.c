
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390bb8(void)

{
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  if (DAT_ram_3fcb172c == '\x01') {
    _DAT_ram_60026014 = _DAT_ram_60026014 & 0xff87f870;
  }
  if (DAT_ram_3fcb1739 == '\x01') {
    _DAT_ram_60026014 = _DAT_ram_60026014 & 0xdfffffff;
  }
  DAT_ram_3fcb172c = DAT_ram_3fcb172c + -1;
  DAT_ram_3fcb1739 = DAT_ram_3fcb1739 + -1;
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

