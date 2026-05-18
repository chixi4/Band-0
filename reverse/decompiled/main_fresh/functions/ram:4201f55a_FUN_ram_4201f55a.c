
int FUN_ram_4201f55a(char *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sStack_22;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    while (((*param_1 != '\0' &&
            (iVar3 = FUN_ram_4201f4e6(param_1,&sStack_22), sVar1 = sStack_22, iVar3 != 0)) &&
           (sStack_22 != 10))) {
      iVar4 = FUN_ram_4201f498(sStack_22);
      iVar5 = iVar2;
      if (iVar4 != 0) {
        iVar5 = FUN_ram_4201f474(sVar1);
        iVar5 = iVar5 * param_3 + iVar2;
        if ((param_2 != 0) && (param_2 < iVar5)) {
          return iVar2;
        }
      }
      iVar2 = iVar5;
      param_1 = param_1 + iVar3;
    }
  }
  return iVar2;
}

