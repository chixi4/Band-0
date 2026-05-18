
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42033f86(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3fcb392c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42033f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_3fcb392c)();
    return uVar1;
  }
  return 0xffffffff;
}

