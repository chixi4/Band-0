
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201c394(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = _DAT_ram_3fcc50c0;
  if (DAT_ram_3fcc50b1 == '\0') {
    return _DAT_ram_3fcc50c4;
  }
  if (DAT_ram_3fcc50b0 == '\0') {
    return _DAT_ram_3fcc50c0;
  }
  puVar2 = &DAT_ram_3c0dcd54;
  iVar6 = (&DAT_ram_3c0dcd54)[_DAT_ram_3fcc50c0 * 3];
  if (iVar6 == 0) {
    return _DAT_ram_3fcc50c0;
  }
  puVar5 = &DAT_ram_3c0dce54;
  iVar4 = 0;
  do {
    iVar3 = FUN_ram_4039c438(*puVar5,iVar6);
    if (iVar3 == 0) {
      iVar4 = (&DAT_ram_3c0dce58)[iVar4 * 2];
      iVar6 = 0;
      if (iVar4 == 0) {
        return iVar1;
      }
      do {
        iVar3 = FUN_ram_4039c438(*puVar2,iVar4);
        if (iVar3 == 0) {
          return iVar6;
        }
        iVar6 = iVar6 + 1;
        puVar2 = puVar2 + 3;
      } while (iVar6 != 0x10);
      return iVar1;
    }
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 2;
  } while (iVar4 != 0x10);
  return iVar1;
}

