
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039326e(void)

{
  undefined4 uVar1;
  undefined4 extraout_a4;
  undefined4 extraout_a4_00;
  
  if (DAT_ram_3fcb0cd8 == '\0') {
    (**(code **)(_DAT_ram_3fcb640c + 0x1a4))();
  }
  if (DAT_ram_3fcb0af5 != '\0') {
    uVar1 = (**(code **)(_DAT_ram_3fcb640c + 4))();
    (**(code **)(_DAT_ram_3fcb640c + 0x18))();
    FUN_ram_403935e8(1);
    (**(code **)(_DAT_ram_3fcb640c + 0x60))();
    (**(code **)(_DAT_ram_3fcb640c + 0x50))
              (0x6a,0,0,0x77,extraout_a4,*(code **)(_DAT_ram_3fcb640c + 0x50));
    (**(code **)(_DAT_ram_3fcb640c + 0x50))
              (0x6a,0,1,0x77,extraout_a4_00,*(code **)(_DAT_ram_3fcb640c + 0x50));
    (**(code **)(_DAT_ram_3fcb640c + 0x144))(1);
    DAT_ram_3fcb0ab7 = 1;
                    /* WARNING: Could not recover jumptable at 0x40393304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcb640c + 8))(uVar1);
    return;
  }
  return;
}

