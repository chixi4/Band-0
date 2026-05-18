
undefined4 FUN_ram_420103b8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_ram_3fcb16bc;
  iVar2 = 0;
  while( true ) {
    if (*piVar1 == param_1) {
      return 0x103;
    }
    if (*piVar1 == 0) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (iVar2 == 5) {
      return 0x101;
    }
  }
  *(int *)(&DAT_ram_3fcb16bc + iVar2 * 4) = param_1;
  return 0;
}

