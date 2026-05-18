
uint FUN_ram_403911c2(void)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(gp + -0x6e8) != 1) << 10;
  if (*(int *)(gp + -0x6f0) != 1) {
    uVar1 = uVar1 | 0x800;
  }
  if (*(int *)(gp + -0x6e0) != 1) {
    uVar1 = uVar1 | 0x20;
  }
  return uVar1;
}

