
int FUN_ram_4201f5d4(int param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,
                    uint param_6,uint param_7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  
  iVar5 = FUN_ram_4201f498(param_4);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    uVar4 = param_7 & 0xff;
    if (param_7 == 0) {
      uVar4 = 1;
    }
    uVar6 = FUN_ram_4201f474(param_4);
    uVar8 = param_3 + 2;
    uVar2 = 0;
    do {
      uVar11 = uVar2;
      uVar3 = param_2;
      while( true ) {
        uVar15 = uVar3 & 0xffff;
        if (uVar6 <= ((uVar11 & 0xff) - uVar2 & 0xff)) break;
        uVar3 = uVar15 + uVar4;
        uVar13 = param_5;
        if ((((int)(uint)*(byte *)((uVar11 >> 3) + iVar5) >> (~(uVar11 & 0xff) & 7) & 1U) != 0) ||
           (uVar13 = param_6, param_6 != 0xff)) {
          uVar7 = 0;
          do {
            uVar10 = (uVar8 & 0xffff) + uVar7 & 0xffff;
            uVar12 = uVar15;
            do {
              if ((uVar12 < 200) && (uVar10 < 200)) {
                uVar9 = uVar12 + uVar10 * 200;
                pbVar14 = (byte *)((uVar9 >> 3) + param_1);
                bVar1 = (byte)(1 << (~uVar9 & 7));
                if (uVar13 < 2) {
                  *pbVar14 = *pbVar14 | bVar1;
                }
                else {
                  *pbVar14 = *pbVar14 & ~bVar1;
                }
              }
              uVar12 = uVar12 + 1 & 0xffff;
            } while (uVar12 != (uVar3 & 0xffff));
            uVar7 = uVar7 + 1;
          } while ((uVar7 & 0xff) < uVar4);
        }
        uVar11 = uVar11 + 1;
      }
      uVar8 = (uVar8 & 0xffff) + uVar4;
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != 0x100);
    iVar5 = uVar6 * uVar4;
  }
  return iVar5;
}

