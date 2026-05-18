
short FUN_ram_420162da(void)

{
  short sVar1;
  int iVar2;
  short sStack_16;
  undefined4 uStack_14;
  
  if (DAT_ram_3fcc4f95 == '\0') {
    if ((DAT_ram_3fcc4f98 == '\0') ||
       (iVar2 = FUN_ram_4204beee(0x3c0a86f0,0,&uStack_14), iVar2 != 0)) {
      sVar1 = 0xb4;
    }
    else {
      sStack_16 = 0xb4;
      iVar2 = FUN_ram_4204c226(uStack_14,0x3c0a8778,&sStack_16);
      FUN_ram_4204c3d0(uStack_14);
      sVar1 = 0xb4;
      if ((iVar2 == 0) && (sVar1 = sStack_16, 0x23a < (ushort)(sStack_16 - 0x1eU))) {
        sVar1 = 0xb4;
      }
      *(short *)(gp + -0x7b0) = sVar1;
      DAT_ram_3fcc4f95 = '\x01';
    }
  }
  else {
    sVar1 = *(short *)(gp + -0x7b0);
  }
  return sVar1;
}

