
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203dfc6(void)

{
  if (DAT_ram_3fcb4ee6 != '\0') {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb4efc);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb4efc);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcb4efc,0x4202d684,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(0x3fcb4efc,0,0);
    FUN_ram_42033fd8(1,4,4,0x3c07b610,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),1);
    *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 1;
    return;
  }
  return;
}

