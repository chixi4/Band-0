
void FUN_ram_420a890c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_ram_420724d6(iVar1,iVar1 + 0x68,param_2,param_3);
  if (iVar2 == 0) {
    FUN_ram_42070fb0(iVar1,iVar1 + 0x68);
    return;
  }
  return;
}

