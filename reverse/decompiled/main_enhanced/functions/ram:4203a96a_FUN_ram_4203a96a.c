
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203a96a(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = _DAT_ram_3fcb6a10;
  piVar2 = (int *)*(int *)(_DAT_ram_3fcb6a10 + 4);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      *param_1 = *(int *)(_DAT_ram_3fcb6a10 + 4);
      *(int **)(iVar1 + 4) = param_1;
      return;
    }
    if (piVar2 == param_1) break;
    piVar2 = (int *)*piVar2;
  }
  return;
}

