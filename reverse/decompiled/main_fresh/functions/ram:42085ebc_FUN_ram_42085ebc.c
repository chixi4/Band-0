
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42085ebc(void)

{
  if (DAT_ram_3fcc3f76 != '\0') {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc3f8c);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc3f8c);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcc3f8c,0x4207528a,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(0x3fcc3f8c,0,0);
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fca80,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),1);
    *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 1;
    return;
  }
  return;
}

