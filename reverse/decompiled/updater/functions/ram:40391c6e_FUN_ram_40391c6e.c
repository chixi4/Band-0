
bool FUN_ram_40391c6e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x30);
  *(int *)(*(int *)(param_1 + 4) + 0x30) = param_1;
  return param_1 != iVar1;
}

