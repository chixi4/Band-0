
uint FUN_ram_420a584a(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_ram_420a5804();
  if (0x800 < uVar1) {
    uVar1 = 0x800;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar1 = uVar1 - (*(int *)(*(int *)(param_1 + 0x40) + 0x50) == 0x304);
  }
  return uVar1;
}

