
int FUN_ram_42019f66(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_ram_4039047a(0x74);
  if (iVar1 != 0) {
    FUN_ram_4202aba8();
    iVar2 = FUN_ram_4202abe0(iVar1,0);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  return 0;
}

