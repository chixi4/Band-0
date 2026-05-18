
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42020d82(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _DAT_ram_3fcb6748;
  if (param_1 != 0) {
    do {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[1];
    } while (param_1 != iVar2);
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *piVar1;
}

