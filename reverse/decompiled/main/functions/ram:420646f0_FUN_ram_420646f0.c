
int FUN_ram_420646f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while ((iVar1 < param_3 &&
         (iVar2 = FUN_ram_42063878(param_1,param_2 + iVar1,param_3 - iVar1), 0 < iVar2))) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

