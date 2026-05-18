
undefined4 FUN_ram_403925a8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_ram_40392df2(*param_1,param_1[1] * 1000,0);
    return uVar1;
  }
  return 0x103;
}

