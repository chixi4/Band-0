
void FUN_ram_42026b04(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_42024a98(param_1,1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_ram_42024c6c(param_1,(uint)*(ushort *)(param_2 + 6) << 6), iVar1 == 0)) &&
     (iVar1 = FUN_ram_42025604(param_1,param_1,param_2), iVar1 == 0)) {
    FUN_ram_42024964(param_1,*(undefined2 *)(param_2 + 6));
    return;
  }
  return;
}

