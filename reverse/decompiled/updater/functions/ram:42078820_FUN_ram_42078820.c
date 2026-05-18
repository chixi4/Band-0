
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42078820(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar1 = _DAT_ram_3fcdfdec;
  if ((*_DAT_ram_3fcdfdec | 7) == 0xffff) {
    uVar2 = 0;
  }
  else {
    uVar5 = _DAT_ram_3fcdfdec[param_1 * 2 + 0xcd];
    uVar2 = 0;
    if (uVar5 != 0) {
      puVar7 = _DAT_ram_3fcdfdec + param_1 * 2 + 0xcd;
      _DAT_ram_3fcdfdec[param_1 * 2 + 0xcd] = 0;
      puVar1[param_1 * 2 + 0xce] = (uint)puVar7;
      do {
        puVar1 = _DAT_ram_3fcdfdec;
        puVar7 = *(uint **)(uVar5 + 0x24);
        uVar6 = *(uint *)(uVar5 + 0x20);
        pbVar4 = *(byte **)(*(int *)(uVar5 + 4) + 4);
        if ((*puVar7 & 0x40000) != 0) {
          pbVar4 = pbVar4 + 8;
        }
        if ((*pbVar4 & 0xc) == 0) {
          uVar3 = puVar7[4] >> 0x14 & 0xf;
LAB_ram_420788b8:
          puVar7[4] = puVar7[4] & 0xff0fffff | (uVar3 & 0xf) << 0x14;
          *(undefined4 *)(uVar5 + 0x20) = 0;
          *(uint *)puVar1[(uVar3 & 0xf) * 0xc + 9] = uVar5;
          uVar3 = puVar7[1];
          puVar1[(puVar7[4] >> 0x14 & 0xf) * 0xc + 9] = uVar5 + 0x20;
          (*(code *)&SUB_ram_40011c5c)(uVar3 >> 4 & 0xf,0);
        }
        else {
          uVar3 = (*(code *)&SUB_ram_40011c34)
                            (puVar7[4] >> 0x13 & 1,*(undefined1 *)(*(int *)(uVar5 + 0x1c) + 0x80),
                             puVar7[1] & 0xf,puVar7[1] >> 4 & 0xf);
          if (uVar3 != 0x10) goto LAB_ram_420788b8;
          puVar7 = (uint *)puVar1[param_1 * 2 + 0xce];
          *(undefined4 *)(uVar5 + 0x20) = 0;
          *puVar7 = uVar5;
          puVar1[param_1 * 2 + 0xce] = uVar5 + 0x20;
        }
        uVar5 = uVar6;
      } while (uVar6 != 0);
      uVar2 = 1;
    }
  }
  return uVar2;
}

