
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40391b46(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  for (uVar2 = _DAT_ram_60008830 >> 7 & 7; uVar2 != 0; uVar2 = uVar2 >> 1) {
    uVar1 = uVar1 ^ uVar2 & 1;
  }
  return uVar1;
}

