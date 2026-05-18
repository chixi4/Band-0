
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394720(void)

{
  FUN_ram_40396966();
  _DAT_ram_3fcc5250 = _DAT_ram_3fcc5250 + -1;
  if (_DAT_ram_3fcc5250 == 0) {
    FUN_ram_40394a58();
    _DAT_ram_600c0010 = _DAT_ram_600c0010 & 0xefffffff;
    FUN_ram_40394a68();
  }
  else if (_DAT_ram_3fcc5250 < 0) {
    FUN_ram_40396994();
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  FUN_ram_40396994();
  return;
}

