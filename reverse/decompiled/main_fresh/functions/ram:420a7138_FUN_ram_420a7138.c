
int FUN_ram_420a7138(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_420a6b9c();
  if (iVar1 == -0x7280) {
    iVar1 = 0;
  }
  else if (-1 < iVar1) {
    iVar2 = FUN_ram_420a4f26(param_1,param_2,param_3);
    if ((*(int *)(param_1 + 0x78) != 0) || (iVar1 = FUN_ram_420a6c9a(param_1), iVar1 == 0)) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

