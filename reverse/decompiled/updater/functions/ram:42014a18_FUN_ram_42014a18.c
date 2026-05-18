
int FUN_ram_42014a18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = (*(code *)&SUB_ram_400104a8)(param_2);
  if (iVar1 == iVar2) {
    param_2 = 0x3c070618;
  }
  else {
    param_2 = param_2 + iVar1;
  }
  return param_2;
}

