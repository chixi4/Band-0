
byte FUN_ram_4039bd14(void)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((*(char *)(gp + 0x117) != '\x02') && (bVar1 = 0, *(char *)(gp + 0x117) == '\x01')) {
    bVar1 = DAT_ram_3fcb558c;
  }
  return bVar1 & 1;
}

