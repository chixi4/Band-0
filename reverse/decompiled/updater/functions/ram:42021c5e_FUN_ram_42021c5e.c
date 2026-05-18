
int FUN_ram_42021c5e(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_ram_4039047a(0x118);
  if (iVar1 != 0) {
    FUN_ram_420231ac();
    iVar2 = FUN_ram_42023438(iVar1,param_1,param_2 << 3);
    if (-1 < iVar2) {
      return iVar1;
    }
    FUN_ram_420231ba(iVar1);
    thunk_FUN_ram_40390608(iVar1);
  }
  return 0;
}

