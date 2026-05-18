
undefined4 FUN_ram_42053f12(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_ram_42053e10(param_1,param_2,*(undefined2 *)(param_2 + 8),0);
    return uVar1;
  }
  return 0xfffffff0;
}

