
void FUN_ram_420abd0a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_a4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_ram_420abdf6();
  if (iVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x420abd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(int **)(param_1 + 8),param_2,param_3,param_4,extraout_a4,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

