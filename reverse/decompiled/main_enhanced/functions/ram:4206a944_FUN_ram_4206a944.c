
void FUN_ram_4206a944(int param_1)

{
  int *piVar1;
  
  for (piVar1 = &DAT_ram_3c0f9958; (piVar1[1] != 0 && (*piVar1 != param_1)); piVar1 = piVar1 + 2) {
  }
  return;
}

