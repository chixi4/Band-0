
byte FUN_ram_42016b18(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_42015cbc();
  bVar1 = 0;
  if (iVar2 != 0) {
    bVar1 = FUN_ram_42015cd6();
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}

