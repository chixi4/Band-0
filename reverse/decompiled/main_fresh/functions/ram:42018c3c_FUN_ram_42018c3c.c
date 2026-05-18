
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42018c3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_ram_3fcb97b0 = param_1;
  _DAT_ram_3fcb97b4 = param_2;
  _DAT_ram_3fcb97b8 = FUN_ram_42018c12(param_3);
  DAT_ram_3fcb97bc = 1;
  if ((((_DAT_ram_3fcb97c0 != 0) ||
       (_DAT_ram_3fcb97c0 = FUN_ram_40397076(0x10,0xc,0), _DAT_ram_3fcb97c0 != 0)) &&
      (_DAT_ram_3fcb97b8 != 0)) && (*(code **)(_DAT_ram_3fcb97b8 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x42018c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcb97b8 + 8))(0xffffffff);
    return;
  }
  return;
}

