
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42049080(void)

{
  if (_DAT_ram_3fcb5504 == 0) {
    FUN_ram_42048fbe(0);
  }
  FUN_ram_420485d6();
  (*(code *)&SUB_ram_40011f70)();
  if (_DAT_ram_3fcb5394 == 0) {
    FUN_ram_42033fd8(6,0x1000,3,0x3c07eba0);
    DAT_ram_3fcb5538 = 0;
  }
  return;
}

