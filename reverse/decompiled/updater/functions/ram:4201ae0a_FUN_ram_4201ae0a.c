
undefined4 FUN_ram_4201ae0a(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = (*(code *)&LAB_ram_403921b0)(*param_1,param_1[1] * 1000,0);
    return uVar1;
  }
  return 0x103;
}

