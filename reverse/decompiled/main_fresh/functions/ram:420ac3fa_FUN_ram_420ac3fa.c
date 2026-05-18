
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ac3fa(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_DAT_ram_3fcc4c78 + 4))();
  if (DAT_ram_3fcb7f13 == '\0' && DAT_ram_3fcb8134 == '\0') {
    if (DAT_ram_3fcb7f04 != '\0') {
      FUN_ram_420ac18a(DAT_ram_3fcb7f03);
    }
    if (param_2 != 0) {
      (*(code *)&SUB_ram_4001254c)(DAT_ram_3fcb7f05,DAT_ram_3fcb7f03);
    }
    if (param_1 != 0) {
      if (DAT_ram_3fcb812a != '\0') {
        FUN_ram_420ac28a(DAT_ram_3fcb7f03);
      }
      (*(code *)&SUB_ram_40012550)(1,DAT_ram_3fcb7f03);
      FUN_ram_420ade8c(10,DAT_ram_3fcb7f03);
      FUN_ram_420ac376(10,DAT_ram_3fcb7f03);
    }
    (**(code **)(_DAT_ram_3fcc4c78 + 0x1a4))();
  }
                    /* WARNING: Could not recover jumptable at 0x420ac4aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcc4c78 + 8))(uVar1);
  return;
}

