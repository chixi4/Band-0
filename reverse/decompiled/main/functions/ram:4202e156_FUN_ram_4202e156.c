
undefined4
FUN_ram_4202e156(char *param_1,code *UNRECOVERED_JUMPTABLE,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4202e15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_3,param_4,UNRECOVERED_JUMPTABLE);
    return uVar1;
  }
  if (*param_1 == '\x04') {
    FUN_ram_4039c11e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),0xc);
    return 0;
  }
  return 0;
}

