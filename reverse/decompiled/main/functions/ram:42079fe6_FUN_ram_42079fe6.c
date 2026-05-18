
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42079fe6(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3fcc29b4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42079ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_3fcc29b4)();
    return uVar1;
  }
  return 0xffffffff;
}

