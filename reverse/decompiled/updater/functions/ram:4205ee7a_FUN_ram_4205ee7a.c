
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205ee7a(void)

{
  undefined4 uVar1;
  
  (*(code *)&SUB_ram_40010488)(0x3fcb5fb0,0,0x1c);
  _DAT_ram_3fcb5fa8 = &DAT_ram_3fcb5fa8;
  _DAT_ram_3fcb5fac = &DAT_ram_3fcb5fa8;
  FUN_ram_4205eddc();
  (**(code **)(_DAT_ram_3fcb6854 + 0xec))(0x3fcb5fb0,0x4204eda2,0);
  _DAT_ram_3fcb6870 = (**(code **)(_DAT_ram_3fcb6854 + 0x4c))();
  uVar1 = 0xffffffff;
  if (_DAT_ram_3fcb6870 != 0) {
    fence();
    DAT_ram_3fcb5fc4 = 1;
    fence();
    fence();
    DAT_ram_3fcb5fc5 = 0;
    fence();
    uVar1 = 0;
  }
  return uVar1;
}

