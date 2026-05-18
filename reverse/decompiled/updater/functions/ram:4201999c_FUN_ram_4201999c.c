
void FUN_ram_4201999c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = thunk_FUN_ram_40391b46();
    if (iVar1 != 0) {
      (*(code *)&LAB_ram_4039de9c)(0,param_1,param_2,param_3);
      return;
    }
  }
  FUN_ram_4039dd78(0,param_2,param_1,param_3);
  return;
}

