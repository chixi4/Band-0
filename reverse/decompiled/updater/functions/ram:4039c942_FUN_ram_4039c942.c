
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039c942(int param_1)

{
  if (_DAT_ram_3fcb5540 != param_1) {
    if (_DAT_ram_3fcb5540 == 0) {
      FUN_ram_420490d0();
    }
    FUN_ram_42033fd8(1,0x1000,4,0x3c07cee4,_DAT_ram_3fcb5540,param_1);
    _DAT_ram_3fcb5540 = param_1;
  }
  return;
}

