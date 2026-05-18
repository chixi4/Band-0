
undefined4 FUN_ram_420b5332(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_ram_40396966();
  piVar1 = (int *)&DAT_ram_3fcc1d50;
  iVar2 = 0;
  do {
    if (*piVar1 == 0) {
      *(undefined4 *)(&DAT_ram_3fcc1d50 + iVar2 * 4) = param_1;
      FUN_ram_40396994();
      return 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 8);
  FUN_ram_40396994();
  return 0x101;
}

