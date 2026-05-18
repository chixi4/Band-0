
undefined4 FUN_ram_420591b2(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  
  pbVar14 = *(byte **)(param_1 + 4);
  uVar12 = (int)(*(ushort *)(param_2 + 0x30) - 0x14) / 8;
  if ((*pbVar14 & 0xf) == 5) {
    uVar5 = 0xfffffffa;
    if (0x13 < *(ushort *)(param_1 + 10)) {
      uVar6 = FUN_ram_4205073e(*(undefined2 *)(pbVar14 + 6));
      uVar13 = uVar6 & 0x1fff;
      sVar3 = 0x14;
      for (uVar1 = *(ushort *)(param_1 + 8) - 0x14; uVar1 = uVar1 & 0xffff, uVar1 != 0;
          uVar1 = uVar1 - uVar11) {
        uVar11 = (uVar12 & 0x1fff) << 3;
        if (uVar1 < (uVar12 & 0x1fff) << 3) {
          uVar11 = uVar1;
        }
        iVar7 = FUN_ram_42051d86(0x22,uVar11,0x280);
        if (iVar7 == 0) {
          return 0xffffffff;
        }
        sVar2 = FUN_ram_420520b2(param_1,*(undefined4 *)(iVar7 + 4),uVar11,sVar3);
        sVar3 = sVar2 + sVar3;
        iVar8 = FUN_ram_42051cac(iVar7,0x14);
        if (iVar8 != 0) {
          FUN_ram_42051d02(iVar7);
          return 0xffffffff;
        }
        FUN_ram_40399daa(*(undefined4 *)(iVar7 + 4),pbVar14,0x14);
        iVar8 = *(int *)(iVar7 + 4);
        uVar9 = uVar13 & 0x1fff;
        if (((int)(*(ushort *)(param_2 + 0x30) - 0x13) <= (int)uVar1) || ((uVar6 & 0x2000) != 0)) {
          uVar9 = uVar9 | 0x2000;
        }
        uVar4 = FUN_ram_4205073e(uVar9);
        *(char *)(iVar8 + 6) = (char)uVar4;
        *(char *)(iVar8 + 7) = (char)((ushort)uVar4 >> 8);
        uVar4 = FUN_ram_4205073e(uVar11 + 0x14 & 0xffff);
        *(char *)(iVar8 + 2) = (char)uVar4;
        *(char *)(iVar8 + 3) = (char)((ushort)uVar4 >> 8);
        *(undefined1 *)(iVar8 + 10) = 0;
        *(undefined1 *)(iVar8 + 0xb) = 0;
        uVar4 = FUN_ram_4205b3ae(iVar8,0x14);
        pcVar10 = *(code **)(param_2 + 0x14);
        *(char *)(iVar8 + 10) = (char)uVar4;
        *(char *)(iVar8 + 0xb) = (char)((ushort)uVar4 >> 8);
        (*pcVar10)(param_2,iVar7,param_3);
        FUN_ram_42051d02(iVar7);
        uVar13 = uVar13 + (uVar12 & 0xffff) & 0xffff;
      }
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xfffffffa;
  }
  return uVar5;
}

