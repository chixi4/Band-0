
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42053bbe(int *param_1)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  short *psVar5;
  short *psVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  ushort uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  
  _DAT_ram_3fcb67f4 = (short *)param_1[1];
  if ((((0x13 < *(ushort *)((int)param_1 + 10)) &&
       (iVar9 = FUN_ram_42059006(_DAT_ram_3fcb5e68,_DAT_ram_3fcb5e54), iVar9 == 0)) &&
      ((_DAT_ram_3fcb5e68 & 0xf0) != 0xe0)) &&
     (iVar9 = thunk_FUN_ram_4205b2d0
                        (param_1,6,(short)param_1[2],&DAT_ram_3fcb5e64,&DAT_ram_3fcb5e68),
     iVar9 == 0)) {
    uVar10 = FUN_ram_4205073e(_DAT_ram_3fcb67f4[6]);
    uVar10 = uVar10 >> 10 & 0xfc;
    if ((0x13 < uVar10) && (uVar10 <= *(ushort *)(param_1 + 2))) {
      _DAT_ram_3fcb67f2 = (short)((uVar10 - 0x14) * 0x10000 >> 0x10);
      _DAT_ram_3fcb67ec = 0;
      if (*(ushort *)((int)param_1 + 10) < uVar10) {
        FUN_ram_42051cb2(param_1,0x14);
        sVar2 = _DAT_ram_3fcb67f2;
        sVar1 = *(short *)((int)param_1 + 10);
        _DAT_ram_3fcb67f0 = sVar1;
        FUN_ram_42051cb2(param_1,sVar1);
        iVar9 = *param_1;
        uVar16 = sVar2 - sVar1;
        if (*(ushort *)(iVar9 + 10) < uVar16) goto LAB_ram_42053ea2;
        _DAT_ram_3fcb67ec = *(undefined4 *)(iVar9 + 4);
        FUN_ram_42051cb2(iVar9,uVar16);
        *(short *)(param_1 + 2) = (sVar1 + (short)param_1[2]) - sVar2;
      }
      else {
        _DAT_ram_3fcb67f0 = _DAT_ram_3fcb67f2;
        FUN_ram_42051cb2(param_1);
      }
      psVar5 = _DAT_ram_3fcb67f4;
      uVar8 = FUN_ram_4205073e(*_DAT_ram_3fcb67f4);
      *(char *)psVar5 = (char)uVar8;
      *(char *)((int)psVar5 + 1) = (char)((ushort)uVar8 >> 8);
      psVar5 = _DAT_ram_3fcb67f4;
      uVar8 = FUN_ram_4205073e(_DAT_ram_3fcb67f4[1]);
      *(char *)(psVar5 + 1) = (char)uVar8;
      *(char *)((int)psVar5 + 3) = (char)((ushort)uVar8 >> 8);
      psVar5 = _DAT_ram_3fcb67f4;
      _DAT_ram_3fcb67e4 = FUN_ram_4205074c(*(undefined4 *)(_DAT_ram_3fcb67f4 + 2));
      *(char *)((int)psVar5 + 5) = (char)(_DAT_ram_3fcb67e4 >> 8);
      *(char *)(psVar5 + 3) = (char)(_DAT_ram_3fcb67e4 >> 0x10);
      *(char *)(psVar5 + 2) = (char)_DAT_ram_3fcb67e4;
      *(char *)((int)psVar5 + 7) = (char)(_DAT_ram_3fcb67e4 >> 0x18);
      psVar5 = _DAT_ram_3fcb67f4;
      _DAT_ram_3fcb67e0 = FUN_ram_4205074c(*(undefined4 *)(_DAT_ram_3fcb67f4 + 4));
      *(char *)((int)psVar5 + 9) = (char)(_DAT_ram_3fcb67e0 >> 8);
      *(char *)(psVar5 + 5) = (char)(_DAT_ram_3fcb67e0 >> 0x10);
      *(char *)(psVar5 + 4) = (char)_DAT_ram_3fcb67e0;
      *(char *)((int)psVar5 + 0xb) = (char)(_DAT_ram_3fcb67e0 >> 0x18);
      psVar5 = _DAT_ram_3fcb67f4;
      uVar8 = FUN_ram_4205073e(_DAT_ram_3fcb67f4[7]);
      psVar6 = _DAT_ram_3fcb67f4;
      *(char *)(psVar5 + 7) = (char)uVar8;
      *(char *)((int)psVar5 + 0xf) = (char)((ushort)uVar8 >> 8);
      bVar7 = FUN_ram_4205073e(psVar6[6]);
      psVar5 = _DAT_ram_3fcb67f4;
      puVar18 = _DAT_ram_3fcb67c4;
      puVar12 = _DAT_ram_3fcb67c0;
      iVar9 = _DAT_ram_3fcb5e58;
      DAT_ram_3fcb67d9 = bVar7 & 0x3f;
      uVar16 = *(ushort *)(param_1 + 2);
      _DAT_ram_3fcb67da = uVar16;
      if (((bVar7 & 3) == 0) || (_DAT_ram_3fcb67da = uVar16 + 1, uVar16 <= (ushort)(uVar16 + 1))) {
        puVar19 = _DAT_ram_3fcb67c0;
        puVar11 = (uint *)0x0;
        while (puVar20 = puVar19, puVar19 = _DAT_ram_3fcb67bc, puVar20 != (uint *)0x0) {
          if ((((((char)puVar20[2] == '\0') ||
                ((char)puVar20[2] == (char)(*(char *)(_DAT_ram_3fcb5e58 + 0x3c) + '\x01'))) &&
               ((short)puVar20[7] == *_DAT_ram_3fcb67f4)) &&
              ((*(short *)((int)puVar20 + 0x1a) == _DAT_ram_3fcb67f4[1] &&
               (puVar20[1] == _DAT_ram_3fcb5e64)))) && (*puVar20 == _DAT_ram_3fcb5e68)) {
            if (puVar11 != (uint *)0x0) {
              _DAT_ram_3fcb67c0 = puVar20;
              puVar11[3] = puVar20[3];
              puVar20[3] = (uint)puVar12;
            }
            _DAT_ram_3fcb5cdc = 0;
            _DAT_ram_3fcb5ce8 = psVar5;
            _DAT_ram_3fcb67d4 = 0;
            DAT_ram_3fcb67d8 = 0;
            _DAT_ram_3fcb67dc = 0;
            _DAT_ram_3fcb5ce0 = param_1;
            _DAT_ram_3fcb5ce4 = uVar16;
            if ((bVar7 & 8) != 0) {
              *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 1;
            }
            if ((puVar20[0x1e] != 0) &&
               ((iVar9 = FUN_ram_42052da6(puVar20), iVar9 == -0xd ||
                ((puVar20[0x1e] != 0 && (_DAT_ram_3fcb67da != 0)))))) {
              if (*(short *)((int)puVar20 + 0x2e) == 0) {
                FUN_ram_42055290(puVar20);
              }
              goto LAB_ram_42053f9a;
            }
            bVar7 = DAT_ram_3fcb67d9;
            _DAT_ram_3fcb67d0 = puVar20;
            if ((DAT_ram_3fcb67d9 & 4) == 0) {
              bVar3 = DAT_ram_3fcb67d9 & 2;
              bVar4 = DAT_ram_3fcb67d9 & 2;
              uVar16 = *(ushort *)((int)puVar20 + 0x1e);
              if (((DAT_ram_3fcb67d9 & 2) == 0) || (puVar20[5] - 2 < 2)) {
                if ((uVar16 & 0x10) == 0) {
                  puVar20[9] = _DAT_ram_3fcb67cc;
                }
                sVar1 = _DAT_ram_3fcb67f2;
                *(undefined2 *)((int)puVar20 + 0xa2) = 0;
                if (sVar1 != 0) {
                  FUN_ram_420534f0(puVar20);
                }
                psVar5 = _DAT_ram_3fcb67f4;
                uVar10 = _DAT_ram_3fcb67e4;
                uVar13 = puVar20[5];
                if (bVar3 == 0) {
                  if (uVar13 == 6) {
                    FUN_ram_420536a0(puVar20);
                    if ((DAT_ram_3fcb67d8 & 0x20) == 0) goto LAB_ram_42054294;
                    *(ushort *)((int)puVar20 + 0x1e) = *(ushort *)((int)puVar20 + 0x1e) | 2;
                    FUN_ram_420527de(puVar20);
                    puVar12 = _DAT_ram_3fcb67c0;
                    if (puVar20 != _DAT_ram_3fcb67c0) goto LAB_ram_42054672;
LAB_ram_420545ec:
                    _DAT_ram_3fcb67c0 = (uint *)puVar20[3];
                    goto LAB_ram_42054604;
                  }
                  if (uVar13 < 7) goto LAB_ram_42054336;
                  if (uVar13 == 8) {
                    FUN_ram_420536a0(puVar20);
                    if ((((DAT_ram_3fcb67d9 & 0x10) == 0) || (puVar20[0x15] != _DAT_ram_3fcb67e0))
                       || (puVar20[0x1c] != 0)) goto LAB_ram_42054294;
                    FUN_ram_420527de(puVar20);
                    puVar12 = _DAT_ram_3fcb67c0;
                    if (puVar20 == _DAT_ram_3fcb67c0) goto LAB_ram_420545ec;
                    goto LAB_ram_420546b0;
                  }
                  if (uVar13 == 9) {
                    FUN_ram_420536a0(puVar20);
                    if ((((DAT_ram_3fcb67d9 & 0x10) != 0) && (puVar20[0x15] == _DAT_ram_3fcb67e0))
                       && (puVar20[0x1c] == 0)) {
                      DAT_ram_3fcb67d8 = DAT_ram_3fcb67d8 | 0x10;
                    }
                    goto LAB_ram_42054294;
                  }
                  if (uVar13 != 7) goto LAB_ram_42054294;
LAB_ram_42054428:
                  FUN_ram_420536a0(puVar20);
LAB_ram_42054540:
                  if ((DAT_ram_3fcb67d8 & 0x20) == 0) goto LAB_ram_42054294;
                  *(ushort *)((int)puVar20 + 0x1e) = *(ushort *)((int)puVar20 + 0x1e) | 2;
                  uVar10 = 7;
                }
                else {
                  if (1 < uVar13 - 2) goto LAB_ram_42054294;
LAB_ram_42054336:
                  if (uVar13 == 3) {
                    if (bVar4 != 0) {
                      if (puVar20[10] - 1 == _DAT_ram_3fcb67e4) {
                        FUN_ram_420550a4(puVar20);
                      }
                      goto LAB_ram_42054294;
                    }
                    if ((bVar7 & 0x10) == 0) goto LAB_ram_42054294;
                    if (((int)((_DAT_ram_3fcb67e0 - 1) - puVar20[0x12]) < 0) ||
                       ((int)(puVar20[0x15] - _DAT_ram_3fcb67e0) < 0)) {
                      FUN_ram_420551d8(puVar20,_DAT_ram_3fcb67e0,
                                       _DAT_ram_3fcb67e4 + _DAT_ram_3fcb67da,&DAT_ram_3fcb5e68,
                                       &DAT_ram_3fcb5e64,_DAT_ram_3fcb67f4[1],*_DAT_ram_3fcb67f4);
                      goto LAB_ram_42054294;
                    }
                    puVar20[5] = 4;
                    if (puVar20[0x1f] == 0) goto LAB_ram_420544e4;
                    FUN_ram_4205262e(puVar20);
                    if (*(code **)(puVar20[0x1f] + 0x1c) == (code *)0x0) goto LAB_ram_420544e4;
                    iVar9 = (**(code **)(puVar20[0x1f] + 0x1c))(puVar20[4],puVar20,0);
                    if (iVar9 == 0) {
                      FUN_ram_420536a0(puVar20);
                      if (_DAT_ram_3fcb67dc != 0) {
                        _DAT_ram_3fcb67dc = _DAT_ram_3fcb67dc + -1;
                      }
                      uVar17 = (uint)*(ushort *)((int)puVar20 + 0x36);
                      uVar13 = uVar17 << 1;
                      uVar10 = uVar13;
                      if (uVar13 < 0x111c) {
                        uVar10 = 0x111c;
                      }
                      if (uVar17 << 2 < uVar10) {
                        uVar8 = (undefined2)((uVar17 << 0x12) >> 0x10);
                      }
                      else {
                        uVar8 = 0x111c;
                        if (0x111c < uVar13) {
                          uVar8 = (undefined2)((uVar17 << 0x11) >> 0x10);
                        }
                      }
                      *(undefined2 *)(puVar20 + 0x13) = uVar8;
                      goto LAB_ram_42054540;
                    }
                    if (iVar9 != -0xd) goto LAB_ram_420544e4;
                    goto LAB_ram_42053f9a;
                  }
                  if (uVar13 < 4) {
                    if (uVar13 != 2) goto LAB_ram_42054294;
                    if ((bVar7 & 0x12) == 0x12) {
                      if (puVar20[0x12] + 1 == _DAT_ram_3fcb67e0) {
                        puVar20[0x12] = puVar20[0x12] + 1;
                        uVar13 = uVar10 + 1;
                        puVar20[10] = uVar13;
                        puVar20[0xc] = uVar13;
                        sVar1 = psVar5[7];
                        *(short *)(puVar20 + 0x19) = sVar1;
                        *(short *)((int)puVar20 + 0x66) = sVar1;
                        puVar20[0x16] = uVar10 - 1;
                        puVar20[5] = 4;
                        uVar8 = *(undefined2 *)((int)puVar20 + 0x36);
                        uVar14 = FUN_ram_42058ae0(puVar20,puVar20 + 1);
                        iVar9 = FUN_ram_4205329c(uVar8,uVar14,puVar20 + 1);
                        uVar13 = iVar9 << 1;
                        *(short *)((int)puVar20 + 0x36) = (short)iVar9;
                        uVar10 = uVar13;
                        if (uVar13 < 0x111c) {
                          uVar10 = 0x111c;
                        }
                        if ((uint)(iVar9 << 2) < uVar10) {
                          uVar8 = (undefined2)((uint)(iVar9 << 0x12) >> 0x10);
                        }
                        else {
                          uVar8 = 0x111c;
                          if (0x111c < uVar13) {
                            uVar8 = (undefined2)((uint)(iVar9 << 0x11) >> 0x10);
                          }
                        }
                        *(undefined2 *)(puVar20 + 0x13) = uVar8;
                        *(short *)((int)puVar20 + 0x6a) = *(short *)((int)puVar20 + 0x6a) + -1;
                        if ((uint *)puVar20[0x1d] == (uint *)0x0) {
                          puVar20[0x1c] = *(uint *)puVar20[0x1c];
                        }
                        else {
                          puVar20[0x1d] = *(uint *)puVar20[0x1d];
                        }
                        FUN_ram_42052766();
                        if (puVar20[0x1d] == 0) {
                          *(undefined2 *)(puVar20 + 0xd) = 0xffff;
                        }
                        else {
                          *(undefined2 *)(puVar20 + 0xd) = 0;
                          *(undefined1 *)((int)puVar20 + 0x46) = 0;
                        }
                        if (((code *)puVar20[0x22] == (code *)0x0) ||
                           (iVar9 = (*(code *)puVar20[0x22])(puVar20[4],puVar20,0), iVar9 != -0xd))
                        goto LAB_ram_420542da;
                        goto LAB_ram_42053f9a;
                      }
                    }
                    else if ((bVar7 & 0x10) == 0) goto LAB_ram_42054294;
                    FUN_ram_420551d8(puVar20,_DAT_ram_3fcb67e0,_DAT_ram_3fcb67e4 + _DAT_ram_3fcb67da
                                     ,&DAT_ram_3fcb5e68,&DAT_ram_3fcb5e64,_DAT_ram_3fcb67f4[1],
                                     *_DAT_ram_3fcb67f4);
                    if (*(byte *)((int)puVar20 + 0x46) < 0xc) {
                      *(undefined2 *)(puVar20 + 0xd) = 0;
                      FUN_ram_42055766(puVar20);
                    }
                    goto LAB_ram_42054294;
                  }
                  if (uVar13 == 4) goto LAB_ram_42054428;
                  FUN_ram_420536a0(puVar20);
                  if ((DAT_ram_3fcb67d8 & 0x20) == 0) {
                    if ((((DAT_ram_3fcb67d9 & 0x10) == 0) || (puVar20[0x15] != _DAT_ram_3fcb67e0))
                       || (puVar20[0x1c] != 0)) goto LAB_ram_42054294;
                    uVar10 = 6;
                  }
                  else {
                    uVar16 = *(ushort *)((int)puVar20 + 0x1e) | 2;
                    if ((((DAT_ram_3fcb67d9 & 0x10) != 0) && (puVar20[0x15] == _DAT_ram_3fcb67e0))
                       && (puVar20[0x1c] == 0)) {
                      *(ushort *)((int)puVar20 + 0x1e) = uVar16;
                      FUN_ram_420527de(puVar20);
                      puVar12 = _DAT_ram_3fcb67c0;
                      if (puVar20 == _DAT_ram_3fcb67c0) goto LAB_ram_420545ec;
                      goto LAB_ram_42054602;
                    }
                    *(ushort *)((int)puVar20 + 0x1e) = uVar16;
                    uVar10 = 8;
                  }
                }
                puVar20[5] = uVar10;
                goto LAB_ram_42054294;
              }
LAB_ram_420542f4:
              uVar16 = uVar16 | 2;
            }
            else {
              if (puVar20[5] == 2) {
                if (puVar20[0x15] != _DAT_ram_3fcb67e0) goto LAB_ram_42054294;
              }
              else {
                uVar10 = puVar20[10];
                if (uVar10 != _DAT_ram_3fcb67e4) {
                  if ((-1 < (int)(_DAT_ram_3fcb67e4 - uVar10)) &&
                     (-1 < (int)((uVar10 - _DAT_ram_3fcb67e4) + (uint)(ushort)puVar20[0xb]))) {
LAB_ram_420542da:
                    uVar16 = *(ushort *)((int)puVar20 + 0x1e);
                    goto LAB_ram_420542f4;
                  }
                  goto LAB_ram_42054294;
                }
              }
              DAT_ram_3fcb67d8 = DAT_ram_3fcb67d8 | 8;
              uVar16 = *(ushort *)((int)puVar20 + 0x1e) & 0xfffe;
            }
            *(ushort *)((int)puVar20 + 0x1e) = uVar16;
            goto LAB_ram_42054294;
          }
          puVar11 = puVar20;
          puVar19 = (uint *)puVar20[3];
        }
        for (; puVar19 != (uint *)0x0; puVar19 = (uint *)puVar19[3]) {
          if ((((((char)puVar19[2] == '\0') ||
                ((char)puVar19[2] == (char)(*(char *)(_DAT_ram_3fcb5e58 + 0x3c) + '\x01'))) &&
               ((short)puVar19[7] == *_DAT_ram_3fcb67f4)) &&
              ((*(short *)((int)puVar19 + 0x1a) == _DAT_ram_3fcb67f4[1] &&
               (_DAT_ram_3fcb5e64 == puVar19[1])))) && (*puVar19 == _DAT_ram_3fcb5e68)) {
            if ((bVar7 & 4) != 0) goto LAB_ram_42053ea2;
            uVar10 = (uint)_DAT_ram_3fcb67da;
            if ((bVar7 & 2) == 0) {
              if ((bVar7 & 1) != 0) {
                puVar19[9] = _DAT_ram_3fcb67cc;
              }
            }
            else if ((-1 < (int)(_DAT_ram_3fcb67e4 - puVar19[10])) &&
                    (-1 < (int)((puVar19[10] - _DAT_ram_3fcb67e4) + (uint)(ushort)puVar19[0xb]))) {
              FUN_ram_420551d8(puVar19,_DAT_ram_3fcb67e0,_DAT_ram_3fcb67e4 + uVar10,
                               &DAT_ram_3fcb5e68,&DAT_ram_3fcb5e64);
              goto LAB_ram_42053ea2;
            }
            if (uVar10 == 0) goto LAB_ram_42053ea2;
            *(ushort *)((int)puVar19 + 0x1e) = *(ushort *)((int)puVar19 + 0x1e) | 2;
            goto LAB_ram_42054088;
          }
        }
        puVar19 = (uint *)0x0;
        puVar20 = (uint *)0x0;
        puVar12 = (uint *)0x0;
        for (puVar11 = _DAT_ram_3fcb67c4; puVar11 != (uint *)0x0; puVar11 = (uint *)puVar11[3]) {
          if ((((char)puVar11[2] == '\0') ||
              ((char)puVar11[2] == (char)(*(char *)(_DAT_ram_3fcb5e58 + 0x3c) + '\x01'))) &&
             (*(short *)((int)puVar11 + 0x1a) == _DAT_ram_3fcb67f4[1])) {
            if (*puVar11 == _DAT_ram_3fcb5e68) goto LAB_ram_420540d8;
            if (*puVar11 == 0) {
              puVar19 = puVar11;
              puVar20 = puVar12;
            }
          }
          puVar12 = puVar11;
        }
        puVar11 = puVar19;
        puVar12 = puVar20;
        if (puVar19 == (uint *)0x0) {
          uVar10 = FUN_ram_4205073e(_DAT_ram_3fcb67f4[6]);
          if ((uVar10 & 4) != 0) goto LAB_ram_42053ea2;
          sVar1 = *_DAT_ram_3fcb67f4;
          sVar2 = _DAT_ram_3fcb67f4[1];
          iVar15 = _DAT_ram_3fcb67e4 + _DAT_ram_3fcb67da;
          iVar9 = _DAT_ram_3fcb5e58;
        }
        else {
LAB_ram_420540d8:
          if (puVar12 != (uint *)0x0) {
            _DAT_ram_3fcb67c4 = puVar11;
            puVar12[3] = puVar11[3];
            puVar11[3] = (uint)puVar18;
          }
          if ((bVar7 & 4) != 0) goto LAB_ram_42053ea2;
          if ((bVar7 & 0x10) == 0) {
            if (((bVar7 & 2) != 0) && (*(byte *)((int)puVar11 + 0x21) < (byte)puVar11[8])) {
              puVar19 = (uint *)FUN_ram_420530da((char)puVar11[6]);
              if (puVar19 == (uint *)0x0) {
                if ((code *)puVar11[7] != (code *)0x0) {
                  (*(code *)puVar11[7])(puVar11[4],0,0xffffffff);
                }
              }
              else {
                *(char *)((int)puVar11 + 0x21) = *(char *)((int)puVar11 + 0x21) + '\x01';
                *(ushort *)((int)puVar19 + 0x1e) = *(ushort *)((int)puVar19 + 0x1e) | 0x200;
                *puVar19 = _DAT_ram_3fcb5e68;
                puVar19[1] = _DAT_ram_3fcb5e64;
                *(undefined2 *)((int)puVar19 + 0x1a) = *(undefined2 *)((int)puVar11 + 0x1a);
                *(short *)(puVar19 + 7) = *_DAT_ram_3fcb67f4;
                puVar19[5] = 3;
                uVar10 = _DAT_ram_3fcb67e4 + 1;
                puVar19[10] = uVar10;
                puVar19[0xc] = uVar10;
                uVar13 = FUN_ram_4205328c();
                uVar10 = _DAT_ram_3fcb67e4;
                puVar19[0x17] = uVar13;
                puVar19[0x15] = uVar13;
                puVar19[0x16] = uVar10 - 1;
                uVar10 = puVar11[4];
                puVar19[0x12] = uVar13;
                puVar19[0x18] = uVar13;
                puVar19[4] = uVar10;
                puVar19[0x1f] = (uint)puVar11;
                *(byte *)((int)puVar19 + 9) = *(byte *)((int)puVar11 + 9) & 0xc;
                *(char *)(puVar19 + 2) = (char)puVar11[2];
                puVar12 = puVar19;
                puVar19[3] = (uint)_DAT_ram_3fcb67c0;
                _DAT_ram_3fcb67c0 = puVar12;
                FUN_ram_420559aa();
                DAT_ram_3fcb67ba = 1;
                if (_DAT_ram_3fcb67f2 != 0) {
                  FUN_ram_420534f0(puVar19);
                }
                sVar1 = _DAT_ram_3fcb67f4[7];
                uVar8 = *(undefined2 *)((int)puVar19 + 0x36);
                *(short *)(puVar19 + 0x19) = sVar1;
                *(short *)((int)puVar19 + 0x66) = sVar1;
                uVar14 = FUN_ram_42058ae0(puVar19,puVar19 + 1);
                uVar8 = FUN_ram_4205329c(uVar8,uVar14,puVar19 + 1);
                *(undefined2 *)((int)puVar19 + 0x36) = uVar8;
                iVar9 = FUN_ram_42054ed2(puVar19,0x12);
                if (iVar9 == 0) {
LAB_ram_42054088:
                  FUN_ram_420552e2(puVar19);
                }
                else {
                  FUN_ram_42052f60(puVar19,0);
                }
              }
            }
            goto LAB_ram_42053ea2;
          }
          sVar1 = *psVar5;
          sVar2 = psVar5[1];
          iVar15 = _DAT_ram_3fcb67e4 + _DAT_ram_3fcb67da;
        }
        FUN_ram_42055232(iVar9,_DAT_ram_3fcb67e0,iVar15,&DAT_ram_3fcb5e68,&DAT_ram_3fcb5e64,sVar2,
                         sVar1);
      }
    }
  }
LAB_ram_42053ea2:
  FUN_ram_42051d02(param_1);
  return;
  while (puVar12 = (uint *)puVar18[3], puVar20 != (uint *)puVar18[3]) {
LAB_ram_42054672:
    puVar18 = puVar12;
    if (puVar18 == (uint *)0x0) goto LAB_ram_42054604;
  }
  goto LAB_ram_420545fa;
  while (puVar12 = (uint *)puVar18[3], puVar20 != (uint *)puVar18[3]) {
LAB_ram_420546b0:
    puVar18 = puVar12;
    if (puVar18 == (uint *)0x0) goto LAB_ram_42054604;
  }
  goto LAB_ram_420545fa;
  while (puVar12 = (uint *)puVar18[3], puVar20 != (uint *)puVar18[3]) {
LAB_ram_42054602:
    puVar18 = puVar12;
    if (puVar18 == (uint *)0x0) goto LAB_ram_42054604;
  }
LAB_ram_420545fa:
  puVar18[3] = puVar20[3];
LAB_ram_42054604:
  DAT_ram_3fcb67ba = 1;
  puVar20[5] = 10;
  puVar12 = puVar20;
  puVar20[3] = (uint)_DAT_ram_3fcb67bc;
  _DAT_ram_3fcb67bc = puVar12;
  FUN_ram_420559aa();
LAB_ram_42054294:
  if ((DAT_ram_3fcb67d8 & 8) == 0) {
    if (_DAT_ram_3fcb67dc != 0) {
      if (((code *)puVar20[0x20] != (code *)0x0) &&
         (iVar9 = (*(code *)puVar20[0x20])(puVar20[4],puVar20), iVar9 == -0xd))
      goto LAB_ram_42053f9a;
      _DAT_ram_3fcb67dc = 0;
    }
    iVar9 = FUN_ram_420535a2(puVar20);
    if (iVar9 == 0) {
      if (_DAT_ram_3fcb67d4 != 0) {
        if ((*(ushort *)((int)puVar20 + 0x1e) & 0x10) != 0) {
          FUN_ram_42051d02(_DAT_ram_3fcb67d4);
LAB_ram_420544e4:
          FUN_ram_42053070(puVar20);
          goto LAB_ram_42053f9a;
        }
        if ((code *)puVar20[0x21] == (code *)0x0) {
          iVar9 = FUN_ram_42052d70(0,puVar20,_DAT_ram_3fcb67d4,0);
        }
        else {
          iVar9 = (*(code *)puVar20[0x21])(puVar20[4]);
        }
        if (iVar9 == -0xd) goto LAB_ram_42053f9a;
        if (iVar9 != 0) {
          puVar20[0x1e] = _DAT_ram_3fcb67d4;
        }
      }
      if ((DAT_ram_3fcb67d8 & 0x20) != 0) {
        uVar10 = puVar20[0x1e];
        if (uVar10 == 0) {
          if ((short)puVar20[0xb] != 0x1680) {
            *(short *)(puVar20 + 0xb) = (short)puVar20[0xb] + 1;
          }
          if ((code *)puVar20[0x21] != (code *)0x0) {
            iVar9 = (*(code *)puVar20[0x21])(puVar20[4],puVar20,0,0);
            if (iVar9 == -0xd) goto LAB_ram_42053f9a;
            if (iVar9 == -1) {
              *(ushort *)((int)puVar20 + 0x1e) = *(ushort *)((int)puVar20 + 0x1e) | 8;
            }
          }
        }
        else {
          *(byte *)(uVar10 + 0xd) = *(byte *)(uVar10 + 0xd) | 0x20;
        }
      }
      _DAT_ram_3fcb67d0 = (uint *)0x0;
      iVar9 = FUN_ram_420535a2(puVar20);
      if (iVar9 == 0) {
        FUN_ram_420552e2(puVar20);
      }
    }
  }
  else {
    if ((code *)puVar20[0x24] != (code *)0x0) {
      (*(code *)puVar20[0x24])(puVar20[4],0xfffffff2);
    }
    FUN_ram_42052bb0(&DAT_ram_3fcb67c0,puVar20);
    FUN_ram_42052626(puVar20);
  }
LAB_ram_42053f9a:
  _DAT_ram_3fcb67d0 = (uint *)0x0;
  _DAT_ram_3fcb67d4 = 0;
  if (_DAT_ram_3fcb5ce0 != (int *)0x0) {
    FUN_ram_42051d02();
    _DAT_ram_3fcb5ce0 = (int *)0x0;
  }
  return;
}

