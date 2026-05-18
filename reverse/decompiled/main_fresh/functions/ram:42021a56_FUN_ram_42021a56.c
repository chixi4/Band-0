
undefined4 FUN_ram_42021a56(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0x102;
  }
  piVar1 = (int *)&DAT_ram_3fcc16e4;
  iVar2 = 0;
  do {
    if (*piVar1 == 0) {
      *(int *)(&DAT_ram_3fcc16e4 + iVar2 * 8) = param_1;
      *(undefined4 *)(&DAT_ram_3fcc16e8 + iVar2 * 8) = param_2;
      return 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (iVar2 != 4);
  return 0x101;
}

