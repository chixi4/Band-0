
undefined4 FUN_ram_4201f2b0(uint param_1,int param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = FUN_ram_4201ee6a();
  if (iVar4 == 0) {
    uVar5 = 0x103;
  }
  else {
    uVar5 = 0x103;
    if (param_5 != 0) {
      for (uVar8 = 0; uVar8 < param_4; uVar8 = uVar8 + 1 & 0xffff) {
        uVar6 = uVar8 + param_2 & 0xffff;
        if (uVar6 < 200) {
          uVar3 = uVar8 * param_3;
          for (uVar7 = param_1 & 0xffff; ((param_1 & 0xffff) + param_3 & 0xffff) != uVar7;
              uVar7 = uVar7 + 1 & 0xffff) {
            if (uVar7 < 200) {
              pbVar2 = (byte *)(((int)(uVar7 + uVar6 * 200) >> 3) + iVar4);
              bVar1 = (byte)(1 << (7 - (uVar7 & 7) & 0x1f));
              if (((int)(uint)*(byte *)((uVar3 >> 3) + param_5) >> (~uVar3 & 7) & 1U) == 0) {
                *pbVar2 = *pbVar2 & ~bVar1;
              }
              else {
                *pbVar2 = *pbVar2 | bVar1;
              }
            }
            uVar3 = uVar3 + 1;
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}

