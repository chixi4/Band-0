
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42026fba(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcb6b7c;
  iVar2 = *(int *)(_DAT_ram_3fcb6b7c + 0x20);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    *(int **)(iVar1 + 0x24) = param_1;
  }
  *(int **)(iVar1 + 0x20) = param_1;
  return;
}

