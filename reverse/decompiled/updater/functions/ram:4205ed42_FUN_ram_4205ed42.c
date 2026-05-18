
int FUN_ram_4205ed42(void)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4205e3f6();
  iVar2 = FUN_ram_4202fa9a();
  if (((iVar2 == 0) && (iVar2 = FUN_ram_4202fa5c(unaff_s1 + 0x68,iVar1 + 0x68), iVar2 == 0)) &&
     (iVar2 = FUN_ram_4202f07c(), iVar2 == 0)) {
    iVar2 = 1;
  }
  FUN_ram_4202f086();
  thunk_FUN_ram_40390608();
  return iVar2;
}

