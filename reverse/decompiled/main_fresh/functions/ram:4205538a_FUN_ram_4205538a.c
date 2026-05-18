
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205538a(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  short sVar8;
  uint uVar9;
  uint extraout_a5;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  code *pcVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  
  puVar13 = &DAT_ram_3fcc5000;
  _DAT_ram_3fcc52fc = _DAT_ram_3fcc52fc + 1;
  DAT_ram_3fcc52e8 = DAT_ram_3fcc52e8 + '\x01';
  puVar14 = &DAT_ram_3fcc5000;
LAB_ram_420553ca:
  do {
    puVar17 = *(undefined1 **)(puVar14 + 0x2f0);
    puVar12 = &DAT_ram_3fcc5000;
    puVar6 = (undefined1 *)0x0;
LAB_ram_420553d8:
    do {
      if (puVar17 == (undefined1 *)0x0) {
        puVar6 = &DAT_ram_3fcc5000;
        puVar12 = (undefined1 *)0xa;
        puVar13 = (undefined1 *)0xf0;
        puVar18 = _DAT_ram_3fcc52ec;
        while( true ) {
          puVar7 = puVar18;
          if (puVar7 == (undefined1 *)0x0) {
            return;
          }
          if (*(int *)(puVar7 + 0x14) != 10) break;
          if ((uint)(_DAT_ram_3fcc52fc - *(int *)(puVar7 + 0x24)) < 0xf1) {
            puVar18 = *(undefined1 **)(puVar7 + 0xc);
            puVar17 = puVar7;
          }
          else {
            FUN_ram_42054ba6();
            if (puVar17 == (undefined1 *)0x0) {
              if (puVar7 != _DAT_ram_3fcc52ec) break;
              _DAT_ram_3fcc52ec = *(undefined1 **)(puVar7 + 0xc);
            }
            else {
              if (puVar7 == _DAT_ram_3fcc52ec) break;
              *(undefined4 *)(puVar17 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
            }
            puVar14 = *(undefined1 **)(puVar7 + 0xc);
            FUN_ram_42054506();
            puVar18 = puVar14;
          }
        }
      }
      else {
        uVar9 = *(uint *)(puVar17 + 0x14);
        puVar18 = puVar17;
        if (1 < uVar9) goto LAB_ram_4205541e;
      }
LAB_ram_42055416:
      do {
        do {
          FUN_ram_4039bf1e();
          uVar9 = extraout_a5;
          puVar18 = puVar17;
LAB_ram_4205541e:
          puVar17 = puVar18;
        } while (uVar9 == 10);
        if (puVar18[0x22] == puVar13[0x2e8]) {
          puVar17 = *(undefined1 **)(puVar18 + 0xc);
          puVar6 = puVar18;
          goto LAB_ram_420553d8;
        }
        puVar18[0x22] = puVar13[0x2e8];
        iVar15 = 1;
        if ((byte)puVar18[0x46] < 0xc) {
          if ((byte)puVar18[0xa5] == 0) {
            uVar4 = *(ushort *)(puVar18 + 0x34);
            iVar15 = (int)(short)uVar4;
            if (uVar4 < 0x7fff) {
              iVar10 = (uVar4 + 1) * 0x10000;
              iVar15 = iVar10 >> 0x10;
              *(short *)(puVar18 + 0x34) = (short)((uint)iVar10 >> 0x10);
            }
            if ((*(short *)(puVar18 + 0x44) <= iVar15) &&
               ((iVar15 = FUN_ram_42057b6a(puVar18), iVar15 == 0 ||
                ((*(int *)(puVar18 + 0x74) == 0 && (*(int *)(puVar18 + 0x70) != 0)))))) {
              if (1 < *(int *)(puVar18 + 0x14) - 2U) {
                uVar9 = (uint)(byte)puVar18[0x46];
                if (0xc < uVar9) {
                  uVar9 = 0xc;
                }
                iVar15 = ((int)*(short *)(puVar18 + 0x40) >> 3) + (int)*(short *)(puVar18 + 0x42) <<
                         ((byte)(&DAT_ram_3c0f7560)[uVar9] & 0x1f);
                if (0x7fff < iVar15) {
                  iVar15 = 0x7fff;
                }
                *(short *)(puVar18 + 0x44) = (short)iVar15;
              }
              *(undefined2 *)(puVar18 + 0x34) = 0;
              uVar4 = *(ushort *)(puVar18 + 0x36);
              uVar9 = (uint)*(ushort *)(puVar18 + 100);
              if ((uint)*(ushort *)(puVar18 + 0x4c) < (uint)*(ushort *)(puVar18 + 100)) {
                uVar9 = (uint)*(ushort *)(puVar18 + 0x4c);
              }
              sVar8 = (short)(uVar9 >> 1);
              if (uVar9 >> 1 < (uVar4 & 0x7fff) << 1) {
                sVar8 = uVar4 << 1;
              }
              *(short *)(puVar18 + 0x4e) = sVar8;
              *(ushort *)(puVar18 + 0x4c) = uVar4;
              *(undefined2 *)(puVar18 + 0x6e) = 0;
              FUN_ram_42058342(puVar18);
            }
          }
          else {
            if ((*(int *)(puVar18 + 0x74) != 0) || (*(int *)(puVar18 + 0x70) == 0))
            goto LAB_ram_42055416;
            if (0xb < (byte)puVar18[0xa6]) goto LAB_ram_420554a4;
            bVar1 = (&DAT_ram_3c0f7557)[(byte)puVar18[0xa5]];
            bVar2 = puVar18[0xa4];
            if ((bVar1 <= bVar2) || (puVar18[0xa4] = bVar2 + 1, bVar1 <= (byte)(bVar2 + 1))) {
              if (*(short *)(puVar18 + 100) == 0) {
                iVar15 = FUN_ram_420583d6(puVar18);
                if (iVar15 == 0) goto LAB_ram_42055590;
              }
              else {
                iVar15 = FUN_ram_42057858(puVar18);
                if ((iVar15 != 0) || (iVar15 = FUN_ram_42057e96(puVar18), iVar15 != 0)) {
LAB_ram_42055590:
                  puVar18[0xa4] = 0;
                  if ((byte)puVar18[0xa5] < 7) {
                    puVar18[0xa5] = puVar18[0xa5] + 1;
                  }
                }
              }
            }
          }
          iVar15 = 0;
        }
LAB_ram_420554a4:
        iVar10 = *(int *)(puVar18 + 0x14);
        if (((iVar10 == 6) && ((*(ushort *)(puVar18 + 0x1e) & 0x10) != 0)) &&
           (0x28 < (uint)(_DAT_ram_3fcc52fc - *(int *)(puVar18 + 0x24)))) {
          iVar15 = iVar15 + 1;
        }
        if (((puVar18[9] & 8) == 0) || ((iVar10 != 4 && (iVar10 != 7)))) {
LAB_ram_420554e0:
          bVar5 = false;
        }
        else {
          if ((uint)(_DAT_ram_3fcc52fc - *(int *)(puVar18 + 0x24)) <=
              (uint)(*(int *)(puVar18 + 0x9c) * *(int *)(puVar18 + 0xa0) + *(int *)(puVar18 + 0x98))
              / 500) {
            if ((((uint)(byte)puVar18[0xa7] * *(int *)(puVar18 + 0x9c) + *(int *)(puVar18 + 0x98)) /
                 500 < (uint)(_DAT_ram_3fcc52fc - *(int *)(puVar18 + 0x24))) &&
               (iVar10 = FUN_ram_42058392(puVar18), iVar10 == 0)) {
              puVar18[0xa7] = puVar18[0xa7] + '\x01';
            }
            goto LAB_ram_420554e0;
          }
          iVar15 = iVar15 + 1;
          bVar5 = true;
        }
        if ((*(int *)(puVar18 + 0x78) != 0) &&
           ((uint)(*(short *)(puVar18 + 0x44) * 6) <=
            (uint)(_DAT_ram_3fcc52fc - *(int *)(puVar18 + 0x24)))) {
          FUN_ram_42054b8a(puVar18);
        }
        if (*(int *)(puVar18 + 0x14) == 3) {
          iVar10 = *(int *)(puVar18 + 0x24);
          uVar9 = 0x28;
LAB_ram_4205551a:
          if ((uint)(_DAT_ram_3fcc52fc - iVar10) <= uVar9) goto LAB_ram_4205551e;
        }
        else {
          if (*(int *)(puVar18 + 0x14) == 9) {
            iVar10 = *(int *)(puVar18 + 0x24);
            uVar9 = 0xf0;
            goto LAB_ram_4205551a;
          }
LAB_ram_4205551e:
          if (iVar15 == 0) {
            cVar3 = puVar18[0x20];
            puVar17 = *(undefined1 **)(puVar18 + 0xc);
            puVar18[0x20] = cVar3 + '\x01';
            puVar6 = puVar18;
            if ((byte)(cVar3 + 1U) < (byte)puVar18[0x21]) goto LAB_ram_420553d8;
            pcVar16 = *(code **)(puVar18 + 0x90);
            puVar18[0x20] = 0;
            puVar12[0x2ea] = 0;
            if (pcVar16 != (code *)0x0) {
              iVar15 = (*pcVar16)(*(undefined4 *)(puVar18 + 0x10),puVar18);
              if (puVar12[0x2ea] != '\0') goto LAB_ram_420553ca;
              if (iVar15 != 0) goto LAB_ram_420553d8;
            }
            FUN_ram_42057e96(puVar18);
            goto LAB_ram_420553d8;
          }
        }
        pcVar16 = *(code **)(puVar18 + 0x94);
        FUN_ram_42054ba6(puVar18);
        if (puVar6 == (undefined1 *)0x0) {
          if (puVar18 == *(undefined1 **)(puVar14 + 0x2f0)) {
            *(undefined4 *)(puVar14 + 0x2f0) = *(undefined4 *)(puVar18 + 0xc);
            goto LAB_ram_4205553e;
          }
          goto LAB_ram_42055416;
        }
      } while (puVar18 == *(undefined1 **)(puVar14 + 0x2f0));
      *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar18 + 0xc);
LAB_ram_4205553e:
      if (bVar5) {
        FUN_ram_42057d6a(puVar18,*(undefined4 *)(puVar18 + 0x54),*(undefined4 *)(puVar18 + 0x28),
                         puVar18,puVar18 + 4,*(undefined2 *)(puVar18 + 0x1a),
                         *(undefined2 *)(puVar18 + 0x1c));
      }
      uVar11 = *(undefined4 *)(puVar18 + 0x10);
      puVar17 = *(undefined1 **)(puVar18 + 0xc);
      FUN_ram_42054506(puVar18);
      puVar12[0x2ea] = 0;
    } while ((pcVar16 == (code *)0x0) || ((*pcVar16)(uVar11,0xfffffff3), puVar12[0x2ea] == '\0'));
  } while( true );
}

