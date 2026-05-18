
void thunk_FUN_ram_42020a10(byte *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_ram_4202088c();
  bVar1 = *param_1;
  DAT_ram_3fcc5145 = 1;
  FUN_ram_4201fe48(0x50);
  uVar3 = 0x87;
  if (bVar1 >> 6 < 2) {
    uVar3 = 0x47;
  }
  FUN_ram_4201fe50(uVar3);
  FUN_ram_4201fe48(0x10);
  iVar2 = 5000;
  uVar6 = 0;
  do {
    uVar4 = 0;
    uVar5 = 7;
    do {
      if (39999 < uVar6) break;
      if ((&DAT_ram_3c0f1bdc)[(int)(uint)param_1[uVar6 >> 2] >> ((~uVar6 & 3) << 1) & 3] != '\0') {
        uVar4 = uVar4 | 1 << (uVar5 & 0x1f) & 0xffU;
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 + 1;
    } while (uVar5 != 0xffffffff);
    iVar2 = iVar2 + -1;
    FUN_ram_4201fe50(uVar4);
  } while (iVar2 != 0);
  FUN_ram_4201fe48(0x13);
  iVar2 = 5000;
  uVar6 = 0;
  do {
    uVar4 = 0;
    uVar5 = 7;
    do {
      if (39999 < uVar6) break;
      if ((&DAT_ram_3c0f1bd8)[(int)(uint)param_1[uVar6 >> 2] >> ((~uVar6 & 3) << 1) & 3] != '\0') {
        uVar4 = uVar4 | 1 << (uVar5 & 0x1f) & 0xffU;
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 + 1;
    } while (uVar5 != 0xffffffff);
    iVar2 = iVar2 + -1;
    FUN_ram_4201fe50(uVar4);
    if (iVar2 == 0) {
      FUN_ram_4202034e();
      return;
    }
  } while( true );
}

