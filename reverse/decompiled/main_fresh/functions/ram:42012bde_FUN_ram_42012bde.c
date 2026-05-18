
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_42012bde(int param_1)

{
  int *piVar1;
  
  FUN_ram_40396966();
  for (piVar1 = _DAT_ram_3fcc4ee8; (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_ram_40396994();
  return piVar1;
}

