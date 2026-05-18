
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203b634(void)

{
  undefined4 uVar1;
  
  FUN_ram_4039c11e(0x3fcdfe48,&DAT_ram_3c0f599c,0x20);
  _DAT_ram_3fcb6a18 = (**(code **)(_DAT_ram_3fcdfec8 + 0xc))(10);
  if (_DAT_ram_3fcb6a18 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_ram_4039c11e(_DAT_ram_3fcb6a18,&DAT_ram_3c0f5990,10);
    uVar1 = 0;
  }
  return uVar1;
}

