
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_42018c12(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (_DAT_ram_3fcb97b0 != (int *)0x0) {
    piVar1 = _DAT_ram_3fcb97b0;
    for (iVar2 = 0; _DAT_ram_3fcb97b4 != iVar2; iVar2 = iVar2 + 1) {
      if (*piVar1 == param_1) {
        return piVar1;
      }
      piVar1 = piVar1 + 6;
    }
  }
  return (int *)0x0;
}

