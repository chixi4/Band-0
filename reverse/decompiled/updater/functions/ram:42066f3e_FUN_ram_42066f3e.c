
undefined4 FUN_ram_42066f3e(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    return 0xffffc180;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1c);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42066f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffc100;
}

