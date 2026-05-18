
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204d530(void)

{
  undefined4 uVar1;
  
  _DAT_ram_3fcb1020 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x160))(1,0x44);
  if (_DAT_ram_3fcb1020 == 0) {
    FUN_ram_42033fd8(6,1,1,0x3c07dfbc);
    uVar1 = 0x101;
  }
  else {
    thunk_FUN_ram_4204d4b4();
    uVar1 = 0;
  }
  return uVar1;
}

