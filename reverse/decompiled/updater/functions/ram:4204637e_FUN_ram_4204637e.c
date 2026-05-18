
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204637e(void)

{
  FUN_ram_42033fd8(1,8,4,0x3c07cbd4);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  while (_DAT_ram_3fcb5098 != (int *)0x0) {
    _DAT_ram_3fcb5098 = (int *)*_DAT_ram_3fcb5098;
    if (_DAT_ram_3fcb5098 == (int *)0x0) {
      _DAT_ram_3fcb509c = &DAT_ram_3fcb5098;
    }
    FUN_ram_4204635c();
  }
  _DAT_ram_3fcb5348 = 0;
                    /* WARNING: Could not recover jumptable at 0x420463e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return;
}

