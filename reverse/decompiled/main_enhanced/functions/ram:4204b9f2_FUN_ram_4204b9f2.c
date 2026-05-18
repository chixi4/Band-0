
void FUN_ram_4204b9f2(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xc);
  do {
    fence();
    fence();
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)(param_1 + 0x24));
  thunk_FUN_ram_40390634();
  return;
}

