
int FUN_ram_4205409c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_42053b52(param_1,*(undefined2 *)(param_3 + 8),param_2);
  if ((iVar1 != 0) && (iVar2 = FUN_ram_42053f12(iVar1,param_3), iVar2 != 0)) {
    FUN_ram_4039bf1e();
  }
  return iVar1;
}

