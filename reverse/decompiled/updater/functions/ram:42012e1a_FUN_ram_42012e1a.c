
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_42012e1a(int param_1)

{
  int *piVar1;
  
  FUN_ram_40394d60();
  for (piVar1 = _DAT_ram_3fcb6648; (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_ram_40394d8e();
  return piVar1;
}

