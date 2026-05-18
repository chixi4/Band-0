
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420ab800(void)

{
  if (_DAT_ram_3fcdfaf0 != 0) {
    if ((_DAT_ram_3fcc2ffc != 0) && (*(int *)(_DAT_ram_3fcdfaf0 + 0x38) != 0)) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x128))();
      *(undefined4 *)(_DAT_ram_3fcdfaf0 + 0x38) = 0;
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(_DAT_ram_3fcdfaf0);
  }
  _DAT_ram_3fcdfaf0 = 0;
  DAT_ram_3fcc4c74 = 0;
  return 0;
}

