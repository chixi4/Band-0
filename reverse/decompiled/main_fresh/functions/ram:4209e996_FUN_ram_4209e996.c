
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4209e996(undefined4 param_1)

{
  if (_DAT_ram_3fcc4c00 == 0) {
    _DAT_ram_3fcc4c00 = 1;
    FUN_ram_4209d7a8(0xb);
    FUN_ram_4209d44a(0x3fcc4924,1,param_1);
  }
  else {
    FUN_ram_4209d7a8(0xc);
    FUN_ram_4209d44a(0x3fcc4924,1,param_1);
    _DAT_ram_3fcc4b2c = 1;
    FUN_ram_42060358(0,0,10000,0);
  }
  FUN_ram_420992a6(FUN_ram_4208d826,0,0);
  FUN_ram_4209915a(0x3c,0,FUN_ram_4208d826,0,0);
  return 0;
}

