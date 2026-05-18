
void FUN_ram_40390f04(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_ram_40394d60();
  if (*param_1 == 0) {
    iVar1 = FUN_ram_403956a4(param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_40399b58();
    }
    *param_1 = iVar1;
  }
  FUN_ram_40394d8e();
  return;
}

