
int FUN_ram_420597d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    FUN_ram_403958fa(*param_1,0xffffffff);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_ram_403958fa(*param_1,(param_2 + 9U) / 10 + 1);
    iVar1 = -(uint)(iVar1 == 0);
  }
  return iVar1;
}

