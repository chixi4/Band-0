
int FUN_ram_420a78fc(int *param_1)

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
  undefined4 uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int *piVar18;
  ushort *puVar19;
  char *pcVar20;
  char *pcVar21;
  ushort *puVar22;
  int iVar23;
  int iVar24;
  char *pcVar25;
  ushort *puStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int aiStack_70 [15];
  
  iVar6 = param_1[1];
  if (iVar6 == 8) {
    cVar2 = *(char *)(*(int *)(param_1[0xe] + 0xc) + 10);
    if ((1 < (byte)(cVar2 - 3U)) && (1 < (byte)(cVar2 - 9U))) {
      return -0x6c00;
    }
    iVar6 = FUN_ram_42071942(param_1[0xe] + 0x48,aiStack_70,param_1[0x2a] + 4,1000,
                             *(undefined4 *)(*param_1 + 0x1c),*(undefined4 *)(*param_1 + 0x20));
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = param_1[0xe];
    iVar6 = FUN_ram_420719ba(iVar6 + 0x48,iVar6 + 0x1ec,iVar6 + 0x1cc,0x400,
                             *(undefined4 *)(*param_1 + 0x1c),*(undefined4 *)(*param_1 + 0x20));
    if (iVar6 != 0) {
      return iVar6;
    }
    param_1[0x2c] = aiStack_70[0] + 4;
    param_1[0x2b] = 0x16;
    *(undefined1 *)param_1[0x2a] = 0x10;
LAB_ram_420a8220:
    param_1[1] = param_1[1] + 1;
    iVar6 = FUN_ram_420a49cc(param_1,1);
    return iVar6;
  }
  if (8 < iVar6) {
    if (iVar6 == 0xc) {
      iVar6 = FUN_ram_420a4ebe();
      return iVar6;
    }
    if (0xc < iVar6) {
      iVar16 = 0xf;
      if (iVar6 != 0xe) {
        if (iVar6 == 0xf) {
          FUN_ram_420a60ba();
          return 0;
        }
        if (iVar6 != 0xd) {
          return -0x7100;
        }
        iVar6 = FUN_ram_420a6190();
        return iVar6;
      }
      goto LAB_ram_420a80ac;
    }
    if (iVar6 == 10) {
      iVar6 = FUN_ram_420a4a78();
      return iVar6;
    }
    if (iVar6 == 0xb) {
      iVar6 = FUN_ram_420a610e();
      return iVar6;
    }
    iVar23 = param_1[0x2a];
    iVar24 = param_1[0x25];
    iVar6 = *(int *)(param_1[0xe] + 0xc);
    iStack_7c = 0;
    iVar16 = FUN_ram_420a5bde();
    if (iVar16 != 0) {
      return iVar16;
    }
    bVar1 = *(byte *)(iVar6 + 10);
    if (bVar1 < 5) {
      if (bVar1 == 0) goto LAB_ram_420a7e84;
    }
    else if (1 < (byte)(bVar1 - 9)) goto LAB_ram_420a7e84;
    iVar6 = param_1[0xe];
    if ((*(char *)(iVar6 + 0x160) == '\0') ||
       (((piVar18 = *(int **)(iVar6 + 0xf8), piVar18 == (int *)0x0 &&
         (piVar18 = *(int **)(*param_1 + 0x44), piVar18 == (int *)0x0)) || (*piVar18 == 0)))) {
LAB_ram_420a7e84:
      param_1[1] = param_1[1] + 1;
      return 0;
    }
    iVar16 = FUN_ram_420a7802(param_1);
    if (iVar16 == 0) {
      return -0x7600;
    }
    iVar6 = (**(code **)(iVar6 + 0x14))(param_1,aiStack_70,&iStack_78);
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
    FUN_ram_420a7802(param_1);
    iVar6 = param_1[0x2a];
    uVar7 = FUN_ram_420a5b12();
    *(undefined1 *)(iVar6 + 5) = uVar7;
    iStack_78 = 0;
    uVar12 = FUN_ram_420a7802(param_1);
    iVar6 = FUN_ram_420a86ce(uVar12,uVar9,aiStack_70,0,param_1[0x2a] + 8,0x935 - (iVar23 - iVar24),
                             &iStack_7c,*(undefined4 *)(*param_1 + 0x1c),
                             *(undefined4 *)(*param_1 + 0x20),0);
    if (iVar6 != 0) {
      return iVar6;
    }
    puVar14 = (undefined1 *)param_1[0x2a];
    puVar14[6] = (char)((uint)iStack_7c >> 8);
    puVar14[7] = (char)iStack_7c;
    param_1[0x2c] = iStack_7c + 8;
    param_1[0x2b] = 0x16;
    *puVar14 = 0xf;
    goto LAB_ram_420a8220;
  }
  if (iVar6 == 4) {
    puStack_80 = (ushort *)0x0;
    iVar6 = *(int *)(param_1[0xe] + 0xc);
    iVar16 = FUN_ram_420a4c64(param_1,1);
    if (iVar16 != 0) {
      return iVar16;
    }
    if (param_1[0x1d] == 0x16) {
      pcVar20 = (char *)param_1[0x1b];
      bVar1 = *(byte *)(iVar6 + 10);
      if (*pcVar20 != '\f') {
        if ((bVar1 & 0xfd) == 5) {
          param_1[0x22] = 1;
          goto LAB_ram_420a7e84;
        }
        goto LAB_ram_420a7a38;
      }
      puStack_80 = (ushort *)(pcVar20 + 4);
      puVar22 = (ushort *)(pcVar20 + param_1[0x20]);
      if ((1 < (byte)(bVar1 - 3)) && (bVar1 != 8)) {
        return -0x6c00;
      }
      iVar16 = FUN_ram_420718e6(param_1[0xe] + 0x48,&puStack_80,puVar22);
      if (iVar16 != 0) {
LAB_ram_420a7bee:
        FUN_ram_420a71ae(param_1,2,0x2f);
        return -0x6600;
      }
      uVar9 = *(undefined4 *)(param_1[0xe] + 0x4c);
      iVar16 = FUN_ram_420a5ba8(uVar9);
      if ((iVar16 == 0) ||
         (iVar16 = FUN_ram_420a5bb6(param_1,uVar9), puVar4 = puStack_80, iVar16 != 0))
      goto LAB_ram_420a7bee;
      if (2 < *(byte *)(iVar6 + 10) - 2) goto LAB_ram_420a7e84;
      if ((puVar22 < puStack_80) || ((int)puVar22 - (int)puStack_80 < 2)) {
        FUN_ram_420a5200(param_1,0x32,0xffff8d00);
      }
      else {
        iVar23 = param_1[0x1b];
        uVar8 = (uint)*puStack_80;
        uVar15 = (uint)(*puStack_80 >> 8);
        iVar24 = param_1[0xe];
        iVar6 = FUN_ram_420a5b40(uVar15);
        iVar16 = FUN_ram_420a5b50(uVar8 & 0xff);
        if ((iVar6 == 0) || (iVar16 == 0)) {
          if (uVar8 == 0x408) {
            iVar6 = 6;
            iVar16 = 9;
          }
          else {
            puVar19 = *(ushort **)(*param_1 + 0x50);
            if (puVar19 != (ushort *)0x0) {
              for (; *puVar19 != 0; puVar19 = puVar19 + 1) {
                if (((uVar8 & 0xff) << 8 | uVar15) == (uint)*puVar19) goto LAB_ram_420a7fb0;
              }
            }
            if (((param_1[2] != 0x303) || (3 < (uVar8 & 0xff) - 1)) || ((uVar15 & 0xfd) != 1))
            goto LAB_ram_420a7f70;
          }
        }
LAB_ram_420a7fb0:
        iVar24 = iVar24 + 0x108;
        puStack_80 = puStack_80 + 1;
        iVar11 = FUN_ram_420a865e(iVar24,iVar6);
        if (iVar11 == 0) {
LAB_ram_420a7f70:
          FUN_ram_420a71ae(param_1,2,0x2f);
          return -0x6600;
        }
        if (puStack_80 <= puVar22 + -1) {
          uVar3 = *puStack_80;
          puStack_80 = puStack_80 + 1;
          uVar8 = (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8);
          if (puStack_80 == (ushort *)((int)puVar22 - uVar8)) {
            if (iVar16 == 0) {
              return -0x6c00;
            }
            iVar23 = FUN_ram_420a6250(param_1,aiStack_70,&iStack_7c,iVar23 + 4,
                                      (int)puVar4 - (iVar23 + 4),iVar16);
            if (iVar23 != 0) {
              return iVar23;
            }
            iVar23 = FUN_ram_420a865e(iVar24,iVar6);
            if (iVar23 == 0) {
              FUN_ram_420a71ae(param_1,2,0x28);
              return -0x6d00;
            }
            if (iVar6 == 6) {
              iStack_78 = iVar16;
              FUN_ram_4206c444(iVar16);
              iStack_74 = FUN_ram_4206c71c();
              if (iStack_74 == 0) {
                return -0x6c00;
              }
              iVar6 = FUN_ram_420a8750(6,&iStack_78,iVar24,iVar16,aiStack_70,iStack_7c,puStack_80,
                                       uVar8);
            }
            else {
              iVar6 = FUN_ram_420a8670(iVar24,iVar16,aiStack_70,iStack_7c,puStack_80,uVar8,0);
            }
            if (iVar6 != 0) {
              FUN_ram_420a71ae(param_1,2,0x33);
              return iVar6;
            }
            FUN_ram_420a85ae(iVar24);
            goto LAB_ram_420a7e84;
          }
        }
        FUN_ram_420a71ae(param_1,2,0x32);
      }
      return -0x7300;
    }
    goto LAB_ram_420a7a38;
  }
  if (iVar6 < 5) {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        iVar6 = FUN_ram_420a6660();
        return iVar6;
      }
      iVar16 = 1;
      if (iVar6 != 0) {
        if (iVar6 != 1) {
          return -0x7100;
        }
        iVar6 = FUN_ram_420a6f9a();
        return iVar6;
      }
      goto LAB_ram_420a80ac;
    }
    iVar6 = FUN_ram_420a4c64(param_1,1);
    if (iVar6 != 0) {
      return iVar6;
    }
    pcVar20 = (char *)param_1[0x1b];
    if (param_1[0x1d] != 0x16) goto LAB_ram_420a7a38;
    if ((0x29 < (uint)param_1[0x20]) && (*pcVar20 == '\x02')) {
      pcVar21 = pcVar20 + 4;
      uVar8 = FUN_ram_420a51ae(pcVar21,*(undefined1 *)(*param_1 + 9));
      iVar6 = param_1[0xd];
      puVar17 = (uint *)*param_1;
      param_1[2] = uVar8;
      *(uint *)(iVar6 + 4) = uVar8;
      *(char *)(iVar6 + 2) = (char)puVar17[2];
      if ((uVar8 < puVar17[1]) || (*puVar17 < uVar8)) {
        FUN_ram_420a71ae(param_1,2,0x46);
        return -0x6e80;
      }
      FUN_ram_4039c11e(param_1[0xe] + 0x1ac,pcVar20 + 6,0x20);
      uVar8 = (uint)(byte)pcVar20[0x26];
      if (uVar8 < 0x21) {
        uVar15 = param_1[0x20];
        if (uVar8 + 0x2b < uVar15) {
          uVar5 = (*(ushort *)(pcVar21 + uVar8 + 0x26) & 0xff) << 8 |
                  (uint)(*(ushort *)(pcVar21 + uVar8 + 0x26) >> 8);
          if ((2 < uVar5 - 1) && (uVar15 == uVar8 + 0x2c + uVar5)) {
LAB_ram_420a7b18:
            uVar15 = (*(ushort *)(pcVar21 + uVar8 + 0x23) & 0xff) << 8 |
                     (uint)(*(ushort *)(pcVar21 + uVar8 + 0x23) >> 8);
            if (pcVar21[uVar8 + 0x25] != '\0') {
              FUN_ram_420a71ae(param_1,2,0x2f);
              return -0x7080;
            }
            iVar16 = param_1[0xe];
            uVar9 = FUN_ram_420a3df0(uVar15);
            iVar6 = param_1[0xe];
            *(undefined4 *)(iVar16 + 0xc) = uVar9;
            if (*(int *)(iVar6 + 0xc) == 0) {
              FUN_ram_420a71ae(param_1,2,0x50);
              return -0x7100;
            }
            FUN_ram_420a55ba(param_1);
            pcVar25 = (char *)param_1[0xe];
            iVar6 = param_1[0xd];
            if ((((*pcVar25 == '\0') || (uVar8 == 0)) || (uVar15 != *(uint *)(iVar6 + 8))) ||
               ((uVar8 != *(uint *)(iVar6 + 0xc) ||
                (iVar16 = FUN_ram_4039c0e0(iVar6 + 0x10,pcVar20 + 0x27,uVar8), iVar16 != 0)))) {
              param_1[1] = param_1[1] + 1;
              *pcVar25 = '\0';
              *(uint *)(iVar6 + 8) = uVar15;
              *(uint *)(iVar6 + 0xc) = uVar8;
              FUN_ram_4039c11e(iVar6 + 0x10,pcVar20 + 0x27,uVar8);
            }
            else {
              param_1[1] = 0xc;
            }
            piVar18 = *(int **)(*param_1 + 0x10);
            do {
              iVar6 = *piVar18;
              if (iVar6 == 0) goto LAB_ram_420a7bee;
              piVar18 = piVar18 + 1;
            } while (iVar6 != *(int *)(param_1[0xd] + 8));
            uVar9 = FUN_ram_420a3df0();
            iVar6 = FUN_ram_420a62e6(param_1,uVar9,param_1[2]);
            puVar22 = (ushort *)(pcVar21 + uVar8 + 0x28);
            if (iVar6 == 0) {
              while (uVar5 != 0) {
                uVar3 = *puVar22;
                uVar8 = (puVar22[1] & 0xff) << 8 | (uint)(puVar22[1] >> 8);
                if (uVar5 < uVar8 + 4) goto LAB_ram_420a7a5e;
                if (uVar3 == 0x1600) {
                  if ((*(char *)(*param_1 + 0xd) == '\0') || (uVar8 != 0)) {
LAB_ram_420a7d22:
                    FUN_ram_420a71ae(param_1,2,0x6e);
                    return -0x7500;
                  }
                  *(undefined4 *)(param_1[0xd] + 0x70) = 1;
                }
                else if ((ushort)(uVar3 << 8 | uVar3 >> 8) < 0x17) {
                  if (uVar3 == 0xb00) {
                    if ((uVar8 == 0) || (uVar15 = (uint)(byte)puVar22[2], uVar15 + 1 != uVar8))
                    goto LAB_ram_420a7a5e;
                    pbVar13 = (byte *)((int)puVar22 + 5);
                    while( true ) {
                      if (uVar15 == 0) goto LAB_ram_420a7d6e;
                      if (*pbVar13 < 2) break;
                      uVar15 = uVar15 - 1;
                      pbVar13 = pbVar13 + 1;
                    }
                    *(byte *)(param_1[0xe] + 0x48) = *pbVar13;
                  }
                  else if (uVar3 == 0x1000) {
                    piVar18 = *(int **)(*param_1 + 0x58);
                    if (piVar18 == (int *)0x0) goto LAB_ram_420a7d22;
                    if (((uVar8 < 4) ||
                        (((uint)(puVar22[2] >> 8) | (puVar22[2] & 0xff) << 8) != uVar8 - 2)) ||
                       (uVar15 = (uint)(byte)puVar22[3], uVar15 != uVar8 - 3))
                    goto LAB_ram_420a7a5e;
                    while( true ) {
                      iVar6 = *piVar18;
                      if (iVar6 == 0) goto LAB_ram_420a7d6e;
                      uVar10 = (*(code *)&SUB_ram_400104a8)(iVar6);
                      if ((uVar15 == uVar10) &&
                         (iVar16 = FUN_ram_4039c0e0((char *)((int)puVar22 + 7),iVar6,uVar15),
                         iVar16 == 0)) break;
                      piVar18 = piVar18 + 1;
                    }
                    param_1[0x31] = iVar6;
                  }
                  else if ((uVar3 == 0x100) &&
                          (((*(char *)(*param_1 + 0xc) == '\0' || (uVar8 != 1)) ||
                           ((char)puVar22[2] != *(char *)(*param_1 + 0xc))))) goto LAB_ram_420a7bee;
                }
                else if (uVar3 == 0x1700) {
                  if ((*(char *)(*param_1 + 0xe) == '\0') || (uVar8 != 0)) goto LAB_ram_420a7d22;
                  *(undefined1 *)(param_1[0xe] + 8) = 1;
                }
                else if (uVar3 == 0x1ff) {
                  if ((uVar8 != 1) || ((char)puVar22[2] != '\0')) goto LAB_ram_420a7d6e;
                  param_1[0x32] = 1;
                }
                iVar6 = uVar5 - uVar8;
                uVar5 = iVar6 - 4;
                puVar22 = (ushort *)((int)puVar22 + uVar8 + 4);
                if (iVar6 - 5U < 3) {
                  return -0x7300;
                }
              }
              if ((*(char *)param_1[0xe] != '\0') && (iVar6 = FUN_ram_420a5bde(param_1), iVar6 != 0)
                 ) {
                FUN_ram_420a71ae(param_1,2,0x50);
                return iVar6;
              }
              if (param_1[0x32] != 0) {
                return 0;
              }
              if (*(char *)(*param_1 + 0xb) != '\x02') {
                return 0;
              }
            }
LAB_ram_420a7d6e:
            FUN_ram_420a71ae(param_1,2,0x28);
            return -0x6e00;
          }
        }
        else if (uVar15 == uVar8 + 0x2a) {
          uVar5 = 0;
          goto LAB_ram_420a7b18;
        }
      }
    }
    goto LAB_ram_420a7a5e;
  }
  if (iVar6 == 6) {
    iVar6 = FUN_ram_420a4c64(param_1,1);
    if (iVar6 != 0) {
      return iVar6;
    }
    if (param_1[0x1d] != 0x16) {
      return -0x7700;
    }
    if ((param_1[0x20] != 4) || (*(char *)param_1[0x1b] != '\x0e')) goto LAB_ram_420a7a5e;
    iVar16 = param_1[1] + 1;
    goto LAB_ram_420a80ac;
  }
  if (iVar6 == 7) {
    iVar6 = FUN_ram_420a5f74();
    return iVar6;
  }
  bVar1 = *(byte *)(*(int *)(param_1[0xe] + 0xc) + 10);
  if (bVar1 < 5) {
    if (bVar1 == 0) {
LAB_ram_420a80aa:
      iVar16 = 6;
LAB_ram_420a80ac:
      param_1[1] = iVar16;
      return 0;
    }
  }
  else if (1 < (byte)(bVar1 - 9)) goto LAB_ram_420a80aa;
  iVar6 = FUN_ram_420a4c64(param_1,1);
  if (iVar6 != 0) {
    return iVar6;
  }
  if (param_1[0x1d] == 0x16) {
    pcVar20 = (char *)param_1[0x1b];
    param_1[1] = param_1[1] + 1;
    cVar2 = *pcVar20;
    *(bool *)(param_1[0xe] + 0x160) = cVar2 == '\r';
    if (cVar2 != '\r') {
      param_1[0x22] = 1;
      return 0;
    }
    uVar8 = param_1[0x20];
    if ((((4 < uVar8) && (uVar15 = (uint)(byte)pcVar20[4], uVar15 + 6 < uVar8)) &&
        (uVar5 = (uint)(*(ushort *)(pcVar20 + uVar15 + 5) >> 8) |
                 (*(ushort *)(pcVar20 + uVar15 + 5) & 0xff) << 8, uVar15 + 7 + uVar5 < uVar8)) &&
       (iVar6 = uVar15 + uVar5,
       uVar8 == iVar6 + 9 +
                ((uint)(*(ushort *)(pcVar20 + iVar6 + 7) >> 8) |
                (*(ushort *)(pcVar20 + iVar6 + 7) & 0xff) << 8))) {
      return 0;
    }
LAB_ram_420a7a5e:
    FUN_ram_420a71ae(param_1,2,0x32);
    return -0x7300;
  }
LAB_ram_420a7a38:
  FUN_ram_420a71ae(param_1,2,10);
  return -0x7700;
}

