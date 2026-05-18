
undefined4 FUN_ram_420a47a8(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(int *)(param_1 + 4) < 0x1b) && (*(int *)(param_1 + 0x38) != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x38) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x420a47bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (param_1,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x80),
                       *(int *)(param_1 + 4),UNRECOVERED_JUMPTABLE);
    return uVar1;
  }
  return 0;
}

