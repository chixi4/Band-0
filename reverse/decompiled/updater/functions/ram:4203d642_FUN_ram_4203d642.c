
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203d642(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = _DAT_ram_3fcb4f10;
  DAT_ram_3fcb4ee7 = 0;
  FUN_ram_42033eb8();
  FUN_ram_420337c0();
  if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4203d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(0,param_2);
    return;
  }
  return;
}

