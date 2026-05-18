
int FUN_ram_420161da(void)

{
  int iVar1;
  undefined4 auStack_14 [3];
  
  iVar1 = 0x103;
  if ((DAT_ram_3fcc4f98 != '\0') && (iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,auStack_14), iVar1 == 0))
  {
    iVar1 = FUN_ram_4204bf00(auStack_14[0],0x3c0a876c);
    if ((iVar1 == 0x1102) || (iVar1 == 0)) {
      iVar1 = FUN_ram_4204c0c8(auStack_14[0]);
    }
    FUN_ram_4204c3d0(auStack_14[0]);
    if (iVar1 == 0) {
      *(undefined1 *)(gp + -0x7b2) = 0xff;
      DAT_ram_3fcc4f94 = 1;
    }
  }
  return iVar1;
}

