
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42080762(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3fcc4014 == 0) {
    uVar1 = 0x3007;
  }
  else {
    (*(code *)&SUB_ram_40011d44)();
    FUN_ram_4208d7b6();
    if (*(int *)(_DAT_ram_3fcc4014 + 0x98) == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcc4014 + 4);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcc4014 + 4);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcc4014 + 0x18);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(_DAT_ram_3fcc4014 + 0x18);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc3f8c);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc3f8c);
    }
    else {
      FUN_ram_42089514(&DAT_ram_3fcc4004,0,0);
    }
    (*(code *)&SUB_ram_40011d48)();
    uVar1 = 0;
  }
  return uVar1;
}

