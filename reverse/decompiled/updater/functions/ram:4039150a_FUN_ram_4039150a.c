
uint FUN_ram_4039150a(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_403914fc(0x9f,0,0,0x18);
  return uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
}

