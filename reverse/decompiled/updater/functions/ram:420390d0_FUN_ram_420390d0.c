
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_420390d0(void)

{
  bool bVar1;
  
  bVar1 = true;
  if ((1 < (byte)(DAT_ram_3fcb512d - 2U)) && (DAT_ram_3fcb512d != '\x06')) {
    bVar1 = _DAT_ram_3fcb512c == 0x405;
  }
  return bVar1;
}

