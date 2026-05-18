
void FUN_ram_420a3c40(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x40) = 1;
  }
  return;
}

