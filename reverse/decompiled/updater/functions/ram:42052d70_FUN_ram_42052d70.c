
undefined4 FUN_ram_42052d70(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffff0;
  }
  if (param_3 == 0) {
    if (param_4 == 0) {
      uVar1 = FUN_ram_42052d6a(param_2);
      return uVar1;
    }
  }
  else {
    FUN_ram_4205270c(param_2,*(undefined2 *)(param_3 + 8));
    FUN_ram_42051d02(param_3);
  }
  return 0;
}

