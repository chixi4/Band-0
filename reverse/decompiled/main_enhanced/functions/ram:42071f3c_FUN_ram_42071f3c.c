
int FUN_ram_42071f3c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_420687f0(param_2,param_3,param_4);
  iVar2 = iVar1;
  while (((iVar2 == 0 && (iVar2 = iVar1, *(short *)(param_2 + 4) < 0)) &&
         (iVar3 = FUN_ram_420685b4(param_2,0), iVar3 != 0))) {
    iVar2 = FUN_ram_420687ea(param_2,param_2,param_1 + 4);
  }
  return iVar2;
}

