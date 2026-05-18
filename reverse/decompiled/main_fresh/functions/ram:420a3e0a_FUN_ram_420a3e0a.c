
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_ram_420a3e0a(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_ram_3fcc53e0 == 0) {
    piVar1 = (int *)&DAT_ram_3fcc4c54;
    piVar2 = &DAT_ram_3c0fb360;
    while ((iVar4 = *piVar2, iVar4 != 0 && (piVar1 < (int *)0x3fcc4c6c))) {
      iVar3 = FUN_ram_420a3df0(iVar4);
      if (iVar3 != 0) {
        *piVar1 = iVar4;
        piVar1 = piVar1 + 1;
      }
      piVar2 = piVar2 + 1;
    }
    *piVar1 = 0;
    _DAT_ram_3fcc53e0 = 1;
  }
  return &DAT_ram_3fcc4c54;
}

