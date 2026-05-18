
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039815c(int param_1)

{
  FUN_ram_40396966();
  if (_DAT_ram_3fcc4e6c < (uint)(_DAT_ram_3fcc4e88 + param_1)) {
LAB_ram_4039817e:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (_DAT_ram_3fcc4e88 + param_1 == _DAT_ram_3fcc4e6c) {
    if ((_DAT_ram_3fcc4e64 == 0) || (param_1 == 0)) goto LAB_ram_4039817e;
    param_1 = param_1 + -1;
    _DAT_ram_3fcc4e7c = _DAT_ram_3fcc4e7c + 1;
  }
  _DAT_ram_3fcc4e88 = _DAT_ram_3fcc4e88 + param_1;
  FUN_ram_40396994();
  return;
}

