
undefined4 FUN_ram_420a2a7c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x420a2a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x76c))();
    return uVar1;
  }
  return 0xffffffff;
}

