
void FUN_ram_4206e564(int param_1)

{
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58) + 8;
  FUN_ram_4206e116();
  return;
}

