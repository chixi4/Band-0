
undefined4 FUN_ram_420a579a(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = param_2;
  while( true ) {
    if (*piVar2 == 0) {
      *(int **)(param_1 + 0x58) = param_2;
      return 0;
    }
    iVar1 = (*(code *)&SUB_ram_400104a8)();
    uVar3 = uVar3 + iVar1;
    if ((0xfe < iVar1 - 1U) || (0xffff < uVar3)) break;
    piVar2 = piVar2 + 1;
  }
  return 0xffff8f00;
}

