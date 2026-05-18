
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42020d22(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = _DAT_ram_3fcb6748;
  do {
    piVar1 = piVar2;
    if (piVar1 == (int *)0x0) {
      return 0x105;
    }
    piVar2 = (int *)piVar1[1];
  } while (*piVar1 != param_1);
  piVar4 = _DAT_ram_3fcb6748;
  if (_DAT_ram_3fcb6748 != piVar1) {
    do {
      piVar3 = piVar4;
      piVar4 = (int *)piVar3[1];
    } while (piVar4 != piVar1);
    piVar3[1] = (int)piVar2;
    piVar2 = _DAT_ram_3fcb6748;
  }
  _DAT_ram_3fcb6748 = piVar2;
  _DAT_ram_3fcb6744 = _DAT_ram_3fcb6744 + -1;
  thunk_FUN_ram_40390608();
  return 0;
}

