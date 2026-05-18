
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42027896(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = *(int **)(_DAT_ram_3fcb6b7c + 0x20); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2)
  {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

