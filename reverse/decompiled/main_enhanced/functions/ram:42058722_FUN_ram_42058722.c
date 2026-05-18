
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42058722(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (_DAT_ram_3fcc5330 != 0) {
    iVar2 = FUN_ram_4205c954(0xffffffff);
    uVar1 = *(int *)(_DAT_ram_3fcc5330 + 4) - iVar2;
    uVar1 = uVar1 & 0xffffffffU - ((int)uVar1 >> 0x1f);
  }
  return uVar1;
}

