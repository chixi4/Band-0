
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42084e0c(int param_1)

{
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  if ((_DAT_ram_3fcc4268 == 0) || (param_1 != 0)) {
    if ((_DAT_ram_3fcc426c != 0) && (param_1 == 1)) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcc426c = 0;
      DAT_ram_3fcc41d4 = 1;
    }
  }
  else {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcc4268 = 0;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return 0;
}

