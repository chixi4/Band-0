
int * FUN_ram_4206d3b0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_ram_40399d1a(1,4);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_ram_40399d1a(1,0x10);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      return piVar1;
    }
    thunk_FUN_ram_40390608(piVar1);
  }
  return (int *)0x0;
}

