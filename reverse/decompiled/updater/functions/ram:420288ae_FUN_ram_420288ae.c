
undefined4 FUN_ram_420288ae(int param_1,byte *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  uVar6 = *(uint *)(param_1 + 0x150);
  uVar4 = *(uint *)(param_1 + 0x154);
  uVar3 = (param_3 + uVar6 < param_3) + uVar4;
  if ((uVar3 < uVar4) || ((uVar4 == uVar3 && (param_3 + uVar6 < uVar6)))) {
    uVar2 = 0xffffffec;
  }
  else {
    uVar2 = 0xffffffec;
    if (uVar3 >> 0x1d == 0) {
      uVar3 = uVar6 & 0xf;
      pbVar9 = param_2;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
        if (param_3 < 0x10 - uVar3) {
          uVar4 = param_3;
        }
        uVar8 = 0;
        iVar7 = param_1 + uVar3;
        while( true ) {
          pbVar9 = param_2 + uVar8;
          if (uVar4 == uVar8) break;
          uVar8 = uVar8 + 1;
          *(byte *)(iVar7 + 0x178) = *pbVar9 ^ *(byte *)(iVar7 + 0x178);
          iVar7 = iVar7 + 1;
        }
        if (uVar3 + uVar8 == 0x10) {
          FUN_ram_4202818a(param_1,param_1 + 0x178);
        }
        param_3 = param_3 - uVar8;
        uVar6 = *(int *)(param_1 + 0x150) + uVar8;
        uVar4 = (uint)(uVar6 < uVar8) + *(int *)(param_1 + 0x154);
      }
      *(uint *)(param_1 + 0x150) = uVar6 + param_3;
      *(uint *)(param_1 + 0x154) = uVar4 + (uVar6 + param_3 < param_3);
      pbVar10 = (byte *)(param_1 + 0x178);
      for (uVar3 = param_3; 0xf < uVar3; uVar3 = uVar3 - 0x10) {
        iVar7 = 0;
        pbVar5 = pbVar10;
        do {
          iVar1 = iVar7 + (param_3 - uVar3);
          iVar7 = iVar7 + 1;
          *pbVar5 = pbVar9[iVar1] ^ *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (iVar7 != 0x10);
        FUN_ram_4202818a(param_1,pbVar10,pbVar10);
      }
      if ((param_3 & 0xf) != 0) {
        iVar7 = param_1;
        do {
          iVar1 = iVar7 + 1;
          *(byte *)(iVar7 + 0x178) =
               pbVar9[iVar7 + ((param_3 & 0xfffffff0) - param_1)] ^ *(byte *)(iVar7 + 0x178);
          iVar7 = iVar1;
        } while (iVar1 != (param_3 & 0xf) + param_1);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

