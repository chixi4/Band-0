
void FUN_ram_4206e116(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x60) + 5;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x60) + 3;
  *(int *)(param_1 + 0x68) = iVar1;
  *(int *)(param_1 + 0x6c) = iVar1;
  return;
}

