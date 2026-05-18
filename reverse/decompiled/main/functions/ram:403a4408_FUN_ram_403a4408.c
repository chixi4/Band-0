
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a4408(void)

{
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3e0))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xf8))(0);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x57c))(*(undefined4 *)(_DAT_ram_3fcdff64 + 0x30));
  *(undefined4 *)(_DAT_ram_3fcdff64 + 0x14) = 0;
  return;
}

