
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420762ec(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fbbb0);
  if (_DAT_ram_3fcc3040 != 0) {
    if (param_1 == 1) {
      piVar1 = (int *)&DAT_ram_3fcc2750;
    }
    else {
      piVar1 = (int *)&DAT_ram_3fcc2744;
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))();
    while (iVar2 = _DAT_ram_3fcdfdd8, *piVar1 != 0) {
      iVar2 = *(int *)*piVar1;
      *piVar1 = iVar2;
      if (iVar2 == 0) {
        piVar1[1] = (int)piVar1;
      }
      FUN_ram_420762ca();
    }
    piVar1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x4207634a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0x58))(_DAT_ram_3fcc3040);
    return;
  }
  return;
}

