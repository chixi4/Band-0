
int FUN_ram_4205b870(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  FUN_ram_4205b81e(iVar1);
  iVar1 = FUN_ram_4205d164(iVar1 + 0x3c,param_2,param_3);
  return -(uint)(iVar1 == 0);
}

