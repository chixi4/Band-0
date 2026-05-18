
bool FUN_ram_4206d4a2(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (uVar1 < 5) {
    return 2 < uVar1;
  }
  return uVar1 - 8 < 4;
}

