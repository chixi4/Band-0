
int FUN_ram_42066328(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40399d1a(1,8);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_42024c0c(iVar1,param_1,param_2);
    if (iVar2 == 0) {
      return iVar1;
    }
    thunk_FUN_ram_40390608(iVar1);
  }
  return 0;
}

