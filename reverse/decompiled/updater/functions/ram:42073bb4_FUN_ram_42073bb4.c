
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42073bb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (**(code **)(_DAT_ram_3fcb640c + 0x48))
                      (0x61,0,4,param_4,param_5,*(code **)(_DAT_ram_3fcb640c + 0x48));
    DAT_ram_3fcb0cce = (undefined1)uVar1;
    DAT_ram_3fcb0ccf = DAT_ram_3fcb0cce;
    (**(code **)(_DAT_ram_3fcb640c + 0x50))(0x61,0,6,uVar1);
                    /* WARNING: Could not recover jumptable at 0x42073c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcb640c + 0x58))(0x61,0,5,6,6,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x42073c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcb640c + 0x50))(0x61,0,6,param_2);
  return;
}

