
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40393312(void)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_DAT_ram_3fcb640c + 4))();
  FUN_ram_4039345a();
  (**(code **)(_DAT_ram_3fcb640c + 0x50))(0x6a,0,0,0xcc);
  (**(code **)(_DAT_ram_3fcb640c + 0x50))(0x6a,0,1,0x7c);
  FUN_ram_42074254();
  FUN_ram_403912a2(1);
  _DAT_ram_6004e930 = _DAT_ram_6004e930 & 0xfffdffff | 0x20000;
  FUN_ram_403935a2(0);
  FUN_ram_403935e8(1);
  (**(code **)(_DAT_ram_3fcb640c + 0x78))();
  (**(code **)(_DAT_ram_3fcb640c + 0x70))(4,1,0);
  (**(code **)(_DAT_ram_3fcb640c + 0x7c))();
  (*(code *)&SUB_ram_4001231c)(0);
  (**(code **)(_DAT_ram_3fcb640c + 0x120))();
  FUN_ram_42076402();
  (**(code **)(_DAT_ram_3fcb640c + 0x128))(DAT_ram_3fcb0c26);
  (**(code **)(_DAT_ram_3fcb640c + 0x118))();
  (**(code **)(_DAT_ram_3fcb640c + 0xec))();
  FUN_ram_4039344c();
  FUN_ram_403937a2();
  (**(code **)(_DAT_ram_3fcb640c + 0x14))();
  (**(code **)(_DAT_ram_3fcb640c + 0x144))(0);
  FUN_ram_403935e8(0);
  DAT_ram_3fcb0ab7 = 0;
  DAT_ram_3fcb0cd8 = 0;
  if (DAT_ram_3fcb0cda != '\0') {
    FUN_ram_403936aa(0);
  }
                    /* WARNING: Could not recover jumptable at 0x40393424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcb640c + 8))(uVar1);
  return;
}

