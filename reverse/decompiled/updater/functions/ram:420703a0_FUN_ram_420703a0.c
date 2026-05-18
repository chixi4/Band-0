
int FUN_ram_420703a0(int *param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int *piVar19;
  ushort *puVar20;
  char *pcVar21;
  char *pcVar22;
  int iVar23;
  ushort *puVar24;
  char *pcVar25;
  ushort *puStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  
  iVar6 = param_1[1];
  if (iVar6 == 8) {
    iVar6 = param_1[0xe];
    cVar2 = *(char *)(*(int *)(iVar6 + 0xc) + 10);
    if (((byte)(cVar2 - 3U) < 2) || ((byte)(cVar2 - 9U) < 2)) {
      iVar6 = FUN_ram_4202e978(iVar6 + 0x48,&iStack_80,param_1[0x2a] + 4,1000,
                               *(undefined4 *)(*param_1 + 0x1c),*(undefined4 *)(*param_1 + 0x20));
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = param_1[0xe];
      iVar6 = FUN_ram_4202e9f0(iVar6 + 0x48,iVar6 + 0x220,iVar6 + 0x1f0,0x400,
                               *(undefined4 *)(*param_1 + 0x1c),*(undefined4 *)(*param_1 + 0x20));
      if (iVar6 != 0) {
        return iVar6;
      }
    }
    else {
      if (cVar2 != '\x01') {
        return -0x6c00;
      }
      FUN_ram_4206e7f6(iVar6 + 0x1f0,*(undefined1 *)(*param_1 + 9),0x303);
      iVar17 = (**(code **)(*param_1 + 0x1c))(*(undefined4 *)(*param_1 + 0x20),iVar6 + 0x1f2,0x2e);
      if (iVar17 != 0) {
        return iVar17;
      }
      *(undefined4 *)(param_1[0xe] + 0x220) = 0x30;
      if (*(int *)(param_1[0xd] + 0x60) == 0) {
        return -0x6c00;
      }
      iVar17 = *(int *)(param_1[0xd] + 0x60) + 0xcc;
      iVar11 = FUN_ram_42066e6a(iVar17,1);
      if (iVar11 == 0) {
        return -0x6d00;
      }
      iVar6 = FUN_ram_42066f3e(iVar17,iVar6 + 0x1f0,*(undefined4 *)(param_1[0xe] + 0x220),
                               param_1[0x2a] + 6,&iStack_80,0xffa,*(undefined4 *)(*param_1 + 0x1c),
                               *(undefined4 *)(*param_1 + 0x20));
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = param_1[0x2a];
      *(char *)(iVar6 + 4) = (char)((uint)iStack_80 >> 8);
      *(char *)(iVar6 + 5) = (char)iStack_80;
      iStack_80 = iStack_80 + 2;
    }
    param_1[0x2c] = iStack_80 + 4;
    param_1[0x2b] = 0x16;
    *(undefined1 *)param_1[0x2a] = 0x10;
LAB_ram_42070d12:
    param_1[1] = param_1[1] + 1;
    iVar6 = FUN_ram_4206e01e(param_1,1);
  }
  else {
    if (iVar6 < 9) {
      if (iVar6 == 4) {
        puStack_90 = (ushort *)0x0;
        iVar6 = *(int *)(param_1[0xe] + 0xc);
        if (*(char *)(iVar6 + 10) == '\x01') {
          iVar17 = 5;
        }
        else {
          if ((byte)(*(char *)(iVar6 + 10) - 9U) < 2) {
            iVar6 = *(int *)(param_1[0xd] + 0x60);
            if (iVar6 == 0) {
              iVar6 = -0x6c00;
            }
            else {
              iVar17 = FUN_ram_42066e6a(iVar6 + 0xcc,2);
              if (iVar17 == 0) {
                iVar6 = -0x6d00;
              }
              else {
                iStack_80 = *(int *)(iVar6 + 0xcc);
                uStack_7c = *(undefined4 *)(iVar6 + 0xd0);
                iVar6 = FUN_ram_42066f6e(&iStack_80);
                uVar9 = 0;
                if (iVar6 - 2U < 3) {
                  uVar9 = uStack_7c;
                }
                iVar6 = FUN_ram_4202e8ec(param_1[0xe] + 0x48,uVar9,1);
                if (iVar6 == 0) {
                  iVar6 = FUN_ram_42070286(param_1);
                  if (iVar6 == 0) goto LAB_ram_42070944;
                  iVar6 = -0x7a00;
                }
              }
            }
            uVar9 = 0x28;
LAB_ram_4207095e:
            FUN_ram_4206e0e0(param_1,2,uVar9);
            return iVar6;
          }
          iVar17 = FUN_ram_4206e2ae(param_1,1);
          if (iVar17 != 0) {
            return iVar17;
          }
          if (param_1[0x1d] != 0x16) goto LAB_ram_420704dc;
          pcVar21 = (char *)param_1[0x1b];
          bVar1 = *(byte *)(iVar6 + 10);
          if (*pcVar21 == '\f') {
            puStack_90 = (ushort *)(pcVar21 + 4);
            puVar24 = (ushort *)(pcVar21 + param_1[0x20]);
            if ((1 < (byte)(bVar1 - 3)) && (bVar1 != 8)) {
              return -0x6c00;
            }
            iVar17 = FUN_ram_4202e890(param_1[0xe] + 0x48,&puStack_90,puVar24);
            if ((iVar17 != 0) ||
               (iVar17 = FUN_ram_42070286(param_1), puVar4 = puStack_90, iVar17 != 0)) {
LAB_ram_4207068c:
              FUN_ram_4206e0e0(param_1,2,0x2f);
              return -0x6600;
            }
            if (*(byte *)(iVar6 + 10) - 2 < 3) {
              iVar6 = *(int *)(param_1[0xd] + 0x60);
              if (iVar6 == 0) {
                return -0x6c00;
              }
              if ((puVar24 < puStack_90) || ((int)puVar24 - (int)puStack_90 < 2)) {
                FUN_ram_4206e868(param_1,0x32,0xffff8d00);
                return -0x7300;
              }
              iVar23 = param_1[0x1b];
              uVar8 = (uint)*puStack_90;
              uVar16 = (uint)(*puStack_90 >> 8);
              iVar11 = FUN_ram_4206f4f6(uVar16);
              iVar17 = FUN_ram_4206f506(uVar8 & 0xff);
              if ((iVar11 == 0) || (iVar17 == 0)) {
                if (uVar8 == 0x508) {
                  iVar11 = 6;
                  iVar17 = 10;
                }
                else if (uVar8 == 0x608) {
                  iVar11 = 6;
                  iVar17 = 0xb;
                }
                else if (uVar8 == 0x408) {
                  iVar11 = 6;
                  iVar17 = 9;
                }
                else {
                  puVar20 = *(ushort **)(*param_1 + 0x50);
                  if (puVar20 != (ushort *)0x0) {
                    for (; *puVar20 != 0; puVar20 = puVar20 + 1) {
                      if (((uVar8 & 0xff) << 8 | uVar16) == (uint)*puVar20) goto LAB_ram_42070a98;
                    }
                  }
                  if (((param_1[2] != 0x303) || (5 < (uVar8 & 0xff) - 1)) || ((uVar16 & 0xfd) != 1))
                  goto LAB_ram_4207068c;
                }
              }
LAB_ram_42070a98:
              iVar6 = iVar6 + 0xcc;
              puStack_90 = puStack_90 + 1;
              iVar12 = FUN_ram_42066e6a(iVar6,iVar11);
              if (iVar12 == 0) goto LAB_ram_4207068c;
              if (puVar24 + -1 < puStack_90) goto LAB_ram_42070502;
              uVar3 = *puStack_90;
              puStack_90 = puStack_90 + 1;
              uVar8 = (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8);
              if (puStack_90 != (ushort *)((int)puVar24 - uVar8)) goto LAB_ram_42070502;
              if (iVar17 == 0) {
                return -0x6c00;
              }
              iVar23 = FUN_ram_4206fc92(param_1,&iStack_80,&iStack_8c,iVar23 + 4,
                                        (int)puVar4 - (iVar23 + 4),iVar17);
              if (iVar23 != 0) {
                return iVar23;
              }
              iVar23 = FUN_ram_42066e6a(iVar6,iVar11);
              if (iVar23 == 0) {
                FUN_ram_4206e0e0(param_1,2,0x28);
                return -0x6d00;
              }
              if (iVar11 == 6) {
                iStack_88 = iVar17;
                FUN_ram_42028dc8(iVar17);
                iStack_84 = FUN_ram_42029140();
                if (iStack_84 == 0) {
                  return -0x6c00;
                }
                iVar6 = FUN_ram_42066f7e(6,&iStack_88,iVar6,iVar17,&iStack_80,iStack_8c,puStack_90,
                                         uVar8);
              }
              else {
                iVar6 = FUN_ram_42066e7c(iVar6,iVar17,&iStack_80,iStack_8c,puStack_90,uVar8,0);
              }
              uVar9 = 0x33;
              if (iVar6 != 0) goto LAB_ram_4207095e;
            }
          }
          else {
            if ((bVar1 & 0xfd) != 5) goto LAB_ram_420704dc;
            param_1[0x22] = 1;
          }
LAB_ram_42070944:
          iVar17 = param_1[1] + 1;
        }
      }
      else {
        if (4 < iVar6) {
          if (iVar6 == 6) {
            iVar6 = FUN_ram_4206e2ae(param_1,1);
            if (iVar6 != 0) {
              return iVar6;
            }
            if (param_1[0x1d] != 0x16) {
              return -0x7700;
            }
            if ((param_1[0x20] != 4) || (*(char *)param_1[0x1b] != '\x0e')) goto LAB_ram_42070502;
            goto LAB_ram_42070944;
          }
          if (iVar6 == 7) {
            iVar6 = FUN_ram_4206f9b6();
            return iVar6;
          }
          bVar1 = *(byte *)(*(int *)(param_1[0xe] + 0xc) + 10);
          if (bVar1 < 5) {
            if (bVar1 == 0) {
LAB_ram_42070ba8:
              iVar17 = 6;
              goto LAB_ram_4207094e;
            }
          }
          else if (1 < (byte)(bVar1 - 9)) goto LAB_ram_42070ba8;
          iVar6 = FUN_ram_4206e2ae(param_1,1);
          if (iVar6 != 0) {
            return iVar6;
          }
          if (param_1[0x1d] != 0x16) {
LAB_ram_420704dc:
            FUN_ram_4206e0e0(param_1,2,10);
            return -0x7700;
          }
          pcVar21 = (char *)param_1[0x1b];
          param_1[1] = param_1[1] + 1;
          cVar2 = *pcVar21;
          *(bool *)(param_1[0xe] + 0x164) = cVar2 == '\r';
          if (cVar2 == '\r') {
            uVar8 = param_1[0x20];
            if ((((uVar8 < 5) || (uVar16 = (uint)(byte)pcVar21[4], uVar8 <= uVar16 + 6)) ||
                (uVar5 = (uint)(*(ushort *)(pcVar21 + uVar16 + 5) >> 8) |
                         (*(ushort *)(pcVar21 + uVar16 + 5) & 0xff) << 8,
                uVar8 <= uVar16 + 7 + uVar5)) ||
               (iVar6 = uVar16 + uVar5,
               uVar8 != iVar6 + 9 +
                        ((uint)(*(ushort *)(pcVar21 + iVar6 + 7) >> 8) |
                        (*(ushort *)(pcVar21 + iVar6 + 7) & 0xff) << 8))) {
LAB_ram_42070502:
              FUN_ram_4206e0e0(param_1,2,0x32);
              return -0x7300;
            }
          }
          else {
            param_1[0x22] = 1;
          }
          goto LAB_ram_42070716;
        }
        if (iVar6 == 2) {
          iVar6 = FUN_ram_4206e2ae(param_1,1);
          if (iVar6 != 0) {
            return iVar6;
          }
          pcVar21 = (char *)param_1[0x1b];
          if (param_1[0x1d] != 0x16) goto LAB_ram_420704dc;
          if (((uint)param_1[0x20] < 0x2a) || (*pcVar21 != '\x02')) goto LAB_ram_42070502;
          pcVar22 = pcVar21 + 4;
          uVar8 = FUN_ram_4206e816(pcVar22,*(undefined1 *)(*param_1 + 9));
          iVar6 = param_1[0xd];
          puVar18 = (uint *)*param_1;
          param_1[2] = uVar8;
          *(uint *)(iVar6 + 4) = uVar8;
          *(char *)(iVar6 + 2) = (char)puVar18[2];
          if ((uVar8 < puVar18[1]) || (*puVar18 < uVar8)) {
            FUN_ram_4206e0e0(param_1,2,0x46);
            return -0x6e80;
          }
          FUN_ram_40399daa(param_1[0xe] + 0x1d0,pcVar21 + 6,0x20);
          uVar8 = (uint)(byte)pcVar21[0x26];
          if (0x20 < uVar8) goto LAB_ram_42070502;
          uVar16 = param_1[0x20];
          if (uVar8 + 0x2b < uVar16) {
            uVar5 = (*(ushort *)(pcVar22 + uVar8 + 0x26) & 0xff) << 8 |
                    (uint)(*(ushort *)(pcVar22 + uVar8 + 0x26) >> 8);
            if ((uVar5 - 1 < 3) || (uVar16 != uVar8 + 0x2c + uVar5)) goto LAB_ram_42070502;
          }
          else {
            if (uVar16 != uVar8 + 0x2a) goto LAB_ram_42070502;
            uVar5 = 0;
          }
          uVar16 = (*(ushort *)(pcVar22 + uVar8 + 0x23) & 0xff) << 8 |
                   (uint)(*(ushort *)(pcVar22 + uVar8 + 0x23) >> 8);
          if (pcVar22[uVar8 + 0x25] != '\0') {
            FUN_ram_4206e0e0(param_1,2,0x2f);
            return -0x7080;
          }
          iVar17 = param_1[0xe];
          uVar9 = FUN_ram_4206d416(uVar16);
          iVar6 = param_1[0xe];
          *(undefined4 *)(iVar17 + 0xc) = uVar9;
          if (*(int *)(iVar6 + 0xc) == 0) {
            FUN_ram_4206e0e0(param_1,2,0x50);
            return -0x7100;
          }
          FUN_ram_4206ed4c(param_1);
          pcVar25 = (char *)param_1[0xe];
          iVar6 = param_1[0xd];
          if ((((*pcVar25 == '\0') || (uVar8 == 0)) || (uVar16 != *(uint *)(iVar6 + 8))) ||
             ((uVar8 != *(uint *)(iVar6 + 0xc) ||
              (iVar17 = FUN_ram_40399d6c(iVar6 + 0x10,pcVar21 + 0x27,uVar8), iVar17 != 0)))) {
            param_1[1] = param_1[1] + 1;
            *pcVar25 = '\0';
            *(uint *)(iVar6 + 8) = uVar16;
            *(uint *)(iVar6 + 0xc) = uVar8;
            FUN_ram_40399daa(iVar6 + 0x10,pcVar21 + 0x27,uVar8);
          }
          else {
            param_1[1] = 0xc;
          }
          piVar19 = *(int **)(*param_1 + 0x10);
          do {
            iVar6 = *piVar19;
            if (iVar6 == 0) goto LAB_ram_4207068c;
            piVar19 = piVar19 + 1;
          } while (iVar6 != *(int *)(param_1[0xd] + 8));
          uVar9 = FUN_ram_4206d416();
          iVar6 = FUN_ram_4206fd28(param_1,uVar9,param_1[2]);
          puVar24 = (ushort *)(pcVar22 + uVar8 + 0x28);
          if (iVar6 != 0) {
LAB_ram_4207081e:
            FUN_ram_4206e0e0(param_1,2,0x28);
            return -0x6e00;
          }
          while (uVar5 != 0) {
            uVar3 = *puVar24;
            uVar8 = (puVar24[1] & 0xff) << 8 | (uint)(puVar24[1] >> 8);
            if (uVar5 < uVar8 + 4) goto LAB_ram_42070502;
            if (uVar3 == 0x1600) {
              if ((*(char *)(*param_1 + 0xd) == '\0') || (uVar8 != 0)) {
LAB_ram_420707d2:
                FUN_ram_4206e0e0(param_1,2,0x6e);
                return -0x7500;
              }
              *(undefined4 *)(param_1[0xd] + 0x68) = 1;
            }
            else if ((ushort)(uVar3 << 8 | uVar3 >> 8) < 0x17) {
              if (uVar3 == 0xb00) {
                if ((uVar8 == 0) || (uVar16 = (uint)(byte)puVar24[2], uVar16 + 1 != uVar8))
                goto LAB_ram_42070502;
                pbVar14 = (byte *)((int)puVar24 + 5);
                while( true ) {
                  if (uVar16 == 0) goto LAB_ram_4207081e;
                  if (*pbVar14 < 2) break;
                  uVar16 = uVar16 - 1;
                  pbVar14 = pbVar14 + 1;
                }
                *(byte *)(param_1[0xe] + 0x48) = *pbVar14;
              }
              else if (uVar3 == 0x1000) {
                piVar19 = *(int **)(*param_1 + 0x58);
                if (piVar19 == (int *)0x0) goto LAB_ram_420707d2;
                if (((uVar8 < 4) ||
                    (((uint)(puVar24[2] >> 8) | (puVar24[2] & 0xff) << 8) != uVar8 - 2)) ||
                   (uVar16 = (uint)(byte)puVar24[3], uVar16 != uVar8 - 3)) goto LAB_ram_42070502;
                while( true ) {
                  iVar6 = *piVar19;
                  if (iVar6 == 0) goto LAB_ram_4207081e;
                  uVar10 = (*(code *)&SUB_ram_400104a8)(iVar6);
                  if ((uVar16 == uVar10) &&
                     (iVar17 = FUN_ram_40399d6c((char *)((int)puVar24 + 7),iVar6,uVar16),
                     iVar17 == 0)) break;
                  piVar19 = piVar19 + 1;
                }
                param_1[0x31] = iVar6;
              }
              else if ((uVar3 == 0x100) &&
                      (((*(char *)(*param_1 + 0xc) == '\0' || (uVar8 != 1)) ||
                       ((char)puVar24[2] != *(char *)(*param_1 + 0xc))))) goto LAB_ram_4207068c;
            }
            else if (uVar3 == 0x1700) {
              if ((*(char *)(*param_1 + 0xe) == '\0') || (uVar8 != 0)) goto LAB_ram_420707d2;
              *(undefined1 *)(param_1[0xe] + 8) = 1;
            }
            else if (uVar3 == 0x1ff) {
              if ((uVar8 != 1) || ((char)puVar24[2] != '\0')) goto LAB_ram_4207081e;
              param_1[0x32] = 1;
            }
            iVar6 = uVar5 - uVar8;
            uVar5 = iVar6 - 4;
            puVar24 = (ushort *)((int)puVar24 + uVar8 + 4);
            if (iVar6 - 5U < 3) {
              return -0x7300;
            }
          }
          if (*(char *)param_1[0xe] != '\0') {
            iVar6 = FUN_ram_4206f5e4(param_1);
            uVar9 = 0x50;
            if (iVar6 != 0) goto LAB_ram_4207095e;
          }
          if ((param_1[0x32] == 0) && (*(char *)(*param_1 + 0xb) == '\x02')) goto LAB_ram_4207081e;
          goto LAB_ram_42070716;
        }
        if (iVar6 == 3) {
          iVar6 = FUN_ram_420700a2();
          return iVar6;
        }
        iVar17 = 1;
        if (iVar6 != 0) {
          if (iVar6 != 1) {
            return -0x7100;
          }
          iVar6 = FUN_ram_42071084();
          return iVar6;
        }
      }
LAB_ram_4207094e:
      param_1[1] = iVar17;
    }
    else {
      if (iVar6 == 0xc) {
        iVar6 = FUN_ram_4206e508();
        return iVar6;
      }
      if (iVar6 < 0xd) {
        if (iVar6 == 10) {
          iVar6 = FUN_ram_4206e0c2();
          return iVar6;
        }
        if (iVar6 == 0xb) {
          iVar6 = FUN_ram_4206fb50();
          return iVar6;
        }
        iVar11 = param_1[0x2a];
        iVar23 = param_1[0x25];
        iVar6 = *(int *)(param_1[0xe] + 0xc);
        iStack_8c = 0;
        iVar17 = FUN_ram_4206f5e4();
        if (iVar17 != 0) {
          return iVar17;
        }
        bVar1 = *(byte *)(iVar6 + 10);
        if (bVar1 < 5) {
          if (bVar1 == 0) goto LAB_ram_42070e0e;
        }
        else if (1 < (byte)(bVar1 - 9)) goto LAB_ram_42070e0e;
        iVar6 = param_1[0xe];
        if ((*(char *)(iVar6 + 0x164) == '\0') ||
           (((piVar19 = *(int **)(iVar6 + 0xf8), piVar19 == (int *)0x0 &&
             (piVar19 = *(int **)(*param_1 + 0x44), piVar19 == (int *)0x0)) || (*piVar19 == 0)))) {
LAB_ram_42070e0e:
          param_1[1] = param_1[1] + 1;
          return 0;
        }
        iVar17 = FUN_ram_42070270(param_1);
        if (iVar17 == 0) {
          return -0x7600;
        }
        iVar6 = (**(code **)(iVar6 + 0x14))(param_1,&iStack_80,&iStack_88);
        if (iVar6 != 0) {
          return iVar6;
        }
        if (*(char *)(*(int *)(param_1[0xe] + 0xc) + 9) == '\n') {
          uVar7 = 5;
          uVar9 = 10;
        }
        else {
          uVar7 = 4;
          uVar9 = 9;
        }
        *(undefined1 *)(param_1[0x2a] + 4) = uVar7;
        FUN_ram_42070270(param_1);
        iVar6 = param_1[0x2a];
        uVar7 = FUN_ram_4206f4c8();
        *(undefined1 *)(iVar6 + 5) = uVar7;
        iStack_88 = 0;
        uVar13 = FUN_ram_42070270(param_1);
        iVar6 = FUN_ram_42066eda(uVar13,uVar9,&iStack_80,0,param_1[0x2a] + 8,
                                 0x1145 - (iVar11 - iVar23),&iStack_8c,
                                 *(undefined4 *)(*param_1 + 0x1c),*(undefined4 *)(*param_1 + 0x20),0
                                );
        if (iVar6 != 0) {
          return iVar6;
        }
        puVar15 = (undefined1 *)param_1[0x2a];
        puVar15[6] = (char)((uint)iStack_8c >> 8);
        puVar15[7] = (char)iStack_8c;
        param_1[0x2c] = iStack_8c + 8;
        param_1[0x2b] = 0x16;
        *puVar15 = 0xf;
        goto LAB_ram_42070d12;
      }
      iVar17 = 0xf;
      if (iVar6 == 0xe) goto LAB_ram_4207094e;
      if (iVar6 != 0xf) {
        if (iVar6 != 0xd) {
          return -0x7100;
        }
        iVar6 = FUN_ram_4206fbd2();
        return iVar6;
      }
      FUN_ram_4206fafc();
    }
LAB_ram_42070716:
    iVar6 = 0;
  }
  return iVar6;
}

