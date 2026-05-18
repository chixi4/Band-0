
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40395aa0(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40394a24(4);
  if (iVar1 == 0) {
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x2000;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xffffdfff;
    _DAT_ram_6001f048 = _DAT_ram_6001f048 & 0xffffbfff;
  }
  FUN_ram_40394a46(4,iVar1);
  return;
}

