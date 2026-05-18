
int FUN_ram_42066798(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  
  if (param_3 == 0) {
    return -2;
  }
  iVar1 = FUN_ram_42051410(param_1,param_2,param_4,param_5);
  if (iVar1 < 0) {
    iVar1 = FUN_ram_42065f9a();
    return iVar1;
  }
  return iVar1;
}

