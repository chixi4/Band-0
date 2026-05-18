
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42040442(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (_DAT_ram_3fcb4f40 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4204044e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_3fcb4f40)();
    return uVar1;
  }
  return 0;
}

