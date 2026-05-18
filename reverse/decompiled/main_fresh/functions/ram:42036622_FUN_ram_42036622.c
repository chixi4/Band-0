
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42036622(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)_DAT_ram_3fcb6be4;
  for (iVar2 = 0; (piVar1 != (int *)0x0 && (iVar2 != param_1)); iVar2 = iVar2 + 1) {
    piVar1 = (int *)*piVar1;
  }
  return;
}

