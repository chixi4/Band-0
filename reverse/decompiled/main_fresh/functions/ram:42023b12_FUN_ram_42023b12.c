
undefined4 FUN_ram_42023b12(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42023b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_1[7])(*param_1);
    return uVar1;
  }
  return 0xffffffff;
}

