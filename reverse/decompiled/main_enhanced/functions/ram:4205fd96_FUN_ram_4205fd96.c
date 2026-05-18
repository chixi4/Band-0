
int FUN_ram_4205fd96(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_ram_403904a6(0x118);
  if (iVar1 != 0) {
    FUN_ram_42066ab0();
    iVar2 = FUN_ram_42066b02(iVar1,param_1,param_2 << 3);
    if (-1 < iVar2) {
      return iVar1;
    }
    FUN_ram_42066abe(iVar1);
    thunk_FUN_ram_40390634(iVar1);
  }
  return 0;
}

