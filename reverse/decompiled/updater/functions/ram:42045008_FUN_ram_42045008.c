
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42045008(void)

{
  if ((*(byte *)(_DAT_ram_3fcdfb20 + 0x46) & 1) != 0) {
    FUN_ram_42033fd8(1,8,4,0x3c07c864,*(byte *)(_DAT_ram_3fcdfb20 + 0x46),
                     *(undefined1 *)(_DAT_ram_3fcdfb20 + 0x47));
    *(undefined2 *)(_DAT_ram_3fcdfb20 + 0x46) = 0;
    FUN_ram_4203385e();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb20 + 0x18);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb20 + 4);
    FUN_ram_42044cc6();
  }
  return 0;
}

