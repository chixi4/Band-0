
undefined4 FUN_ram_4207a906(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_ram_4207b946(*(int *)*param_1 + 8,((int *)*param_1)[1],param_1[4],0);
                    /* WARNING: Could not recover jumptable at 0x4207a92a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_1[8])(param_1);
    return uVar1;
  }
  return 0x102;
}

