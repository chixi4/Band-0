
void FUN_ram_42017480(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 0) {
    param_3 = param_3 + param_1;
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_4 = param_4 + param_2;
    param_2 = 0;
  }
  if (200 < param_1 + param_3) {
    param_3 = 200 - param_1;
  }
  if (200 < param_2 + param_4) {
    param_4 = 200 - param_2;
  }
  if ((0 < param_3) && (iVar2 = 0, 0 < param_4)) {
    do {
      iVar3 = 0;
      do {
        iVar1 = param_1 + iVar3;
        iVar3 = iVar3 + 1;
        FUN_ram_42017436(iVar1,iVar2 + param_2,param_5);
      } while (param_3 != iVar3);
      iVar2 = iVar2 + 1;
    } while (param_4 != iVar2);
  }
  return;
}

