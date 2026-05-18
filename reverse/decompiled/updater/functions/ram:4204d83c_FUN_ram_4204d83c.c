
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204d83c(int param_1,uint param_2)

{
  if (param_1 == 0) {
    _DAT_ram_60047800 = 0x30000;
  }
  else if (param_1 == 1) {
    _DAT_ram_60047804 = 0x30000;
  }
  _DAT_ram_60047814 = ~param_2 & _DAT_ram_60047814;
  return;
}

