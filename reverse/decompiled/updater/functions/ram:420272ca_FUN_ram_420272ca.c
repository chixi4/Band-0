
void FUN_ram_420272ca(int param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)&DAT_ram_3c077bf4; (piVar1[1] != 0 && (*piVar1 != param_1));
      piVar1 = piVar1 + 2) {
  }
  return;
}

