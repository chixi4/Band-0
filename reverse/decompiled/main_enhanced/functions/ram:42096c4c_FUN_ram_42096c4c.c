
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42096c4c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  if (param_1 != 0) {
    uVar1 = 0x40000000;
  }
  _DAT_ram_6004004c = uVar1 | _DAT_ram_6004004c;
  _DAT_ram_60040020 = _DAT_ram_60040020 & 0xdfffffff;
  (*(code *)&SUB_ram_40010044)(5);
  _DAT_ram_60040020 = _DAT_ram_60040020 | 0x20000000;
  do {
  } while ((uVar1 & _DAT_ram_60040044) == 0);
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  return _DAT_ram_6004002c & 0xfff;
}

