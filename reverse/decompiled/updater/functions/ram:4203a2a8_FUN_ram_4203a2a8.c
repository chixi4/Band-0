
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203a2a8(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3fcb4f84 == 0) {
    uVar1 = 0x3007;
  }
  else {
    (*(code *)&SUB_ram_40011d44)();
    FUN_ram_42045008();
    if (*(int *)(_DAT_ram_3fcb4f84 + 0x98) == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcb4f84 + 4);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcb4f84 + 4);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcb4f84 + 0x18);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcb4f84 + 0x18);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb4efc);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb4efc);
    }
    else {
      FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,0);
    }
    (*(code *)&SUB_ram_40011d48)();
    uVar1 = 0;
  }
  return uVar1;
}

