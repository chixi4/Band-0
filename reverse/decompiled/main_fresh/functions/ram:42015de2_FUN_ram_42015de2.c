
int FUN_ram_42015de2(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cStack_29;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [16];
  
  iVar1 = 0x103;
  if (DAT_ram_3fcc4f98 != '\0') {
    if ((param_3 == 0) || (iVar1 = FUN_ram_42015b02(param_1,param_2,auStack_20), iVar1 != 0)) {
      iVar1 = 0x102;
    }
    else {
      iVar1 = FUN_ram_4204beee(0x3c0a86f0,0,&uStack_28);
      if (iVar1 == 0) {
        cStack_29 = '\0';
        iVar1 = FUN_ram_4204c1dc(uStack_28,0x3c0a8740,&cStack_29);
        if (iVar1 == 0) {
          iStack_24 = 0x2a;
          if (cStack_29 == '\x01') {
            iVar1 = FUN_ram_4204c2c8(uStack_28,auStack_20,param_3,&iStack_24);
            if ((iVar1 == 0) && (iStack_24 != 0x2a)) {
              iVar1 = 0x104;
            }
          }
          else {
            iVar1 = 0x1102;
          }
        }
        else {
          iStack_24 = 0x2a;
        }
        FUN_ram_4204c3d0(uStack_28);
      }
    }
  }
  return iVar1;
}

