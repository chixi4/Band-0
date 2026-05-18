
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207926c(void)

{
  if (*(char *)(_DAT_ram_3fcdfb1c + 4) != -1) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb1c + 0x24);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb1c + 0x38);
    FUN_ram_420791e4(4);
  }
  if (*(code **)(_DAT_ram_3fcdfb1c + 0x1c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x420792c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfb1c + 0x1c))(*(undefined4 *)(_DAT_ram_3fcdfb1c + 0x20),4);
    return;
  }
  return;
}

