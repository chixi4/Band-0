
int FUN_ram_42070c46(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    int param_5,int param_6)

{
  int iVar1;
  undefined1 auStack_28 [8];
  
  FUN_ram_4206806e(auStack_28);
  if ((((param_4 == 0) ||
       ((iVar1 = FUN_ram_42068824(auStack_28,param_1,1), iVar1 == 0 &&
        (iVar1 = FUN_ram_42068da0(param_4,param_3,auStack_28), iVar1 == 0)))) &&
      ((param_5 == 0 ||
       ((iVar1 = FUN_ram_42068824(auStack_28,param_2,1), iVar1 == 0 &&
        (iVar1 = FUN_ram_42068da0(param_5,param_3,auStack_28), iVar1 == 0)))))) &&
     (iVar1 = 0, param_6 != 0)) {
    iVar1 = FUN_ram_4206960a(param_6,param_2,param_1);
  }
  FUN_ram_42068078(auStack_28);
  return iVar1;
}

