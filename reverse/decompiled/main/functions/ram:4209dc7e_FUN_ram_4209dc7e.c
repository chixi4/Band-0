
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4209dc7e(int param_1)

{
  _DAT_ram_3fcc4b30 = param_1 + 2;
  _DAT_ram_3fcc4b34 = 0x2c;
  if (_DAT_ram_3fcc4b54 == 1) {
    _DAT_ram_3fcc4b34 = 0x2e;
  }
  FUN_ram_42098848(_DAT_ram_3fcc4b54 & 0xff,param_1);
  return;
}

