
void FUN_ram_42059ac2(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c) = 0;
    FUN_ram_42055a5a(0x42049b2a,param_1);
    return;
  }
  return;
}

