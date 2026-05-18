
int FUN_ram_420658dc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1;
  if ((param_1 != 0) && (uVar3 = *(uint *)(param_1 + 4), uVar3 < param_2)) {
    iVar1 = FUN_ram_4206582a(param_2);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      *(uint *)(iVar1 + 4) = (param_2 - uVar3) + iVar2;
      (*(code *)&SUB_ram_40010488)(*(int *)(iVar1 + 8) + iVar2,0);
      FUN_ram_42065810(iVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
    }
    FUN_ram_4206587c(param_1);
  }
  return iVar1;
}

