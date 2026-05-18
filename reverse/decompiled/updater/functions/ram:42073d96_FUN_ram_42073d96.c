
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42073d96(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_DAT_ram_3fcb640c + 4))();
  if (DAT_ram_3fcb0ab7 == '\0' && DAT_ram_3fcb0cd8 == '\0') {
    if (DAT_ram_3fcb0aa8 != '\0') {
      FUN_ram_42073b26(DAT_ram_3fcb0aa7);
    }
    if (param_2 != 0) {
      (*(code *)&SUB_ram_4001254c)(DAT_ram_3fcb0aa9,DAT_ram_3fcb0aa7);
    }
    if (param_1 != 0) {
      if (DAT_ram_3fcb0cce != '\0') {
        FUN_ram_42073c26(DAT_ram_3fcb0aa7);
      }
      (*(code *)&SUB_ram_40012550)(1,DAT_ram_3fcb0aa7);
      FUN_ram_42075824(10,DAT_ram_3fcb0aa7);
      FUN_ram_42073d12(10,DAT_ram_3fcb0aa7);
    }
    (**(code **)(_DAT_ram_3fcb640c + 0x1a4))();
  }
                    /* WARNING: Could not recover jumptable at 0x42073e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcb640c + 8))(uVar1);
  return;
}

