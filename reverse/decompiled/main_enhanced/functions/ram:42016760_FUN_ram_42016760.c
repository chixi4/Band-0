
bool FUN_ram_42016760(void)

{
  bool bVar1;
  int iVar2;
  char cStack_15;
  undefined4 auStack_14 [4];
  
  if (DAT_ram_3fcc4f98 == '\0') {
    return false;
  }
  iVar2 = FUN_ram_4204beee(0x3c0a86f0,0,auStack_14);
  if (iVar2 == 0) {
    cStack_15 = '\0';
    FUN_ram_4204c1dc(auStack_14[0],0x3c0a87bc,&cStack_15);
    FUN_ram_4204c3d0(auStack_14[0]);
    bVar1 = cStack_15 == '\x01';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

