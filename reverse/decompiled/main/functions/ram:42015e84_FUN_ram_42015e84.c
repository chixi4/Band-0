
int FUN_ram_42015e84(int param_1)

{
  int iVar1;
  char cStack_19;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = 0x103;
  if (((DAT_ram_3fcc4f98 != '\0') && (iVar1 = 0x102, param_1 != 0)) &&
     (iVar1 = FUN_ram_4204beee(0x3c0a86f0,0,&uStack_18), iVar1 == 0)) {
    cStack_19 = '\0';
    iVar1 = FUN_ram_4204c1dc(uStack_18,0x3c0a8740,&cStack_19);
    if (iVar1 == 0) {
      iStack_14 = 2;
      if (cStack_19 == '\x01') {
        iVar1 = FUN_ram_4204c2c8(uStack_18,0x3c0a8748,param_1,&iStack_14);
        if ((iVar1 == 0) && (iStack_14 != 2)) {
          iVar1 = 0x104;
        }
      }
      else {
        iVar1 = 0x1102;
      }
    }
    else {
      iStack_14 = 2;
    }
    FUN_ram_4204c3d0(uStack_18);
  }
  return iVar1;
}

