
undefined4 FUN_ram_420631ac(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_3 != 0)) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x420631b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)*param_1)();
      return uVar1;
    }
    return 0x103;
  }
  return 0x102;
}

