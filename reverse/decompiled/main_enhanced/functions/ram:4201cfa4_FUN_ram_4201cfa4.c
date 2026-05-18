
void FUN_ram_4201cfa4(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                     undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  for (iVar1 = 0; iVar1 < param_5; iVar1 = iVar1 + 1) {
    for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
      iVar2 = FUN_ram_4201cb48(param_2 + iVar3,param_3 + iVar1,param_2,param_3,param_4,param_5,
                               param_6);
      if (iVar2 != 0) {
        FUN_ram_4201cf72(param_1,param_2 + iVar3,param_3 + iVar1);
      }
    }
  }
  return;
}

