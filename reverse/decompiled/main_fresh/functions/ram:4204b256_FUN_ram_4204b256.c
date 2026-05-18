
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204b256(void)

{
  uint uVar1;
  int iVar2;
  
  _DAT_ram_3fcc5220 = _DAT_ram_3fcc521c;
  for (iVar2 = 0; _DAT_ram_3fcc5220 != iVar2; iVar2 = iVar2 + 1) {
    uVar1 = iVar2 * 8;
    *(uint *)(&DAT_ram_3fcc1d94 + uVar1) = *(uint *)(&DAT_ram_3fcc1d94 + uVar1) & 7 | uVar1;
  }
  return;
}

