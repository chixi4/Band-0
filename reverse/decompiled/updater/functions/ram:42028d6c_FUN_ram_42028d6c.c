
int FUN_ram_42028d6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [28];
  
  iVar1 = FUN_ram_42028d06(param_1,0,param_2,param_3,param_4,param_5,param_6,param_9,param_10,
                           param_8,auStack_30);
  if ((iVar1 == 0) && (iVar2 = FUN_ram_42027c12(param_7,auStack_30,param_8), iVar1 = 0, iVar2 != 0))
  {
    FUN_ram_420293a6(param_10,param_2);
    iVar1 = -0x12;
  }
  return iVar1;
}

