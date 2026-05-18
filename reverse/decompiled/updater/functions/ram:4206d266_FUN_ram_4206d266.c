
void FUN_ram_4206d266(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x40) = 1;
  }
  return;
}

