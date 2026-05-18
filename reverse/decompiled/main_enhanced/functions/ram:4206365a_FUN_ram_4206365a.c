
int FUN_ram_4206365a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  FUN_ram_42063608(iVar1);
  iVar1 = FUN_ram_42064b5e(iVar1 + 0x3c,param_2,param_3);
  return -(uint)(iVar1 == 0);
}

