
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202cd7e(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3fcb69dc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4202cd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_3fcb69dc)(param_1,_DAT_ram_3fcb69e0);
    return uVar1;
  }
  return 8;
}

