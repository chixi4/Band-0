
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390c4e(void)

{
  FUN_ram_4039691e();
  FUN_ram_40396966();
  if (DAT_ram_3fcb8c1c == '\x01') {
    _DAT_ram_60026014 = _DAT_ram_60026014 & 0xff87f870;
  }
  if (DAT_ram_3fcb8c29 == '\x01') {
    _DAT_ram_60026014 = _DAT_ram_60026014 & 0xdfffffff;
  }
  DAT_ram_3fcb8c1c = DAT_ram_3fcb8c1c + -1;
  DAT_ram_3fcb8c29 = DAT_ram_3fcb8c29 + -1;
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

