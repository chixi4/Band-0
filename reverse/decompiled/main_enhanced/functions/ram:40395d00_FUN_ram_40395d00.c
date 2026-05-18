
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40395d00(void)

{
  FUN_ram_40396966();
  _DAT_ram_3fcc524c = _DAT_ram_3fcc524c + -1;
  if (_DAT_ram_3fcc524c < 0) {
    FUN_ram_40396994();
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (_DAT_ram_3fcc524c == 0) {
    _DAT_ram_60040058 = _DAT_ram_60040058 & 0xffbfffff;
    FUN_ram_40394a58();
    _DAT_ram_600c0014 = _DAT_ram_600c0014 & 0xfffffbff;
    FUN_ram_40394a68();
    FUN_ram_40394720();
    FUN_ram_40394bf4();
  }
  FUN_ram_40396994();
  return;
}

