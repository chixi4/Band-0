
int FUN_ram_4203e862(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = DAT_ram_3fcb4ee6;
  piVar3 = (int *)&DAT_ram_3fcb4ed0;
  cVar2 = '\0';
  while( true ) {
    if (cVar1 == cVar2) {
      return 0;
    }
    iVar5 = *piVar3;
    if ((iVar5 != 0) && (iVar4 = FUN_ram_40399d6c(iVar5 + 4,param_1,6), iVar4 == 0)) break;
    cVar2 = cVar2 + '\x01';
    piVar3 = piVar3 + 1;
  }
  return iVar5;
}

