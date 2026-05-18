
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420907ca(undefined1 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (_DAT_ram_3fcc43f8 != (code *)0x0) {
    FUN_ram_4207a038(6,0x1000,4,&DAT_ram_3c0fe374);
    uVar1 = _DAT_ram_3fcc43fc;
    UNRECOVERED_JUMPTABLE = _DAT_ram_3fcc43f8;
    _DAT_ram_3fcc43f8 = (code *)0x0;
    _DAT_ram_3fcc43fc = 0;
                    /* WARNING: Could not recover jumptable at 0x42090812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  return;
}

