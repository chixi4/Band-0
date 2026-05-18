
undefined1 FUN_ram_4201605e(void)

{
  undefined1 uVar1;
  int iVar2;
  char cStack_15;
  undefined4 auStack_14 [2];
  
  uVar1 = DAT_ram_3fcc4f97;
  if (DAT_ram_3fcc4f96 == '\0') {
    if ((DAT_ram_3fcc4f98 == '\0') ||
       (iVar2 = FUN_ram_4204beee(0x3c0a86f0,0,auStack_14), iVar2 != 0)) {
      uVar1 = 0;
    }
    else {
      cStack_15 = '\0';
      iVar2 = FUN_ram_4204c1dc(auStack_14[0],0x3c0a8760,&cStack_15);
      FUN_ram_4204c3d0(auStack_14[0]);
      DAT_ram_3fcc4f97 = iVar2 == 0 && cStack_15 == '\x01';
      DAT_ram_3fcc4f96 = '\x01';
      uVar1 = DAT_ram_3fcc4f97;
    }
  }
  return uVar1;
}

