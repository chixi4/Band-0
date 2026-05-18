
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420377a4(void)

{
  undefined4 uVar1;
  
  _DAT_ram_3fcdfecc = (**(code **)(_DAT_ram_3fcdfec8 + 0xc))(0xc00);
  if (_DAT_ram_3fcdfecc != 0) {
    _DAT_ram_3fcdfed0 = (**(code **)(_DAT_ram_3fcdfec8 + 0xc))(0x5fc);
    uVar1 = 0;
    if (_DAT_ram_3fcdfed0 == 0) {
      (**(code **)(_DAT_ram_3fcdfec8 + 0x10))(_DAT_ram_3fcdfecc);
      uVar1 = 0x101;
      _DAT_ram_3fcdfecc = 0;
    }
    return uVar1;
  }
  return 0x101;
}

