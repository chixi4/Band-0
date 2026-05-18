
void FUN_ram_4206a17e(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_42068310(param_1,1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_ram_42068436(param_1,(uint)*(ushort *)(param_2 + 6) << 6), iVar1 == 0)) &&
     (iVar1 = FUN_ram_42068da0(param_1,param_1,param_2), iVar1 == 0)) {
    FUN_ram_420681dc(param_1,*(undefined2 *)(param_2 + 6));
    return;
  }
  return;
}

