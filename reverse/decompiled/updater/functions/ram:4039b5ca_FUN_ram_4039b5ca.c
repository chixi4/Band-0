
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039b5ca(void)

{
  _DAT_ram_60047ca0 = _DAT_ram_60047ca0 | 0xf1000;
  (*(code *)&SUB_ram_40010044)(0x14);
  do {
  } while ((_DAT_ram_60047ca0 & 0x6000) != 0);
  (*(code *)&SUB_ram_40010044)(5);
  return 0;
}

