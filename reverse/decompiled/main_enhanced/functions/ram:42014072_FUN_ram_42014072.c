
undefined4
FUN_ram_42014072(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  puVar1 = (uint *)FUN_ram_42013d8a(param_2);
  iVar2 = FUN_ram_420137d0(puVar1,param_2);
  if ((puVar1 == (uint *)0x0) || (iVar2 == -1)) {
    uVar3 = 9;
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(puVar1[1] + 4);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
      if ((*puVar1 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x420140d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE_00)(puVar1[2],iVar2,param_3);
        return uVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x420140e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(iVar2,param_3,param_4);
      return uVar3;
    }
    uVar3 = 0x58;
  }
  *param_1 = uVar3;
  return 0xffffffff;
}

