
int FUN_ram_42061da8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_42061d8a();
  if (iVar1 == 0xfac00) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0x80;
    if ((((iVar1 != 0xfac01) && (iVar2 = 2, iVar1 != 0xfac02)) && (iVar2 = 8, iVar1 != 0xfac04)) &&
       (iVar2 = 0x100, iVar1 != 0xfac05)) {
      iVar2 = (uint)(iVar1 == 0xfac06) << 5;
    }
  }
  return iVar2;
}

