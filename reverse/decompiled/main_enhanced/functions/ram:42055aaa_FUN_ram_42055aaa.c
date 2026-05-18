
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42055aaa(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined2 uVar6;
  short sVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  undefined2 uVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  int *piVar22;
  
  iVar18 = _DAT_ram_3fcc5314;
  iVar14 = _DAT_ram_3fcc5310;
  if (*(uint *)(param_1 + 0x14) < 4) goto LAB_ram_42055ac8;
  if ((DAT_ram_3fcc5309 & 0x10) != 0) {
    uVar17 = *(ushort *)(param_1 + 100);
    iVar10 = *(int *)(param_1 + 0x5c);
    if (((*(int *)(param_1 + 0x58) - _DAT_ram_3fcc5314 < 0) ||
        ((*(int *)(param_1 + 0x58) == _DAT_ram_3fcc5314 && (iVar10 - _DAT_ram_3fcc5310 < 0)))) ||
       ((iVar10 == _DAT_ram_3fcc5310 && ((uint)uVar17 < (uint)*(ushort *)(_DAT_ram_3fcc5324 + 0xe)))
       )) {
      uVar2 = *(ushort *)(_DAT_ram_3fcc5324 + 0xe);
      *(ushort *)(param_1 + 100) = uVar2;
      if (*(ushort *)(param_1 + 0x66) < uVar2) {
        *(ushort *)(param_1 + 0x66) = uVar2;
      }
      *(int *)(param_1 + 0x58) = iVar18;
      *(int *)(param_1 + 0x5c) = iVar14;
    }
    iVar18 = *(int *)(param_1 + 0x48);
    if (iVar18 - iVar14 < 0) {
      if (((iVar14 + -1) - iVar18 < 0) || (*(int *)(param_1 + 0x54) - iVar14 < 0)) {
        FUN_ram_42057e3a(param_1);
        goto LAB_ram_42055bc0;
      }
      if ((*(ushort *)(param_1 + 0x1e) & 4) != 0) {
        *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xfffb;
        *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4e);
        *(undefined2 *)(param_1 + 0x6e) = 0;
      }
      *(short *)(param_1 + 0x44) = (*(short *)(param_1 + 0x40) >> 3) + *(short *)(param_1 + 0x42);
      uVar11 = (uint)*(ushort *)(param_1 + 0x4c);
      *(undefined2 *)(param_1 + 0x46) = 0;
      *(int *)(param_1 + 0x48) = iVar14;
      uVar12 = iVar14 - iVar18 & 0xffff;
      if (uVar11 < *(ushort *)(param_1 + 0x4e)) {
        uVar13 = (((*(ushort *)(param_1 + 0x1e) & 0x800) == 0) + 1) *
                 (uint)*(ushort *)(param_1 + 0x36);
        if (uVar12 < (uVar13 & 0xffff)) {
          uVar13 = uVar12;
        }
LAB_ram_42055f42:
        uVar16 = (undefined2)(uVar11 + uVar13);
        if ((uVar11 + uVar13 & 0xffff) < uVar11) {
          uVar16 = 0xffff;
        }
        *(undefined2 *)(param_1 + 0x4c) = uVar16;
      }
      else {
        uVar12 = uVar12 + *(ushort *)(param_1 + 0x6e);
        sVar7 = (short)uVar12;
        if ((uVar12 & 0xffff) < (uint)*(ushort *)(param_1 + 0x6e)) {
          sVar7 = -1;
LAB_ram_42055fd0:
          *(ushort *)(param_1 + 0x6e) = sVar7 - *(ushort *)(param_1 + 0x4c);
          uVar13 = (uint)*(ushort *)(param_1 + 0x36);
          goto LAB_ram_42055f42;
        }
        if (uVar11 <= (uVar12 & 0xffff)) goto LAB_ram_42055fd0;
        *(short *)(param_1 + 0x6e) = (short)(uVar12 * 0x10000 >> 0x10);
      }
      uVar9 = FUN_ram_420559d2(param_1,*(undefined4 *)(param_1 + 0x74),
                               *(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x74) = uVar9;
      iVar14 = FUN_ram_420559d2(param_1,*(undefined4 *)(param_1 + 0x70),uVar9);
      iVar18 = *(int *)(param_1 + 0x74);
      *(int *)(param_1 + 0x70) = iVar14;
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(ushort *)(param_1 + 0x34) = -(ushort)(iVar18 == 0);
      if (iVar14 == 0) {
        *(undefined2 *)(param_1 + 0x6c) = 0;
      }
      *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + _DAT_ram_3fcc530c;
      if (-1 < (int)((uint)*(ushort *)(param_1 + 0x1e) << 0x14)) goto LAB_ram_42055bc0;
      if (iVar18 == 0) {
        if (iVar14 != 0) {
          iVar14 = *(int *)(iVar14 + 0xc);
          goto LAB_ram_42055fe0;
        }
      }
      else {
        iVar14 = *(int *)(iVar18 + 0xc);
LAB_ram_42055fe0:
        iVar14 = FUN_ram_420523b8(*(undefined4 *)(iVar14 + 4));
        if (iVar14 - *(int *)(param_1 + 0x50) < 0) goto LAB_ram_42055bc0;
      }
      *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xf7ff;
    }
    else if ((((_DAT_ram_3fcc530a == 0) &&
              ((uint)*(ushort *)(param_1 + 100) + *(int *)(param_1 + 0x5c) == (uint)uVar17 + iVar10)
              ) && (-1 < *(short *)(param_1 + 0x34))) && (iVar18 == iVar14)) {
      cVar1 = *(char *)(param_1 + 0x47);
      if (cVar1 == -1) {
LAB_ram_42055b9a:
        uVar17 = *(short *)(param_1 + 0x36) + *(ushort *)(param_1 + 0x4c);
        if (uVar17 < *(ushort *)(param_1 + 0x4c)) {
          uVar17 = 0xffff;
        }
        *(ushort *)(param_1 + 0x4c) = uVar17;
      }
      else {
        *(char *)(param_1 + 0x47) = cVar1 + '\x01';
        if (3 < (byte)(cVar1 + 1U)) goto LAB_ram_42055b9a;
        if ((byte)(cVar1 + 1U) != 3) goto LAB_ram_42055bc0;
      }
      FUN_ram_42057cee(param_1);
    }
LAB_ram_42055bc0:
    if ((*(uint *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x3c) - _DAT_ram_3fcc5310 < 0)) {
      uVar11 = (uint)_DAT_ram_3fcc52fc;
      uVar13 = *(uint *)(param_1 + 0x38) & 0xffff;
      uVar12 = (int)*(short *)(param_1 + 0x40) >> 3 & 0xffff;
      uVar19 = (uVar11 - uVar13) - uVar12;
      uVar20 = uVar19 & 0xffff;
      sVar7 = (short)(((int)*(short *)(param_1 + 0x40) + uVar20) * 0x10000 >> 0x10);
      *(short *)(param_1 + 0x40) = sVar7;
      if ((short)uVar19 < 0) {
        uVar20 = uVar12 + (uVar13 - uVar11) & 0xffff;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      sVar15 = (short)((uVar20 + ((int)*(short *)(param_1 + 0x42) -
                                 ((int)*(short *)(param_1 + 0x42) >> 2))) * 0x10000 >> 0x10);
      *(short *)(param_1 + 0x42) = sVar15;
      *(short *)(param_1 + 0x44) = sVar15 + (sVar7 >> 3);
    }
  }
  iVar14 = *(int *)(param_1 + 0x28);
  if ((_DAT_ram_3fcc530a == 0) || (6 < *(uint *)(param_1 + 0x14))) {
    if ((-1 < _DAT_ram_3fcc5314 - iVar14) &&
       (-1 < (int)((iVar14 - _DAT_ram_3fcc5314) + -1 + (uint)*(ushort *)(param_1 + 0x2c)))) {
      return;
    }
    uVar17 = *(ushort *)(param_1 + 0x1e);
  }
  else {
    uVar11 = iVar14 - _DAT_ram_3fcc5314;
    if (((int)(uVar11 - 1) < 0) ||
       ((int)((_DAT_ram_3fcc5314 + -1 + (uint)_DAT_ram_3fcc530a) - iVar14) < 0)) {
      if (_DAT_ram_3fcc5314 - iVar14 < 0) {
        *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 2;
        goto LAB_ram_4205603c;
      }
    }
    else {
      if ((_DAT_ram_3fcc2534 == 0) || (0xfffe < uVar11)) goto LAB_ram_42055ac8;
      uVar12 = uVar11 & 0xffff;
      if (*(ushort *)(_DAT_ram_3fcc2534 + 8) < uVar12) goto LAB_ram_42055ac8;
      iVar14 = *(ushort *)(_DAT_ram_3fcc2534 + 8) - uVar12;
      _DAT_ram_3fcc2538 = _DAT_ram_3fcc2538 - (short)(uVar11 * 0x10000 >> 0x10);
      for (piVar8 = (int *)_DAT_ram_3fcc2534; uVar17 = *(ushort *)((int)piVar8 + 10),
          uVar17 < uVar12; piVar8 = (int *)*piVar8) {
        *(short *)(piVar8 + 2) = (short)((uint)(iVar14 * 0x10000) >> 0x10);
        *(undefined2 *)((int)piVar8 + 10) = 0;
        uVar12 = uVar12 - uVar17 & 0xffff;
      }
      FUN_ram_42053a6a();
      iVar18 = _DAT_ram_3fcc253c;
      iVar14 = *(int *)(param_1 + 0x28);
      *(char *)(_DAT_ram_3fcc253c + 5) = (char)((uint)iVar14 >> 8);
      *(char *)(iVar18 + 6) = (char)((uint)iVar14 >> 0x10);
      *(char *)(iVar18 + 4) = (char)iVar14;
      *(char *)(iVar18 + 7) = (char)((uint)iVar14 >> 0x18);
      _DAT_ram_3fcc5314 = iVar14;
    }
    uVar17 = _DAT_ram_3fcc2538;
    if ((int)(((*(ushort *)(param_1 + 0x2c) - 1) + iVar14) - _DAT_ram_3fcc5314) < 0) {
LAB_ram_4205603c:
      FUN_ram_42057e3a(param_1);
      return;
    }
    if (iVar14 != _DAT_ram_3fcc5314) {
      piVar8 = *(int **)(param_1 + 0x78);
      piVar22 = (int *)0x0;
      if (*(int **)(param_1 + 0x78) == (int *)0x0) {
        uVar9 = FUN_ram_420548e2(&DAT_ram_3fcc2530);
        *(undefined4 *)(param_1 + 0x78) = uVar9;
      }
      else {
        do {
          piVar5 = piVar8;
          iVar14 = *(int *)(piVar5[3] + 4);
          if (iVar14 == _DAT_ram_3fcc5314) {
            if ((*(ushort *)(piVar5 + 2) < _DAT_ram_3fcc2538) &&
               (iVar14 = FUN_ram_420548e2(&DAT_ram_3fcc2530), iVar14 != 0)) {
              if (piVar22 == (int *)0x0) {
                *(int *)(param_1 + 0x78) = iVar14;
              }
              else {
                *piVar22 = iVar14;
              }
LAB_ram_4205638c:
              FUN_ram_420557ee(iVar14,piVar5);
            }
            goto LAB_ram_4205631c;
          }
          if (piVar22 == (int *)0x0) {
            if (_DAT_ram_3fcc5314 - iVar14 < 0) {
              iVar14 = FUN_ram_420548e2(&DAT_ram_3fcc2530);
              if (iVar14 != 0) {
                *(int *)(param_1 + 0x78) = iVar14;
                goto LAB_ram_4205638c;
              }
              goto LAB_ram_4205631c;
            }
          }
          else if ((-1 < (_DAT_ram_3fcc5314 + -1) - *(int *)(piVar22[3] + 4)) &&
                  (-1 < (iVar14 - _DAT_ram_3fcc5314) + -1)) {
            iVar14 = FUN_ram_420548e2(&DAT_ram_3fcc2530);
            if (iVar14 != 0) {
              if ((int)(_DAT_ram_3fcc5314 -
                       ((uint)*(ushort *)(piVar22 + 2) + *(int *)(piVar22[3] + 4))) < 0) {
                *(short *)(piVar22 + 2) =
                     (short)((uint)((_DAT_ram_3fcc5314 - *(int *)(piVar22[3] + 4)) * 0x10000) >>
                            0x10);
                FUN_ram_42053cac(piVar22[1]);
              }
              *piVar22 = iVar14;
              goto LAB_ram_4205638c;
            }
            goto LAB_ram_4205631c;
          }
          piVar8 = (int *)*piVar5;
          piVar22 = piVar5;
        } while ((int *)*piVar5 != (int *)0x0);
        if ((iVar14 - _DAT_ram_3fcc5314 < 0) &&
           (uVar11 = FUN_ram_420523aa(*(undefined2 *)(piVar5[3] + 0xc)), (uVar11 & 1) == 0)) {
          iVar14 = FUN_ram_420548e2(&DAT_ram_3fcc2530);
          *piVar5 = iVar14;
          if (iVar14 != 0) {
            if ((int)(_DAT_ram_3fcc5314 - ((uint)*(ushort *)(piVar5 + 2) + *(int *)(piVar5[3] + 4)))
                < 0) {
              *(short *)(piVar5 + 2) =
                   (short)((uint)((_DAT_ram_3fcc5314 - *(int *)(piVar5[3] + 4)) * 0x10000) >> 0x10);
              FUN_ram_42053cac(piVar5[1]);
            }
            if ((int)((*(int *)(param_1 + 0x28) - ((uint)_DAT_ram_3fcc530a + _DAT_ram_3fcc5314)) +
                     (uint)*(ushort *)(param_1 + 0x2c)) < 0) {
              uVar11 = FUN_ram_420523aa(*(undefined2 *)(*(int *)(*piVar5 + 0xc) + 0xc));
              if ((uVar11 & 1) != 0) {
                uVar12 = (uint)*(ushort *)(*(int *)(*piVar5 + 0xc) + 0xc);
                uVar11 = FUN_ram_420523aa(uVar12);
                uVar11 = FUN_ram_420523aa(uVar11 & 0x3e);
                iVar14 = *(int *)(*piVar5 + 0xc);
                uVar11 = uVar11 | uVar12 & 0xffffc0ff;
                *(char *)(iVar14 + 0xc) = (char)uVar11;
                *(char *)(iVar14 + 0xd) = (char)(uVar11 >> 8);
              }
              iVar14 = *piVar5;
              *(short *)(iVar14 + 8) =
                   (*(short *)(param_1 + 0x2c) - (short)_DAT_ram_3fcc5314) +
                   (short)*(undefined4 *)(param_1 + 0x28);
              uVar11 = FUN_ram_420523aa(*(undefined2 *)(*(int *)(iVar14 + 0xc) + 0xc));
              iVar14 = *piVar5;
              if ((uVar11 & 2) != 0) {
                *(short *)(iVar14 + 8) = *(short *)(iVar14 + 8) + -1;
              }
              FUN_ram_42053cac(*(undefined4 *)(iVar14 + 4),*(undefined2 *)(iVar14 + 8));
              sVar7 = *(short *)(*piVar5 + 8);
              uVar11 = FUN_ram_420523aa(*(undefined2 *)(*(int *)(*piVar5 + 0xc) + 0xc));
              _DAT_ram_3fcc530a = sVar7 + (ushort)((uVar11 & 3) != 0);
              if ((uint)_DAT_ram_3fcc530a + _DAT_ram_3fcc5314 !=
                  (uint)*(ushort *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28))
              goto LAB_ram_42055ac8;
            }
          }
        }
      }
LAB_ram_4205631c:
      uVar17 = 0;
      puVar3 = *(undefined4 **)(param_1 + 0x78);
      puVar21 = (undefined4 *)0x0;
      while (puVar4 = puVar3, puVar4 != (undefined4 *)0x0) {
        sVar7 = FUN_ram_42053d72(puVar4[1]);
        uVar17 = uVar17 + sVar7;
        if (4 < uVar17) {
          FUN_ram_420548c6(puVar4);
          if (puVar21 == (undefined4 *)0x0) {
            *(undefined4 *)(param_1 + 0x78) = 0;
          }
          else {
            *puVar21 = 0;
          }
          break;
        }
        puVar21 = puVar4;
        puVar3 = (undefined4 *)*puVar4;
      }
      goto LAB_ram_4205603c;
    }
    uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc));
    _DAT_ram_3fcc530a = uVar17 + ((uVar11 & 3) != 0);
    if (*(ushort *)(param_1 + 0x2c) < _DAT_ram_3fcc530a) {
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc));
      if ((uVar11 & 1) != 0) {
        uVar17 = *(ushort *)(_DAT_ram_3fcc253c + 0xc);
        uVar11 = FUN_ram_420523aa((uint)uVar17);
        uVar11 = FUN_ram_420523aa(uVar11 & 0x3e);
        iVar14 = _DAT_ram_3fcc253c;
        uVar11 = uVar11 | uVar17 & 0xffffc0ff;
        *(char *)(_DAT_ram_3fcc253c + 0xc) = (char)uVar11;
        *(char *)(iVar14 + 0xd) = (char)(uVar11 >> 8);
      }
      _DAT_ram_3fcc2538 = *(ushort *)(param_1 + 0x2c);
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc));
      if ((uVar11 & 2) != 0) {
        _DAT_ram_3fcc2538 = _DAT_ram_3fcc2538 - 1;
      }
      FUN_ram_42053cac(_DAT_ram_3fcc2534,_DAT_ram_3fcc2538);
      uVar17 = _DAT_ram_3fcc2538;
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc));
      _DAT_ram_3fcc530a = uVar17 + ((uVar11 & 3) != 0);
      if ((uint)_DAT_ram_3fcc530a + _DAT_ram_3fcc5314 !=
          (uint)*(ushort *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28)) goto LAB_ram_42055ac8;
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc));
      if ((uVar11 & 1) == 0) {
        piVar8 = (int *)*(int *)(param_1 + 0x78);
        while (piVar8 != (int *)0x0) {
          iVar14 = *(int *)(piVar8[3] + 4);
          if ((int)(((uint)_DAT_ram_3fcc530a + _DAT_ram_3fcc5314) -
                   ((uint)*(ushort *)(piVar8 + 2) + iVar14)) < 0) {
            if ((int)(iVar14 - ((uint)_DAT_ram_3fcc530a + _DAT_ram_3fcc5314)) < 0) {
              _DAT_ram_3fcc2538 = (short)iVar14 - (short)_DAT_ram_3fcc5314;
              uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc));
              if (((uVar11 & 2) != 0) ||
                 (uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc)),
                 (uVar11 & 1) != 0)) {
                _DAT_ram_3fcc2538 = _DAT_ram_3fcc2538 - 1;
              }
              FUN_ram_42053cac(_DAT_ram_3fcc2534,_DAT_ram_3fcc2538);
              uVar17 = _DAT_ram_3fcc2538;
              uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc));
              _DAT_ram_3fcc530a = uVar17 + ((uVar11 & 3) != 0);
              if ((uint)_DAT_ram_3fcc530a + _DAT_ram_3fcc5314 != *(int *)(piVar8[3] + 4))
              goto LAB_ram_42055ac8;
            }
            break;
          }
          uVar11 = FUN_ram_420523aa(*(undefined2 *)(piVar8[3] + 0xc));
          if (((uVar11 & 1) != 0) &&
             (uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc)), (uVar11 & 2) == 0
             )) {
            uVar16 = *(undefined2 *)(_DAT_ram_3fcc253c + 0xc);
            uVar6 = FUN_ram_420523aa(1);
            iVar14 = _DAT_ram_3fcc253c;
            *(byte *)(_DAT_ram_3fcc253c + 0xc) = (byte)uVar16 | (byte)uVar6;
            *(byte *)(iVar14 + 0xd) = (byte)((ushort)uVar16 >> 8) | (byte)((ushort)uVar6 >> 8);
            uVar17 = _DAT_ram_3fcc2538;
            uVar11 = FUN_ram_420523aa();
            _DAT_ram_3fcc530a = uVar17 + ((uVar11 & 3) != 0);
          }
          iVar14 = *piVar8;
          FUN_ram_420548a2(piVar8);
          piVar8 = (int *)iVar14;
        }
        *(int **)(param_1 + 0x78) = piVar8;
      }
      else {
        while (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x78) = **(undefined4 **)(param_1 + 0x78);
          FUN_ram_420548a2();
        }
      }
    }
    uVar17 = _DAT_ram_3fcc530a;
    uVar11 = (uint)_DAT_ram_3fcc530a;
    *(uint *)(param_1 + 0x28) = _DAT_ram_3fcc5314 + uVar11;
    if (*(ushort *)(param_1 + 0x2c) < uVar11) {
LAB_ram_42055ac8:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) - uVar17;
    FUN_ram_420547dc(param_1);
    if (*(short *)(_DAT_ram_3fcc2534 + 8) != 0) {
      _DAT_ram_3fcc5304 = _DAT_ram_3fcc2534;
      _DAT_ram_3fcc2534 = 0;
    }
    uVar11 = FUN_ram_420523aa(*(undefined2 *)(_DAT_ram_3fcc253c + 0xc));
    if ((uVar11 & 1) != 0) {
      DAT_ram_3fcc5308 = DAT_ram_3fcc5308 | 0x20;
    }
    while (puVar3 = *(undefined4 **)(param_1 + 0x78), puVar3 != (undefined4 *)0x0) {
      iVar14 = *(int *)(puVar3[3] + 4);
      if (iVar14 != *(int *)(param_1 + 0x28)) break;
      uVar17 = *(ushort *)(puVar3 + 2);
      uVar2 = *(ushort *)(param_1 + 0x2c);
      _DAT_ram_3fcc5314 = iVar14;
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(puVar3[3] + 0xc));
      if ((uint)uVar2 < (uint)((uVar11 & 3) != 0) + (uint)uVar17) {
        uVar16 = *(undefined2 *)(puVar3[3] + 0xc);
        *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_1 + 0x2c);
        uVar11 = FUN_ram_420523aa(uVar16);
        if (((uVar11 & 2) != 0) ||
           (uVar11 = FUN_ram_420523aa(*(undefined2 *)(puVar3[3] + 0xc)), (uVar11 & 1) != 0)) {
          *(short *)(puVar3 + 2) = *(short *)(puVar3 + 2) + -1;
        }
        FUN_ram_42053cac(puVar3[1],*(undefined2 *)(puVar3 + 2));
        FUN_ram_420548c6(*puVar3);
        *puVar3 = 0;
      }
      uVar17 = *(ushort *)(puVar3 + 2);
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(puVar3[3] + 0xc));
      iVar14 = puVar3[3];
      *(uint *)(param_1 + 0x28) =
           (uint)((uVar11 & 3) != 0) + (uint)uVar17 + *(int *)(param_1 + 0x28);
      uVar17 = *(ushort *)(puVar3 + 2);
      uVar2 = *(ushort *)(param_1 + 0x2c);
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(iVar14 + 0xc));
      if ((uint)uVar2 < (uint)((uVar11 & 3) != 0) + (uint)uVar17) goto LAB_ram_42055ac8;
      sVar7 = *(short *)(puVar3 + 2);
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(puVar3[3] + 0xc));
      *(ushort *)(param_1 + 0x2c) =
           *(short *)(param_1 + 0x2c) - ((ushort)((uVar11 & 3) != 0) + sVar7);
      FUN_ram_420547dc(param_1);
      if (*(short *)(puVar3[1] + 8) != 0) {
        iVar14 = puVar3[1];
        if (_DAT_ram_3fcc5304 != 0) {
          FUN_ram_42053dbc();
          iVar14 = _DAT_ram_3fcc5304;
        }
        _DAT_ram_3fcc5304 = iVar14;
        puVar3[1] = 0;
      }
      uVar11 = FUN_ram_420523aa(*(undefined2 *)(puVar3[3] + 0xc));
      if (((uVar11 & 1) != 0) &&
         (DAT_ram_3fcc5308 = DAT_ram_3fcc5308 | 0x20, *(int *)(param_1 + 0x14) == 4)) {
        *(undefined4 *)(param_1 + 0x14) = 7;
      }
      *(undefined4 *)(param_1 + 0x78) = *puVar3;
      FUN_ram_420548a2(puVar3);
    }
    uVar17 = *(ushort *)(param_1 + 0x1e);
    if ((uVar17 & 1) == 0) {
      uVar17 = uVar17 | 1;
      goto LAB_ram_420562e8;
    }
    uVar17 = uVar17 & 0xfffe;
  }
  uVar17 = uVar17 | 2;
LAB_ram_420562e8:
  *(ushort *)(param_1 + 0x1e) = uVar17;
  return;
}

