
int FUN_ram_4206edba(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4206ed50();
  if (-1 < iVar1) {
    iVar2 = FUN_ram_4206ed9c(param_1,param_2,param_4);
    if (-1 < iVar2) {
      return iVar1 + param_3 + 1;
    }
  }
  return -0x6c;
}

