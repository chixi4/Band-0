
void FUN_ram_420544ec(void)

{
  ushort uVar1;
  
  uVar1 = FUN_ram_403926c4();
  *(ushort *)(gp + -0x750) = uVar1 | 0xc000;
  return;
}

