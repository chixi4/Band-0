
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420173d2(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x103;
  if (DAT_ram_3fcc4fae != '\0') {
    if ((_DAT_ram_3fcc4fb4 == 2) && (*(short *)(gp + -0x7a4) != -1)) {
      FUN_ram_4202ef4e(*(short *)(gp + -0x7a4),0x13);
      iVar2 = 0x14;
      do {
        if (_DAT_ram_3fcc4fb4 != 2) break;
        iVar2 = iVar2 + -1;
        FUN_ram_40398498(1);
      } while (iVar2 != 0);
    }
    iVar2 = FUN_ram_4202d0a2();
    if (iVar2 == 0) {
      uVar1 = 0;
      if ((DAT_ram_3fcc4fad != '\0') && (_DAT_ram_3fcc4fb4 != 1)) {
        FUN_ram_4202ee74();
        FUN_ram_42016cec();
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

