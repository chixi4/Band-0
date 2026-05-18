
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_4205c9a2(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_ram_420530ba(4);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_ram_40397076(1,0,3);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      FUN_ram_42012cf2(_DAT_ram_3fcc5360,piVar1);
      return piVar1;
    }
    thunk_FUN_ram_40390634(piVar1);
  }
  return (int *)0x0;
}

