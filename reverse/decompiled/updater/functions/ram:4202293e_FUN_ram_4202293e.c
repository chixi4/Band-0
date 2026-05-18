
void FUN_ram_4202293e(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 0) {
    return;
  }
  for (; *(int *)(iVar1 * 4 + param_1) != 0; iVar1 = iVar1 + 1) {
  }
  return;
}

