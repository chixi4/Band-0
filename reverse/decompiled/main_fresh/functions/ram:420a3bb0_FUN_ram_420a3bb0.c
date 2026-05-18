
void FUN_ram_420a3bb0(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x38) = 1;
  }
  return;
}

