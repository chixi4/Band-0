
void FUN_ram_4205260c(void)

{
  ushort uVar1;
  
  uVar1 = FUN_ram_40391b64();
  *(ushort *)(gp + -0x7a2) = uVar1 | 0xc000;
  return;
}

