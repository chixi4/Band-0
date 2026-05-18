
void FUN_ram_4206713a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_ram_4202ff36(iVar1,iVar1 + 0x68,param_2,param_3);
  if (iVar2 == 0) {
    FUN_ram_4202df5a(iVar1,iVar1 + 0x68);
    return;
  }
  return;
}

