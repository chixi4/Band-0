
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205e99c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = _DAT_ram_3fcc536c;
  do {
    piVar1 = piVar2;
    if (piVar1 == (int *)0x0) {
      return 0x105;
    }
    piVar2 = (int *)piVar1[1];
  } while (*piVar1 != param_1);
  piVar4 = _DAT_ram_3fcc536c;
  if (_DAT_ram_3fcc536c != piVar1) {
    do {
      piVar3 = piVar4;
      piVar4 = (int *)piVar3[1];
    } while (piVar4 != piVar1);
    piVar3[1] = (int)piVar2;
    piVar2 = _DAT_ram_3fcc536c;
  }
  _DAT_ram_3fcc536c = piVar2;
  if (_DAT_ram_3fcc5368 != 0) {
    _DAT_ram_3fcc5368 = _DAT_ram_3fcc5368 + -1;
    thunk_FUN_ram_40390634();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

