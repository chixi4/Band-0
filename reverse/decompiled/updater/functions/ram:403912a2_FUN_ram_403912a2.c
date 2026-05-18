
void FUN_ram_403912a2(uint param_1)

{
  if (DAT_ram_3fcb6694 == param_1) {
    return;
  }
  DAT_ram_3fcb6694 = (byte)param_1;
  if (param_1 != 0) {
    FUN_ram_4201b826();
    return;
  }
  FUN_ram_4201b8e2();
  return;
}

