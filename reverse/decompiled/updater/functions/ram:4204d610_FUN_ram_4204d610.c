
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204d610(uint param_1,uint param_2)

{
  _DAT_ram_6004d054 = _DAT_ram_6004d054 & 0xffff0000 | param_1 & 0xffff;
  _DAT_ram_6004d05c = param_2 >> 8 & 0xff | _DAT_ram_6004d05c & 0xffffff00;
  return;
}

