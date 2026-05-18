
void FUN_ram_4204695a(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
      FUN_ram_420468fe(param_5,param_1 + iVar2,param_2 + iVar1,1);
    }
  }
  return;
}

