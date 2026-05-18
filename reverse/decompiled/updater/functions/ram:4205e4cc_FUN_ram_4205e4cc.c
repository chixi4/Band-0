
int FUN_ram_4205e4cc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4202f906();
  if ((iVar1 == 1) && (iVar1 = FUN_ram_42066304(), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar2 = FUN_ram_4202505a(iVar1,param_1 + 4,3);
    }
    else {
      iVar2 = FUN_ram_420249f4(iVar1,param_1 + 0xc);
    }
    if (iVar2 == 0) {
      return iVar1;
    }
    FUN_ram_4206636c(iVar1,0);
  }
  return 0;
}

