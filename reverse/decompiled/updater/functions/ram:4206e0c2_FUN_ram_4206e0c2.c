
void FUN_ram_4206e0c2(int param_1)

{
  *(undefined4 *)(param_1 + 0xac) = 0x14;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  **(undefined1 **)(param_1 + 0xa8) = 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  FUN_ram_4206e01e(param_1,1);
  return;
}

