
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394140(void)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_DAT_ram_3fcc4c78 + 4))();
  FUN_ram_40394288();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x50))(0x6a,0,0,0xcc);
  (**(code **)(_DAT_ram_3fcc4c78 + 0x50))(0x6a,0,1,0x7c);
  FUN_ram_420ac8b8();
  FUN_ram_40391a4e(1);
  _DAT_ram_6004e930 = _DAT_ram_6004e930 & 0xfffdffff | 0x20000;
  FUN_ram_403943d0(0);
  FUN_ram_40394416(1);
  (**(code **)(_DAT_ram_3fcc4c78 + 0x78))();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x70))(4,1,0);
  (**(code **)(_DAT_ram_3fcc4c78 + 0x7c))();
  (*(code *)&SUB_ram_4001231c)(0);
  (**(code **)(_DAT_ram_3fcc4c78 + 0x120))();
  FUN_ram_420aea6a();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x128))(DAT_ram_3fcb8082);
  (**(code **)(_DAT_ram_3fcc4c78 + 0x118))();
  (**(code **)(_DAT_ram_3fcc4c78 + 0xec))();
  FUN_ram_4039427a();
  FUN_ram_403945d0();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x14))();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x144))(0);
  FUN_ram_40394416(0);
  DAT_ram_3fcb7f13 = 0;
  DAT_ram_3fcb8134 = 0;
  if (DAT_ram_3fcb8136 != '\0') {
    FUN_ram_403944d8(0);
  }
                    /* WARNING: Could not recover jumptable at 0x40394252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcc4c78 + 8))(uVar1);
  return;
}

