
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208353e(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcc3058 == 0) {
    if (_DAT_ram_3fcdfdd8 == 0) {
      return 0x3001;
    }
    _DAT_ram_3fcc3058 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x4c))();
    if (_DAT_ram_3fcc3058 == 0) {
      return 0x101;
    }
  }
  iVar1 = (*(code *)&SUB_ram_40012084)();
  if (iVar1 == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcc3058);
  }
  return 0;
}

