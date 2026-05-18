
byte FUN_ram_42016158(void)

{
  byte bVar1;
  int iVar2;
  byte bStack_15;
  undefined4 auStack_14 [2];
  
  if (DAT_ram_3fcc4f94 == '\0') {
    if ((DAT_ram_3fcc4f98 == '\0') ||
       (iVar2 = FUN_ram_4204beee(0x3c0a86f0,0,auStack_14), iVar2 != 0)) {
      bVar1 = 0xff;
    }
    else {
      bStack_15 = 0xff;
      iVar2 = FUN_ram_4204c1dc(auStack_14[0],0x3c0a876c,&bStack_15);
      FUN_ram_4204c3d0(auStack_14[0]);
      bVar1 = 0xff;
      if ((iVar2 == 0) && (bVar1 = bStack_15, 0xf < bStack_15)) {
        bVar1 = 0xff;
      }
      *(byte *)(gp + -0x7b2) = bVar1;
      DAT_ram_3fcc4f94 = '\x01';
    }
  }
  else {
    bVar1 = *(byte *)(gp + -0x7b2);
  }
  return bVar1;
}

