
void FUN_ram_4206b2b2(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar2 = param_2 - param_3;
  pbVar6 = (byte *)(param_1 + (param_2 - 1));
  for (uVar3 = 0; uVar3 != param_2; uVar3 = uVar3 + 1) {
    uVar4 = (int)(uVar3 ^ uVar2) >> 0x1f;
    uVar4 = (int)(-(-uVar4 >> 1) | uVar4) >> 0x1f;
    uVar5 = uVar3 - uVar2 & ~uVar4 | uVar2 & uVar4;
    uVar4 = 0;
    while (bVar1 = (char)((byte)((int)uVar5 >> 0x1f) |
                         (byte)(-((uint)-((int)uVar5 >> 0x1f) >> 1) >> 0x18)) >> 7,
          uVar4 < param_2 - 1) {
      pbVar7 = (byte *)(uVar4 + param_1);
      uVar4 = uVar4 + 1;
      *pbVar7 = ~bVar1 & *(byte *)(uVar4 + param_1) | *pbVar7 & bVar1;
    }
    *pbVar6 = bVar1 & *pbVar6;
  }
  return;
}

