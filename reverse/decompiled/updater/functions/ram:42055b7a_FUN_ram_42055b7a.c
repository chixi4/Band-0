
void FUN_ram_42055b7a(void)

{
  ushort uVar1;
  
  uVar1 = FUN_ram_40391b64();
  *(ushort *)(gp + -0x7a0) = uVar1 | 0xc000;
  return;
}

