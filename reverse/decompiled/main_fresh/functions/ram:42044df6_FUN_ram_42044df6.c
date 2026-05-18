
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42044df6(void)

{
  while (_DAT_ram_3fcb6a38 != 0) {
    _DAT_ram_3fcb6a38 = *(int *)(_DAT_ram_3fcb6a38 + 0x18);
    (**(code **)(_DAT_ram_3fcdfec8 + 0x10))();
  }
  return 0;
}

