
byte * FUN_ram_420696e2(uint *param_1,int *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  code *pcVar9;
  short sVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  
  if ((param_1[5] >> 0x18 & 0x7f) != 0) {
    return (byte *)0x0;
  }
  uVar11 = *param_1;
  uVar6 = uVar11 >> 10;
  uVar7 = uVar6 & 0x7f;
  if (param_4 == (byte *)0x0) {
    if (uVar7 < 0x16) {
      if ((uVar7 != 0) && ((0x200026U >> (uVar6 & 0x1f) & 1) != 0)) {
        return (byte *)0x0;
      }
    }
    else if (uVar7 == 0x40) {
      if ((code *)param_2[7] == (code *)0x0) {
        return (byte *)0x0;
      }
      iVar3 = (*(code *)param_2[7])();
      if (iVar3 == 0) {
        return (byte *)0x0;
      }
      param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
      return (byte *)0x0;
    }
    param_1[5] = param_1[5] & 0x80ffffff | 0xb000000;
    return (byte *)0x1;
  }
  if (uVar7 == 0x2e) {
    pbVar23 = (byte *)0x0;
    pbVar22 = (byte *)0x0;
    pbVar20 = (byte *)0x0;
    pbVar24 = param_3;
  }
  else {
    if (uVar7 == 0x33) {
      pbVar23 = (byte *)0x0;
      pbVar22 = (byte *)0x0;
      pbVar20 = param_3;
    }
    else {
      pbVar23 = param_3;
      if (uVar7 == 0x13) {
LAB_ram_4206b7bc:
        pbVar22 = (byte *)0x0;
      }
      else {
        if (10 < (uVar7 + 0x68 & 0x7f)) {
          pbVar23 = (byte *)0x0;
          goto LAB_ram_4206b7bc;
        }
        pbVar23 = (byte *)0x0;
        pbVar22 = param_3;
      }
      pbVar20 = (byte *)0x0;
    }
    pbVar24 = (byte *)0x0;
  }
  pbVar21 = (byte *)0x0;
  pbVar25 = param_3 + (int)param_4;
  pbVar19 = param_3;
LAB_ram_42069dea:
  if (pbVar25 != pbVar19) {
    uVar6 = (uint)*pbVar19;
    if ((0x3b < uVar7) || (uVar16 = param_1[1], param_1[1] = uVar16 + 1, uVar16 + 1 < 0x14001)) {
LAB_ram_4206982e:
      pbVar12 = pbVar19;
      if (uVar7 == 0x26) goto code_r0x42069836;
      if (0x26 < uVar7) {
LAB_ram_4206b09a:
        if (uVar7 == 0x34) {
          uVar16 = *param_1;
          uVar7 = uVar16 >> 0x11 & 0x7f;
          if ((uVar6 != 0x20) && (uVar6 != 9)) {
            if (uVar7 == 0x15) {
              uVar16 = uVar16 | 0x10;
LAB_ram_4206b0f6:
              *param_1 = uVar16;
            }
            else {
              if (uVar7 < 0x16) {
                if (uVar7 == 0x13) {
                  uVar16 = uVar16 | 4;
                }
                else {
                  uVar16 = uVar16 | 8;
                  if (uVar7 != 0x14) goto LAB_ram_4206b096;
                }
                goto LAB_ram_4206b0f6;
              }
              uVar16 = uVar16 | 0x20;
              if (uVar7 == 0x16) goto LAB_ram_4206b0f6;
            }
LAB_ram_4206b096:
            uVar7 = 0x2d;
            goto LAB_ram_4206b09a;
          }
          goto LAB_ram_42069afa;
        }
        if (0x34 < uVar7) {
          if (uVar7 != 0x3b) {
            if (uVar7 < 0x3c) {
              if (uVar7 == 0x38) {
                if (uVar6 == 0xd) {
                  uVar7 = 0x39;
                }
                goto LAB_ram_42069de8;
              }
              if (uVar7 < 0x39) {
                if (uVar7 == 0x36) {
                  uVar6 = (uint)*(char *)(uVar6 + 0x3c079ed4);
                  if (uVar6 != 0xffffffff) {
                    param_1[2] = uVar6;
                    param_1[3] = (int)uVar6 >> 0x1f;
                    uVar7 = 0x37;
                    goto LAB_ram_42069de8;
                  }
                }
                else {
                  if (uVar7 != 0x37) {
                    if (uVar6 != 10) {
                      param_1[5] = param_1[5] & 0x80ffffff | 0x17000000;
                      goto LAB_ram_4206ac94;
                    }
                    uVar7 = 0x34;
                    goto LAB_ram_42069de8;
                  }
                  if (uVar6 == 0xd) {
                    uVar7 = 0x39;
                    goto LAB_ram_42069de8;
                  }
                  uVar16 = (uint)*(char *)(uVar6 + 0x3c079ed4);
                  if (uVar16 != 0xffffffff) {
                    uVar6 = param_1[2];
                    uVar18 = param_1[3];
                    uVar13 = uVar6 * 0x10 + uVar16;
                    if ((0xfffffff < uVar18) || ((uVar18 == 0xfffffff && (uVar6 == 0xffffffff)))) {
                      uVar11 = param_1[5] & 0x80ffffff;
                      uVar6 = 0x19000000;
                      goto LAB_ram_420697f4;
                    }
                    param_1[2] = uVar13;
                    param_1[3] = (uint)(uVar13 < uVar16) +
                                 ((int)uVar16 >> 0x1f) + (uVar18 << 4 | uVar6 >> 0x1c);
                    goto LAB_ram_42069de8;
                  }
                  if (uVar6 == 0x3b) {
                    uVar7 = 0x38;
                    goto LAB_ram_42069de8;
                  }
                  if (uVar6 == 0x20) {
                    uVar7 = 0x38;
                    goto LAB_ram_42069de8;
                  }
                }
                uVar11 = param_1[5] & 0x80ffffff;
                uVar6 = 0x1b000000;
                goto LAB_ram_420697f4;
              }
              if (uVar7 == 0x39) {
                if (uVar6 != 10) goto LAB_ram_4206a09e;
                param_1[1] = 0;
                uVar7 = 0x3c;
                if (param_1[2] == 0 && param_1[3] == 0) {
                  *param_1 = *param_1 & 0xfffffc03 | (*param_1 >> 2 & 0xff | 0x10) << 2;
                  uVar7 = 0x2d;
                }
                pcVar9 = (code *)param_2[8];
                if (pcVar9 == (code *)0x0) goto LAB_ram_42069de8;
                *param_1 = *param_1 & 0xfffe03ff | uVar7 << 10;
                iVar3 = (*pcVar9)(param_1);
                if (iVar3 == 0) goto LAB_ram_4206a076;
                uVar6 = param_1[5] & 0x80ffffff;
                uVar7 = 0x9000000;
                goto LAB_ram_4206a072;
              }
              if (uVar6 != 10) {
                uVar6 = param_1[5];
                uVar7 = 0x1e000000;
LAB_ram_4206b1e8:
                param_1[5] = uVar6 & 0x80ffffff | uVar7;
                uVar7 = 0x3a;
                goto LAB_ram_420697f8;
              }
              uVar7 = *param_1 >> 2;
              if ((uVar7 & 0x10) != 0) {
                pcVar9 = (code *)param_2[9];
                if (pcVar9 == (code *)0x0) goto LAB_ram_42069c9e;
                *param_1 = *param_1 & 0xfffe03ff | 0x10400;
                iVar3 = (*pcVar9)(param_1);
                if (iVar3 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0xa000000;
                }
                uVar7 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_4206982e;
                goto LAB_ram_4206b1a6;
              }
              uVar6 = param_1[5];
              if (((uVar7 & 1) != 0) && ((char)uVar7 < '\0')) {
                uVar7 = 0x1a000000;
                goto LAB_ram_4206b1e8;
              }
              uVar16 = 1;
              if ((uVar7 & 0x28) != 0x28) {
                uVar16 = (uint)(*(char *)((int)param_1 + 0x16) == '\x05');
              }
              param_1[5] = uVar16 << 0x1f | uVar6 & 0x7fffffff;
              if ((code *)param_2[5] == (code *)0x0) {
LAB_ram_4206b2e6:
                if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_4206b2f2;
              }
              else {
                iVar3 = (*(code *)param_2[5])(param_1);
                if (iVar3 == 1) {
LAB_ram_4206b2de:
                  *param_1 = *param_1 | 0x100;
                  goto LAB_ram_4206b2e6;
                }
                if (iVar3 == 2) {
                  param_1[5] = param_1[5] | 0x80000000;
                  goto LAB_ram_4206b2de;
                }
                if (iVar3 == 0) goto LAB_ram_4206b2e6;
                param_1[5] = param_1[5] & 0x80ffffff | 0x5000000;
              }
              uVar7 = *param_1 & 0xfffe03ff | 0xec00;
              goto LAB_ram_4206b2d4;
            }
            if (uVar7 == 0x3f) {
              uVar17 = param_1[3];
              uVar13 = (int)pbVar25 - (int)pbVar19;
              uVar16 = (int)uVar13 >> 0x1f;
              uVar18 = param_1[2];
              if ((uVar17 < uVar16) || ((uVar16 == uVar17 && (uVar18 < uVar13)))) {
                uVar16 = uVar17;
                uVar13 = uVar18;
              }
              if (pbVar21 == (byte *)0x0) {
                pbVar21 = pbVar19;
              }
              uVar5 = uVar18 - uVar13;
              uVar16 = (uVar17 - uVar16) - (uint)(uVar18 < uVar5);
              param_1[2] = uVar5;
              param_1[3] = uVar16;
              pbVar19 = pbVar19 + (uVar13 - 1);
              pbVar12 = pbVar19;
              if (uVar5 != 0 || uVar16 != 0) goto LAB_ram_42069de8;
              if (pbVar21 != (byte *)0x0) {
                pcVar9 = (code *)param_2[6];
                if (pcVar9 != (code *)0x0) {
                  *param_1 = *param_1 & 0xfffe03ff | 0x10400;
                  iVar3 = (*pcVar9)(param_1,pbVar21,pbVar19 + (1 - (int)pbVar21));
                  if (iVar3 != 0) {
                    param_1[5] = param_1[5] & 0x80ffffff | 0x6000000;
                  }
                  uVar7 = *param_1 >> 10 & 0x7f;
                  if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206b1a6;
                  pbVar21 = (byte *)0x0;
                  goto LAB_ram_4206982e;
                }
                pbVar21 = (byte *)0x0;
              }
            }
            else {
              if (uVar7 < 0x40) {
                if (uVar7 == 0x3d) {
                  if (uVar6 != 0xd) goto LAB_ram_4206a09e;
                  if (pbVar21 == (byte *)0x0) {
                    uVar7 = 0x3e;
                    goto LAB_ram_42069de8;
                  }
                  pcVar9 = (code *)param_2[6];
                  if (pcVar9 == (code *)0x0) {
                    uVar7 = 0x3e;
                    pbVar21 = (byte *)0x0;
                    goto LAB_ram_42069de8;
                  }
                  *param_1 = *param_1 & 0xfffe03ff | 0xf800;
                  iVar3 = (*pcVar9)(param_1,pbVar21,(int)pbVar19 - (int)pbVar21);
                  if (iVar3 != 0) {
                    param_1[5] = param_1[5] & 0x80ffffff | 0x6000000;
                  }
                  uVar7 = *param_1 >> 10 & 0x7f;
                  if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206a272;
                  pbVar21 = (byte *)0x0;
                }
                else {
                  if (uVar7 == 0x3e) {
                    if (uVar6 != 10) goto LAB_ram_4206a09e;
                    pcVar9 = (code *)param_2[9];
                    param_1[1] = 0;
                    if (pcVar9 == (code *)0x0) {
                      uVar7 = 0x36;
                      goto LAB_ram_42069de8;
                    }
                    *param_1 = *param_1 & 0xfffe03ff | 0xd800;
                    iVar3 = (*pcVar9)(param_1);
                    if (iVar3 == 0) goto LAB_ram_4206a076;
                    uVar6 = param_1[5] & 0x80ffffff;
                    uVar7 = 0xa000000;
                    goto LAB_ram_4206a072;
                  }
                  uVar13 = param_1[3];
                  uVar6 = (int)pbVar25 - (int)pbVar19;
                  uVar7 = (int)uVar6 >> 0x1f;
                  uVar16 = param_1[2];
                  if ((uVar13 < uVar7) || ((uVar7 == uVar13 && (uVar16 < uVar6)))) {
                    uVar7 = uVar13;
                    uVar6 = uVar16;
                  }
                  if (pbVar21 == (byte *)0x0) {
                    pbVar21 = pbVar19;
                  }
                  uVar18 = uVar16 - uVar6;
                  uVar7 = (uVar13 - uVar7) - (uint)(uVar16 < uVar18);
                  param_1[2] = uVar18;
                  param_1[3] = uVar7;
                  uVar7 = (uVar18 == 0 && uVar7 == 0) + 0x3c;
                  pbVar12 = pbVar19 + (uVar6 - 1);
                }
                goto LAB_ram_42069de8;
              }
              if (uVar7 == 0x40) {
                if (pbVar21 != (byte *)0x0) {
                  pbVar19 = pbVar21;
                }
                pbVar12 = param_3 + (int)(param_4 + -1);
                pbVar21 = pbVar19;
                goto LAB_ram_42069de8;
              }
              if (uVar7 != 0x41) goto LAB_ram_42069894;
            }
LAB_ram_42069c9e:
            iVar3 = FUN_ram_420696aa(param_1);
            uVar7 = 1;
            if (iVar3 != 0) {
              uVar7 = (-(uint)((*param_1 & 3) != 0) & 0xfffffff0) + 0x15;
            }
            pcVar9 = (code *)param_2[7];
            if (pcVar9 != (code *)0x0) {
              *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
              iVar3 = (*pcVar9)(param_1);
              if (iVar3 != 0) {
                param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
              }
              uVar7 = *param_1 >> 10 & 0x7f;
              if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206a272;
            }
            pbVar12 = pbVar19;
            if (-1 < (int)param_1[5]) goto LAB_ram_42069de8;
            *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
            goto LAB_ram_4206a272;
          }
          if (uVar6 != 10) goto LAB_ram_4206a09e;
LAB_ram_4206b2f2:
          uVar6 = *param_1;
          param_1[1] = 0;
          uVar7 = uVar6 >> 2;
          bVar15 = true;
          if ((((uVar7 & 1) == 0) && (param_1[3] + 1 == (uint)(param_1[2] == 0))) &&
             (0xfffffffd < param_1[2] - 1)) {
            bVar15 = false;
          }
          if ((int)param_1[5] < 0) {
            if (((*(char *)((int)param_1 + 0x16) == '\x05') || ((uVar7 & 0x40) != 0)) || (!bVar15))
            {
              iVar3 = FUN_ram_420696aa(param_1);
              uVar7 = 1;
              if (iVar3 != 0) {
                uVar7 = (-(uint)((uVar6 & 3) != 0) & 0xfffffff0) + 0x15;
              }
              pcVar9 = (code *)param_2[7];
              if (pcVar9 != (code *)0x0) {
                *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
                iVar3 = (*pcVar9)(param_1);
                if (iVar3 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
                }
                uVar7 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206b39e;
              }
              *param_1 = (uVar7 & 0x7f) << 10 | *param_1 & 0xfffe03ff;
LAB_ram_4206b39e:
              return pbVar19 + (1 - (int)param_3);
            }
LAB_ram_4206b41e:
            if ((uVar7 & 1) != 0) {
              uVar7 = 0x36;
              goto LAB_ram_42069de8;
            }
            if (param_1[2] == 0 && param_1[3] == 0) goto LAB_ram_4206b3ca;
            if ((param_1[2] != 0xffffffff) || (param_1[3] != 0xffffffff)) {
              uVar7 = 0x3f;
              goto LAB_ram_42069de8;
            }
            iVar3 = FUN_ram_4206965e(param_1);
            if (iVar3 != 0) {
              uVar7 = 0x40;
              goto LAB_ram_42069de8;
            }
            iVar3 = FUN_ram_420696aa(param_1);
          }
          else {
            if ((uVar7 & 0x40) == 0) goto LAB_ram_4206b41e;
LAB_ram_4206b3ca:
            iVar3 = FUN_ram_420696aa(param_1);
          }
          uVar7 = 1;
          if (iVar3 != 0) {
            uVar7 = (-(uint)((uVar6 & 3) != 0) & 0xfffffff0) + 0x15;
          }
          pcVar9 = (code *)param_2[7];
          if (pcVar9 == (code *)0x0) goto LAB_ram_42069de8;
          *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
          iVar3 = (*pcVar9)(param_1);
          if (iVar3 == 0) goto LAB_ram_4206a076;
          uVar6 = param_1[5] & 0x80ffffff;
          uVar7 = 0x7000000;
          goto LAB_ram_4206a072;
        }
        if (uVar7 == 0x2d) {
          if (uVar6 == 0xd) {
            uVar7 = 0x3a;
            goto LAB_ram_42069de8;
          }
          if (uVar6 != 10) {
            bVar1 = *(byte *)(uVar6 + 0x3c079fd4);
            if (bVar1 == 0) {
              uVar11 = param_1[5] & 0x80ffffff;
              uVar6 = 0x18000000;
              goto LAB_ram_420697f4;
            }
            if (pbVar24 == (byte *)0x0) {
              pbVar24 = pbVar19;
            }
            sVar10 = 7;
            if (bVar1 != 0x74) {
              if (bVar1 < 0x75) {
                sVar10 = 1;
                if ((bVar1 != 99) && (sVar10 = 0, bVar1 == 0x70)) {
                  sVar10 = 5;
                }
              }
              else {
                sVar10 = (ushort)(bVar1 == 0x75) << 3;
              }
            }
            *(ushort *)((int)param_1 + 2) = *(ushort *)((int)param_1 + 2) & 0x8001 | sVar10 << 1;
            uVar7 = 0x2e;
            goto LAB_ram_42069de8;
          }
          uVar7 = 0x3a;
          goto LAB_ram_4206b09a;
        }
        if (uVar7 < 0x2e) {
          if (uVar7 == 0x2a) {
            if (9 < (uVar6 - 0x30 & 0xff)) goto LAB_ram_4206a0fa;
            *(short *)((int)param_1 + 0x12) = (short)(uVar6 - 0x30);
            uVar7 = 0x2b;
            goto LAB_ram_42069de8;
          }
          if (0x2a < uVar7) {
            if (uVar7 != 0x2b) {
              if (uVar6 == 10) {
                uVar7 = 0x2d;
                goto LAB_ram_42069de8;
              }
              param_1[5] = param_1[5] & 0x80ffffff | 0x17000000;
              uVar7 = 0x2c;
              goto LAB_ram_420697f8;
            }
            if (uVar6 == 0xd) {
              uVar7 = 0x2c;
            }
            else {
              if (uVar6 != 10) goto LAB_ram_4206a14e;
              uVar7 = 0x2d;
            }
            goto LAB_ram_42069de8;
          }
          if (uVar7 == 0x28) {
            if (8 < (uVar6 - 0x31 & 0xff)) goto LAB_ram_4206a0fa;
            *(short *)(param_1 + 4) = (short)uVar6 + -0x30;
            uVar7 = 0x29;
            goto LAB_ram_42069de8;
          }
          if (uVar7 != 0x29) {
            if (uVar6 == 0x2f) {
              uVar7 = 0x28;
              goto LAB_ram_42069de8;
            }
            param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
            uVar7 = 0x27;
            goto LAB_ram_420697f8;
          }
          if (uVar6 != 0x2e) goto LAB_ram_420698f0;
          uVar7 = 0x2a;
          goto LAB_ram_42069de8;
        }
        if (uVar7 != 0x31) {
          if (uVar7 < 0x32) {
            if (uVar7 == 0x2f) {
              if (uVar6 == 0xd) {
                uVar7 = 0x30;
                goto LAB_ram_42069de8;
              }
              if (uVar6 < 0xe) {
                if (uVar6 == 9) goto LAB_ram_42069de8;
                uVar16 = 10;
                uVar7 = 0x31;
              }
              else {
                uVar16 = 0x20;
              }
              if (uVar6 != uVar16) goto LAB_ram_42069afa;
            }
            else {
              if (uVar7 != 0x30) goto LAB_ram_42069ac6;
              if (uVar6 != 10) goto LAB_ram_4206a09e;
              uVar7 = 0x31;
            }
            goto LAB_ram_42069de8;
          }
          if (uVar7 != 0x32) {
            uVar6 = *param_1 >> 0x11 & 0x7f;
            goto LAB_ram_4206aba2;
          }
LAB_ram_42069afa:
          if (pbVar20 == (byte *)0x0) {
            pbVar20 = pbVar19;
          }
          uVar13 = *param_1;
          uVar18 = uVar13 & 0x80ffffff;
          *param_1 = uVar18;
          uVar16 = uVar18 >> 0x11 & 0x7f;
          uVar7 = uVar6 | 0x20;
          if (uVar16 == 0xb) {
            uVar16 = uVar13 & 0x8001ffff;
            uVar6 = 0x1a0000;
            if (uVar7 == 99) goto LAB_ram_4206ab5a;
LAB_ram_4206ab1a:
            *param_1 = uVar16;
          }
          else if (uVar16 < 0xc) {
            if (uVar16 == 9) {
              if (uVar7 == 0x6b) {
                uVar6 = 0x1e0000;
              }
              else if (uVar7 == 99) {
                uVar6 = 0x200000;
              }
              else {
                if (uVar7 != 0x75) {
                  uVar18 = uVar13 & 0x8001ffff | 0x240000;
                  goto LAB_ram_4206ab02;
                }
                uVar6 = 0x220000;
              }
LAB_ram_4206ab5a:
              uVar16 = uVar13 & 0x8001ffff | uVar6;
              goto LAB_ram_4206ab1a;
            }
            if (uVar16 != 10) {
LAB_ram_42069b32:
              uVar18 = *param_1;
              goto LAB_ram_4206aafa;
            }
            uVar6 = uVar6 - 0x30;
            if (9 < (uVar6 & 0xff)) {
              param_1[5] = param_1[5] & 0x80ffffff | 0x19000000;
              goto LAB_ram_4206ab36;
            }
            param_1[2] = uVar6;
            param_1[3] = (int)uVar6 >> 0x1f;
          }
          else if (uVar16 == 0xc) {
            uVar18 = uVar18 | 0x80;
LAB_ram_4206aafa:
            uVar18 = uVar18 & 0xff01ffff;
LAB_ram_4206ab02:
            *param_1 = uVar18;
          }
          else if (uVar16 != 0xe) goto LAB_ram_42069b32;
          uVar7 = 0x33;
          goto LAB_ram_42069de8;
        }
        if (uVar6 == 0x20) {
          uVar7 = 0x2f;
          goto LAB_ram_42069de8;
        }
        if (uVar6 == 9) {
          uVar7 = 0x2f;
          goto LAB_ram_42069de8;
        }
        uVar7 = *param_1 >> 0x11 & 0x7f;
        if (uVar7 == 0x15) {
          *param_1 = *param_1 | 0x10;
        }
        else {
          if (uVar7 < 0x16) {
            if (uVar7 == 0x13) {
              uVar7 = *param_1 | 4;
            }
            else {
              if (uVar7 != 0x14) goto LAB_ram_4206b144;
              uVar7 = *param_1 | 8;
            }
          }
          else {
            if (uVar7 != 0x16) goto LAB_ram_4206b144;
            uVar7 = *param_1 | 0x20;
          }
          *param_1 = uVar7;
        }
LAB_ram_4206b144:
        pbVar4 = pbVar20;
        if ((pbVar20 == (byte *)0x0) && (uVar7 = 0x2d, pbVar4 = pbVar19, pbVar19 == (byte *)0x0))
        goto LAB_ram_4206b09a;
        pcVar9 = (code *)param_2[4];
        if (pcVar9 == (code *)0x0) {
          uVar7 = 0x2d;
          pbVar20 = (byte *)0x0;
          goto LAB_ram_4206b09a;
        }
        *param_1 = *param_1 & 0xfffe03ff | 0xb400;
        iVar3 = (*pcVar9)(param_1,pbVar4,(int)pbVar19 - (int)pbVar4);
        if (iVar3 != 0) {
          param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
        }
        uVar7 = *param_1;
        if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_4206982c;
        goto LAB_ram_4206b1a6;
      }
      if (uVar7 == 0xf) {
        if (uVar6 == 0x20) {
          uVar7 = 0x10;
          goto LAB_ram_42069de8;
        }
LAB_ram_4206a14e:
        if ((uVar6 - 0x30 & 0xff) < 10) {
          uVar6 = (uint)*(ushort *)((int)param_1 + 0x12) * 10 + -0x30 + uVar6;
          *(short *)((int)param_1 + 0x12) = (short)(uVar6 * 0x10000 >> 0x10);
LAB_ram_42069916:
          if ((uVar6 & 0xffff) < 1000) goto LAB_ram_42069de8;
        }
LAB_ram_4206a0fa:
        uVar11 = param_1[5] & 0x80ffffff;
        uVar6 = 0xe000000;
        goto LAB_ram_420697f4;
      }
      if (uVar7 < 0x10) {
        if (uVar7 == 8) {
          if (uVar6 != 0x54) goto LAB_ram_4206a09e;
          uVar7 = 9;
          goto LAB_ram_42069de8;
        }
        if (8 < uVar7) {
          if (uVar7 != 0xc) {
            if (0xc < uVar7) {
              if (uVar7 == 0xd) {
                if (uVar6 != 0x2e) {
LAB_ram_420698f0:
                  if ((uVar6 - 0x30 & 0xff) < 10) {
                    uVar6 = (uint)(ushort)param_1[4] * 10 + -0x30 + uVar6;
                    *(short *)(param_1 + 4) = (short)(uVar6 * 0x10000 >> 0x10);
                    goto LAB_ram_42069916;
                  }
                  goto LAB_ram_4206a0fa;
                }
                uVar7 = 0xe;
                goto LAB_ram_42069de8;
              }
              if (9 < (uVar6 - 0x30 & 0xff)) {
                param_1[5] = param_1[5] & 0x80ffffff | 0xe000000;
                uVar7 = 0xe;
                goto LAB_ram_420697f8;
              }
              *(short *)((int)param_1 + 0x12) = (short)(uVar6 - 0x30);
              uVar7 = 0xf;
              goto LAB_ram_42069de8;
            }
            if (uVar7 == 10) {
              if (uVar6 != 0x50) goto LAB_ram_4206a09e;
              uVar7 = 0xb;
              goto LAB_ram_42069de8;
            }
            if (uVar7 != 0xb) {
              if (uVar6 == 0x54) {
                uVar7 = 10;
                goto LAB_ram_42069de8;
              }
              param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
              uVar7 = 9;
              goto LAB_ram_420697f8;
            }
            if (uVar6 != 0x2f) goto LAB_ram_4206a09e;
            uVar7 = 0xc;
            goto LAB_ram_42069de8;
          }
          if ((uVar6 - 0x30 & 0xff) < 10) {
            *(short *)(param_1 + 4) = (short)(uVar6 - 0x30);
            uVar7 = 0xd;
            goto LAB_ram_42069de8;
          }
          goto LAB_ram_4206a0fa;
        }
        if (uVar7 == 4) {
          if (uVar6 == 0x54) {
            uVar7 = 9;
            *param_1 = *param_1 & 0xfffffffc | 1;
            goto LAB_ram_42069de8;
          }
          if (uVar6 == 0x45) {
            *(undefined1 *)((int)param_1 + 0x16) = 2;
            *param_1 = *param_1 & 0x80fffffc | 0x2000000;
            uVar7 = 0x16;
            goto LAB_ram_42069de8;
          }
LAB_ram_42069fc8:
          uVar11 = param_1[5] & 0x80ffffff;
          uVar6 = 0x1c000000;
          goto LAB_ram_420697f4;
        }
        if (uVar7 < 5) {
          if (uVar7 != 2) {
            if (uVar7 == 3) {
              if (uVar6 == 0x43) {
                uVar7 = 7;
                *param_1 = *param_1 & 0xfffffffc | 1;
              }
              goto LAB_ram_42069de8;
            }
            if (uVar7 == 1) {
              if ((uVar6 == 0xd) || (uVar6 == 10)) goto LAB_ram_42069de8;
              uVar11 = param_1[5] & 0x80ffffff;
              uVar6 = 0xd000000;
            }
            else {
              uVar7 = 0;
LAB_ram_42069894:
              uVar11 = param_1[5] & 0x80ffffff;
              uVar6 = 0x1d000000;
            }
            goto LAB_ram_420697f4;
          }
          if ((uVar6 == 0xd) || (uVar6 == 10)) goto LAB_ram_42069de8;
          uVar7 = *param_1;
          param_1[3] = 0xffffffff;
          *param_1 = uVar7 & 0xfffffc03;
          param_1[2] = 0xffffffff;
          if (uVar6 == 0x48) {
            pcVar9 = (code *)*param_2;
            if (pcVar9 != (code *)0x0) {
              uVar7 = uVar7 & 0xfffe0003;
              uVar6 = 0x1000;
              goto LAB_ram_42069d70;
            }
            uVar7 = 4;
            goto LAB_ram_42069de8;
          }
          if (uVar6 != 0x49) {
            *param_1 = uVar7 & 0xfffffc00;
            goto LAB_ram_42069d9c;
          }
          pcVar9 = (code *)*param_2;
          if (pcVar9 == (code *)0x0) {
            uVar7 = 3;
            goto LAB_ram_42069de8;
          }
          uVar7 = uVar7 & 0xfffe0003;
          uVar6 = 0xc00;
          goto LAB_ram_42069d70;
        }
        if (uVar7 == 6) {
          if (uVar6 != 0x43) goto LAB_ram_4206a09e;
          uVar7 = 7;
          goto LAB_ram_42069de8;
        }
        if (uVar7 == 7) {
          if (uVar6 != 0x59) goto LAB_ram_4206a09e;
          uVar7 = 0xf;
          goto LAB_ram_42069de8;
        }
        param_1[2] = 0xffffffff;
        *param_1 = *param_1 & 0xfffffc03;
        param_1[3] = 0xffffffff;
        if (uVar6 == 0x48) {
          uVar7 = 8;
        }
        else if (uVar6 < 0x49) {
          if ((uVar6 != 10) && (uVar6 != 0xd)) {
LAB_ram_4206a01c:
            param_1[5] = param_1[5] & 0x80ffffff | 0x1c000000;
            uVar7 = 5;
            goto LAB_ram_420697f8;
          }
          uVar7 = 5;
        }
        else {
          if (uVar6 != 0x49) goto LAB_ram_4206a01c;
          uVar7 = 6;
        }
        pcVar9 = (code *)*param_2;
        if (pcVar9 == (code *)0x0) goto LAB_ram_42069de8;
        uVar7 = *param_1 & 0xfffe03ff | uVar7 << 10;
      }
      else {
        if (uVar7 == 0x16) {
          if (uVar6 == 0) {
LAB_ram_4206a3ec:
            uVar11 = param_1[5] & 0x80ffffff;
            uVar6 = 0x10000000;
            goto LAB_ram_420697f4;
          }
          uVar18 = (uint)*(byte *)((int)param_1 + 0x16);
          uVar13 = *param_1 >> 0x18 & 0x7f;
          uVar16 = (uint)*(byte *)(*(int *)(uVar18 * 4 + 0x3c07a0d4) + uVar13);
          if (uVar6 == 0x20) {
            if (uVar16 == 0) {
              uVar7 = 0x17;
            }
            else if (uVar16 != 0x20) goto LAB_ram_4206a3ec;
          }
          else if (uVar6 != uVar16) {
            if (((uVar6 | 0x20) - 0x61 & 0xff) < 0x1a) {
              uVar6 = uVar18 << 0x10 | uVar13 << 8 | uVar6;
              if (uVar6 == 0xa014f) {
                uVar14 = 0xb;
              }
              else if (uVar6 < 0xa0150) {
                if (uVar6 == 0x50148) {
                  uVar14 = 0x16;
                }
                else if (uVar6 < 0x50149) {
                  if (uVar6 == 0x30155) {
                    uVar14 = 4;
                  }
                  else if (uVar6 < 0x30156) {
                    if (uVar6 == 0x30141) {
                      uVar14 = 0x1c;
                    }
                    else {
                      if (uVar6 != 0x30152) goto LAB_ram_4206a3ec;
                      uVar14 = 0xc;
                    }
                  }
                  else {
                    if (uVar6 != 0x40252) goto LAB_ram_4206a3ec;
                    uVar14 = 0x1d;
                  }
                }
                else if (uVar6 == 0x90149) {
                  uVar14 = 0x1f;
                }
                else if (uVar6 == 0xa0145) {
                  uVar14 = 0x17;
                }
                else {
                  if (uVar6 != 0x50250) goto LAB_ram_4206a3ec;
                  uVar14 = 8;
                }
              }
              else if (uVar6 == 0xf0253) {
                uVar14 = 0x1b;
              }
              else if (uVar6 < 0xf0254) {
                if (uVar6 == 0xc0450) {
                  uVar14 = 0xd;
                }
                else if (uVar6 < 0xc0451) {
                  if (uVar6 == 0xa0241) {
                    uVar14 = 0x15;
                  }
                  else {
                    if (uVar6 != 0xa0341) goto LAB_ram_4206a3ec;
                    uVar14 = 0x1e;
                  }
                }
                else {
                  if (uVar6 != 0xf0242) goto LAB_ram_4206a3ec;
                  uVar14 = 0x12;
                }
              }
              else if (uVar6 == 0x140242) {
                uVar14 = 0x11;
              }
              else if (uVar6 == 0x1a0145) {
                uVar14 = 0xe;
              }
              else {
                if (uVar6 != 0xf0349) goto LAB_ram_4206a3ec;
                uVar14 = 0x20;
              }
            }
            else {
              if (((uVar6 != 0x2d) || ((*param_1 & 0x7f000000) != 0x1000000)) || (uVar18 != 10))
              goto LAB_ram_4206a3ec;
              uVar14 = 0x18;
            }
            *(undefined1 *)((int)param_1 + 0x16) = uVar14;
          }
          *param_1 = *param_1 & 0x80ffffff | (uVar13 + 1 & 0x7f) << 0x18;
          goto LAB_ram_42069de8;
        }
        if (0x16 < uVar7) {
          if (uVar7 == 0x23) {
            if (uVar6 != 0x20) {
              if (uVar6 != 0x48) goto LAB_ram_42069fc8;
              uVar7 = 0x24;
            }
            goto LAB_ram_42069de8;
          }
          if (0x23 < uVar7) {
            if (uVar7 != 0x24) {
              if (uVar6 == 0x54) {
                uVar7 = 0x26;
                goto LAB_ram_42069de8;
              }
              param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
              uVar7 = 0x25;
              goto LAB_ram_420697f8;
            }
            if (uVar6 != 0x54) goto LAB_ram_4206a09e;
            uVar7 = 0x25;
            goto LAB_ram_42069de8;
          }
          if (0x1b < uVar7) {
            if (uVar6 != 0xd) {
              if (uVar6 == 0x20) {
                if (pbVar22 == (byte *)0x0) {
                  uVar7 = 0x23;
                }
                else {
                  pcVar9 = (code *)param_2[1];
                  if (pcVar9 == (code *)0x0) {
                    uVar7 = 0x23;
                    pbVar22 = (byte *)0x0;
                  }
                  else {
                    *param_1 = *param_1 & 0xfffe03ff | 0x8c00;
                    iVar3 = (*pcVar9)(param_1,pbVar22,(int)pbVar19 - (int)pbVar22);
                    if (iVar3 != 0) {
                      param_1[5] = param_1[5] & 0x80ffffff | 0x2000000;
                    }
                    uVar7 = *param_1 >> 10 & 0x7f;
                    if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206a272;
                    pbVar22 = (byte *)0x0;
                  }
                }
                goto LAB_ram_42069de8;
              }
              if (uVar6 != 10) goto LAB_ram_420699b0;
            }
            param_1[4] = 0x90000;
            uVar7 = (uVar6 != 0xd) + 0x2c;
            if (pbVar22 != (byte *)0x0) {
              pcVar9 = (code *)param_2[1];
              if (pcVar9 == (code *)0x0) {
                pbVar22 = (byte *)0x0;
              }
              else {
                *param_1 = uVar7 * 0x400 | *param_1 & 0xfffe03ff;
                iVar3 = (*pcVar9)(param_1,pbVar22,(int)pbVar19 - (int)pbVar22);
                if (iVar3 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x2000000;
                }
                uVar7 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206a272;
                pbVar22 = (byte *)0x0;
              }
            }
            goto LAB_ram_42069de8;
          }
          if (uVar7 == 0x17) {
            if (uVar6 == 0x20) goto LAB_ram_42069de8;
            if (pbVar22 == (byte *)0x0) {
              pbVar22 = pbVar19;
            }
            uVar8 = 0x17;
            if (*(char *)((int)param_1 + 0x16) == '\x05') {
              uVar8 = 0x1b;
            }
            uVar7 = FUN_ram_42069450(uVar8,uVar6);
            if (uVar7 != 1) goto LAB_ram_42069de8;
          }
          else if ((0x16 < (uVar6 - 10 & 0xff)) || ((0x400009U >> (uVar6 - 10 & 0x1f) & 1) == 0)) {
LAB_ram_420699b0:
            uVar7 = FUN_ram_42069450(uVar7,uVar6);
            if (uVar7 != 1) goto LAB_ram_42069de8;
            param_1[5] = param_1[5] & 0x80ffffff | 0x11000000;
            uVar7 = 1;
            goto LAB_ram_420697f8;
          }
          uVar11 = param_1[5] & 0x80ffffff;
          uVar6 = 0x11000000;
          goto LAB_ram_420697f4;
        }
        if (uVar7 == 0x13) {
          if (uVar6 != 0xd) {
            if (uVar6 == 10) {
              if (pbVar23 == (byte *)0x0) {
                uVar7 = 0x2d;
              }
              else {
                pcVar9 = (code *)param_2[2];
                if (pcVar9 == (code *)0x0) {
                  uVar7 = 0x2d;
                  pbVar23 = (byte *)0x0;
                }
                else {
                  *param_1 = *param_1 & 0xfffe03ff | 0xb400;
                  iVar3 = (*pcVar9)(param_1,pbVar23,(int)pbVar19 - (int)pbVar23);
                  if (iVar3 != 0) {
                    param_1[5] = param_1[5] & 0x80ffffff | 0x8000000;
                  }
                  uVar7 = *param_1 >> 10 & 0x7f;
                  if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206a272;
                  pbVar23 = (byte *)0x0;
                }
              }
            }
            goto LAB_ram_42069de8;
          }
          if (pbVar23 == (byte *)0x0) {
            uVar7 = 0x14;
            goto LAB_ram_42069de8;
          }
          pcVar9 = (code *)param_2[2];
          if (pcVar9 == (code *)0x0) {
            uVar7 = 0x14;
            pbVar23 = (byte *)0x0;
            goto LAB_ram_42069de8;
          }
          *param_1 = *param_1 & 0xfffe03ff | 0x5000;
          iVar3 = (*pcVar9)(param_1,pbVar23,(int)pbVar19 - (int)pbVar23);
          if (iVar3 != 0) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x8000000;
          }
          uVar7 = *param_1 >> 10 & 0x7f;
          if ((param_1[5] >> 0x18 & 0x7f) == 0) {
            pbVar23 = (byte *)0x0;
            goto LAB_ram_42069de8;
          }
          goto LAB_ram_4206a272;
        }
        if (uVar7 < 0x14) {
          if (uVar7 != 0x11) {
            if (uVar7 == 0x12) {
              uVar7 = 0x14;
              if ((uVar6 != 0xd) && (uVar7 = 0x2d, uVar6 != 10)) {
                if (pbVar23 == (byte *)0x0) {
                  pbVar23 = pbVar19;
                }
                *param_1 = *param_1 & 0x80ffffff;
                uVar7 = 0x13;
              }
              goto LAB_ram_42069de8;
            }
            if ((uVar6 - 0x30 & 0xff) < 10) {
              *(short *)(param_1 + 5) = (short)(uVar6 - 0x30);
              uVar7 = 0x11;
              goto LAB_ram_42069de8;
            }
            if (uVar6 == 0x20) {
              uVar7 = 0x10;
              goto LAB_ram_42069de8;
            }
            param_1[5] = param_1[5] & 0x80ffffff | 0xf000000;
            uVar7 = 0x10;
            goto LAB_ram_420697f8;
          }
          if ((uVar6 - 0x30 & 0xff) < 10) {
            uVar6 = (uint)(ushort)param_1[5] * 10 + -0x30 + uVar6;
            *(short *)(param_1 + 5) = (short)(uVar6 * 0x10000 >> 0x10);
            if ((uVar6 & 0xffff) < 1000) goto LAB_ram_42069de8;
          }
          else {
            if (uVar6 == 0xd) {
              uVar7 = 0x14;
              goto LAB_ram_42069de8;
            }
            if (uVar6 == 0x20) {
              uVar7 = 0x12;
              goto LAB_ram_42069de8;
            }
            if (uVar6 == 10) {
              uVar7 = 0x2d;
              goto LAB_ram_42069de8;
            }
          }
          uVar11 = param_1[5] & 0x80ffffff;
          uVar6 = 0xf000000;
          goto LAB_ram_420697f4;
        }
        if (uVar7 == 0x14) {
          if (uVar6 != 10) goto LAB_ram_4206a09e;
          uVar7 = 0x2d;
          goto LAB_ram_42069de8;
        }
        if (uVar6 == 0xd) {
          uVar7 = 0x15;
          goto LAB_ram_42069de8;
        }
        if (uVar6 == 10) {
          uVar7 = 0x15;
          goto LAB_ram_42069de8;
        }
LAB_ram_42069d9c:
        uVar7 = *param_1;
        param_1[2] = 0xffffffff;
        param_1[3] = 0xffffffff;
        *param_1 = uVar7 & 0xfffffc03;
        if (0x19 < ((uVar6 | 0x20) - 0x61 & 0xff)) {
          uVar7 = param_1[5];
LAB_ram_42069dc8:
          param_1[5] = uVar7 & 0x80ffffff | 0x10000000;
          uVar7 = 0x15;
          goto LAB_ram_420697f8;
        }
        *param_1 = uVar7 & 0x80fffc03 | 0x1000000;
        *(undefined1 *)((int)param_1 + 0x16) = 0;
        if (uVar6 == 0x4d) {
          uVar14 = 10;
LAB_ram_4206a3bc:
          *(undefined1 *)((int)param_1 + 0x16) = uVar14;
        }
        else {
          if (0x4d < uVar6) {
            if (uVar6 == 0x52) {
              uVar14 = 0x14;
            }
            else if (uVar6 < 0x53) {
              if (uVar6 == 0x4f) {
                uVar14 = 6;
              }
              else {
                if (uVar6 != 0x50) {
                  if (uVar6 != 0x4e) goto LAB_ram_4206a332;
                  *(undefined1 *)((int)param_1 + 0x16) = 0x19;
                  goto LAB_ram_4206a382;
                }
                uVar14 = 3;
              }
            }
            else if (uVar6 == 0x54) {
              uVar14 = 7;
            }
            else if (uVar6 == 0x55) {
              uVar14 = 0xf;
            }
            else {
              if (uVar6 != 0x53) goto LAB_ram_4206a332;
              uVar14 = 0x1a;
            }
            goto LAB_ram_4206a3bc;
          }
          if (uVar6 != 0x44) {
            if (uVar6 < 0x45) {
              if (uVar6 == 0x42) {
                uVar14 = 0x10;
              }
              else if (uVar6 == 0x43) {
                uVar14 = 5;
              }
              else {
                if (uVar6 != 0x41) {
LAB_ram_4206a332:
                  uVar7 = param_1[5];
                  goto LAB_ram_42069dc8;
                }
                uVar14 = 0x13;
              }
            }
            else if (uVar6 == 0x48) {
              uVar14 = 2;
            }
            else if (uVar6 == 0x4c) {
              uVar14 = 9;
            }
            else {
              if (uVar6 != 0x47) goto LAB_ram_4206a332;
              uVar14 = 1;
            }
            goto LAB_ram_4206a3bc;
          }
        }
LAB_ram_4206a382:
        pcVar9 = (code *)*param_2;
        if (pcVar9 == (code *)0x0) {
          uVar7 = 0x16;
          goto LAB_ram_42069de8;
        }
        uVar7 = *param_1 & 0xfffe03ff;
        uVar6 = 0x5800;
LAB_ram_42069d70:
        uVar7 = uVar7 | uVar6;
      }
      *param_1 = uVar7;
      iVar3 = (*pcVar9)(param_1);
      if (iVar3 != 0) {
        uVar6 = param_1[5] & 0x80ffffff;
        uVar7 = 0x1000000;
LAB_ram_4206a072:
        param_1[5] = uVar6 | uVar7;
      }
LAB_ram_4206a076:
      uVar7 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_42069de8;
LAB_ram_4206a272:
      return pbVar19 + (1 - (int)param_3);
    }
    uVar11 = param_1[5] & 0x80ffffff;
    uVar6 = 0xc000000;
    goto LAB_ram_420697f4;
  }
  if ((pbVar24 == (byte *)0x0) || (pcVar9 = (code *)param_2[3], pcVar9 == (code *)0x0)) {
LAB_ram_42069e42:
    if ((pbVar20 != (byte *)0x0) && (pcVar9 = (code *)param_2[4], pcVar9 != (code *)0x0)) {
      *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
      iVar3 = (*pcVar9)(param_1,pbVar20,(int)pbVar19 - (int)pbVar20);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
      }
      uVar7 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206b1a6;
    }
    if ((pbVar22 != (byte *)0x0) && (pcVar9 = (code *)param_2[1], pcVar9 != (code *)0x0)) {
      *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
      iVar3 = (*pcVar9)(param_1,pbVar22,(int)pbVar19 - (int)pbVar22);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x2000000;
      }
      uVar7 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206b1a6;
    }
    if ((pbVar21 != (byte *)0x0) && (pcVar9 = (code *)param_2[6], pcVar9 != (code *)0x0)) {
      *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
      iVar3 = (*pcVar9)(param_1,pbVar21,(int)pbVar19 - (int)pbVar21);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x6000000;
      }
      uVar7 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206b1a6;
    }
    if ((pbVar23 != (byte *)0x0) && (pcVar9 = (code *)param_2[2], pcVar9 != (code *)0x0)) {
      *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
      iVar3 = (*pcVar9)(param_1,pbVar23,(int)pbVar19 - (int)pbVar23);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x8000000;
      }
      uVar7 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4206b1a6;
    }
    *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
  }
  else {
    *param_1 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
    iVar3 = (*pcVar9)(param_1,pbVar24,(int)pbVar19 - (int)pbVar24);
    if (iVar3 != 0) {
      param_1[5] = param_1[5] & 0x80ffffff | 0x3000000;
    }
    uVar7 = *param_1 >> 10 & 0x7f;
    if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_42069e42;
LAB_ram_4206b1a6:
    param_4 = pbVar19 + -(int)param_3;
  }
  return param_4;
code_r0x42069836:
  if (uVar6 == 0x50) {
    uVar7 = 0x27;
    goto LAB_ram_42069de8;
  }
LAB_ram_4206a09e:
  uVar11 = param_1[5] & 0x80ffffff;
  uVar6 = 0x1e000000;
LAB_ram_420697f4:
  param_1[5] = uVar11 | uVar6;
  goto LAB_ram_420697f8;
LAB_ram_4206aba2:
  if (pbVar25 == pbVar12) {
    uVar7 = 0x33;
LAB_ram_4206abaa:
    *param_1 = uVar6 << 0x11 | *param_1 & 0xff01ffff;
    uVar6 = param_1[1];
    param_1[1] = (uint)(pbVar12 + (uVar6 - (int)pbVar19));
    if ((byte *)0x14000 < pbVar12 + (uVar6 - (int)pbVar19)) {
      param_1[5] = param_1[5] & 0x80ffffff | 0xc000000;
      pbVar19 = pbVar12;
      goto LAB_ram_420697f8;
    }
    if (pbVar25 == pbVar12) {
      pbVar12 = pbVar25 + -1;
    }
    goto LAB_ram_42069de8;
  }
  uVar7 = (uint)*pbVar12;
  if (uVar7 == 0xd) {
    uVar7 = *param_1;
    *param_1 = uVar7 & 0xff01ffff | uVar6 << 0x11;
    if (pbVar20 == (byte *)0x0) {
      uVar7 = 0x35;
    }
    else {
      pcVar9 = (code *)param_2[4];
      if (pcVar9 == (code *)0x0) {
        uVar7 = 0x35;
      }
      else {
        *param_1 = uVar7 & 0xff0003ff | uVar6 << 0x11 | 0xd400;
        iVar3 = (*pcVar9)(param_1,pbVar20,(int)pbVar12 - (int)pbVar20);
        if (iVar3 != 0) {
          param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
        }
        uVar7 = *param_1 >> 10 & 0x7f;
        if ((param_1[5] >> 0x18 & 0x7f) != 0) {
          return pbVar12 + (1 - (int)param_3);
        }
      }
      pbVar20 = (byte *)0x0;
    }
    goto LAB_ram_4206abaa;
  }
  if (uVar7 == 10) goto code_r0x4206ac6e;
  if ((((int)uVar11 < 0) || (uVar7 == 9)) || ((0x1f < uVar7 && (uVar7 != 0x7f)))) {
    uVar16 = uVar7 | 0x20;
    if (uVar6 == 0xf) {
      uVar7 = (*param_1 >> 0x18) + 1 & 0x7f;
      *param_1 = *param_1 & 0x80ffffff | uVar7 << 0x18;
      if ((10 < uVar7) || (*(byte *)(uVar7 + 0x3c073684) != uVar16)) goto LAB_ram_4206af6e;
      if (uVar7 == 9) {
        uVar6 = 0x14;
      }
    }
    else if (uVar6 < 0x10) {
      if (uVar6 != 0xb) {
        if (uVar6 < 0xc) {
          if (uVar6 != 9) {
            if (uVar6 == 10) {
              if (uVar7 != 0x20) {
                uVar7 = uVar7 - 0x30;
                if ((uVar7 & 0xff) < 10) {
                  uVar13 = param_1[2];
                  uVar16 = param_1[3];
                  uVar18 = uVar13 * 10 + uVar7;
                  if ((uVar16 < 0x1999999a) && ((uVar16 != 0x19999999 || (uVar13 < 0x99999999)))) {
                    param_1[2] = uVar18;
                    param_1[3] = ((int)uVar7 >> 0x1f) +
                                 uVar16 * 10 + (int)((ulonglong)uVar13 * 10 >> 0x20) +
                                 (uint)(uVar18 < uVar7);
                    goto LAB_ram_4206ae86;
                  }
                }
                param_1[5] = param_1[5] & 0x80ffffff | 0x19000000;
                *param_1 = *param_1 & 0xff01ffff | 0x140000;
                goto LAB_ram_4206ab36;
              }
            }
            else {
              if (uVar6 != 0) goto LAB_ram_4206ad5c;
              uVar7 = (int)pbVar25 - (int)pbVar12;
              if (0x14000 < uVar7) {
                uVar7 = 0x14000;
              }
              pbVar4 = (byte *)(*(code *)&SUB_ram_400104fc)(pbVar12,0xd);
              pbVar12 = (byte *)(*(code *)&SUB_ram_400104fc)(pbVar12,10,uVar7);
              if (pbVar4 == (byte *)0x0) {
                if (pbVar12 == (byte *)0x0) {
                  pbVar12 = pbVar25;
                }
              }
              else if ((pbVar12 == (byte *)0x0) || (pbVar4 < pbVar12)) {
                pbVar12 = pbVar4;
              }
              pbVar12 = pbVar12 + -1;
            }
          }
        }
        else if (uVar6 == 0xd) {
          uVar7 = (*param_1 >> 0x18) + 1 & 0x7f;
          *param_1 = *param_1 & 0x80ffffff | uVar7 << 0x18;
          if ((7 < uVar7) || (*(byte *)(uVar7 + 0x3c072fd8) != uVar16)) goto LAB_ram_4206ad5c;
          if (uVar7 == 6) {
            uVar6 = 0x13;
          }
        }
        else if (uVar6 == 0xe) {
          if (uVar16 == 0x6b) {
            uVar6 = 0xf;
          }
          else {
            if (uVar16 == 0x75) goto LAB_ram_4206afda;
            if (uVar16 == 99) {
              uVar6 = 0x10;
            }
            else {
              if (*(char *)(uVar16 + 0x3c079fd4) != '\0') goto LAB_ram_4206af6e;
              uVar6 = -(uint)((*pbVar12 & 0xdf) == 0) & 0xe;
            }
          }
        }
        else {
LAB_ram_4206ad5c:
          uVar6 = 0;
        }
      }
    }
    else if (uVar6 == 0x12) {
      if (uVar7 == 0x2c) {
        uVar7 = *param_1 & 0x80ffffff;
LAB_ram_4206aff0:
        *param_1 = uVar7;
        uVar6 = 0xe;
      }
    }
    else if (uVar6 < 0x13) {
      uVar7 = *param_1;
      if (uVar6 == 0x10) {
        uVar13 = (uVar7 >> 0x18) + 1 & 0x7f;
        *param_1 = uVar7 & 0x80ffffff | uVar13 << 0x18;
        if ((uVar13 < 6) && (*(byte *)(uVar13 + 0x3c07367c) == uVar16)) {
          if (uVar13 == 4) {
            uVar6 = 0x15;
          }
        }
        else {
LAB_ram_4206af6e:
          uVar6 = 0x12;
        }
      }
      else {
        uVar13 = (uVar7 >> 0x18) + 1 & 0x7f;
        *param_1 = uVar7 & 0x80ffffff | uVar13 << 0x18;
        if (7 < uVar13) goto LAB_ram_4206af6e;
        uVar6 = 0x12;
        if ((*(byte *)(uVar13 + 0x3c073674) == uVar16) && (uVar6 = 0x16, uVar13 != 6)) {
LAB_ram_4206afda:
          uVar6 = 0x11;
        }
      }
    }
    else if (uVar6 == 0x13) {
      if (uVar7 != 0x20) goto LAB_ram_4206ad5c;
    }
    else {
      if (2 < uVar6 - 0x14) goto LAB_ram_4206ad5c;
      if (uVar7 == 0x2c) {
        uVar7 = *param_1 >> 2 & 0xff;
        if (uVar6 == 0x14) {
          uVar16 = uVar7 | 2;
        }
        else {
          uVar16 = uVar7 | 8;
          if (uVar6 == 0x15) {
            uVar16 = uVar7 | 4;
          }
        }
        uVar7 = *param_1 & 0x80fffc03 | uVar16 << 2;
        goto LAB_ram_4206aff0;
      }
      if (uVar7 != 0x20) goto LAB_ram_4206af6e;
    }
LAB_ram_4206ae86:
    pbVar12 = pbVar12 + 1;
    goto LAB_ram_4206aba2;
  }
  param_1[5] = param_1[5] & 0x80ffffff | 0x18000000;
LAB_ram_4206ab36:
  uVar7 = 0x33;
  pbVar19 = pbVar12;
  goto LAB_ram_420697f8;
code_r0x4206ac6e:
  uVar7 = param_1[1];
  param_1[1] = (uint)(pbVar12 + (uVar7 - (int)pbVar19));
  if ((byte *)0x14000 < pbVar12 + (uVar7 - (int)pbVar19)) {
    param_1[5] = param_1[5] & 0x80ffffff | 0xc000000;
LAB_ram_4206ac94:
    uVar7 = 0x35;
    pbVar19 = pbVar12;
    goto LAB_ram_420697f8;
  }
  uVar7 = *param_1;
  *param_1 = uVar7 & 0xff01ffff | uVar6 << 0x11;
  if (pbVar20 == (byte *)0x0) {
    uVar7 = 0x34;
    goto LAB_ram_42069de8;
  }
  pcVar9 = (code *)param_2[4];
  if (pcVar9 == (code *)0x0) {
    uVar7 = 0x34;
    pbVar20 = (byte *)0x0;
    goto LAB_ram_42069de8;
  }
  *param_1 = uVar7 & 0xff0003ff | uVar6 << 0x11 | 0xd400;
  iVar3 = (*pcVar9)(param_1,pbVar20,(int)pbVar12 - (int)pbVar20);
  if (iVar3 != 0) {
    param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
  }
  uVar7 = *param_1;
  if ((param_1[5] >> 0x18 & 0x7f) != 0) {
    return pbVar12 + -(int)param_3;
  }
  uVar6 = 10;
  pbVar19 = pbVar12;
LAB_ram_4206982c:
  uVar7 = uVar7 >> 10 & 0x7f;
  pbVar20 = (byte *)0x0;
  goto LAB_ram_4206982e;
LAB_ram_42069ac6:
  if (pbVar25 == pbVar12) goto LAB_ram_42069aca;
  uVar6 = (uint)*pbVar12;
  cVar2 = *(char *)(uVar6 + 0x3c079fd4);
  if (cVar2 == '\0') goto LAB_ram_42069aca;
  uVar7 = *param_1;
  uVar16 = uVar7 >> 0x11 & 0x7f;
  if (uVar16 == 5) {
    uVar16 = (uVar7 >> 0x18) + 1 & 0x7f;
    uVar7 = uVar7 & 0x80ffffff | uVar16 << 0x18;
    *param_1 = uVar7;
    if ((0x10 < uVar16) || (*(char *)(uVar16 + 0x3c07364c) != cVar2)) goto LAB_ram_4206a924;
    uVar16 = 0xf000000;
LAB_ram_4206a932:
    if ((uVar7 & 0x7f000000) != uVar16) goto LAB_ram_4206a7dc;
    uVar16 = *param_1 & 0xff01ffff;
    uVar7 = 0x120000;
    goto LAB_ram_4206a8be;
  }
  if (uVar16 < 6) {
    if (uVar16 == 3) {
      uVar13 = ((uVar7 >> 0x18) + 1 & 0x7f) << 0x18;
      uVar16 = uVar7 & 0x80ffffff | uVar13;
      *param_1 = uVar16;
      if (cVar2 == 'n') {
        uVar16 = uVar7 & 0x8001ffff | uVar13;
        uVar7 = 0x80000;
LAB_ram_4206a8be:
        uVar16 = uVar16 | uVar7;
      }
      else {
        if (cVar2 == 't') {
          uVar16 = uVar7 & 0x8001ffff | uVar13;
          uVar7 = 0xc0000;
          goto LAB_ram_4206a8be;
        }
LAB_ram_4206a8e2:
        uVar16 = uVar16 & 0xff01ffff;
      }
      *param_1 = uVar16;
    }
    else {
      if (uVar16 == 4) {
        uVar16 = (uVar7 >> 0x18) + 1 & 0x7f;
        uVar7 = uVar7 & 0x80ffffff | uVar16 << 0x18;
        *param_1 = uVar7;
        if ((uVar16 < 0xb) && (*(char *)(uVar16 + 0x3c073640) == cVar2)) {
          uVar16 = 0x9000000;
          goto LAB_ram_4206a932;
        }
        goto LAB_ram_4206a924;
      }
      if (uVar16 == 1) {
        *(ushort *)((int)param_1 + 2) =
             (ushort)(cVar2 == 'o') << 2 | (ushort)(((uVar7 >> 0x18) + 1 & 0x7f) << 8) |
             *(ushort *)((int)param_1 + 2) & 0x8001;
      }
      else if (uVar16 == 2) {
        *param_1 = uVar7 & 0x80ffffff | ((uVar7 >> 0x18) + 1 & 0x7f) << 0x18;
        iVar3 = 0;
        if (cVar2 == 'n') {
          iVar3 = 3;
        }
        uVar7 = iVar3 << 0x11;
        uVar16 = *param_1 & 0xff01ffff;
        goto LAB_ram_4206a8be;
      }
    }
  }
  else if (uVar16 == 8) {
    uVar16 = (uVar7 >> 0x18) + 1 & 0x7f;
    *param_1 = uVar7 & 0x80ffffff | uVar16 << 0x18;
    if ((7 < uVar16) || (*(char *)(uVar16 + 0x3c073674) != cVar2)) goto LAB_ram_4206a924;
    if (uVar16 == 6) {
      uVar16 = uVar7 & 0x8001ffff | 0x6000000;
      uVar7 = 0x180000;
      goto LAB_ram_4206a8be;
    }
  }
  else if (uVar16 < 9) {
    if (uVar16 == 6) {
      uVar16 = (uVar7 >> 0x18) + 1 & 0x7f;
      *param_1 = uVar7 & 0x80ffffff | uVar16 << 0x18;
      if ((0xe < uVar16) || (*(char *)(uVar16 + 0x3c073630) != cVar2)) {
LAB_ram_4206a924:
        uVar16 = *param_1;
        goto LAB_ram_4206a8e2;
      }
      if (uVar16 == 0xd) {
        uVar7 = *param_1 >> 2;
        if (-1 < (char)uVar7) {
          uVar7 = (uVar7 & 0xff | 0x80) << 2;
          uVar16 = *param_1 & 0xff01fc03 | 0x140000;
          goto LAB_ram_4206a8be;
        }
        uVar6 = param_1[5] & 0x80ffffff;
        uVar7 = 0x1a000000;
        goto LAB_ram_4206a850;
      }
    }
    else {
      uVar16 = (uVar7 >> 0x18) + 1 & 0x7f;
      *param_1 = uVar7 & 0x80ffffff | uVar16 << 0x18;
      if ((0x11 < uVar16) || (*(char *)(uVar16 + 0x3c073660) != cVar2)) goto LAB_ram_4206a924;
      if (uVar16 == 0x10) {
        uVar16 = *param_1 & 0xff01ffff;
        uVar7 = 0x160000;
        goto LAB_ram_4206a8be;
      }
    }
  }
  else if (((uVar16 + 0x77 & 0x7f) < 4) && (uVar6 != 0x20)) goto LAB_ram_4206a924;
LAB_ram_4206a7dc:
  pbVar12 = pbVar12 + 1;
  goto LAB_ram_42069ac6;
LAB_ram_42069aca:
  uVar7 = param_1[1];
  param_1[1] = (uint)(pbVar12 + (uVar7 - (int)pbVar19));
  if (pbVar12 + (uVar7 - (int)pbVar19) < (byte *)0x14001) {
    if (pbVar25 == pbVar12) {
      uVar7 = 0x2e;
      pbVar12 = pbVar25 + -1;
LAB_ram_42069de8:
      pbVar19 = pbVar12 + 1;
      goto LAB_ram_42069dea;
    }
    if (uVar6 == 0x3a) {
      if (pbVar24 == (byte *)0x0) {
        uVar7 = 0x2f;
      }
      else {
        pcVar9 = (code *)param_2[3];
        if (pcVar9 == (code *)0x0) {
          uVar7 = 0x2f;
          pbVar24 = (byte *)0x0;
        }
        else {
          *param_1 = *param_1 & 0xfffe03ff | 0xbc00;
          iVar3 = (*pcVar9)(param_1,pbVar24,(int)pbVar12 - (int)pbVar24);
          if (iVar3 != 0) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x3000000;
          }
          uVar7 = *param_1 >> 10 & 0x7f;
          if ((param_1[5] >> 0x18 & 0x7f) != 0) {
            return pbVar12 + (1 - (int)param_3);
          }
          pbVar24 = (byte *)0x0;
        }
      }
      goto LAB_ram_42069de8;
    }
    uVar6 = param_1[5] & 0x80ffffff;
    uVar7 = 0x18000000;
  }
  else {
    uVar6 = param_1[5] & 0x80ffffff;
    uVar7 = 0xc000000;
  }
LAB_ram_4206a850:
  param_1[5] = uVar6 | uVar7;
  uVar7 = 0x2e;
  pbVar19 = pbVar12;
LAB_ram_420697f8:
  if ((param_1[5] >> 0x18 & 0x7f) == 0) {
    param_1[5] = param_1[5] & 0x80ffffff | 0x20000000;
  }
  uVar7 = *param_1 & 0xfffe03ff | (uVar7 & 0x7f) << 10;
LAB_ram_4206b2d4:
  *param_1 = uVar7;
  goto LAB_ram_4206b1a6;
}

