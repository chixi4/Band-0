
int FUN_ram_42049c3a(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_ram_403904a6(0x74);
  if (iVar1 != 0) {
    FUN_ram_4206dc64();
    iVar2 = FUN_ram_4206dc9c(iVar1,0);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  return 0;
}

