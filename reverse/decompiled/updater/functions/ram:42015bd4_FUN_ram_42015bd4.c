
undefined4 FUN_ram_42015bd4(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  
  puVar1 = (uint *)FUN_ram_42014f58();
  iVar2 = FUN_ram_4201478a(puVar1,param_1);
  puVar3 = (undefined4 *)FUN_ram_40396e84();
  if ((puVar1 == (uint *)0x0) || (iVar2 == -1)) {
    uVar4 = 9;
  }
  else {
    if ((*(int *)(puVar1[1] + 0x30) != 0) &&
       (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(puVar1[1] + 0x30) + 4),
       UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
      if ((*puVar1 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x42015c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE_00)(puVar1[2],iVar2);
        return uVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x42015c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE_00)(iVar2,param_2);
      return uVar4;
    }
    uVar4 = 0x58;
  }
  *puVar3 = uVar4;
  return 0xffffffff;
}

