
int FUN_ram_42015cf0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_44;
  undefined1 auStack_40 [20];
  
  iVar1 = 0x103;
  if (((DAT_ram_3fcc4f98 != '\0') && (iVar1 = 0x102, param_1 != 0)) &&
     (iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,&uStack_44), iVar1 == 0)) {
    iVar2 = 0;
    do {
      iVar4 = param_1 + 0xd2;
      if ((iVar2 != 1) && (iVar4 = param_1 + 0x1a4, iVar2 != 2)) {
        iVar4 = param_1;
      }
      uVar3 = 0;
      do {
        iVar1 = FUN_ram_42015b02(iVar2,uVar3 & 0xff,auStack_40);
        if (iVar1 != 0) {
          iVar1 = 0x102;
          goto LAB_ram_42015d66;
        }
        iVar1 = FUN_ram_4204c148(uStack_44,auStack_40,uVar3 * 0x2a + iVar4,0x2a);
        if (iVar1 != 0) goto LAB_ram_42015d66;
        uVar3 = uVar3 + 1;
      } while (uVar3 != 5);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 3);
    iVar1 = FUN_ram_4204c148(uStack_44,0x3c0a8748,param_1 + 0x276,2);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4204bfd0(uStack_44,0x3c0a8740,1);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_4204c0c8(uStack_44);
      }
    }
LAB_ram_42015d66:
    FUN_ram_4204c3d0(uStack_44);
  }
  return iVar1;
}

