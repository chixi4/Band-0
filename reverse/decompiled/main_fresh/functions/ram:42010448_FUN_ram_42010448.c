
undefined4 FUN_ram_42010448(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_ram_3fcb8bac;
  iVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      *(undefined4 *)(&DAT_ram_3fcb8bac + iVar2 * 4) = 0;
      return 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 5);
  return 0x103;
}

