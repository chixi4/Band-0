
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208d7b6(void)

{
  if ((*(byte *)(_DAT_ram_3fcdfb20 + 0x46) & 1) != 0) {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdd14,*(byte *)(_DAT_ram_3fcdfb20 + 0x46),
                     *(undefined1 *)(_DAT_ram_3fcdfb20 + 0x47));
    *(undefined2 *)(_DAT_ram_3fcdfb20 + 0x46) = 0;
    FUN_ram_4207926c();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb20 + 0x18);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb20 + 4);
    FUN_ram_4208d3d4();
  }
  return 0;
}

