
undefined4 FUN_ram_420122d2(int param_1,int *param_2)

{
  int *piVar1;
  
  FUN_ram_40394d60();
  piVar1 = param_2 + 3;
  while ((*param_2 != 0 && (*param_2 != param_1))) {
    param_2 = param_2 + 1;
    if (param_2 == piVar1) {
      FUN_ram_40394d8e();
      return 0x101;
    }
  }
  *param_2 = param_1;
  FUN_ram_40394d8e();
  return 0;
}

