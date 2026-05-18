
undefined4 FUN_ram_4206ca8c(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4206ca92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x28))();
    return uVar1;
  }
  return 0xffffffff;
}

