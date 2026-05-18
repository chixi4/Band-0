
undefined4 FUN_ram_4206c106(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x4206c10e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x770))();
    return uVar1;
  }
  return 0xffffffff;
}

