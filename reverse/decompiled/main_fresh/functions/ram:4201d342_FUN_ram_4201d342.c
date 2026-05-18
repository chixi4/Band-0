
void FUN_ram_4201d342(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar3 = param_3;
  do {
    iVar2 = FUN_ram_4201cb48(iVar1,iVar3,param_2,param_3,param_4,param_5,4);
    if (iVar2 != 0) {
      FUN_ram_4201cf3c(param_1,iVar1,iVar3);
    }
    iVar1 = iVar1 + 1;
  } while ((iVar1 != param_4 + param_2) ||
          (iVar3 = iVar3 + 1, iVar1 = param_2, iVar3 != param_5 + param_3));
  return;
}

