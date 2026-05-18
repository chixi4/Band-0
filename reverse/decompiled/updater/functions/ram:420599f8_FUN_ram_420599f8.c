
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_420599f8(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_ram_4205142c(4);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_ram_40395430(1,0,3);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      FUN_ram_42012f1e(_DAT_ram_3fcb6830,piVar1);
      return piVar1;
    }
    thunk_FUN_ram_40390608(piVar1);
  }
  return (int *)0x0;
}

