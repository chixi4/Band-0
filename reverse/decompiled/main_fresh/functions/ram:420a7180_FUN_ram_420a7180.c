
void FUN_ram_420a7180(int param_1)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_ram_420a6940();
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_ram_420a6940();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  FUN_ram_420a59b8(param_1);
  return;
}

