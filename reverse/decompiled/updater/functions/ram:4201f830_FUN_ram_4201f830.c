
undefined4 FUN_ram_4201f830(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 < 0x7e) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 0x50) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x4201f84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(int **)(param_1 + 0x50),param_2 * 0x20 + 0x40 + *(int *)(param_1 + 8),
                       param_3,0x20,*(int *)(param_1 + 8),UNRECOVERED_JUMPTABLE);
    return uVar1;
  }
  return 0xffffffff;
}

