
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202773a(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_3fcb6b7c;
  if (param_1 == (int *)0x0) {
    iVar1 = **(int **)(_DAT_ram_3fcb6b7c + 0x20);
    *(int *)(_DAT_ram_3fcb6b7c + 0x20) = iVar1;
    if (iVar1 == 0) {
      *(int *)(iVar2 + 0x24) = iVar2 + 0x20;
      return;
    }
  }
  else {
    iVar2 = *(int *)*param_1;
    *param_1 = iVar2;
    if (iVar2 == 0) {
      *(int **)(_DAT_ram_3fcb6b7c + 0x24) = param_1;
    }
  }
  return;
}

