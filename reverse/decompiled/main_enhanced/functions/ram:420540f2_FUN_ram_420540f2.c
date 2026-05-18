
uint FUN_ram_420540f2(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_420540d0();
  return uVar1 & (int)~uVar1 >> 0x1f & 0xff;
}

