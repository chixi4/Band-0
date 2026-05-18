
int FUN_ram_42022808(char *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 == '\"') {
    param_1 = param_1 + 1;
    iVar1 = (*(code *)&SUB_ram_4001053c)(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(char *)(iVar1 + 1) != '\0') {
      return 0;
    }
    *param_2 = iVar1 - (int)param_1;
    iVar1 = FUN_ram_420227c4(param_1);
    return iVar1;
  }
  if ((*param_1 == 'P') && (param_1[1] == '\"')) {
    param_1 = param_1 + 2;
    iVar2 = (*(code *)&SUB_ram_4001053c)(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    if (*(char *)(iVar2 + 1) != '\0') {
      return 0;
    }
    iVar1 = FUN_ram_420227c4(param_1,iVar2 - (int)param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = (iVar2 - (int)param_1) + 1;
    iVar3 = thunk_FUN_ram_4039047a(iVar2);
    if (iVar3 != 0) {
      uVar4 = FUN_ram_42022660(iVar3,iVar2,iVar1);
      *param_2 = uVar4;
      thunk_FUN_ram_40390608(iVar1);
      return iVar3;
    }
  }
  else {
    uVar4 = (*(code *)&SUB_ram_400104a8)(param_1);
    if ((uVar4 & 0xfffffff7) == 5) {
      *param_2 = uVar4;
      iVar1 = thunk_FUN_ram_4039047a(uVar4 + 1);
      if (iVar1 != 0) {
        FUN_ram_40399daa(iVar1,param_1,uVar4);
        *(undefined1 *)(uVar4 + iVar1) = 0;
        return iVar1;
      }
      return 0;
    }
    uVar4 = uVar4 >> 1;
    iVar1 = thunk_FUN_ram_4039047a(uVar4 + 1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_ram_420225d4(param_1,iVar1,uVar4);
    if (iVar2 == 0) {
      *(undefined1 *)(iVar1 + uVar4) = 0;
      *param_2 = uVar4;
      return iVar1;
    }
  }
  thunk_FUN_ram_40390608(iVar1);
  return 0;
}

