
uint FUN_ram_42018f1a(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while (iVar2 = FUN_ram_42019344(0,uVar1 + 0x10,0), iVar2 != 0) {
    uVar1 = uVar1 + 1 & 0xffff;
  }
  return uVar1 & 0xff;
}

