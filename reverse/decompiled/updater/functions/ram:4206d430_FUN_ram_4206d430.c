
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_ram_4206d430(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_ram_3fcb6878 == 0) {
    piVar1 = (int *)&DAT_ram_3fcb6340;
    piVar2 = (int *)&DAT_ram_3c07a488;
    while ((iVar4 = *piVar2, iVar4 != 0 && (piVar1 < (int *)0x3fcb6408))) {
      iVar3 = FUN_ram_4206d416(iVar4);
      if (iVar3 != 0) {
        *piVar1 = iVar4;
        piVar1 = piVar1 + 1;
      }
      piVar2 = piVar2 + 1;
    }
    *piVar1 = 0;
    _DAT_ram_3fcb6878 = 1;
  }
  return &DAT_ram_3fcb6340;
}

