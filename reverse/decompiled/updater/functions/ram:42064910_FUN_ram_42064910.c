
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42064910(undefined4 param_1)

{
  if (_DAT_ram_3fcb62d8 == 0) {
    _DAT_ram_3fcb62d8 = 1;
    FUN_ram_42063688(0xb);
    FUN_ram_4206332a(0x3fcb5ffc,1,param_1);
  }
  else {
    FUN_ram_42063688(0xc);
    FUN_ram_4206332a(0x3fcb5ffc,1,param_1);
    _DAT_ram_3fcb6204 = 1;
    FUN_ram_4202220e(0,0,10000,0);
  }
  FUN_ram_4205f052(0x42053706,0,0);
  FUN_ram_4205ef06(0x3c,0,0x42053706,0,0);
  return 0;
}

