
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4209def0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((_DAT_ram_3fcc49cc == 0) && (_DAT_ram_3fcc4b0c != 1)) {
    iVar1 = FUN_ram_4209c90c();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_ram_4209c8dc(_DAT_ram_3fcc4b0c);
    uVar2 = FUN_ram_4209c726(_DAT_ram_3fcc4b0c);
    if (iVar1 != 0) {
      FUN_ram_4209dcb2(0x3fcc4b78,iVar1,0x3fcc4b4e,0,1,0x3fcc4b90,8,0x3fcc49a0,uVar2,param_1 | 0x20)
      ;
      _DAT_ram_3fcc49cc = 1;
      if (_DAT_ram_3fcc4b44 != 0) {
        FUN_ram_420992a6(0x4208d592,0x3fcc4924,0);
        FUN_ram_4209915a(_DAT_ram_3fcc4b44,0,0x4208d592,0x3fcc4924,0);
      }
    }
  }
  return 0;
}

