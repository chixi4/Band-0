
undefined4 FUN_ram_42034788(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  uVar1 = 0x11;
  if (0 < param_2) {
    iVar2 = 3;
    if (param_1 == 3) {
      iVar2 = 6;
    }
    uVar1 = 0x11;
    if (param_2 <= iVar2) {
      iVar2 = FUN_ram_4204beee("key point.",1,&uStack_24);
      if (iVar2 == 0) {
        FUN_ram_42034524(param_1,param_2,auStack_20);
        iVar2 = FUN_ram_4204bf00(uStack_24,auStack_20);
        if ((iVar2 == 0) && (iVar2 = FUN_ram_4204c0c8(uStack_24), iVar2 == 0)) {
          FUN_ram_4204c3d0(uStack_24);
          return 0;
        }
        FUN_ram_4204c3d0(uStack_24);
      }
      uVar1 = 0x1c;
    }
  }
  return uVar1;
}

