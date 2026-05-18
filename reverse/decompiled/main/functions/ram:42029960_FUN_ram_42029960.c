
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42029960(uint param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(_DAT_ram_3fcb6b84 + 0x40);
      (piVar1 != (int *)0x0 && (*(ushort *)((int)piVar1 + 10) != param_1)); piVar1 = (int *)*piVar1)
  {
  }
  return;
}

