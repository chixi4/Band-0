
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208ecce(void)

{
  FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fe084);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  while (_DAT_ram_3fcc4128 != (int *)0x0) {
    _DAT_ram_3fcc4128 = (int *)*_DAT_ram_3fcc4128;
    if (_DAT_ram_3fcc4128 == (int *)0x0) {
      _DAT_ram_3fcc412c = &DAT_ram_3fcc4128;
    }
    FUN_ram_4208ecac();
  }
  _DAT_ram_3fcc43d4 = 0;
                    /* WARNING: Could not recover jumptable at 0x4208ed34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return;
}

