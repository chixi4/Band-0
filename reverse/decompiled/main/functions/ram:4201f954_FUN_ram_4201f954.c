
int FUN_ram_4201f954(int param_1,char *param_2,short *param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  short asStack_42 [7];
  
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (param_3 == (short *)0x0)) {
    return -1;
  }
  uVar12 = (uint)*(byte *)(param_3 + 9);
  if (uVar12 == 0) {
    uVar12 = 1;
  }
  iVar18 = *(int *)(param_3 + 6);
  uVar5 = (uint)*param_3;
  iVar17 = (int)param_3[1];
  iVar20 = uVar12 * 0x10;
  if ((iVar18 != 0) && (uVar16 = (uint)(ushort)param_3[2], uVar16 != 0)) {
    iVar6 = FUN_ram_4201f55a(param_2,uVar16 & -(uint)((char)param_3[8] != '\0'),uVar12);
    if (iVar18 == 1) {
      iVar6 = (int)(uVar16 - iVar6) / 2 + uVar5;
    }
    else {
      if (iVar18 != 2) goto LAB_ram_4201f9d8;
      iVar6 = (uVar16 + uVar5) - iVar6;
    }
    uVar5 = iVar6 * 0x10000 >> 0x10;
  }
LAB_ram_4201f9d8:
  iVar18 = 0;
LAB_ram_4201f9dc:
  do {
    while( true ) {
      if (*param_2 == '\0') {
        return iVar18;
      }
      iVar6 = FUN_ram_4201f4e6(param_2,asStack_42);
      sVar3 = asStack_42[0];
      if (iVar6 == 0) {
        return iVar18;
      }
      if (asStack_42[0] == 10) break;
      uVar16 = FUN_ram_4201f474(asStack_42[0]);
      iVar19 = uVar16 * uVar12;
      if (((char)param_3[8] != '\0') && (uVar8 = (uint)(ushort)param_3[2], uVar8 != 0)) {
        uVar10 = (uint)*param_3;
        if ((int)(uVar10 + uVar8) < (int)(uVar5 + iVar19)) {
          iVar13 = *(int *)(param_3 + 6);
          iVar17 = (int)(((uint)*(byte *)((int)param_3 + 0x11) + iVar20 + iVar17) * 0x10000) >> 0x10
          ;
          uVar5 = uVar10;
          if (iVar13 != 0) {
            iVar7 = FUN_ram_4201f55a(param_2,uVar8,uVar12);
            if (iVar13 == 1) {
              iVar7 = (int)(uVar8 - iVar7) / 2 + uVar10;
            }
            else {
              if (iVar13 != 2) goto LAB_ram_4201fb00;
              iVar7 = (uVar10 + uVar8) - iVar7;
            }
            uVar5 = iVar7 * 0x10000 >> 0x10;
          }
        }
      }
LAB_ram_4201fb00:
      if (((ushort)param_3[3] != 0) &&
         ((int)((int)param_3[1] + (uint)(ushort)param_3[3]) < iVar17 + iVar20)) {
        return iVar18;
      }
      iVar13 = FUN_ram_4201f498(sVar3);
      if (iVar13 != 0) {
        uVar10 = iVar17 + 2;
        bVar1 = *(byte *)(param_3 + 4);
        bVar2 = *(byte *)((int)param_3 + 9);
        uVar8 = 0;
        do {
          uVar9 = uVar5 & 0xffff;
          for (uVar4 = uVar8; ((uVar4 & 0xff) - uVar8 & 0xff) < uVar16; uVar4 = uVar4 + 1) {
            uVar14 = (uint)bVar1;
            if ((((int)(uint)*(byte *)((uVar4 >> 3) + iVar13) >> (~(uVar4 & 0xff) & 7) & 1U) != 0)
               || (uVar14 = (uint)bVar2, bVar2 != 0xff)) {
              uVar22 = 0;
              do {
                uVar21 = (uVar10 & 0xffff) + uVar22 & 0xffff;
                uVar11 = uVar9;
                do {
                  if ((uVar11 < 200) && (uVar21 < 200)) {
                    uVar15 = uVar21 * 200 + uVar11;
                    pbVar23 = (byte *)((uVar15 >> 2) + param_1);
                    uVar15 = (3 - (uVar15 & 3)) * 2;
                    *pbVar23 = ~(byte)(3 << (uVar15 & 0x1f)) & *pbVar23 |
                               (byte)((uVar14 & 3) << (uVar15 & 0x1f));
                  }
                  uVar11 = uVar11 + 1 & 0xffff;
                } while (uVar11 != (uVar9 + uVar12 & 0xffff));
                uVar22 = uVar22 + 1;
              } while ((uVar22 & 0xff) < uVar12);
            }
            uVar9 = uVar9 + uVar12 & 0xffff;
          }
          uVar10 = (uVar10 & 0xffff) + uVar12;
          uVar8 = uVar8 + 0x10;
        } while (uVar8 != 0x100);
        if (iVar19 != 0) {
          uVar5 = (int)(((uVar5 & 0xffff) + iVar19) * 0x10000) >> 0x10;
          iVar18 = iVar18 + 1;
        }
      }
      param_2 = param_2 + iVar6;
    }
    iVar19 = *(int *)(param_3 + 6);
    param_2 = param_2 + iVar6;
    iVar17 = (int)(((uint)*(byte *)((int)param_3 + 0x11) + iVar20 + iVar17) * 0x10000) >> 0x10;
    if ((iVar19 != 0) && (uVar16 = (uint)(ushort)param_3[2], uVar16 != 0)) {
      iVar6 = FUN_ram_4201f55a(param_2,uVar16 & -(uint)((char)param_3[8] != '\0'),uVar12);
      uVar5 = (uint)*param_3;
      if (iVar19 != 1) break;
      iVar6 = (int)(uVar16 - iVar6) / 2 + uVar5;
      goto LAB_ram_4201fa7e;
    }
    uVar5 = (uint)*param_3;
  } while( true );
  if (iVar19 == 2) {
    iVar6 = (uVar16 + uVar5) - iVar6;
LAB_ram_4201fa7e:
    uVar5 = iVar6 * 0x10000 >> 0x10;
  }
  goto LAB_ram_4201f9dc;
}

