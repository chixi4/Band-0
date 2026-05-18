
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4207f23c(void)

{
  bool bVar1;
  
  bVar1 = true;
  if ((1 < (byte)(DAT_ram_3fcc41bd - 2U)) && (DAT_ram_3fcc41bd != '\x06')) {
    bVar1 = _DAT_ram_3fcc41bc == 0x405;
  }
  return bVar1;
}

