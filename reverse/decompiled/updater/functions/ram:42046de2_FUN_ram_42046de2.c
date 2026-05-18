
int FUN_ram_42046de2(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 100) == 0) || (pcVar1 = (char *)FUN_ram_420390a6(), *pcVar1 == '\0')) {
    if (param_2 == 0) {
      return 1;
    }
    iVar4 = *(int *)(gp + -0x2b8);
    uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x24) + 1);
    if (((*(uint *)(iVar4 + 4) != uVar5) ||
        (iVar2 = FUN_ram_40399d6c(iVar4 + 8,*(int *)(param_1 + 0x24) + 2,uVar5), iVar2 != 0)) &&
       (uVar5 != 0)) {
      return param_2;
    }
    if ((*(char *)(iVar4 + 0x35f) == '\t') && (*(int *)(param_1 + 100) != 0)) {
      uVar3 = 0x3c07c604;
    }
    else {
      if (*(char *)(iVar4 + 0x361) != '\0') {
        return param_2;
      }
      if (*(int *)(param_1 + 100) == 0) {
        return param_2;
      }
      uVar3 = 0x3c07c63c;
    }
  }
  else {
    uVar3 = 0x3c07c5d8;
  }
  FUN_ram_42033fd8(1,8,4,uVar3);
  return 0;
}

