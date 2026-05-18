
int FUN_ram_420985d2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_31 [5];
  
  iVar1 = FUN_ram_42098a6c();
  auStack_31[0] = 2;
  if (iVar1 != 0) {
    iVar3 = *param_1;
    if ((iVar3 != 0) && (iVar2 = FUN_ram_4207f1d6(param_2), iVar2 == 0)) {
      FUN_ram_4209bec8(iVar1,iVar3);
      *param_1 = 0;
    }
    iVar3 = FUN_ram_4209be7a(iVar1,param_2);
    if (((iVar3 != 0) || (iVar3 = FUN_ram_4209bf6e(iVar1,param_2), iVar3 != 0)) &&
       (iVar1 = FUN_ram_42098eec(iVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,auStack_31), iVar1 != 0)) {
      *param_1 = iVar3;
      return iVar1;
    }
  }
  FUN_ram_4207f6bc(param_2,auStack_31[0]);
  return 0;
}

