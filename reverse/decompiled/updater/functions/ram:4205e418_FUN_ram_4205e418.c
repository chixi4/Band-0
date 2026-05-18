
int FUN_ram_4205e418(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0x13) && (iVar1 = FUN_ram_40399d1a(1,0x60), iVar1 != 0)) {
    FUN_ram_4202f93a();
    iVar2 = FUN_ram_42030f1a(iVar1,3);
    if (iVar2 == 0) {
      return iVar1;
    }
    FUN_ram_4202f9c2(iVar1);
    thunk_FUN_ram_40390608(iVar1);
  }
  return 0;
}

