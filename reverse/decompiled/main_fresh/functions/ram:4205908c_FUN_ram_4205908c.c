
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205908c(void)

{
  undefined1 *puVar1;
  undefined1 *extraout_a4;
  uint uVar2;
  uint extraout_a5;
  
  puVar1 = &DAT_ram_3fcc5000;
  uVar2 = (uint)DAT_ram_3fcc533c;
  if (uVar2 == 0) {
    FUN_ram_4039bf1e();
    puVar1 = extraout_a4;
    uVar2 = extraout_a5;
  }
  puVar1[0x33c] = (char)(uVar2 - 1);
  if ((uVar2 - 1 & 0xff) == 0) {
    FUN_ram_42058d78(_DAT_ram_3fcc5340);
    _DAT_ram_3fcc5340 = 0;
  }
  return;
}

