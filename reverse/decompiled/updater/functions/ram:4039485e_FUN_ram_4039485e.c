
void FUN_ram_4039485e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_ram_40394d60();
  (**(code **)(param_1 + 0x18))(param_1,param_2);
  if ((*(int *)(param_1 + 0x3c) != 0) && (iVar1 = FUN_ram_40396680(param_1 + 0x3c), iVar1 == 1)) {
    FUN_ram_40394dce();
  }
  FUN_ram_40394d8e();
  return;
}

