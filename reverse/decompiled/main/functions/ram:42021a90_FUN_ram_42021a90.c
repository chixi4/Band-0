
undefined4 FUN_ram_42021a90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_ram_3fcc16e4;
  iVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      *(undefined4 *)(&DAT_ram_3fcc16e4 + iVar2 * 8) = 0;
      *(undefined4 *)(&DAT_ram_3fcc16e8 + iVar2 * 8) = 0;
      return 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (iVar2 != 4);
  return 0x105;
}

