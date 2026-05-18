
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ac6f6(void)

{
  int iVar1;
  
  (*(code *)&SUB_ram_40012314)(1);
  FUN_ram_403943d0(1);
  FUN_ram_420aef86(1);
  (**(code **)(_DAT_ram_3fcc4c78 + 0x78))();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x8c))();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x7c))();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x10c))();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x114))();
  FUN_ram_420ad8bc(1,DAT_ram_3fcb7f12);
  (**(code **)(_DAT_ram_3fcc4c78 + 0xdc))();
  FUN_ram_420aeeb0();
  FUN_ram_420aea6a();
  iVar1 = (**(code **)(_DAT_ram_3fcc4c78 + 0x54))(0x69,0,4,3,0,*(code **)(_DAT_ram_3fcc4c78 + 0x54))
  ;
  if (iVar1 == 0) {
    (*(code *)&SUB_ram_40012304)(0x578);
  }
  FUN_ram_420aef66();
  FUN_ram_420ac6c4();
  FUN_ram_420aec40();
  FUN_ram_420ad7ba(0,2);
  return;
}

