
void FUN_ram_40391a4e(uint param_1)

{
  if (DAT_ram_3fcc4f18 == param_1) {
    return;
  }
  DAT_ram_3fcc4f18 = (byte)param_1;
  if (param_1 != 0) {
    FUN_ram_40395c5a();
    return;
  }
  FUN_ram_40395d00();
  return;
}

