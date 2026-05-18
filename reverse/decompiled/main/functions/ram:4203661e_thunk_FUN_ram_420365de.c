
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_420365de(uint param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)_DAT_ram_3fcb6be4;
      (piVar1 != (int *)0x0 && (*(ushort *)((int)piVar1 + 6) != param_1)); piVar1 = (int *)*piVar1)
  {
  }
  return;
}

