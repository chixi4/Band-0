
int FUN_ram_420344de(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    if (param_3 <= iVar1) {
      return -1;
    }
    iVar2 = FUN_ram_4039c0e0(param_1,param_2,param_4);
    if (iVar2 == 0) break;
    param_2 = param_2 + param_4;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

