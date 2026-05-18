
bool FUN_ram_4205a16c(int param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x20) + 5);
    return uVar1 == 10 || uVar1 - 4 < 2;
  }
  return false;
}

