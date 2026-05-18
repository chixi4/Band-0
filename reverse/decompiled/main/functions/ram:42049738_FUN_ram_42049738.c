
void FUN_ram_42049738(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = thunk_FUN_ram_403926a6();
    if (iVar1 != 0) {
      (*(code *)&LAB_ram_403a02b2)(0,param_1,param_2,param_3);
      return;
    }
  }
  FUN_ram_403a018e(0,param_2,param_1,param_3);
  return;
}

