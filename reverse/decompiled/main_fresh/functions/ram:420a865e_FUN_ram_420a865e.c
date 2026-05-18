
undefined4 FUN_ram_420a865e(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x420a866a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xc))(param_2);
    return uVar1;
  }
  return 0;
}

