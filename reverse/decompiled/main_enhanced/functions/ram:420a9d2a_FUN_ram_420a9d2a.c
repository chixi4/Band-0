
int FUN_ram_420a9d2a(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 == param_3) &&
     (iVar2 = FUN_ram_420a9bb6(param_2,*(undefined4 *)(param_1 + 8)), iVar2 == 0)) {
    return 0;
  }
  iVar2 = (*(code *)&SUB_ram_400104a8)(param_2);
  if (((2 < uVar1) && (pcVar3 = *(char **)(param_1 + 8), *pcVar3 == '*')) && (pcVar3[1] == '.')) {
    for (iVar4 = 0; iVar2 != iVar4; iVar4 = iVar4 + 1) {
      if (*(char *)(param_2 + iVar4) == '.') {
        if (iVar4 == 0) {
          return -1;
        }
        if (iVar2 - iVar4 != uVar1 - 1) {
          return -1;
        }
        iVar2 = FUN_ram_420a9bb6(pcVar3 + 1);
        return -(uint)(iVar2 != 0);
      }
    }
  }
  return -1;
}

