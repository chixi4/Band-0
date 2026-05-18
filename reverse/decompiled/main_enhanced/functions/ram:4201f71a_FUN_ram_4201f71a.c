
int FUN_ram_4201f71a(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 auStack_22 [7];
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    while ((*param_1 != '\0' &&
           (iVar3 = FUN_ram_4201f4e6(param_1,auStack_22), uVar1 = auStack_22[0], iVar3 != 0))) {
      iVar4 = FUN_ram_4201f498(auStack_22[0]);
      if (iVar4 != 0) {
        iVar4 = FUN_ram_4201f474(uVar1);
        iVar2 = iVar2 + iVar4;
      }
      param_1 = param_1 + iVar3;
    }
  }
  return iVar2;
}

