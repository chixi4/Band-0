
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_ram_4202f8a2(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (_DAT_ram_3fcb6770 == 0) {
    piVar1 = (int *)&DAT_ram_3fcb36c0;
    iVar3 = 0;
    for (piVar2 = (int *)&DAT_ram_3c0786e0; *piVar2 != 0; piVar2 = piVar2 + 3) {
      *piVar1 = *piVar2;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    }
    *(undefined4 *)(&DAT_ram_3fcb36c0 + iVar3 * 4) = 0;
    _DAT_ram_3fcb6770 = 1;
  }
  return &DAT_ram_3fcb36c0;
}

