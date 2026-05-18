
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203d2ce(int param_1)

{
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  if ((_DAT_ram_3fcb51d8 == 0) || (param_1 != 0)) {
    if ((_DAT_ram_3fcb51dc != 0) && (param_1 == 1)) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcb51dc = 0;
      DAT_ram_3fcb5144 = 1;
    }
  }
  else {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcb51d8 = 0;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return 0;
}

