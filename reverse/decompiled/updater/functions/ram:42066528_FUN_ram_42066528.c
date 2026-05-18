
int FUN_ram_42066528(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_42066304();
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    FUN_ram_420249f4(iVar1,param_1);
    iVar2 = FUN_ram_420664f0(param_1,iVar1,param_2,param_3);
    FUN_ram_4206636c(iVar1,0);
    iVar1 = -(uint)(iVar2 != 0);
  }
  return iVar1;
}

