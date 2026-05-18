
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42015328(void)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  DAT_ram_3fcc4f65 = 1;
  DAT_ram_3fcc4f64 = '\0';
  if (_DAT_ram_3fcc4f48 != 0) {
    FUN_ram_40391b3c();
  }
  if (_DAT_ram_3fcc4f58 == 1) {
    if (_DAT_ram_3fcc4f4c != 0) {
      FUN_ram_42014ef8();
    }
    iVar5 = _DAT_ram_3fcc4f54;
    uVar2 = _DAT_ram_3fcc4f50;
    if ((_DAT_ram_3fcc4f54 != 0) && (_DAT_ram_3fcc4f50 != 0)) {
      sVar1 = *(short *)(gp + -0x7b4);
      uVar4 = 0;
      do {
        while( true ) {
          if (DAT_ram_3fcc4f64 != '\0') goto LAB_ram_420153a0;
          iVar6 = uVar4 * 10;
          uVar4 = uVar4 + 1;
          FUN_ram_4201516a(iVar6 + iVar5);
          if ((DAT_ram_3fcc4f64 != '\0') || (uVar2 <= uVar4)) break;
          if (sVar1 != 0) {
            FUN_ram_42014eea(sVar1);
            FUN_ram_42014ef8();
          }
        }
      } while (uVar2 != uVar4);
LAB_ram_420153a0:
      FUN_ram_42014ff0();
    }
  }
  else {
    FUN_ram_4201516a(&DAT_ram_3fcb9600);
  }
  if (_DAT_ram_3fcc4f48 != 0) {
    FUN_ram_40391b7a();
  }
  iVar5 = FUN_ram_403975e0(_DAT_ram_3fcc4f5c,0xffffffff);
  uVar3 = _DAT_ram_3fcc4f5c;
  if (iVar5 == 1) {
    _DAT_ram_3fcc4f60 = 0;
    _DAT_ram_3fcc4f54 = 0;
    _DAT_ram_3fcc4f50 = 0;
    _DAT_ram_3fcc4f4c = 0;
    DAT_ram_3fcc4f65 = 0;
    *(undefined2 *)(gp + -0x7b4) = 0x18;
    FUN_ram_40397156(uVar3,0,0,0);
  }
  FUN_ram_40397f1c(0);
  return;
}

