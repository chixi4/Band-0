
void FUN_ram_42097a36(uint param_1)

{
  if (param_1 < 0x224) {
    param_1 = 0x224;
  }
  FUN_ram_42053b52(0x36,param_1 & 0xffff,0x280);
  return;
}

