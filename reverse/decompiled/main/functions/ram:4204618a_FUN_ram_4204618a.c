
void FUN_ram_4204618a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)&SUB_ram_400104a8)();
    FUN_ram_42046084(param_1,iVar1 + 1,param_2,param_3);
    return;
  }
  return;
}

