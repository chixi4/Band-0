
byte * FUN_ram_4209fdce(uint *param_1,int *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 uVar14;
  byte *pbVar15;
  code *pcVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint uStack_48;
  
  if ((param_1[5] >> 0x18 & 0x7f) != 0) {
    return (byte *)0x0;
  }
  uVar13 = *param_1;
  uVar10 = uVar13 >> 10;
  uVar11 = uVar10 & 0x7f;
  if (param_4 == (byte *)0x0) {
    if (uVar11 < 0x16) {
      if ((uVar11 != 0) && ((0x200026U >> (uVar10 & 0x1f) & 1) != 0)) {
        return (byte *)0x0;
      }
    }
    else if (uVar11 == 0x40) {
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
  if (uVar11 == 0x2e) {
    pbVar21 = (byte *)0x0;
    pbVar20 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    pbVar22 = param_3;
  }
  else {
    if (uVar11 == 0x33) {
      pbVar21 = (byte *)0x0;
      pbVar20 = (byte *)0x0;
      pbVar18 = param_3;
    }
    else {
      pbVar21 = param_3;
      if (uVar11 == 0x13) {
LAB_ram_420a20ea:
        pbVar20 = (byte *)0x0;
      }
      else {
        if (10 < (uVar11 + 0x68 & 0x7f)) {
          pbVar21 = (byte *)0x0;
          goto LAB_ram_420a20ea;
        }
        pbVar21 = (byte *)0x0;
        pbVar20 = param_3;
      }
      pbVar18 = (byte *)0x0;
    }
    pbVar22 = (byte *)0x0;
  }
  pbVar15 = param_3 + (int)param_4;
  pbVar19 = (byte *)0x0;
  pbVar23 = param_3;
LAB_ram_420a05a8:
  if (pbVar15 != pbVar23) {
    uStack_48 = (uint)*pbVar23;
    if ((0x3b < uVar11) || (uVar10 = param_1[1], param_1[1] = uVar10 + 1, uVar10 + 1 < 0x14001)) {
LAB_ram_4209ff18:
      pbVar24 = pbVar23;
      if (uVar11 == 0x26) goto code_r0x4209ff20;
      if (0x26 < uVar11) {
LAB_ram_4209ff32:
        if (uVar11 == 0x34) {
          uVar10 = *param_1;
          uVar11 = uVar10 >> 0x11 & 0x7f;
          if ((uStack_48 != 0x20) && (uStack_48 != 9)) {
            if (uVar11 == 0x15) {
              uVar10 = uVar10 | 0x10;
            }
            else if (uVar11 < 0x16) {
              if (uVar11 == 0x13) {
                uVar10 = uVar10 | 4;
              }
              else {
                uVar10 = uVar10 | 8;
                if (uVar11 != 0x14) goto LAB_ram_420a1910;
              }
            }
            else {
              uVar10 = uVar10 | 0x20;
              if (uVar11 != 0x16) goto LAB_ram_420a1910;
            }
            *param_1 = uVar10;
LAB_ram_420a1910:
            uVar11 = 0x2d;
            goto LAB_ram_4209ff32;
          }
          goto LAB_ram_420a0234;
        }
        if (0x34 < uVar11) {
          if (uVar11 != 0x3b) {
            if (uVar11 < 0x3c) {
              if (uVar11 == 0x38) {
                if ((*param_1 >> 2 & 1) == 0) goto LAB_ram_4209ffba;
                if (uStack_48 == 0xd) {
                  uVar11 = 0x39;
                }
                goto LAB_ram_420a05a6;
              }
              if (uVar11 < 0x39) {
                if (uVar11 == 0x36) {
                  if ((param_1[1] != 1) || ((*param_1 >> 2 & 1) == 0)) goto LAB_ram_4209ffba;
                  uVar10 = (uint)(char)(&DAT_ram_3c0fb06c)[uStack_48];
                  if (uVar10 != 0xffffffff) {
                    param_1[2] = uVar10;
                    param_1[3] = (int)uVar10 >> 0x1f;
                    uVar11 = 0x37;
                    goto LAB_ram_420a05a6;
                  }
                  uVar13 = param_1[5];
                }
                else {
                  if (uVar11 != 0x37) {
                    if (uStack_48 != 10) {
                      param_1[5] = param_1[5] & 0x80ffffff | 0x17000000;
                      goto LAB_ram_420a1510;
                    }
                    uVar11 = 0x34;
                    goto LAB_ram_420a05a6;
                  }
                  if ((*param_1 >> 2 & 1) == 0) goto LAB_ram_4209ffba;
                  if (uStack_48 == 0xd) {
                    uVar11 = 0x39;
                    goto LAB_ram_420a05a6;
                  }
                  uVar10 = (uint)(char)(&DAT_ram_3c0fb06c)[uStack_48];
                  if (uVar10 != 0xffffffff) {
                    uVar17 = param_1[2];
                    uVar6 = param_1[3];
                    uVar7 = uVar17 * 0x10 + uVar10;
                    if ((0xfffffff < uVar6) || ((uVar6 == 0xfffffff && (uVar17 == 0xffffffff)))) {
                      uVar13 = param_1[5] & 0x80ffffff;
                      uVar10 = 0x19000000;
                      goto LAB_ram_4209fee0;
                    }
                    param_1[2] = uVar7;
                    param_1[3] = (uint)(uVar7 < uVar10) +
                                 ((int)uVar10 >> 0x1f) + (uVar6 << 4 | uVar17 >> 0x1c);
                    goto LAB_ram_420a05a6;
                  }
                  if (uStack_48 == 0x3b) {
                    uVar11 = 0x38;
                    goto LAB_ram_420a05a6;
                  }
                  if (uStack_48 == 0x20) {
                    uVar11 = 0x38;
                    goto LAB_ram_420a05a6;
                  }
                  uVar13 = param_1[5];
                }
                uVar13 = uVar13 & 0x80ffffff;
                uVar10 = 0x1b000000;
                goto LAB_ram_4209fee0;
              }
              if (uVar11 == 0x39) {
                if ((*param_1 >> 2 & 1) == 0) goto LAB_ram_4209ffba;
                if (uStack_48 != 10) goto LAB_ram_420a08a8;
                param_1[1] = 0;
                uVar11 = 0x3c;
                if (param_1[2] == 0 && param_1[3] == 0) {
                  *param_1 = *param_1 & 0xfffffc03 | (*param_1 >> 2 & 0xff | 0x10) << 2;
                  uVar11 = 0x2d;
                }
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
                pcVar16 = (code *)param_2[8];
                if (pcVar16 == (code *)0x0) goto LAB_ram_420a05a6;
                *param_1 = *param_1 & 0xfffe03ff | uVar11 << 10;
                iVar3 = (*pcVar16)(param_1);
                if (iVar3 == 0) goto LAB_ram_420a0880;
                uVar10 = param_1[5] & 0x80ffffff;
                uVar11 = 0x9000000;
                goto LAB_ram_420a087c;
              }
              if (uStack_48 != 10) {
                uVar10 = param_1[5];
                uVar11 = 0x1e000000;
LAB_ram_420a1a28:
                param_1[5] = uVar10 & 0x80ffffff | uVar11;
                uVar11 = 0x3a;
                goto LAB_ram_4209fee4;
              }
              uVar11 = *param_1 >> 2;
              if ((uVar11 & 0x10) != 0) {
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
                pcVar16 = (code *)param_2[9];
                if (pcVar16 == (code *)0x0) goto LAB_ram_420a042a;
                *param_1 = *param_1 & 0xfffe03ff | 0x10400;
                iVar3 = (*pcVar16)(param_1);
                if (iVar3 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0xa000000;
                }
                uVar11 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_4209ff18;
                goto LAB_ram_420a19e4;
              }
              uVar10 = param_1[5];
              if (((uVar11 & 1) != 0) && ((char)uVar11 < '\0')) {
                uVar11 = 0x1a000000;
                goto LAB_ram_420a1a28;
              }
              uVar7 = 1;
              if ((uVar11 & 0x28) != 0x28) {
                uVar7 = (uint)(*(char *)((int)param_1 + 0x16) == '\x05');
              }
              param_1[5] = uVar7 << 0x1f | uVar10 & 0x7fffffff;
              if ((code *)param_2[5] == (code *)0x0) {
LAB_ram_420a1b3c:
                if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_420a1b48;
              }
              else {
                iVar3 = (*(code *)param_2[5])(param_1);
                if (iVar3 == 1) {
LAB_ram_420a1b34:
                  *param_1 = *param_1 | 0x100;
                  goto LAB_ram_420a1b3c;
                }
                if (iVar3 == 2) {
                  param_1[5] = param_1[5] | 0x80000000;
                  goto LAB_ram_420a1b34;
                }
                if (iVar3 == 0) goto LAB_ram_420a1b3c;
                param_1[5] = param_1[5] & 0x80ffffff | 0x5000000;
              }
              uVar10 = *param_1;
              uVar11 = 0xec00;
              goto LAB_ram_420a1b26;
            }
            if (uVar11 == 0x3f) {
              uVar6 = param_1[3];
              uVar17 = param_1[2];
              uVar7 = (int)pbVar15 - (int)pbVar23;
              uVar10 = (int)uVar7 >> 0x1f;
              if ((uVar6 < uVar10) || ((uVar10 == uVar6 && (uVar17 < uVar7)))) {
                uVar10 = uVar6;
                uVar7 = uVar17;
              }
              if ((uVar6 + 1 == (uint)(uVar17 == 0)) && (0xfffffffd < uVar17 - 1))
              goto LAB_ram_4209ffba;
              if (pbVar19 == (byte *)0x0) {
                pbVar19 = pbVar23;
              }
              uVar5 = uVar17 - uVar7;
              uVar10 = (uVar6 - uVar10) - (uint)(uVar17 < uVar5);
              param_1[2] = uVar5;
              param_1[3] = uVar10;
              pbVar23 = pbVar23 + (uVar7 - 1);
              pbVar24 = pbVar23;
              if (uVar5 != 0 || uVar10 != 0) goto LAB_ram_420a05a6;
              if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
              if (pbVar19 != (byte *)0x0) {
                pcVar16 = (code *)param_2[6];
                if (pcVar16 != (code *)0x0) {
                  *param_1 = *param_1 & 0xfffe03ff | 0x10400;
                  iVar3 = (*pcVar16)(param_1,pbVar19,pbVar23 + (1 - (int)pbVar19));
                  if (iVar3 != 0) {
                    param_1[5] = param_1[5] & 0x80ffffff | 0x6000000;
                  }
                  uVar11 = *param_1 >> 10 & 0x7f;
                  if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a19e4;
                  pbVar19 = (byte *)0x0;
                  goto LAB_ram_4209ff18;
                }
                pbVar19 = (byte *)0x0;
              }
            }
            else {
              if (uVar11 < 0x40) {
                uVar10 = *param_1;
                if (uVar11 == 0x3d) {
                  if (((uVar10 >> 2 & 1) == 0) || (param_1[2] != 0 || param_1[3] != 0))
                  goto LAB_ram_4209ffba;
                  if (uStack_48 != 0xd) goto LAB_ram_420a08a8;
                  if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
                  if (pbVar19 == (byte *)0x0) {
                    uVar11 = 0x3e;
                    goto LAB_ram_420a05a6;
                  }
                  pcVar16 = (code *)param_2[6];
                  if (pcVar16 == (code *)0x0) {
                    uVar11 = 0x3e;
                    pbVar19 = (byte *)0x0;
                    goto LAB_ram_420a05a6;
                  }
                  *param_1 = *param_1 & 0xfffe03ff | 0xf800;
                  iVar3 = (*pcVar16)(param_1,pbVar19,(int)pbVar23 - (int)pbVar19);
                  if (iVar3 != 0) {
                    param_1[5] = param_1[5] & 0x80ffffff | 0x6000000;
                  }
                  uVar11 = *param_1 >> 10 & 0x7f;
                  if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a0a8c;
                  pbVar19 = (byte *)0x0;
                }
                else {
                  if (uVar11 == 0x3e) {
                    if ((uVar10 >> 2 & 1) == 0) goto LAB_ram_4209ffba;
                    if (uStack_48 != 10) goto LAB_ram_420a08a8;
                    param_1[1] = 0;
                    if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
                    pcVar16 = (code *)param_2[9];
                    if (pcVar16 == (code *)0x0) {
                      uVar11 = 0x36;
                      goto LAB_ram_420a05a6;
                    }
                    *param_1 = *param_1 & 0xfffe03ff | 0xd800;
                    iVar3 = (*pcVar16)(param_1);
                    if (iVar3 == 0) goto LAB_ram_420a0880;
                    uVar10 = param_1[5] & 0x80ffffff;
                    uVar11 = 0xa000000;
                    goto LAB_ram_420a087c;
                  }
                  uVar6 = param_1[3];
                  uVar17 = param_1[2];
                  uVar7 = (int)pbVar15 - (int)pbVar23;
                  uVar11 = (int)uVar7 >> 0x1f;
                  if ((uVar6 < uVar11) || ((uVar11 == uVar6 && (uVar17 < uVar7)))) {
                    uVar7 = uVar17;
                    uVar11 = uVar6;
                  }
                  if (((uVar10 >> 2 & 1) == 0) ||
                     ((uVar6 + 1 == (uint)(uVar17 == 0) && (0xfffffffd < uVar17 - 1))))
                  goto LAB_ram_4209ffba;
                  if (pbVar19 == (byte *)0x0) {
                    pbVar19 = pbVar23;
                  }
                  uVar10 = uVar17 - uVar7;
                  uVar11 = (uVar6 - uVar11) - (uint)(uVar17 < uVar10);
                  param_1[2] = uVar10;
                  param_1[3] = uVar11;
                  uVar11 = (uVar10 == 0 && uVar11 == 0) + 0x3c;
                  pbVar24 = pbVar23 + (uVar7 - 1);
                }
                goto LAB_ram_420a05a6;
              }
              if (uVar11 == 0x40) {
                if (pbVar19 != (byte *)0x0) {
                  pbVar23 = pbVar19;
                }
                pbVar19 = pbVar23;
                pbVar24 = param_3 + (int)(param_4 + -1);
                goto LAB_ram_420a05a6;
              }
              if (uVar11 != 0x41) goto LAB_ram_4209ffba;
            }
LAB_ram_420a042a:
            iVar3 = FUN_ram_4209fd96(param_1);
            uVar11 = 1;
            if (iVar3 != 0) {
              uVar11 = (-(uint)((*param_1 & 3) != 0) & 0xfffffff0) + 0x15;
            }
            uVar10 = param_1[5];
            if ((uVar10 >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
            pcVar16 = (code *)param_2[7];
            if (pcVar16 != (code *)0x0) {
              *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
              iVar3 = (*pcVar16)(param_1);
              if (iVar3 != 0) {
                param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
              }
              uVar10 = param_1[5];
              uVar11 = *param_1 >> 10 & 0x7f;
              if ((uVar10 >> 0x18 & 0x7f) != 0) goto LAB_ram_420a0a8c;
            }
            pbVar24 = pbVar23;
            if (-1 < (int)uVar10) goto LAB_ram_420a05a6;
            *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
            goto LAB_ram_420a0a8c;
          }
          if (uStack_48 != 10) goto LAB_ram_420a08a8;
LAB_ram_420a1b48:
          uVar10 = *param_1;
          param_1[1] = 0;
          bVar8 = true;
          uVar11 = uVar10 >> 2;
          if ((((uVar11 & 1) == 0) && (param_1[3] + 1 == (uint)(param_1[2] == 0))) &&
             (0xfffffffd < param_1[2] - 1)) {
            bVar8 = false;
          }
          uVar7 = param_1[5];
          if ((int)uVar7 < 0) {
            if (((*(char *)((int)param_1 + 0x16) == '\x05') || ((uVar11 & 0x40) != 0)) || (!bVar8))
            {
              iVar3 = FUN_ram_4209fd96(param_1);
              uVar11 = 1;
              if (iVar3 != 0) {
                uVar11 = (-(uint)((uVar10 & 3) != 0) & 0xfffffff0) + 0x15;
              }
              if ((uVar7 >> 0x18 & 0x7f) == 0) {
                pcVar16 = (code *)param_2[7];
                if (pcVar16 != (code *)0x0) {
                  *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
                  iVar3 = (*pcVar16)(param_1);
                  if (iVar3 != 0) {
                    param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
                  }
                  uVar11 = *param_1 >> 10 & 0x7f;
                  if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a1c06;
                }
                *param_1 = (uVar11 & 0x7f) << 10 | *param_1 & 0xfffe03ff;
LAB_ram_420a1c06:
                return pbVar23 + (1 - (int)param_3);
              }
              goto LAB_ram_4209ffba;
            }
LAB_ram_420a1c94:
            if ((uVar11 & 1) != 0) {
              uVar11 = 0x36;
              goto LAB_ram_420a05a6;
            }
            if (param_1[2] == 0 && param_1[3] == 0) goto LAB_ram_420a1c32;
            if ((param_1[2] != 0xffffffff) || (param_1[3] != 0xffffffff)) {
              uVar11 = 0x3f;
              goto LAB_ram_420a05a6;
            }
            iVar3 = FUN_ram_4209fd4a(param_1);
            if (iVar3 != 0) {
              uVar11 = 0x40;
              goto LAB_ram_420a05a6;
            }
            iVar3 = FUN_ram_4209fd96(param_1);
          }
          else {
            if ((uVar11 & 0x40) == 0) goto LAB_ram_420a1c94;
LAB_ram_420a1c32:
            iVar3 = FUN_ram_4209fd96(param_1);
          }
          uVar11 = 1;
          if (iVar3 != 0) {
            uVar11 = (-(uint)((uVar10 & 3) != 0) & 0xfffffff0) + 0x15;
          }
          if ((uVar7 >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
          pcVar16 = (code *)param_2[7];
          if (pcVar16 == (code *)0x0) goto LAB_ram_420a05a6;
          *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
          iVar3 = (*pcVar16)(param_1);
          if (iVar3 == 0) goto LAB_ram_420a0880;
          uVar10 = param_1[5] & 0x80ffffff;
          uVar11 = 0x7000000;
          goto LAB_ram_420a087c;
        }
        if (uVar11 == 0x2d) {
          if (uStack_48 == 0xd) {
            uVar11 = 0x3a;
            goto LAB_ram_420a05a6;
          }
          if (uStack_48 != 10) {
            bVar1 = (&DAT_ram_3c0fb16c)[uStack_48];
            if (bVar1 == 0) {
              uVar13 = param_1[5] & 0x80ffffff;
              uVar10 = 0x18000000;
              goto LAB_ram_4209fee0;
            }
            if (pbVar22 == (byte *)0x0) {
              pbVar22 = pbVar23;
            }
            sVar9 = 7;
            if (bVar1 != 0x74) {
              if (bVar1 < 0x75) {
                sVar9 = 1;
                if ((bVar1 != 99) && (sVar9 = 0, bVar1 == 0x70)) {
                  sVar9 = 5;
                }
              }
              else {
                sVar9 = (ushort)(bVar1 == 0x75) << 3;
              }
            }
            *(ushort *)((int)param_1 + 2) = *(ushort *)((int)param_1 + 2) & 0x8001 | sVar9 << 1;
            uVar11 = 0x2e;
            goto LAB_ram_420a05a6;
          }
          uVar11 = 0x3a;
          goto LAB_ram_4209ff32;
        }
        if (uVar11 < 0x2e) {
          if (uVar11 == 0x2a) {
            if (9 < (uStack_48 - 0x30 & 0xff)) goto LAB_ram_420a0904;
            *(short *)((int)param_1 + 0x12) = (short)(uStack_48 - 0x30);
            uVar11 = 0x2b;
            goto LAB_ram_420a05a6;
          }
          if (0x2a < uVar11) {
            if (uVar11 != 0x2b) {
              if (uStack_48 == 10) {
                uVar11 = 0x2d;
                goto LAB_ram_420a05a6;
              }
              param_1[5] = param_1[5] & 0x80ffffff | 0x17000000;
              uVar11 = 0x2c;
              goto LAB_ram_4209fee4;
            }
            if (uStack_48 == 0xd) {
              uVar11 = 0x2c;
            }
            else {
              if (uStack_48 != 10) goto LAB_ram_420a0958;
              uVar11 = 0x2d;
            }
            goto LAB_ram_420a05a6;
          }
          if (uVar11 == 0x28) {
            if (8 < (uStack_48 - 0x31 & 0xff)) goto LAB_ram_420a0904;
            *(short *)(param_1 + 4) = (short)uStack_48 + -0x30;
            uVar11 = 0x29;
            goto LAB_ram_420a05a6;
          }
          if (uVar11 != 0x29) {
            if (uStack_48 == 0x2f) {
              uVar11 = 0x28;
              goto LAB_ram_420a05a6;
            }
            param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
            uVar11 = 0x27;
            goto LAB_ram_4209fee4;
          }
          if (uStack_48 != 0x2e) goto LAB_ram_420a0016;
          uVar11 = 0x2a;
          goto LAB_ram_420a05a6;
        }
        if (uVar11 != 0x31) {
          if (uVar11 < 0x32) {
            if (uVar11 == 0x2f) {
              if (uStack_48 == 0xd) {
                uVar11 = 0x30;
                goto LAB_ram_420a05a6;
              }
              if (uStack_48 < 0xe) {
                if (uStack_48 == 9) goto LAB_ram_420a05a6;
                uVar10 = 10;
                uVar11 = 0x31;
              }
              else {
                uVar10 = 0x20;
              }
              if (uStack_48 != uVar10) goto LAB_ram_420a0234;
            }
            else {
              if (uVar11 != 0x30) goto LAB_ram_420a01fc;
              if (uStack_48 != 10) goto LAB_ram_420a08a8;
              uVar11 = 0x31;
            }
            goto LAB_ram_420a05a6;
          }
          if (uVar11 != 0x32) {
            uVar10 = *param_1 >> 0x11 & 0x7f;
            goto LAB_ram_420a1416;
          }
LAB_ram_420a0234:
          if (pbVar18 == (byte *)0x0) {
            pbVar18 = pbVar23;
          }
          uVar7 = *param_1;
          uVar17 = uVar7 & 0x80ffffff;
          *param_1 = uVar17;
          uVar10 = uVar17 >> 0x11 & 0x7f;
          uVar11 = uStack_48 | 0x20;
          if (uVar10 == 0xb) {
            uVar10 = 0xff01ffff;
            if (uVar11 == 99) {
              uVar10 = 0x1a0000;
LAB_ram_420a1380:
              uVar10 = uVar7 & 0x8001ffff | uVar10;
            }
            else {
LAB_ram_420a0280:
              uVar10 = uVar10 & uVar17;
            }
            *param_1 = uVar10;
          }
          else if (uVar10 < 0xc) {
            if (uVar10 == 9) {
              if (uVar11 == 0x6b) {
                uVar10 = 0x1e0000;
              }
              else if (uVar11 == 99) {
                uVar10 = 0x200000;
              }
              else {
                if (uVar11 != 0x75) {
                  uVar11 = uVar7 & 0x8001ffff | 0x240000;
                  goto LAB_ram_420a1364;
                }
                uVar10 = 0x220000;
              }
              goto LAB_ram_420a1380;
            }
            if (uVar10 != 10) goto LAB_ram_420a0278;
            uStack_48 = uStack_48 - 0x30;
            if (9 < (uStack_48 & 0xff)) {
              param_1[5] = param_1[5] & 0x80ffffff | 0x19000000;
              goto LAB_ram_420a139e;
            }
            param_1[2] = uStack_48;
            param_1[3] = (int)uStack_48 >> 0x1f;
          }
          else if (uVar10 == 0xc) {
            uVar11 = uVar7 & 0x8001ffff | 0x80;
LAB_ram_420a1364:
            *param_1 = uVar11;
          }
          else if (uVar10 != 0xe) {
LAB_ram_420a0278:
            uVar10 = *param_1;
            uVar17 = 0xff01ffff;
            goto LAB_ram_420a0280;
          }
          uVar11 = 0x33;
          goto LAB_ram_420a05a6;
        }
        if (uStack_48 == 0x20) {
          uVar11 = 0x2f;
          goto LAB_ram_420a05a6;
        }
        if (uStack_48 == 9) {
          uVar11 = 0x2f;
          goto LAB_ram_420a05a6;
        }
        uVar11 = *param_1 >> 0x11 & 0x7f;
        if (uVar11 == 0x15) {
          *param_1 = *param_1 | 0x10;
        }
        else {
          if (uVar11 < 0x16) {
            if (uVar11 == 0x13) {
              uVar11 = *param_1 | 4;
            }
            else {
              if (uVar11 != 0x14) goto LAB_ram_420a1970;
              uVar11 = *param_1 | 8;
            }
          }
          else {
            if (uVar11 != 0x16) goto LAB_ram_420a1970;
            uVar11 = *param_1 | 0x20;
          }
          *param_1 = uVar11;
        }
LAB_ram_420a1970:
        if (pbVar18 == (byte *)0x0) {
          pbVar18 = pbVar23;
        }
        if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
        if (pbVar18 == (byte *)0x0) goto LAB_ram_420a1910;
        pcVar16 = (code *)param_2[4];
        if (pcVar16 == (code *)0x0) {
          uVar11 = 0x2d;
          pbVar18 = (byte *)0x0;
          goto LAB_ram_4209ff32;
        }
        *param_1 = *param_1 & 0xfffe03ff | 0xb400;
        iVar3 = (*pcVar16)(param_1,pbVar18,(int)pbVar23 - (int)pbVar18);
        if (iVar3 != 0) {
          param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
        }
        uVar11 = *param_1;
        if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_4209ff16;
        goto LAB_ram_420a19e4;
      }
      if (uVar11 == 0xf) {
        if (uStack_48 == 0x20) {
          uVar11 = 0x10;
          goto LAB_ram_420a05a6;
        }
LAB_ram_420a0958:
        if ((uStack_48 - 0x30 & 0xff) < 10) {
          uStack_48 = uStack_48 + (uint)*(ushort *)((int)param_1 + 0x12) * 10 + -0x30;
          *(short *)((int)param_1 + 0x12) = (short)(uStack_48 * 0x10000 >> 0x10);
LAB_ram_420a003c:
          if ((uStack_48 & 0xffff) < 1000) goto LAB_ram_420a05a6;
        }
LAB_ram_420a0904:
        uVar13 = param_1[5] & 0x80ffffff;
        uVar10 = 0xe000000;
        goto LAB_ram_4209fee0;
      }
      if (uVar11 < 0x10) {
        if (uVar11 == 8) {
          if (uStack_48 != 0x54) goto LAB_ram_420a08a8;
          uVar11 = 9;
          goto LAB_ram_420a05a6;
        }
        if (8 < uVar11) {
          if (uVar11 != 0xc) {
            if (0xc < uVar11) {
              if (uVar11 == 0xd) {
                if (uStack_48 != 0x2e) {
LAB_ram_420a0016:
                  if ((uStack_48 - 0x30 & 0xff) < 10) {
                    uStack_48 = uStack_48 + (uint)(ushort)param_1[4] * 10 + -0x30;
                    *(short *)(param_1 + 4) = (short)(uStack_48 * 0x10000 >> 0x10);
                    goto LAB_ram_420a003c;
                  }
                  goto LAB_ram_420a0904;
                }
                uVar11 = 0xe;
                goto LAB_ram_420a05a6;
              }
              if (9 < (uStack_48 - 0x30 & 0xff)) {
                param_1[5] = param_1[5] & 0x80ffffff | 0xe000000;
                uVar11 = 0xe;
                goto LAB_ram_4209fee4;
              }
              *(short *)((int)param_1 + 0x12) = (short)(uStack_48 - 0x30);
              uVar11 = 0xf;
              goto LAB_ram_420a05a6;
            }
            if (uVar11 == 10) {
              if (uStack_48 != 0x50) goto LAB_ram_420a08a8;
              uVar11 = 0xb;
              goto LAB_ram_420a05a6;
            }
            if (uVar11 != 0xb) {
              if (uStack_48 == 0x54) {
                uVar11 = 10;
                goto LAB_ram_420a05a6;
              }
              param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
              uVar11 = 9;
              goto LAB_ram_4209fee4;
            }
            if (uStack_48 != 0x2f) goto LAB_ram_420a08a8;
            uVar11 = 0xc;
            goto LAB_ram_420a05a6;
          }
          if ((uStack_48 - 0x30 & 0xff) < 10) {
            *(short *)(param_1 + 4) = (short)(uStack_48 - 0x30);
            uVar11 = 0xd;
            goto LAB_ram_420a05a6;
          }
          goto LAB_ram_420a0904;
        }
        if (uVar11 == 4) {
          if (uStack_48 == 0x54) {
            uVar11 = 9;
            *param_1 = *param_1 & 0xfffffffc | 1;
            goto LAB_ram_420a05a6;
          }
          if (uStack_48 == 0x45) {
            *(undefined1 *)((int)param_1 + 0x16) = 2;
            *param_1 = *param_1 & 0x80fffffc | 0x2000000;
            uVar11 = 0x16;
            goto LAB_ram_420a05a6;
          }
LAB_ram_420a07c2:
          uVar13 = param_1[5] & 0x80ffffff;
          uVar10 = 0x1c000000;
          goto LAB_ram_4209fee0;
        }
        if (uVar11 < 5) {
          if (uVar11 != 2) {
            if (uVar11 == 3) {
              if (uStack_48 == 0x43) {
                uVar11 = 7;
                *param_1 = *param_1 & 0xfffffffc | 1;
              }
              goto LAB_ram_420a05a6;
            }
            if (uVar11 != 1) goto LAB_ram_4209ffba;
            if ((uStack_48 == 0xd) || (uStack_48 == 10)) goto LAB_ram_420a05a6;
            uVar13 = param_1[5] & 0x80ffffff;
            uVar10 = 0xd000000;
            goto LAB_ram_4209fee0;
          }
          if ((uStack_48 == 0xd) || (uStack_48 == 10)) goto LAB_ram_420a05a6;
          uVar11 = *param_1;
          param_1[3] = 0xffffffff;
          *param_1 = uVar11 & 0xfffffc03;
          param_1[2] = 0xffffffff;
          if (uStack_48 == 0x48) {
            if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
            pcVar16 = (code *)*param_2;
            if (pcVar16 != (code *)0x0) {
              uVar11 = uVar11 & 0xfffe0003;
              uVar10 = 0x1000;
              goto LAB_ram_420a0516;
            }
            uVar11 = 4;
          }
          else {
            if (uStack_48 != 0x49) {
              *param_1 = uVar11 & 0xfffffc00;
              goto LAB_ram_420a055a;
            }
            if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
            pcVar16 = (code *)*param_2;
            if (pcVar16 != (code *)0x0) {
              *param_1 = uVar11 & 0xfffe0003 | 0xc00;
              goto LAB_ram_420a054e;
            }
            uVar11 = 3;
          }
          goto LAB_ram_420a05a6;
        }
        if (uVar11 == 6) {
          if (uStack_48 != 0x43) goto LAB_ram_420a08a8;
          uVar11 = 7;
          goto LAB_ram_420a05a6;
        }
        if (uVar11 == 7) {
          if (uStack_48 != 0x59) goto LAB_ram_420a08a8;
          uVar11 = 0xf;
          goto LAB_ram_420a05a6;
        }
        param_1[2] = 0xffffffff;
        *param_1 = *param_1 & 0xfffffc03;
        param_1[3] = 0xffffffff;
        if (uStack_48 == 0x48) {
          uVar11 = 8;
        }
        else if (uStack_48 < 0x49) {
          if ((uStack_48 != 10) && (uStack_48 != 0xd)) {
LAB_ram_420a0818:
            param_1[5] = param_1[5] & 0x80ffffff | 0x1c000000;
            uVar11 = 5;
            goto LAB_ram_4209fee4;
          }
          uVar11 = 5;
        }
        else {
          if (uStack_48 != 0x49) goto LAB_ram_420a0818;
          uVar11 = 6;
        }
        if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
        pcVar16 = (code *)*param_2;
        if (pcVar16 == (code *)0x0) goto LAB_ram_420a05a6;
        *param_1 = *param_1 & 0xfffe03ff | uVar11 << 10;
        iVar3 = (*pcVar16)(param_1);
      }
      else {
        if (uVar11 == 0x16) {
          if (uStack_48 == 0) {
LAB_ram_420a0c24:
            uVar13 = param_1[5] & 0x80ffffff;
            uVar10 = 0x10000000;
            goto LAB_ram_4209fee0;
          }
          uVar17 = (uint)*(byte *)((int)param_1 + 0x16);
          uVar7 = *param_1 >> 0x18 & 0x7f;
          uVar10 = (uint)*(byte *)(*(int *)(&DAT_ram_3c0fb26c + uVar17 * 4) + uVar7);
          if (uStack_48 == 0x20) {
            if (uVar10 == 0) {
              uVar11 = 0x17;
            }
            else if (uVar10 != 0x20) goto LAB_ram_420a0c24;
          }
          else if (uStack_48 != uVar10) {
            if (((uStack_48 | 0x20) - 0x61 & 0xff) < 0x1a) {
              uStack_48 = uVar17 << 0x10 | uVar7 << 8 | uStack_48;
              if (uStack_48 == 0xa014f) {
                uVar14 = 0xb;
              }
              else if (uStack_48 < 0xa0150) {
                if (uStack_48 == 0x50148) {
                  uVar14 = 0x16;
                }
                else if (uStack_48 < 0x50149) {
                  if (uStack_48 == 0x30155) {
                    uVar14 = 4;
                  }
                  else if (uStack_48 < 0x30156) {
                    if (uStack_48 == 0x30141) {
                      uVar14 = 0x1c;
                    }
                    else {
                      if (uStack_48 != 0x30152) goto LAB_ram_420a0c24;
                      uVar14 = 0xc;
                    }
                  }
                  else {
                    if (uStack_48 != 0x40252) goto LAB_ram_420a0c24;
                    uVar14 = 0x1d;
                  }
                }
                else if (uStack_48 == 0x90149) {
                  uVar14 = 0x1f;
                }
                else if (uStack_48 == 0xa0145) {
                  uVar14 = 0x17;
                }
                else {
                  if (uStack_48 != 0x50250) goto LAB_ram_420a0c24;
                  uVar14 = 8;
                }
              }
              else if (uStack_48 == 0xf0253) {
                uVar14 = 0x1b;
              }
              else if (uStack_48 < 0xf0254) {
                if (uStack_48 == 0xc0450) {
                  uVar14 = 0xd;
                }
                else if (uStack_48 < 0xc0451) {
                  if (uStack_48 == 0xa0241) {
                    uVar14 = 0x15;
                  }
                  else {
                    if (uStack_48 != 0xa0341) goto LAB_ram_420a0c24;
                    uVar14 = 0x1e;
                  }
                }
                else {
                  if (uStack_48 != 0xf0242) goto LAB_ram_420a0c24;
                  uVar14 = 0x12;
                }
              }
              else if (uStack_48 == 0x140242) {
                uVar14 = 0x11;
              }
              else if (uStack_48 == 0x1a0145) {
                uVar14 = 0xe;
              }
              else {
                if (uStack_48 != 0xf0349) goto LAB_ram_420a0c24;
                uVar14 = 0x20;
              }
            }
            else {
              if (((uStack_48 != 0x2d) || ((*param_1 & 0x7f000000) != 0x1000000)) || (uVar17 != 10))
              goto LAB_ram_420a0c24;
              uVar14 = 0x18;
            }
            *(undefined1 *)((int)param_1 + 0x16) = uVar14;
          }
          *param_1 = *param_1 & 0x80ffffff | (uVar7 + 1 & 0x7f) << 0x18;
          goto LAB_ram_420a05a6;
        }
        if (0x16 < uVar11) {
          if (uVar11 == 0x23) {
            if (uStack_48 != 0x20) {
              if (uStack_48 != 0x48) goto LAB_ram_420a07c2;
              uVar11 = 0x24;
            }
            goto LAB_ram_420a05a6;
          }
          if (0x23 < uVar11) {
            if (uVar11 != 0x24) {
              if (uStack_48 == 0x54) {
                uVar11 = 0x26;
                goto LAB_ram_420a05a6;
              }
              param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
              uVar11 = 0x25;
              goto LAB_ram_4209fee4;
            }
            if (uStack_48 != 0x54) goto LAB_ram_420a08a8;
            uVar11 = 0x25;
            goto LAB_ram_420a05a6;
          }
          if (0x1b < uVar11) {
            if (uStack_48 != 0xd) {
              if (uStack_48 == 0x20) {
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
                if (pbVar20 == (byte *)0x0) {
                  uVar11 = 0x23;
                }
                else {
                  pcVar16 = (code *)param_2[1];
                  if (pcVar16 == (code *)0x0) {
                    uVar11 = 0x23;
                    pbVar20 = (byte *)0x0;
                  }
                  else {
                    *param_1 = *param_1 & 0xfffe03ff | 0x8c00;
                    iVar3 = (*pcVar16)(param_1,pbVar20,(int)pbVar23 - (int)pbVar20);
                    if (iVar3 != 0) {
                      param_1[5] = param_1[5] & 0x80ffffff | 0x2000000;
                    }
                    uVar11 = *param_1 >> 10 & 0x7f;
                    if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a0a8c;
                    pbVar20 = (byte *)0x0;
                  }
                }
                goto LAB_ram_420a05a6;
              }
              if (uStack_48 != 10) goto LAB_ram_420a00d8;
            }
            param_1[4] = 0x90000;
            uVar11 = (uStack_48 != 0xd) + 0x2c;
            if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
            if (pbVar20 != (byte *)0x0) {
              pcVar16 = (code *)param_2[1];
              if (pcVar16 == (code *)0x0) {
                pbVar20 = (byte *)0x0;
              }
              else {
                *param_1 = uVar11 * 0x400 | *param_1 & 0xfffe03ff;
                iVar3 = (*pcVar16)(param_1,pbVar20,(int)pbVar23 - (int)pbVar20);
                if (iVar3 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x2000000;
                }
                uVar11 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a0a8c;
                pbVar20 = (byte *)0x0;
              }
            }
            goto LAB_ram_420a05a6;
          }
          if (uVar11 == 0x17) {
            if (uStack_48 == 0x20) goto LAB_ram_420a05a6;
            if (pbVar20 == (byte *)0x0) {
              pbVar20 = pbVar23;
            }
            uVar12 = 0x17;
            if (*(char *)((int)param_1 + 0x16) == '\x05') {
              uVar12 = 0x1b;
            }
            uVar11 = FUN_ram_4209fb3c(uVar12,uStack_48);
            if (uVar11 != 1) goto LAB_ram_420a05a6;
          }
          else if ((0x16 < (uStack_48 - 10 & 0xff)) ||
                  ((0x400009U >> (uStack_48 - 10 & 0x1f) & 1) == 0)) {
LAB_ram_420a00d8:
            uVar11 = FUN_ram_4209fb3c(uVar11,uStack_48);
            if (uVar11 != 1) goto LAB_ram_420a05a6;
            param_1[5] = param_1[5] & 0x80ffffff | 0x11000000;
            uVar11 = 1;
            goto LAB_ram_4209fee4;
          }
          uVar13 = param_1[5] & 0x80ffffff;
          uVar10 = 0x11000000;
          goto LAB_ram_4209fee0;
        }
        if (uVar11 == 0x13) {
          if (uStack_48 != 0xd) {
            if (uStack_48 != 10) goto LAB_ram_420a05a6;
            if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
            if (pbVar21 == (byte *)0x0) {
              uVar11 = 0x2d;
            }
            else {
              pcVar16 = (code *)param_2[2];
              if (pcVar16 == (code *)0x0) {
                uVar11 = 0x2d;
                pbVar21 = (byte *)0x0;
              }
              else {
                *param_1 = *param_1 & 0xfffe03ff | 0xb400;
                iVar3 = (*pcVar16)(param_1,pbVar21,(int)pbVar23 - (int)pbVar21);
                if (iVar3 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x8000000;
                }
                uVar11 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a0a8c;
                pbVar21 = (byte *)0x0;
              }
            }
            goto LAB_ram_420a05a6;
          }
          if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
          if (pbVar21 == (byte *)0x0) {
            uVar11 = 0x14;
            goto LAB_ram_420a05a6;
          }
          pcVar16 = (code *)param_2[2];
          if (pcVar16 == (code *)0x0) {
            uVar11 = 0x14;
            pbVar21 = (byte *)0x0;
            goto LAB_ram_420a05a6;
          }
          *param_1 = *param_1 & 0xfffe03ff | 0x5000;
          iVar3 = (*pcVar16)(param_1,pbVar21,(int)pbVar23 - (int)pbVar21);
          if (iVar3 != 0) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x8000000;
          }
          uVar11 = *param_1 >> 10 & 0x7f;
          if ((param_1[5] >> 0x18 & 0x7f) == 0) {
            pbVar21 = (byte *)0x0;
            goto LAB_ram_420a05a6;
          }
          goto LAB_ram_420a0a8c;
        }
        if (uVar11 < 0x14) {
          if (uVar11 != 0x11) {
            if (uVar11 == 0x12) {
              uVar11 = 0x14;
              if ((uStack_48 != 0xd) && (uVar11 = 0x2d, uStack_48 != 10)) {
                if (pbVar21 == (byte *)0x0) {
                  pbVar21 = pbVar23;
                }
                *param_1 = *param_1 & 0x80ffffff;
                uVar11 = 0x13;
              }
              goto LAB_ram_420a05a6;
            }
            if ((uStack_48 - 0x30 & 0xff) < 10) {
              *(short *)(param_1 + 5) = (short)(uStack_48 - 0x30);
              uVar11 = 0x11;
              goto LAB_ram_420a05a6;
            }
            if (uStack_48 == 0x20) {
              uVar11 = 0x10;
              goto LAB_ram_420a05a6;
            }
            param_1[5] = param_1[5] & 0x80ffffff | 0xf000000;
            uVar11 = 0x10;
            goto LAB_ram_4209fee4;
          }
          if ((uStack_48 - 0x30 & 0xff) < 10) {
            uStack_48 = uStack_48 + (uint)(ushort)param_1[5] * 10 + -0x30;
            *(short *)(param_1 + 5) = (short)(uStack_48 * 0x10000 >> 0x10);
            if ((uStack_48 & 0xffff) < 1000) goto LAB_ram_420a05a6;
          }
          else {
            if (uStack_48 == 0xd) {
              uVar11 = 0x14;
              goto LAB_ram_420a05a6;
            }
            if (uStack_48 == 0x20) {
              uVar11 = 0x12;
              goto LAB_ram_420a05a6;
            }
            if (uStack_48 == 10) {
              uVar11 = 0x2d;
              goto LAB_ram_420a05a6;
            }
          }
          uVar13 = param_1[5] & 0x80ffffff;
          uVar10 = 0xf000000;
          goto LAB_ram_4209fee0;
        }
        if (uVar11 == 0x14) {
          if (uStack_48 != 10) goto LAB_ram_420a08a8;
          uVar11 = 0x2d;
          goto LAB_ram_420a05a6;
        }
        if (uStack_48 == 0xd) {
          uVar11 = 0x15;
          goto LAB_ram_420a05a6;
        }
        if (uStack_48 == 10) {
          uVar11 = 0x15;
          goto LAB_ram_420a05a6;
        }
LAB_ram_420a055a:
        uVar11 = *param_1;
        param_1[2] = 0xffffffff;
        param_1[3] = 0xffffffff;
        *param_1 = uVar11 & 0xfffffc03;
        if (0x19 < ((uStack_48 | 0x20) - 0x61 & 0xff)) {
          uVar11 = param_1[5];
LAB_ram_420a0586:
          param_1[5] = uVar11 & 0x80ffffff | 0x10000000;
          uVar11 = 0x15;
          goto LAB_ram_4209fee4;
        }
        *param_1 = uVar11 & 0x80fffc03 | 0x1000000;
        *(undefined1 *)((int)param_1 + 0x16) = 0;
        if (uStack_48 == 0x4d) {
          uVar14 = 10;
LAB_ram_420a0bf4:
          *(undefined1 *)((int)param_1 + 0x16) = uVar14;
        }
        else {
          if (0x4d < uStack_48) {
            if (uStack_48 == 0x52) {
              uVar14 = 0x14;
            }
            else if (uStack_48 < 0x53) {
              if (uStack_48 == 0x4f) {
                uVar14 = 6;
              }
              else {
                if (uStack_48 != 0x50) {
                  if (uStack_48 != 0x4e) goto LAB_ram_420a0b5c;
                  *(undefined1 *)((int)param_1 + 0x16) = 0x19;
                  goto LAB_ram_420a0bac;
                }
                uVar14 = 3;
              }
            }
            else if (uStack_48 == 0x54) {
              uVar14 = 7;
            }
            else if (uStack_48 == 0x55) {
              uVar14 = 0xf;
            }
            else {
              if (uStack_48 != 0x53) goto LAB_ram_420a0b5c;
              uVar14 = 0x1a;
            }
            goto LAB_ram_420a0bf4;
          }
          if (uStack_48 != 0x44) {
            if (uStack_48 < 0x45) {
              if (uStack_48 == 0x42) {
                uVar14 = 0x10;
              }
              else if (uStack_48 == 0x43) {
                uVar14 = 5;
              }
              else {
                if (uStack_48 != 0x41) {
LAB_ram_420a0b5c:
                  uVar11 = param_1[5];
                  goto LAB_ram_420a0586;
                }
                uVar14 = 0x13;
              }
            }
            else if (uStack_48 == 0x48) {
              uVar14 = 2;
            }
            else if (uStack_48 == 0x4c) {
              uVar14 = 9;
            }
            else {
              if (uStack_48 != 0x47) goto LAB_ram_420a0b5c;
              uVar14 = 1;
            }
            goto LAB_ram_420a0bf4;
          }
        }
LAB_ram_420a0bac:
        if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
        pcVar16 = (code *)*param_2;
        if (pcVar16 == (code *)0x0) {
          uVar11 = 0x16;
          goto LAB_ram_420a05a6;
        }
        uVar11 = *param_1 & 0xfffe03ff;
        uVar10 = 0x5800;
LAB_ram_420a0516:
        *param_1 = uVar11 | uVar10;
LAB_ram_420a054e:
        iVar3 = (*pcVar16)(param_1);
      }
      if (iVar3 != 0) {
        uVar10 = param_1[5] & 0x80ffffff;
        uVar11 = 0x1000000;
LAB_ram_420a087c:
        param_1[5] = uVar10 | uVar11;
      }
LAB_ram_420a0880:
      uVar11 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_420a05a6;
LAB_ram_420a0a8c:
      return pbVar23 + (1 - (int)param_3);
    }
    uVar13 = param_1[5] & 0x80ffffff;
    uVar10 = 0xc000000;
    goto LAB_ram_4209fee0;
  }
  if ((1 < (byte)((pbVar22 != (byte *)0x0) + (pbVar18 != (byte *)0x0) + (pbVar20 != (byte *)0x0) +
                  (pbVar19 != (byte *)0x0) + (pbVar21 != (byte *)0x0))) ||
     ((param_1[5] >> 0x18 & 0x7f) != 0)) {
LAB_ram_4209ffba:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if ((pbVar22 == (byte *)0x0) || (pcVar16 = (code *)param_2[3], pcVar16 == (code *)0x0)) {
LAB_ram_420a0634:
    if ((pbVar18 != (byte *)0x0) && (pcVar16 = (code *)param_2[4], pcVar16 != (code *)0x0)) {
      *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
      iVar3 = (*pcVar16)(param_1,pbVar18,(int)pbVar23 - (int)pbVar18);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
      }
      uVar11 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a19e4;
    }
    if ((pbVar20 != (byte *)0x0) && (pcVar16 = (code *)param_2[1], pcVar16 != (code *)0x0)) {
      *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
      iVar3 = (*pcVar16)(param_1,pbVar20,(int)pbVar23 - (int)pbVar20);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x2000000;
      }
      uVar11 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a19e4;
    }
    if ((pbVar19 != (byte *)0x0) && (pcVar16 = (code *)param_2[6], pcVar16 != (code *)0x0)) {
      *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
      iVar3 = (*pcVar16)(param_1,pbVar19,(int)pbVar23 - (int)pbVar19);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x6000000;
      }
      uVar11 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a19e4;
    }
    if ((pbVar21 != (byte *)0x0) && (pcVar16 = (code *)param_2[2], pcVar16 != (code *)0x0)) {
      *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
      iVar3 = (*pcVar16)(param_1,pbVar21,(int)pbVar23 - (int)pbVar21);
      if (iVar3 != 0) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x8000000;
      }
      uVar11 = *param_1 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_420a19e4;
    }
    *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
  }
  else {
    *param_1 = *param_1 & 0xfffe03ff | (uVar11 & 0x7f) << 10;
    iVar3 = (*pcVar16)(param_1,pbVar22,(int)pbVar23 - (int)pbVar22);
    if (iVar3 != 0) {
      param_1[5] = param_1[5] & 0x80ffffff | 0x3000000;
    }
    uVar11 = *param_1 >> 10 & 0x7f;
    if ((param_1[5] >> 0x18 & 0x7f) == 0) goto LAB_ram_420a0634;
LAB_ram_420a19e4:
    param_4 = pbVar23 + -(int)param_3;
  }
  return param_4;
code_r0x4209ff20:
  if (uStack_48 == 0x50) {
    uVar11 = 0x27;
    goto LAB_ram_420a05a6;
  }
LAB_ram_420a08a8:
  uVar13 = param_1[5] & 0x80ffffff;
  uVar10 = 0x1e000000;
LAB_ram_4209fee0:
  param_1[5] = uVar13 | uVar10;
  goto LAB_ram_4209fee4;
LAB_ram_420a1416:
  if (pbVar15 == pbVar24) {
    uVar11 = 0x33;
LAB_ram_420a1420:
    *param_1 = *param_1 & 0xff01ffff | uVar10 << 0x11;
    uVar10 = param_1[1];
    param_1[1] = (uint)(pbVar24 + (uVar10 - (int)pbVar23));
    if ((byte *)0x14000 < pbVar24 + (uVar10 - (int)pbVar23)) {
      param_1[5] = param_1[5] & 0x80ffffff | 0xc000000;
      pbVar23 = pbVar24;
      goto LAB_ram_4209fee4;
    }
    if (pbVar15 == pbVar24) {
      pbVar24 = pbVar15 + -1;
    }
    goto LAB_ram_420a05a6;
  }
  uVar11 = (uint)*pbVar24;
  if (uVar11 == 0xd) {
    uVar11 = *param_1;
    *param_1 = uVar11 & 0xff01ffff | uVar10 << 0x11;
    if ((param_1[5] >> 0x18 & 0x7f) == 0) {
      if (pbVar18 == (byte *)0x0) {
        uVar11 = 0x35;
      }
      else {
        pcVar16 = (code *)param_2[4];
        if (pcVar16 == (code *)0x0) {
          uVar11 = 0x35;
        }
        else {
          *param_1 = uVar11 & 0xff0003ff | uVar10 << 0x11 | 0xd400;
          iVar3 = (*pcVar16)(param_1,pbVar18,(int)pbVar24 - (int)pbVar18);
          if (iVar3 != 0) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
          }
          uVar11 = *param_1 >> 10 & 0x7f;
          if ((param_1[5] >> 0x18 & 0x7f) != 0) {
            return pbVar24 + (1 - (int)param_3);
          }
        }
        pbVar18 = (byte *)0x0;
      }
      goto LAB_ram_420a1420;
    }
    goto LAB_ram_4209ffba;
  }
  if (uVar11 == 10) goto code_r0x420a14ec;
  if ((((int)uVar13 < 0) || (uVar11 == 9)) || ((0x1f < uVar11 && (uVar11 != 0x7f)))) {
    uVar7 = uVar11 | 0x20;
    if (uVar10 == 0xf) {
      uVar11 = (*param_1 >> 0x18) + 1 & 0x7f;
      *param_1 = *param_1 & 0x80ffffff | uVar11 << 0x18;
      if ((10 < uVar11) || ((byte)(&DAT_ram_3c0c4bcc)[uVar11] != uVar7)) goto LAB_ram_420a17f6;
      if (uVar11 == 9) {
        uVar10 = 0x14;
      }
    }
    else if (uVar10 < 0x10) {
      if (uVar10 == 0xb) goto LAB_ram_4209ffba;
      if (uVar10 < 0xc) {
        if (uVar10 == 9) goto LAB_ram_4209ffba;
        if (uVar10 == 10) {
          if (uVar11 != 0x20) {
            uVar11 = uVar11 - 0x30;
            if ((uVar11 & 0xff) < 10) {
              uVar17 = param_1[2];
              uVar7 = param_1[3];
              uVar6 = uVar17 * 10 + uVar11;
              if ((uVar7 < 0x1999999a) && ((uVar7 != 0x19999999 || (uVar17 < 0x99999999)))) {
                param_1[2] = uVar6;
                param_1[3] = ((int)uVar11 >> 0x1f) +
                             uVar7 * 10 + (int)((ulonglong)uVar17 * 10 >> 0x20) +
                             (uint)(uVar6 < uVar11);
                goto LAB_ram_420a1720;
              }
            }
            param_1[5] = param_1[5] & 0x80ffffff | 0x19000000;
            *param_1 = *param_1 & 0xff01ffff | 0x140000;
            goto LAB_ram_420a139e;
          }
        }
        else {
          if (uVar10 != 0) goto LAB_ram_420a15f4;
          uVar11 = (int)pbVar15 - (int)pbVar24;
          if (0x14000 < uVar11) {
            uVar11 = 0x14000;
          }
          pbVar4 = (byte *)(*(code *)&SUB_ram_400104fc)(pbVar24,0xd);
          pbVar24 = (byte *)(*(code *)&SUB_ram_400104fc)(pbVar24,10,uVar11);
          if (pbVar4 == (byte *)0x0) {
            if (pbVar24 == (byte *)0x0) {
              pbVar24 = pbVar15;
            }
          }
          else if ((pbVar24 == (byte *)0x0) || (pbVar4 < pbVar24)) {
            pbVar24 = pbVar4;
          }
          pbVar24 = pbVar24 + -1;
        }
      }
      else if (uVar10 == 0xd) {
        uVar11 = (*param_1 >> 0x18) + 1 & 0x7f;
        *param_1 = *param_1 & 0x80ffffff | uVar11 << 0x18;
        if ((7 < uVar11) || ((byte)(&DAT_ram_3c0c2c6c)[uVar11] != uVar7)) goto LAB_ram_420a15f4;
        if (uVar11 == 6) {
          uVar10 = 0x13;
        }
      }
      else if (uVar10 == 0xe) {
        if (uVar7 == 0x6b) {
          uVar10 = 0xf;
        }
        else if (uVar7 == 0x75) {
LAB_ram_420a185a:
          uVar10 = 0x11;
        }
        else if (uVar7 == 99) {
          uVar10 = 0x10;
        }
        else {
          if ((&DAT_ram_3c0fb16c)[uVar7] != '\0') goto LAB_ram_420a17f6;
          uVar10 = -(uint)((*pbVar24 & 0xdf) == 0) & 0xe;
        }
      }
      else {
LAB_ram_420a15f4:
        uVar10 = 0;
      }
    }
    else if (uVar10 == 0x12) {
      if (uVar11 == 0x2c) {
        uVar11 = *param_1 & 0x80ffffff;
LAB_ram_420a186c:
        *param_1 = uVar11;
        uVar10 = 0xe;
      }
    }
    else if (uVar10 < 0x13) {
      uVar11 = *param_1;
      if (uVar10 == 0x10) {
        uVar17 = (uVar11 >> 0x18) + 1 & 0x7f;
        *param_1 = uVar11 & 0x80ffffff | uVar17 << 0x18;
        if ((uVar17 < 6) &&
           ((byte)"Glance at the future goal before sleep."[uVar17 + 0x10] == uVar7)) {
          if (uVar17 == 4) {
            uVar10 = 0x15;
          }
        }
        else {
LAB_ram_420a17f6:
          uVar10 = 0x12;
        }
      }
      else {
        uVar17 = (uVar11 >> 0x18) + 1 & 0x7f;
        *param_1 = uVar11 & 0x80ffffff | uVar17 << 0x18;
        if (7 < uVar17) goto LAB_ram_420a17f6;
        uVar10 = 0x12;
        if (((byte)"A little done still counts."[uVar17 + 0x18] == uVar7) &&
           (uVar10 = 0x16, uVar17 != 6)) goto LAB_ram_420a185a;
      }
    }
    else if (uVar10 == 0x13) {
      if (uVar11 != 0x20) goto LAB_ram_420a15f4;
    }
    else {
      if (2 < uVar10 - 0x14) goto LAB_ram_420a15f4;
      if (uVar11 == 0x2c) {
        uVar11 = *param_1 >> 2 & 0xff;
        if (uVar10 == 0x14) {
          uVar7 = uVar11 | 2;
        }
        else {
          uVar7 = uVar11 | 8;
          if (uVar10 == 0x15) {
            uVar7 = uVar11 | 4;
          }
        }
        uVar11 = *param_1 & 0x80fffc03 | uVar7 << 2;
        goto LAB_ram_420a186c;
      }
      if (uVar11 != 0x20) goto LAB_ram_420a17f6;
    }
LAB_ram_420a1720:
    pbVar24 = pbVar24 + 1;
    goto LAB_ram_420a1416;
  }
  param_1[5] = param_1[5] & 0x80ffffff | 0x18000000;
LAB_ram_420a139e:
  uVar11 = 0x33;
  pbVar23 = pbVar24;
  goto LAB_ram_4209fee4;
code_r0x420a14ec:
  uVar11 = param_1[1];
  param_1[1] = (uint)(pbVar24 + (uVar11 - (int)pbVar23));
  if ((byte *)0x14000 < pbVar24 + (uVar11 - (int)pbVar23)) {
    param_1[5] = param_1[5] & 0x80ffffff | 0xc000000;
    pbVar23 = pbVar24;
LAB_ram_420a1510:
    uVar11 = 0x35;
    goto LAB_ram_4209fee4;
  }
  uVar11 = *param_1;
  *param_1 = uVar11 & 0xff01ffff | uVar10 << 0x11;
  if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
  uStack_48 = 10;
  if (pbVar18 == (byte *)0x0) {
    uVar11 = 0x34;
    goto LAB_ram_420a05a6;
  }
  pcVar16 = (code *)param_2[4];
  if (pcVar16 == (code *)0x0) {
    uVar11 = 0x34;
    pbVar18 = (byte *)0x0;
    goto LAB_ram_420a05a6;
  }
  *param_1 = uVar11 & 0xff0003ff | uVar10 << 0x11 | 0xd400;
  iVar3 = (*pcVar16)(param_1,pbVar18,(int)pbVar24 - (int)pbVar18);
  if (iVar3 != 0) {
    param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
  }
  uVar11 = *param_1;
  if ((param_1[5] >> 0x18 & 0x7f) != 0) {
    return pbVar24 + -(int)param_3;
  }
LAB_ram_4209ff16:
  uVar11 = uVar11 >> 10 & 0x7f;
  pbVar18 = (byte *)0x0;
  pbVar23 = pbVar24;
  goto LAB_ram_4209ff18;
LAB_ram_420a01fc:
  if (pbVar15 == pbVar24) goto LAB_ram_420a0202;
  uStack_48 = (uint)*pbVar24;
  cVar2 = (&DAT_ram_3c0fb16c)[uStack_48];
  if (cVar2 == '\0') goto LAB_ram_420a0202;
  uVar11 = *param_1;
  uVar10 = uVar11 >> 0x11 & 0x7f;
  if (uVar10 == 5) {
    uVar10 = (uVar11 >> 0x18) + 1 & 0x7f;
    uVar11 = uVar11 & 0x80ffffff | uVar10 << 0x18;
    *param_1 = uVar11;
    if ((0x10 < uVar10) || ((&DAT_ram_3c0c4b9c)[uVar10] != cVar2)) goto LAB_ram_420a1176;
    uVar10 = 0xf000000;
LAB_ram_420a1184:
    if ((uVar11 & 0x7f000000) != uVar10) goto LAB_ram_420a1030;
    uVar7 = *param_1 & 0xff01ffff;
    uVar10 = 0x120000;
LAB_ram_420a113a:
    uVar10 = uVar7 | uVar10;
LAB_ram_420a1058:
    *param_1 = uVar10;
  }
  else {
    if (uVar10 < 6) {
      if (uVar10 == 2) {
        *param_1 = uVar11 & 0x80ffffff | ((uVar11 >> 0x18) + 1 & 0x7f) << 0x18;
        iVar3 = 0;
        if (cVar2 == 'n') {
          iVar3 = 3;
        }
        uVar10 = iVar3 << 0x11;
        uVar7 = *param_1 & 0xff01ffff;
      }
      else {
        if (uVar10 < 3) {
          if (uVar10 != 0) {
            *(ushort *)((int)param_1 + 2) =
                 (ushort)(cVar2 == 'o') << 2 | (ushort)(((uVar11 >> 0x18) + 1 & 0x7f) << 8) |
                 *(ushort *)((int)param_1 + 2) & 0x8001;
          }
          goto LAB_ram_420a1030;
        }
        if (uVar10 != 3) {
          uVar10 = (uVar11 >> 0x18) + 1 & 0x7f;
          uVar11 = uVar11 & 0x80ffffff | uVar10 << 0x18;
          *param_1 = uVar11;
          if ((uVar10 < 0xb) && ((&DAT_ram_3c0c4b90)[uVar10] == cVar2)) {
            uVar10 = 0x9000000;
            goto LAB_ram_420a1184;
          }
          goto LAB_ram_420a1176;
        }
        uVar7 = ((uVar11 >> 0x18) + 1 & 0x7f) << 0x18;
        uVar10 = uVar11 & 0x80ffffff | uVar7;
        *param_1 = uVar10;
        if (cVar2 == 'n') {
          uVar7 = uVar11 & 0x8001ffff | uVar7;
          uVar10 = 0x80000;
        }
        else {
          if (cVar2 != 't') goto LAB_ram_420a1056;
          uVar7 = uVar11 & 0x8001ffff | uVar7;
          uVar10 = 0xc0000;
        }
      }
      goto LAB_ram_420a113a;
    }
    if (uVar10 != 8) {
      if (8 < uVar10) {
        if ((uVar10 + 0x77 & 0x7f) < 4) {
          if (uStack_48 != 0x20) goto LAB_ram_420a1176;
          goto LAB_ram_420a1030;
        }
        goto LAB_ram_4209ffba;
      }
      if (uVar10 != 6) {
        uVar10 = (uVar11 >> 0x18) + 1 & 0x7f;
        *param_1 = uVar11 & 0x80ffffff | uVar10 << 0x18;
        if ((0x11 < uVar10) || ("A little done still counts."[uVar10 + 4] != cVar2))
        goto LAB_ram_420a1176;
        if (uVar10 == 0x10) {
          uVar7 = *param_1 & 0xff01ffff;
          uVar10 = 0x160000;
          goto LAB_ram_420a113a;
        }
        goto LAB_ram_420a1030;
      }
      uVar10 = (uVar11 >> 0x18) + 1 & 0x7f;
      *param_1 = uVar11 & 0x80ffffff | uVar10 << 0x18;
      if ((0xe < uVar10) || ("Hear yourself before replying to others."[uVar10 + 0x20] != cVar2)) {
LAB_ram_420a1176:
        uVar10 = *param_1;
LAB_ram_420a1056:
        uVar10 = uVar10 & 0xff01ffff;
        goto LAB_ram_420a1058;
      }
      if (uVar10 != 0xd) goto LAB_ram_420a1030;
      uVar11 = *param_1 >> 2;
      if (-1 < (char)uVar11) {
        uVar10 = (uVar11 & 0xff | 0x80) << 2;
        uVar7 = *param_1 & 0xff01fc03 | 0x140000;
        goto LAB_ram_420a113a;
      }
      uVar10 = param_1[5] & 0x80ffffff;
      uVar11 = 0x1a000000;
      goto LAB_ram_420a10c8;
    }
    uVar10 = (uVar11 >> 0x18) + 1 & 0x7f;
    *param_1 = uVar11 & 0x80ffffff | uVar10 << 0x18;
    if ((7 < uVar10) || ("A little done still counts."[uVar10 + 0x18] != cVar2))
    goto LAB_ram_420a1176;
    if (uVar10 == 6) {
      uVar7 = uVar11 & 0x8001ffff | 0x6000000;
      uVar10 = 0x180000;
      goto LAB_ram_420a113a;
    }
  }
LAB_ram_420a1030:
  pbVar24 = pbVar24 + 1;
  goto LAB_ram_420a01fc;
LAB_ram_420a0202:
  uVar11 = param_1[1];
  param_1[1] = (uint)(pbVar24 + (uVar11 - (int)pbVar23));
  if (pbVar24 + (uVar11 - (int)pbVar23) < (byte *)0x14001) {
    if (pbVar15 == pbVar24) {
      uVar11 = 0x2e;
      pbVar24 = pbVar15 + -1;
LAB_ram_420a05a6:
      pbVar23 = pbVar24 + 1;
      goto LAB_ram_420a05a8;
    }
    if (uStack_48 == 0x3a) {
      if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4209ffba;
      if (pbVar22 == (byte *)0x0) {
        uVar11 = 0x2f;
      }
      else {
        pcVar16 = (code *)param_2[3];
        if (pcVar16 == (code *)0x0) {
          uVar11 = 0x2f;
          pbVar22 = (byte *)0x0;
        }
        else {
          *param_1 = *param_1 & 0xfffe03ff | 0xbc00;
          iVar3 = (*pcVar16)(param_1,pbVar22,(int)pbVar24 - (int)pbVar22);
          if (iVar3 != 0) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x3000000;
          }
          uVar11 = *param_1 >> 10 & 0x7f;
          if ((param_1[5] >> 0x18 & 0x7f) != 0) {
            return pbVar24 + (1 - (int)param_3);
          }
          pbVar22 = (byte *)0x0;
        }
      }
      goto LAB_ram_420a05a6;
    }
    uVar10 = param_1[5] & 0x80ffffff;
    uVar11 = 0x18000000;
  }
  else {
    uVar10 = param_1[5] & 0x80ffffff;
    uVar11 = 0xc000000;
  }
LAB_ram_420a10c8:
  param_1[5] = uVar10 | uVar11;
  uVar11 = 0x2e;
  pbVar23 = pbVar24;
LAB_ram_4209fee4:
  if ((param_1[5] >> 0x18 & 0x7f) == 0) {
    param_1[5] = param_1[5] & 0x80ffffff | 0x20000000;
  }
  uVar10 = *param_1;
  uVar11 = (uVar11 & 0x7f) << 10;
LAB_ram_420a1b26:
  *param_1 = uVar10 & 0xfffe03ff | uVar11;
  goto LAB_ram_420a19e4;
}

