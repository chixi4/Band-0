
void FUN_ram_4202d61e(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202d4ec();
  *param_3 = iVar1;
  if ((iVar1 != 0) && (iVar1 = FUN_ram_4202d5d8(param_1,param_2,iVar1), iVar1 == 0)) {
    *param_3 = 0;
  }
  return;
}

