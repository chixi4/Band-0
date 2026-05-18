
int FUN_ram_4202b370(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar2 = FUN_ram_4202b0b4();
  if (iVar2 == 0) {
    bVar1 = *param_1;
    pbVar3 = param_1 + 4;
    for (uVar5 = (uint)bVar1; (int)(bVar1 - uVar5) < (int)uVar5; uVar5 = uVar5 - 1) {
      pbVar6 = param_1 + uVar5 * 0x10;
      iVar8 = 4;
      pbVar4 = pbVar3;
      do {
        uVar7 = *(undefined4 *)pbVar4;
        iVar8 = iVar8 + -1;
        *(undefined4 *)pbVar4 = *(undefined4 *)(pbVar6 + 4);
        *(undefined4 *)(pbVar6 + 4) = uVar7;
        pbVar4 = pbVar4 + 4;
        pbVar6 = pbVar6 + 4;
      } while (iVar8 != 0);
      pbVar3 = pbVar3 + 0x10;
    }
    pbVar3 = param_1 + 0x14;
    for (iVar8 = 1; iVar8 < (int)(uint)*param_1; iVar8 = iVar8 + 1) {
      FUN_ram_4202ad40(pbVar3,pbVar3 + 4,pbVar3 + 8,pbVar3 + 0xc);
      pbVar3 = pbVar3 + 0x10;
    }
  }
  return iVar2;
}

