
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420565de(int *param_1)

{
  bool bVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  short *psVar5;
  short *psVar6;
  uint *puVar7;
  short sVar8;
  byte bVar9;
  undefined2 uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  ushort uVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  
  if (param_1 == (int *)0x0) goto LAB_ram_420565fc;
  _DAT_ram_3fcc5324 = (short *)param_1[1];
  if ((((*(ushort *)((int)param_1 + 10) < 0x14) ||
       (iVar11 = FUN_ram_4205be44(_DAT_ram_3fcc26bc,_DAT_ram_3fcc26a8), iVar11 != 0)) ||
      ((_DAT_ram_3fcc26bc & 0xf0) == 0xe0)) ||
     (iVar11 = thunk_FUN_ram_4205e7ee
                         (param_1,6,(short)param_1[2],&DAT_ram_3fcc26b8,&DAT_ram_3fcc26bc),
     iVar11 != 0)) goto LAB_ram_420568ec;
  uVar12 = FUN_ram_420523aa(_DAT_ram_3fcc5324[6]);
  uVar12 = uVar12 >> 10 & 0xfc;
  if ((uVar12 < 0x14) || (*(ushort *)(param_1 + 2) < uVar12)) goto LAB_ram_420568ec;
  _DAT_ram_3fcc5322 = (short)((uVar12 - 0x14) * 0x10000 >> 0x10);
  _DAT_ram_3fcc531c = 0;
  if (*(ushort *)((int)param_1 + 10) < uVar12) {
    if (*param_1 == 0) goto LAB_ram_420565fc;
    FUN_ram_42053a6a(param_1,0x14);
    sVar8 = _DAT_ram_3fcc5322;
    sVar2 = *(short *)((int)param_1 + 10);
    _DAT_ram_3fcc5320 = sVar2;
    FUN_ram_42053a6a(param_1,sVar2);
    iVar11 = *param_1;
    uVar17 = sVar8 - sVar2;
    if (*(ushort *)(iVar11 + 10) < uVar17) goto LAB_ram_420568ec;
    _DAT_ram_3fcc531c = *(undefined4 *)(iVar11 + 4);
    FUN_ram_42053a6a(iVar11,uVar17);
    sVar8 = (sVar2 + (short)param_1[2]) - sVar8;
    *(short *)(param_1 + 2) = sVar8;
    if ((*(short *)((int)param_1 + 10) != 0) || (*(short *)(*param_1 + 8) != sVar8))
    goto LAB_ram_420565fc;
  }
  else {
    _DAT_ram_3fcc5320 = _DAT_ram_3fcc5322;
    FUN_ram_42053a6a(param_1);
  }
  psVar5 = _DAT_ram_3fcc5324;
  uVar10 = FUN_ram_420523aa(*_DAT_ram_3fcc5324);
  *(char *)psVar5 = (char)uVar10;
  *(char *)((int)psVar5 + 1) = (char)((ushort)uVar10 >> 8);
  psVar5 = _DAT_ram_3fcc5324;
  uVar10 = FUN_ram_420523aa(_DAT_ram_3fcc5324[1]);
  *(char *)(psVar5 + 1) = (char)uVar10;
  *(char *)((int)psVar5 + 3) = (char)((ushort)uVar10 >> 8);
  psVar5 = _DAT_ram_3fcc5324;
  _DAT_ram_3fcc5314 = FUN_ram_420523b8(*(undefined4 *)(_DAT_ram_3fcc5324 + 2));
  *(char *)((int)psVar5 + 5) = (char)(_DAT_ram_3fcc5314 >> 8);
  *(char *)(psVar5 + 3) = (char)(_DAT_ram_3fcc5314 >> 0x10);
  *(char *)(psVar5 + 2) = (char)_DAT_ram_3fcc5314;
  *(char *)((int)psVar5 + 7) = (char)(_DAT_ram_3fcc5314 >> 0x18);
  psVar5 = _DAT_ram_3fcc5324;
  _DAT_ram_3fcc5310 = FUN_ram_420523b8(*(undefined4 *)(_DAT_ram_3fcc5324 + 4));
  *(char *)((int)psVar5 + 9) = (char)(_DAT_ram_3fcc5310 >> 8);
  *(char *)(psVar5 + 5) = (char)(_DAT_ram_3fcc5310 >> 0x10);
  *(char *)(psVar5 + 4) = (char)_DAT_ram_3fcc5310;
  *(char *)((int)psVar5 + 0xb) = (char)(_DAT_ram_3fcc5310 >> 0x18);
  psVar5 = _DAT_ram_3fcc5324;
  uVar10 = FUN_ram_420523aa(_DAT_ram_3fcc5324[7]);
  psVar6 = _DAT_ram_3fcc5324;
  *(char *)(psVar5 + 7) = (char)uVar10;
  *(char *)((int)psVar5 + 0xf) = (char)((ushort)uVar10 >> 8);
  bVar9 = FUN_ram_420523aa(psVar6[6]);
  psVar5 = _DAT_ram_3fcc5324;
  puVar7 = _DAT_ram_3fcc52f4;
  iVar11 = _DAT_ram_3fcc26ac;
  DAT_ram_3fcc5309 = bVar9 & 0x3f;
  uVar17 = *(ushort *)(param_1 + 2);
  _DAT_ram_3fcc530a = uVar17;
  if (((bVar9 & 3) != 0) && (_DAT_ram_3fcc530a = uVar17 + 1, (ushort)(uVar17 + 1) < uVar17))
  goto LAB_ram_420568ec;
  puVar13 = _DAT_ram_3fcc52f0;
  puVar18 = (uint *)0x0;
  do {
    puVar20 = puVar18;
    puVar18 = puVar13;
    puVar13 = _DAT_ram_3fcc52ec;
    if (puVar18 == (uint *)0x0) goto LAB_ram_42056802;
    if ((puVar18[5] < 2) || (puVar18[5] == 10)) goto LAB_ram_420565fc;
    puVar13 = (uint *)puVar18[3];
  } while ((((char)puVar18[2] != '\0') &&
           ((char)puVar18[2] != (char)(*(char *)(_DAT_ram_3fcc26ac + 0x3c) + '\x01'))) ||
          (((((short)puVar18[7] != *_DAT_ram_3fcc5324 ||
             (*(short *)((int)puVar18 + 0x1a) != _DAT_ram_3fcc5324[1])) ||
            (puVar18[1] != _DAT_ram_3fcc26b8)) || (*puVar18 != _DAT_ram_3fcc26bc))));
  if (puVar13 == puVar18) goto LAB_ram_420565fc;
  if (puVar20 != (uint *)0x0) {
    puVar20[3] = (uint)puVar13;
    puVar18[3] = (uint)_DAT_ram_3fcc52f0;
    bVar1 = puVar18 == _DAT_ram_3fcc52f0;
    _DAT_ram_3fcc52f0 = puVar18;
    if (bVar1) goto LAB_ram_420565fc;
  }
  _DAT_ram_3fcc2530 = 0;
  _DAT_ram_3fcc253c = psVar5;
  _DAT_ram_3fcc5304 = 0;
  DAT_ram_3fcc5308 = 0;
  _DAT_ram_3fcc530c = 0;
  _DAT_ram_3fcc2534 = param_1;
  _DAT_ram_3fcc2538 = uVar17;
  if ((bVar9 & 8) != 0) {
    *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 1;
  }
  if ((puVar18[0x1f] != 0) &&
     ((iVar11 = FUN_ram_420551fc(puVar18), iVar11 == -0xd ||
      ((puVar18[0x1f] != 0 && (_DAT_ram_3fcc530a != 0)))))) {
    if (*(short *)((int)puVar18 + 0x2e) == 0) {
      FUN_ram_42057e3a(puVar18);
    }
    goto LAB_ram_420569fa;
  }
  bVar9 = DAT_ram_3fcc5309;
  _DAT_ram_3fcc5300 = puVar18;
  if ((DAT_ram_3fcc5309 & 4) == 0) {
    bVar3 = DAT_ram_3fcc5309 & 2;
    bVar4 = DAT_ram_3fcc5309 & 2;
    uVar17 = *(ushort *)((int)puVar18 + 0x1e);
    if (((DAT_ram_3fcc5309 & 2) != 0) && (1 < puVar18[5] - 2)) {
LAB_ram_42056d54:
      uVar17 = uVar17 | 2;
LAB_ram_42056cec:
      *(ushort *)((int)puVar18 + 0x1e) = uVar17;
      goto LAB_ram_42056cf0;
    }
    if ((uVar17 & 0x10) == 0) {
      puVar18[9] = _DAT_ram_3fcc52fc;
    }
    *(undefined2 *)((int)puVar18 + 0xa6) = 0;
    FUN_ram_420558d4(puVar18);
    psVar5 = _DAT_ram_3fcc5324;
    uVar12 = _DAT_ram_3fcc5314;
    uVar14 = puVar18[5];
    if (bVar3 == 0) {
      if (uVar14 == 6) {
        FUN_ram_42055aaa(puVar18);
        if ((DAT_ram_3fcc5308 & 0x20) != 0) {
          *(ushort *)((int)puVar18 + 0x1e) = *(ushort *)((int)puVar18 + 0x1e) | 2;
          FUN_ram_42054ba6(puVar18);
          puVar7 = _DAT_ram_3fcc52f0;
          if (puVar18 == _DAT_ram_3fcc52f0) {
LAB_ram_42057058:
            _DAT_ram_3fcc52f0 = (uint *)puVar18[3];
          }
          else {
            do {
              puVar13 = puVar7;
              if (puVar13 == (uint *)0x0) goto LAB_ram_42057070;
              puVar7 = (uint *)puVar13[3];
            } while (puVar18 != (uint *)puVar13[3]);
LAB_ram_42057066:
            puVar13[3] = puVar18[3];
          }
LAB_ram_42057070:
          DAT_ram_3fcc52ea = 1;
          puVar18[5] = 10;
          puVar7 = puVar18;
          puVar18[3] = (uint)_DAT_ram_3fcc52ec;
          _DAT_ram_3fcc52ec = puVar7;
          FUN_ram_420585e0();
        }
      }
      else {
        if (uVar14 < 7) goto LAB_ram_42056d88;
        if (uVar14 == 8) {
          FUN_ram_42055aaa(puVar18);
          if ((((DAT_ram_3fcc5309 & 0x10) != 0) && (puVar18[0x15] == _DAT_ram_3fcc5310)) &&
             (puVar18[0x1c] == 0)) {
            FUN_ram_42054ba6(puVar18);
            puVar7 = _DAT_ram_3fcc52f0;
            if (puVar18 == _DAT_ram_3fcc52f0) goto LAB_ram_42057058;
            do {
              puVar13 = puVar7;
              if (puVar13 == (uint *)0x0) goto LAB_ram_42057070;
              puVar7 = (uint *)puVar13[3];
            } while (puVar18 != (uint *)puVar13[3]);
            goto LAB_ram_42057066;
          }
        }
        else if (uVar14 == 9) {
          FUN_ram_42055aaa(puVar18);
          if ((((DAT_ram_3fcc5309 & 0x10) != 0) && (puVar18[0x15] == _DAT_ram_3fcc5310)) &&
             (puVar18[0x1c] == 0)) {
            DAT_ram_3fcc5308 = DAT_ram_3fcc5308 | 0x10;
          }
        }
        else if (uVar14 == 7) goto LAB_ram_42056e82;
      }
      goto LAB_ram_42056cf0;
    }
    if (1 < uVar14 - 2) goto LAB_ram_42056cf0;
LAB_ram_42056d88:
    if (uVar14 != 3) {
      if (uVar14 < 4) {
        if (uVar14 == 2) {
          if ((bVar9 & 0x12) == 0x12) {
            if (puVar18[0x12] + 1 == _DAT_ram_3fcc5310) {
              puVar18[0x12] = puVar18[0x12] + 1;
              uVar14 = uVar12 + 1;
              puVar18[10] = uVar14;
              puVar18[0xc] = uVar14;
              sVar2 = psVar5[7];
              *(short *)(puVar18 + 0x19) = sVar2;
              *(short *)((int)puVar18 + 0x66) = sVar2;
              puVar18[0x16] = uVar12 - 1;
              puVar18[5] = 4;
              uVar10 = *(undefined2 *)((int)puVar18 + 0x36);
              uVar15 = FUN_ram_4205b904(puVar18,puVar18 + 1);
              iVar11 = FUN_ram_420549c0(uVar10,uVar15,puVar18 + 1);
              uVar14 = iVar11 << 1;
              *(short *)((int)puVar18 + 0x36) = (short)iVar11;
              uVar12 = uVar14;
              if (uVar14 < 0x111c) {
                uVar12 = 0x111c;
              }
              if ((uint)(iVar11 << 2) < uVar12) {
                uVar10 = (undefined2)((uint)(iVar11 << 0x12) >> 0x10);
              }
              else {
                uVar10 = 0x111c;
                if (0x111c < uVar14) {
                  uVar10 = (undefined2)((uint)(iVar11 << 0x11) >> 0x10);
                }
              }
              *(undefined2 *)(puVar18 + 0x13) = uVar10;
              if (*(short *)((int)puVar18 + 0x6a) == 0) goto LAB_ram_420565fc;
              *(short *)((int)puVar18 + 0x6a) = *(short *)((int)puVar18 + 0x6a) + -1;
              if ((uint *)puVar18[0x1d] == (uint *)0x0) {
                if ((uint *)puVar18[0x1c] == (uint *)0x0) goto LAB_ram_420565fc;
                puVar18[0x1c] = *(uint *)puVar18[0x1c];
              }
              else {
                puVar18[0x1d] = *(uint *)puVar18[0x1d];
              }
              FUN_ram_420548a2();
              if (puVar18[0x1d] == 0) {
                *(undefined2 *)(puVar18 + 0xd) = 0xffff;
              }
              else {
                *(undefined2 *)(puVar18 + 0xd) = 0;
                *(undefined1 *)((int)puVar18 + 0x46) = 0;
              }
              if (((code *)puVar18[0x23] != (code *)0x0) &&
                 (iVar11 = (*(code *)puVar18[0x23])(puVar18[4],puVar18,0), iVar11 == -0xd))
              goto LAB_ram_420569fa;
              goto LAB_ram_42056d36;
            }
          }
          else if ((bVar9 & 0x10) == 0) goto LAB_ram_42056cf0;
          FUN_ram_42057d6a(puVar18,_DAT_ram_3fcc5310,_DAT_ram_3fcc5314 + _DAT_ram_3fcc530a,
                           &DAT_ram_3fcc26bc,&DAT_ram_3fcc26b8,_DAT_ram_3fcc5324[1],
                           *_DAT_ram_3fcc5324);
          if (*(byte *)((int)puVar18 + 0x46) < 0xc) {
            *(undefined2 *)(puVar18 + 0xd) = 0;
            FUN_ram_42058366(puVar18);
          }
        }
      }
      else {
        if (uVar14 == 4) {
LAB_ram_42056e82:
          FUN_ram_42055aaa(puVar18);
LAB_ram_42056fac:
          if ((DAT_ram_3fcc5308 & 0x20) == 0) goto LAB_ram_42056cf0;
          *(ushort *)((int)puVar18 + 0x1e) = *(ushort *)((int)puVar18 + 0x1e) | 2;
          uVar12 = 7;
        }
        else {
          FUN_ram_42055aaa(puVar18);
          if ((DAT_ram_3fcc5308 & 0x20) == 0) {
            if ((((DAT_ram_3fcc5309 & 0x10) == 0) || (puVar18[0x15] != _DAT_ram_3fcc5310)) ||
               (puVar18[0x1c] != 0)) goto LAB_ram_42056cf0;
            uVar12 = 6;
          }
          else {
            uVar17 = *(ushort *)((int)puVar18 + 0x1e) | 2;
            if ((((DAT_ram_3fcc5309 & 0x10) != 0) && (puVar18[0x15] == _DAT_ram_3fcc5310)) &&
               (puVar18[0x1c] == 0)) {
              *(ushort *)((int)puVar18 + 0x1e) = uVar17;
              FUN_ram_42054ba6(puVar18);
              puVar7 = _DAT_ram_3fcc52f0;
              if (puVar18 == _DAT_ram_3fcc52f0) goto LAB_ram_42057058;
              do {
                puVar13 = puVar7;
                if (puVar13 == (uint *)0x0) goto LAB_ram_42057070;
                puVar7 = (uint *)puVar13[3];
              } while (puVar18 != (uint *)puVar13[3]);
              goto LAB_ram_42057066;
            }
            *(ushort *)((int)puVar18 + 0x1e) = uVar17;
            uVar12 = 8;
          }
        }
        puVar18[5] = uVar12;
      }
      goto LAB_ram_42056cf0;
    }
    if (bVar4 != 0) {
      if (puVar18[10] - 1 == _DAT_ram_3fcc5314) {
        FUN_ram_42057c28(puVar18);
      }
      goto LAB_ram_42056cf0;
    }
    if ((bVar9 & 0x10) == 0) goto LAB_ram_42056cf0;
    if (((int)((_DAT_ram_3fcc5310 - 1) - puVar18[0x12]) < 0) ||
       ((int)(puVar18[0x15] - _DAT_ram_3fcc5310) < 0)) {
      FUN_ram_42057d6a(puVar18,_DAT_ram_3fcc5310,_DAT_ram_3fcc5314 + _DAT_ram_3fcc530a,
                       &DAT_ram_3fcc26bc,&DAT_ram_3fcc26b8,_DAT_ram_3fcc5324[1],*_DAT_ram_3fcc5324);
      goto LAB_ram_42056cf0;
    }
    puVar18[5] = 4;
    if (puVar18[0x20] != 0) {
      if (*(int *)(puVar18[0x20] + 0x1c) == 0) goto LAB_ram_420565fc;
      FUN_ram_4205455a(puVar18);
      if (*(code **)(puVar18[0x20] + 0x1c) != (code *)0x0) {
        iVar11 = (**(code **)(puVar18[0x20] + 0x1c))(puVar18[4],puVar18,0);
        if (iVar11 == 0) {
          FUN_ram_42055aaa(puVar18);
          if (_DAT_ram_3fcc530c != 0) {
            _DAT_ram_3fcc530c = _DAT_ram_3fcc530c + -1;
          }
          uVar19 = (uint)*(ushort *)((int)puVar18 + 0x36);
          uVar14 = uVar19 << 1;
          uVar12 = uVar14;
          if (uVar14 < 0x111c) {
            uVar12 = 0x111c;
          }
          if (uVar19 << 2 < uVar12) {
            uVar10 = (undefined2)((uVar19 << 0x12) >> 0x10);
          }
          else {
            uVar10 = 0x111c;
            if (0x111c < uVar14) {
              uVar10 = (undefined2)((uVar19 << 0x11) >> 0x10);
            }
          }
          *(undefined2 *)(puVar18 + 0x13) = uVar10;
          goto LAB_ram_42056fac;
        }
        if (iVar11 == -0xd) goto LAB_ram_420569fa;
      }
    }
LAB_ram_42056f44:
    FUN_ram_42054db2(puVar18);
  }
  else {
    if (puVar18[5] == 2) {
      if (puVar18[0x15] == _DAT_ram_3fcc5310) {
LAB_ram_42056cda:
        DAT_ram_3fcc5308 = DAT_ram_3fcc5308 | 8;
        uVar17 = *(ushort *)((int)puVar18 + 0x1e) & 0xfffe;
        goto LAB_ram_42056cec;
      }
    }
    else {
      uVar12 = puVar18[10];
      if (uVar12 == _DAT_ram_3fcc5314) {
        if (puVar18[5] == 0) goto LAB_ram_420565fc;
        goto LAB_ram_42056cda;
      }
      if ((-1 < (int)(_DAT_ram_3fcc5314 - uVar12)) &&
         (-1 < (int)((uVar12 - _DAT_ram_3fcc5314) + (uint)(ushort)puVar18[0xb]))) {
LAB_ram_42056d36:
        uVar17 = *(ushort *)((int)puVar18 + 0x1e);
        goto LAB_ram_42056d54;
      }
    }
LAB_ram_42056cf0:
    if ((DAT_ram_3fcc5308 & 8) != 0) {
      if ((code *)puVar18[0x25] != (code *)0x0) {
        (*(code *)puVar18[0x25])(puVar18[4],0xfffffff2);
      }
      FUN_ram_42054c00(&DAT_ram_3fcc52f0,puVar18);
      FUN_ram_42054506(puVar18);
      goto LAB_ram_420569fa;
    }
    if (_DAT_ram_3fcc530c != 0) {
      if (((code *)puVar18[0x21] != (code *)0x0) &&
         (iVar11 = (*(code *)puVar18[0x21])(puVar18[4],puVar18), iVar11 == -0xd))
      goto LAB_ram_420569fa;
      _DAT_ram_3fcc530c = 0;
    }
    iVar11 = FUN_ram_42055988(puVar18);
    if (iVar11 != 0) goto LAB_ram_420569fa;
    if (_DAT_ram_3fcc5304 != 0) {
      if (puVar18[0x1f] != 0) {
LAB_ram_420565fc:
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      if ((*(ushort *)((int)puVar18 + 0x1e) & 0x10) != 0) {
        FUN_ram_42053ac4(_DAT_ram_3fcc5304);
        goto LAB_ram_42056f44;
      }
      if ((code *)puVar18[0x22] == (code *)0x0) {
        iVar11 = FUN_ram_420551c6(0,puVar18,_DAT_ram_3fcc5304,0);
      }
      else {
        iVar11 = (*(code *)puVar18[0x22])(puVar18[4]);
      }
      if (iVar11 == -0xd) goto LAB_ram_420569fa;
      if (iVar11 != 0) {
        puVar18[0x1f] = _DAT_ram_3fcc5304;
      }
    }
    if ((DAT_ram_3fcc5308 & 0x20) != 0) {
      uVar12 = puVar18[0x1f];
      if (uVar12 == 0) {
        if ((short)puVar18[0xb] != 0x1680) {
          *(short *)(puVar18 + 0xb) = (short)puVar18[0xb] + 1;
        }
        if ((code *)puVar18[0x22] != (code *)0x0) {
          iVar11 = (*(code *)puVar18[0x22])(puVar18[4],puVar18,0,0);
          if (iVar11 == -0xd) goto LAB_ram_420569fa;
          if (iVar11 == -1) {
            *(ushort *)((int)puVar18 + 0x1e) = *(ushort *)((int)puVar18 + 0x1e) | 8;
          }
        }
      }
      else {
        *(byte *)(uVar12 + 0xd) = *(byte *)(uVar12 + 0xd) | 0x20;
      }
    }
    _DAT_ram_3fcc5300 = (uint *)0x0;
    iVar11 = FUN_ram_42055988(puVar18);
    if (iVar11 == 0) {
      FUN_ram_42057e96(puVar18);
    }
  }
LAB_ram_420569fa:
  _DAT_ram_3fcc5300 = (uint *)0x0;
  _DAT_ram_3fcc5304 = 0;
  if (_DAT_ram_3fcc2534 != (int *)0x0) {
    FUN_ram_42053ac4();
    _DAT_ram_3fcc2534 = (int *)0x0;
  }
  return;
LAB_ram_42056802:
  if (puVar13 == (uint *)0x0) goto code_r0x42056806;
  if (puVar13[5] != 10) goto LAB_ram_420565fc;
  if ((((((char)puVar13[2] == '\0') ||
        ((char)puVar13[2] == (char)(*(char *)(_DAT_ram_3fcc26ac + 0x3c) + '\x01'))) &&
       ((short)puVar13[7] == *_DAT_ram_3fcc5324)) &&
      ((*(short *)((int)puVar13 + 0x1a) == _DAT_ram_3fcc5324[1] && (_DAT_ram_3fcc26b8 == puVar13[1])
       ))) && (*puVar13 == _DAT_ram_3fcc26bc)) {
    if ((bVar9 & 4) != 0) goto LAB_ram_420568ec;
    uVar12 = (uint)_DAT_ram_3fcc530a;
    if ((bVar9 & 2) == 0) {
      if ((bVar9 & 1) != 0) {
        puVar13[9] = _DAT_ram_3fcc52fc;
      }
    }
    else if ((-1 < (int)(_DAT_ram_3fcc5314 - puVar13[10])) &&
            (-1 < (int)((puVar13[10] - _DAT_ram_3fcc5314) + (uint)(ushort)puVar13[0xb]))) {
      FUN_ram_42057d6a(puVar13,_DAT_ram_3fcc5310,_DAT_ram_3fcc5314 + uVar12,&DAT_ram_3fcc26bc,
                       &DAT_ram_3fcc26b8);
      goto LAB_ram_420568ec;
    }
    if (uVar12 == 0) goto LAB_ram_420568ec;
    *(ushort *)((int)puVar13 + 0x1e) = *(ushort *)((int)puVar13 + 0x1e) | 2;
    goto LAB_ram_42056aee;
  }
  puVar13 = (uint *)puVar13[3];
  goto LAB_ram_42056802;
code_r0x42056806:
  puVar20 = (uint *)0x0;
  puVar21 = (uint *)0x0;
  puVar13 = (uint *)0x0;
  for (puVar18 = _DAT_ram_3fcc52f4; puVar18 != (uint *)0x0; puVar18 = (uint *)puVar18[3]) {
    if ((((char)puVar18[2] == '\0') ||
        ((char)puVar18[2] == (char)(*(char *)(_DAT_ram_3fcc26ac + 0x3c) + '\x01'))) &&
       (*(short *)((int)puVar18 + 0x1a) == _DAT_ram_3fcc5324[1])) {
      if (*puVar18 == _DAT_ram_3fcc26bc) goto LAB_ram_42056b3e;
      if (*puVar18 == 0) {
        puVar20 = puVar18;
        puVar21 = puVar13;
      }
    }
    puVar13 = puVar18;
  }
  puVar18 = puVar20;
  puVar13 = puVar21;
  if (puVar20 == (uint *)0x0) {
    uVar12 = FUN_ram_420523aa(_DAT_ram_3fcc5324[6]);
    if ((uVar12 & 4) != 0) goto LAB_ram_420568ec;
    sVar2 = *_DAT_ram_3fcc5324;
    sVar8 = _DAT_ram_3fcc5324[1];
    iVar16 = _DAT_ram_3fcc5314 + _DAT_ram_3fcc530a;
    iVar11 = _DAT_ram_3fcc26ac;
  }
  else {
LAB_ram_42056b3e:
    if (puVar13 != (uint *)0x0) {
      _DAT_ram_3fcc52f4 = puVar18;
      puVar13[3] = puVar18[3];
      puVar18[3] = (uint)puVar7;
    }
    if ((bVar9 & 4) != 0) goto LAB_ram_420568ec;
    if ((bVar9 & 0x10) == 0) {
      if (((bVar9 & 2) != 0) && (*(byte *)((int)puVar18 + 0x21) < (byte)puVar18[8])) {
        puVar13 = (uint *)FUN_ram_42054e98((char)puVar18[6]);
        if (puVar13 == (uint *)0x0) {
          if ((code *)puVar18[7] != (code *)0x0) {
            (*(code *)puVar18[7])(puVar18[4],0,0xffffffff);
          }
        }
        else {
          *(char *)((int)puVar18 + 0x21) = *(char *)((int)puVar18 + 0x21) + '\x01';
          *(ushort *)((int)puVar13 + 0x1e) = *(ushort *)((int)puVar13 + 0x1e) | 0x200;
          *puVar13 = _DAT_ram_3fcc26bc;
          puVar13[1] = _DAT_ram_3fcc26b8;
          *(undefined2 *)((int)puVar13 + 0x1a) = *(undefined2 *)((int)puVar18 + 0x1a);
          *(short *)(puVar13 + 7) = *_DAT_ram_3fcc5324;
          puVar13[5] = 3;
          uVar12 = _DAT_ram_3fcc5314 + 1;
          puVar13[10] = uVar12;
          puVar13[0xc] = uVar12;
          uVar14 = FUN_ram_420549a2();
          uVar12 = _DAT_ram_3fcc5314;
          puVar13[0x17] = uVar14;
          puVar13[0x15] = uVar14;
          puVar13[0x16] = uVar12 - 1;
          uVar12 = puVar18[4];
          puVar13[0x12] = uVar14;
          puVar13[0x18] = uVar14;
          puVar13[0x20] = (uint)puVar18;
          puVar13[4] = uVar12;
          *(byte *)((int)puVar13 + 9) = *(byte *)((int)puVar18 + 9) & 0xc;
          *(char *)(puVar13 + 2) = (char)puVar18[2];
          puVar7 = puVar13;
          puVar13[3] = (uint)_DAT_ram_3fcc52f0;
          _DAT_ram_3fcc52f0 = puVar7;
          FUN_ram_420585e0();
          DAT_ram_3fcc52ea = 1;
          FUN_ram_420558d4(puVar13);
          sVar2 = _DAT_ram_3fcc5324[7];
          uVar10 = *(undefined2 *)((int)puVar13 + 0x36);
          *(short *)(puVar13 + 0x19) = sVar2;
          *(short *)((int)puVar13 + 0x66) = sVar2;
          uVar15 = FUN_ram_4205b904(puVar13,puVar13 + 1);
          uVar10 = FUN_ram_420549c0(uVar10,uVar15,puVar13 + 1);
          *(undefined2 *)((int)puVar13 + 0x36) = uVar10;
          iVar11 = FUN_ram_42057a0c(puVar13,0x12);
          if (iVar11 == 0) {
LAB_ram_42056aee:
            FUN_ram_42057e96(puVar13);
          }
          else {
            FUN_ram_42054c86(puVar13,0);
          }
        }
      }
      goto LAB_ram_420568ec;
    }
    sVar2 = *psVar5;
    sVar8 = psVar5[1];
    iVar16 = _DAT_ram_3fcc5314 + _DAT_ram_3fcc530a;
  }
  FUN_ram_42057dd0(iVar11,_DAT_ram_3fcc5310,iVar16,&DAT_ram_3fcc26bc,&DAT_ram_3fcc26b8,sVar8,sVar2);
LAB_ram_420568ec:
  FUN_ram_42053ac4(param_1);
  return;
}

