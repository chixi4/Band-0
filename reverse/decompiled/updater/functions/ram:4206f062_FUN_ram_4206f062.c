
int FUN_ram_4206f062(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4206f01c();
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = iVar1 - (uint)(*(int *)(*(int *)(param_1 + 0x40) + 0x50) == 0x304);
  }
  return iVar1;
}

