
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42015b86(char param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int *piVar3;
  
  if (param_1 != '\0') {
    FUN_ram_40395780(param_2,param_3);
    return;
  }
  piVar3 = (int *)&DAT_ram_3fcb2080;
  iVar2 = 0;
  while( true ) {
    if (iVar2 == _DAT_ram_3fcb668c) {
      return;
    }
    if (((*piVar3 != 0) && (iVar1 = *(int *)(*(int *)(*piVar3 + 4) + 0x34), iVar1 != 0)) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xc), UNRECOVERED_JUMPTABLE != (code *)0x0))
    break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x42015bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return;
}

