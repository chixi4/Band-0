
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420990ce(void)

{
  undefined4 uVar1;
  
  (*(code *)&SUB_ram_40010488)(0x3fcc4898,0,0x1c);
  _DAT_ram_3fcc4890 = &DAT_ram_3fcc4890;
  _DAT_ram_3fcc4894 = &DAT_ram_3fcc4890;
  FUN_ram_42099030();
  (**(code **)(_DAT_ram_3fcc53c4 + 0xec))(0x3fcc4898,0x42088ff6,0);
  _DAT_ram_3fcc53d4 = (**(code **)(_DAT_ram_3fcc53c4 + 0x4c))();
  uVar1 = 0xffffffff;
  if (_DAT_ram_3fcc53d4 != 0) {
    fence();
    DAT_ram_3fcc48ac = 1;
    fence();
    fence();
    DAT_ram_3fcc48ad = 0;
    fence();
    uVar1 = 0;
  }
  return uVar1;
}

