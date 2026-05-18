
int FUN_ram_420168d4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_34;
  undefined1 auStack_30 [28];
  
  iVar2 = 0x103;
  if (DAT_ram_3fcc4f98 != '\0') {
    iVar2 = FUN_ram_4204beee(0x3c0a86f0,1,&uStack_34);
    if (iVar2 == 0x1102) {
      iVar2 = 0;
    }
    else if (iVar2 == 0) {
      FUN_ram_4204bf00(uStack_34,0x3c0a8728);
      FUN_ram_4204bf00(uStack_34,0x3c0a8734);
      FUN_ram_4204bf00(uStack_34,0x3c0a8740);
      FUN_ram_4204bf00(uStack_34,0x3c0a8748);
      iVar2 = 0;
      do {
        cVar1 = '\0';
        do {
          iVar3 = FUN_ram_42015b02(iVar2,cVar1,auStack_30);
          if (iVar3 == 0) {
            FUN_ram_4204bf00(uStack_34,auStack_30);
          }
          cVar1 = cVar1 + '\x01';
        } while (cVar1 != '\x05');
        iVar2 = iVar2 + 1;
      } while (iVar2 != 3);
      iVar2 = FUN_ram_4204c0c8(uStack_34);
      FUN_ram_4204c3d0(uStack_34);
    }
  }
  return iVar2;
}

