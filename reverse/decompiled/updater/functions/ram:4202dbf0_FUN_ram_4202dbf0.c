
int FUN_ram_4202dbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    int param_5,int param_6)

{
  int iVar1;
  undefined1 auStack_28 [8];
  
  FUN_ram_4202476a(auStack_28);
  if ((((param_4 == 0) ||
       ((iVar1 = FUN_ram_4202505a(auStack_28,param_1,1), iVar1 == 0 &&
        (iVar1 = FUN_ram_42025604(param_4,param_3,auStack_28), iVar1 == 0)))) &&
      ((param_5 == 0 ||
       ((iVar1 = FUN_ram_4202505a(auStack_28,param_2,1), iVar1 == 0 &&
        (iVar1 = FUN_ram_42025604(param_5,param_3,auStack_28), iVar1 == 0)))))) &&
     (iVar1 = 0, param_6 != 0)) {
    iVar1 = FUN_ram_42025e6e(param_6,param_2,param_1);
  }
  FUN_ram_42024774(auStack_28);
  return iVar1;
}

