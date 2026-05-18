
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42085248(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = _DAT_ram_3fcc3fa0;
  DAT_ram_3fcc3f77 = 0;
  FUN_ram_420798d2();
  FUN_ram_420791ce();
  if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42085276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(0,param_2);
    return;
  }
  return;
}

