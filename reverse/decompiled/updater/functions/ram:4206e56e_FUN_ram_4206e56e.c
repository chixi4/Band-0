
void FUN_ram_4206e56e(int param_1)

{
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x94);
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x94) + 8;
  FUN_ram_4206de14(param_1,0);
  return;
}

