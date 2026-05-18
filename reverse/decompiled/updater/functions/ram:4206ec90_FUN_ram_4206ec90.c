
void FUN_ram_4206ec90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202905e(*(int *)(param_1 + 0x38) + 0x14c);
  if (iVar1 == 0) {
    FUN_ram_4202905e(*(int *)(param_1 + 0x38) + 0x158,param_2,param_3);
    return;
  }
  return;
}

