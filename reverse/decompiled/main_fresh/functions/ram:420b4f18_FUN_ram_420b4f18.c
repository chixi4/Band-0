
undefined4 FUN_ram_420b4f18(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 3;
  }
  uVar1 = 1;
  if (param_1 == 1) {
    uVar1 = 2;
  }
  else if (param_1 != 2) {
    FUN_ram_4039bf1e();
    return 3;
  }
  return uVar1;
}

