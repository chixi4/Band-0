
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b499a(void)

{
  FUN_ram_4039691e();
  FUN_ram_40396966();
  _DAT_ram_3fcc4e38 = _DAT_ram_3fcc4e38 + -1;
  if (_DAT_ram_3fcc4e38 < 0) {
    FUN_ram_40396994();
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (_DAT_ram_3fcc4e38 == 0) {
    _DAT_ram_60040000 = _DAT_ram_60040000 & 0xe7ffffff | 0x40;
  }
  FUN_ram_40394bf4();
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

