
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4204ae96(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = _DAT_ram_600c0058 >> 10 & 3;
  if (uVar1 != 1) {
    if ((uVar1 != 2) && (uVar1 != 0)) {
      uVar1 = 3;
    }
    iVar2 = FUN_ram_4204ae62(uVar1);
    return (uint)(iVar2 * 1000000) / ((_DAT_ram_600c0058 & 0x3ff) + 1);
  }
  iVar2 = 0x50;
  if (((_DAT_ram_600c0008 & 3) != 0) && (iVar2 = 0x78, (_DAT_ram_600c0008 & 3) != 1)) {
    iVar2 = 0;
  }
  return iVar2 * 1000000;
}

