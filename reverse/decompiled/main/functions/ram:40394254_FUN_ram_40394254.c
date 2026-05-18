
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394254(int param_1)

{
  uint uVar1;
  
  uVar1 = 0x32;
  if (param_1 != 0) {
    uVar1 = 0x2c;
  }
  _DAT_ram_600440ec = (uVar1 + 5) * 0x100 | _DAT_ram_600440ec & 0xffff0000 | uVar1;
  return;
}

