
void FUN_ram_420903e8(uint param_1)

{
  if (DAT_ram_3fcc4401 != param_1) {
    FUN_ram_40393cee(5 - (uint)DAT_ram_3fcc4401,1);
    FUN_ram_40393cee(5 - param_1,0);
  }
  DAT_ram_3fcc4401 = (char)param_1;
  return;
}

