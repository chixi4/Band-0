
undefined4 FUN_ram_420a3468(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0xc) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x420a346e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xc))();
    return uVar1;
  }
  return 0xffffffff;
}

