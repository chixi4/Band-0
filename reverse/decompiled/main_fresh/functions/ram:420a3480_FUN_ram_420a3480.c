
undefined4 FUN_ram_420a3480(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x10) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x420a3486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x10))();
    return uVar1;
  }
  return 0xffffffff;
}

