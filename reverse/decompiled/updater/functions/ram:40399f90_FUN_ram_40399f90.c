
bool FUN_ram_40399f90(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_40394d36();
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 != iVar2) {
    *param_2 = *param_1;
  }
  else {
    *param_1 = param_3;
  }
  FUN_ram_40394d50();
  return iVar1 == iVar2;
}

