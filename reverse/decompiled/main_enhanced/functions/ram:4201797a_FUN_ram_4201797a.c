
int FUN_ram_4201797a(void)

{
  int iVar1;
  
  FUN_ram_42048d56();
  iVar1 = FUN_ram_420491d0(0,0x11,0x3c0a8b30);
  if (iVar1 != 0) {
    iVar1 = FUN_ram_42048e18();
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_ram_40398498(200);
    FUN_ram_42010478();
  }
  return 0x105;
}

