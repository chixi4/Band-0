
int FUN_ram_420a70fc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_420a6a58(param_1,0);
  if (iVar1 == 0) {
    iVar2 = FUN_ram_420a50ba(param_1,param_2,param_3);
    if ((*(int *)(param_1 + 0xb4) != 0) || (iVar1 = FUN_ram_420a6afe(param_1), iVar1 == 0)) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

