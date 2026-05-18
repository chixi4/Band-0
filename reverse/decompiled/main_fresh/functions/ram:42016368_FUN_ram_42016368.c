
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42016368(void)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = _DAT_ram_3fcc4f90;
  if (DAT_ram_3fcc4f8c == '\0') {
    if ((DAT_ram_3fcc4f98 == '\0') ||
       (iVar1 = FUN_ram_4204beee(0x3c0a86f0,0,&uStack_18), iVar1 != 0)) {
      auStack_14[0] = 0;
    }
    else {
      auStack_14[0] = 0;
      iVar1 = FUN_ram_4204c270(uStack_18,0x3c0a8784,auStack_14);
      FUN_ram_4204c3d0(uStack_18);
      if (iVar1 != 0) {
        auStack_14[0] = 0;
      }
      _DAT_ram_3fcc4f90 = auStack_14[0];
      DAT_ram_3fcc4f8c = '\x01';
    }
  }
  return auStack_14[0];
}

