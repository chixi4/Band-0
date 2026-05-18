
void FUN_ram_420a6994(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_420a6946(param_1,0x25);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x94) + -8) = 1;
  }
  return;
}

