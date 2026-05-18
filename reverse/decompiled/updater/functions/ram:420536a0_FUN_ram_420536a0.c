
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420536a0(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  ushort uVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  iVar8 = _DAT_ram_3fcb67e4;
  iVar16 = _DAT_ram_3fcb67e0;
  if ((DAT_ram_3fcb67d9 & 0x10) != 0) {
    uVar12 = *(ushort *)(param_1 + 100);
    iVar5 = *(int *)(param_1 + 0x5c);
    if (((*(int *)(param_1 + 0x58) - _DAT_ram_3fcb67e4 < 0) ||
        ((*(int *)(param_1 + 0x58) == _DAT_ram_3fcb67e4 && (iVar5 - _DAT_ram_3fcb67e0 < 0)))) ||
       ((iVar5 == _DAT_ram_3fcb67e0 && ((uint)uVar12 < (uint)*(ushort *)(_DAT_ram_3fcb67f4 + 0xe))))
       ) {
      uVar2 = *(ushort *)(_DAT_ram_3fcb67f4 + 0xe);
      *(ushort *)(param_1 + 100) = uVar2;
      if (*(ushort *)(param_1 + 0x66) < uVar2) {
        *(ushort *)(param_1 + 0x66) = uVar2;
      }
      *(int *)(param_1 + 0x58) = iVar8;
      *(int *)(param_1 + 0x5c) = iVar16;
    }
    iVar8 = *(int *)(param_1 + 0x48);
    if (iVar8 - iVar16 < 0) {
      if (((iVar16 + -1) - iVar8 < 0) || (*(int *)(param_1 + 0x54) - iVar16 < 0)) {
        FUN_ram_42055290(param_1);
      }
      else {
        if ((*(ushort *)(param_1 + 0x1e) & 4) != 0) {
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xfffb;
          *(undefined2 *)(param_1 + 0x6e) = 0;
          *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x4e);
        }
        *(undefined2 *)(param_1 + 0x46) = 0;
        *(short *)(param_1 + 0x44) = (*(short *)(param_1 + 0x40) >> 3) + *(short *)(param_1 + 0x42);
        *(int *)(param_1 + 0x48) = iVar16;
        if (3 < *(uint *)(param_1 + 0x14)) {
          uVar6 = (uint)*(ushort *)(param_1 + 0x4c);
          uVar7 = iVar16 - iVar8 & 0xffff;
          if (uVar6 < *(ushort *)(param_1 + 0x4e)) {
            uVar9 = (((*(ushort *)(param_1 + 0x1e) & 0x800) == 0) + 1) *
                    (uint)*(ushort *)(param_1 + 0x36);
            if (uVar7 < (uVar9 & 0xffff)) {
              uVar9 = uVar7;
            }
          }
          else {
            uVar7 = uVar7 + *(ushort *)(param_1 + 0x6e);
            sVar10 = (short)uVar7;
            if ((uVar7 & 0xffff) < (uint)*(ushort *)(param_1 + 0x6e)) {
              sVar10 = -1;
            }
            else if ((uVar7 & 0xffff) < uVar6) {
              *(short *)(param_1 + 0x6e) = (short)(uVar7 * 0x10000 >> 0x10);
              goto LAB_ram_42053aa6;
            }
            *(ushort *)(param_1 + 0x6e) = sVar10 - *(ushort *)(param_1 + 0x4c);
            uVar9 = (uint)*(ushort *)(param_1 + 0x36);
          }
          uVar13 = (undefined2)(uVar6 + uVar9);
          if ((uVar6 + uVar9 & 0xffff) < uVar6) {
            uVar13 = 0xffff;
          }
          *(undefined2 *)(param_1 + 0x4c) = uVar13;
        }
LAB_ram_42053aa6:
        uVar3 = FUN_ram_420535ec(param_1,*(undefined4 *)(param_1 + 0x74));
        *(undefined4 *)(param_1 + 0x74) = uVar3;
        iVar16 = FUN_ram_420535ec(param_1,*(undefined4 *)(param_1 + 0x70));
        iVar8 = *(int *)(param_1 + 0x74);
        *(int *)(param_1 + 0x70) = iVar16;
        *(undefined1 *)(param_1 + 0x20) = 0;
        *(ushort *)(param_1 + 0x34) = -(ushort)(iVar8 == 0);
        if (iVar16 == 0) {
          *(undefined2 *)(param_1 + 0x6c) = 0;
        }
        *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + _DAT_ram_3fcb67dc;
        if ((int)((uint)*(ushort *)(param_1 + 0x1e) << 0x14) < 0) {
          if (iVar8 == 0) {
            if (iVar16 != 0) {
              iVar16 = *(int *)(iVar16 + 0xc);
              goto LAB_ram_42053b1a;
            }
          }
          else {
            iVar16 = *(int *)(iVar8 + 0xc);
LAB_ram_42053b1a:
            iVar16 = FUN_ram_4205074c(*(undefined4 *)(iVar16 + 4));
            if (iVar16 - *(int *)(param_1 + 0x50) < 0) goto LAB_ram_4205379e;
          }
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xf7ff;
        }
      }
    }
    else {
      if ((((_DAT_ram_3fcb67da != 0) ||
           ((uint)*(ushort *)(param_1 + 100) + *(int *)(param_1 + 0x5c) != (uint)uVar12 + iVar5)) ||
          (*(short *)(param_1 + 0x34) < 0)) || (iVar8 != iVar16)) goto LAB_ram_4205379e;
      cVar1 = *(char *)(param_1 + 0x47);
      if (cVar1 == -1) {
LAB_ram_42053778:
        uVar12 = *(short *)(param_1 + 0x36) + *(ushort *)(param_1 + 0x4c);
        if (uVar12 < *(ushort *)(param_1 + 0x4c)) {
          uVar12 = 0xffff;
        }
        *(ushort *)(param_1 + 0x4c) = uVar12;
      }
      else {
        *(char *)(param_1 + 0x47) = cVar1 + '\x01';
        if (3 < (byte)(cVar1 + 1U)) goto LAB_ram_42053778;
        if ((byte)(cVar1 + 1U) != 3) goto LAB_ram_4205379e;
      }
      FUN_ram_42055164(param_1);
    }
LAB_ram_4205379e:
    if ((*(uint *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x3c) - _DAT_ram_3fcb67e0 < 0)) {
      uVar6 = (uint)_DAT_ram_3fcb67cc;
      uVar9 = *(uint *)(param_1 + 0x38) & 0xffff;
      uVar7 = (int)*(short *)(param_1 + 0x40) >> 3 & 0xffff;
      uVar14 = (uVar6 - uVar9) - uVar7;
      uVar15 = uVar14 & 0xffff;
      sVar10 = (short)(((int)*(short *)(param_1 + 0x40) + uVar15) * 0x10000 >> 0x10);
      *(short *)(param_1 + 0x40) = sVar10;
      if ((short)uVar14 < 0) {
        uVar15 = uVar7 + (uVar9 - uVar6) & 0xffff;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      sVar11 = (short)((uVar15 + ((int)*(short *)(param_1 + 0x42) -
                                 ((int)*(short *)(param_1 + 0x42) >> 2))) * 0x10000 >> 0x10);
      *(short *)(param_1 + 0x42) = sVar11;
      *(short *)(param_1 + 0x44) = sVar11 + (sVar10 >> 3);
    }
  }
  iVar16 = *(int *)(param_1 + 0x28);
  if ((_DAT_ram_3fcb67da == 0) || (6 < *(uint *)(param_1 + 0x14))) {
    if ((-1 < _DAT_ram_3fcb67e4 - iVar16) &&
       (-1 < (int)((iVar16 - _DAT_ram_3fcb67e4) + -1 + (uint)*(ushort *)(param_1 + 0x2c)))) {
      return;
    }
    uVar12 = *(ushort *)(param_1 + 0x1e);
  }
  else {
    uVar6 = iVar16 - _DAT_ram_3fcb67e4;
    if (((int)(uVar6 - 1) < 0) ||
       ((int)((_DAT_ram_3fcb67e4 + -1 + (uint)_DAT_ram_3fcb67da) - iVar16) < 0)) {
      if (_DAT_ram_3fcb67e4 - iVar16 < 0) {
        *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 2;
        goto LAB_ram_42053b76;
      }
    }
    else {
      uVar7 = uVar6 & 0xffff;
      _DAT_ram_3fcb5ce4 = _DAT_ram_3fcb5ce4 - (short)uVar6;
      iVar16 = *(ushort *)(_DAT_ram_3fcb5ce0 + 8) - uVar7;
      for (piVar4 = (int *)_DAT_ram_3fcb5ce0; uVar12 = *(ushort *)((int)piVar4 + 10), uVar12 < uVar7
          ; piVar4 = (int *)*piVar4) {
        *(short *)(piVar4 + 2) = (short)((uint)(iVar16 * 0x10000) >> 0x10);
        *(undefined2 *)((int)piVar4 + 10) = 0;
        uVar7 = uVar7 - uVar12 & 0xffff;
      }
      FUN_ram_42051cb2();
      iVar8 = _DAT_ram_3fcb5ce8;
      iVar16 = *(int *)(param_1 + 0x28);
      *(char *)(_DAT_ram_3fcb5ce8 + 5) = (char)((uint)iVar16 >> 8);
      *(char *)(iVar8 + 6) = (char)((uint)iVar16 >> 0x10);
      *(char *)(iVar8 + 4) = (char)iVar16;
      *(char *)(iVar8 + 7) = (char)((uint)iVar16 >> 0x18);
      _DAT_ram_3fcb67e4 = iVar16;
    }
    sVar10 = _DAT_ram_3fcb5ce4;
    if (((int)(((*(ushort *)(param_1 + 0x2c) - 1) + iVar16) - _DAT_ram_3fcb67e4) < 0) ||
       (iVar16 != _DAT_ram_3fcb67e4)) {
LAB_ram_42053b76:
      FUN_ram_42055290(param_1);
      return;
    }
    uVar6 = FUN_ram_4205073e(*(undefined2 *)(_DAT_ram_3fcb5ce8 + 0xc));
    _DAT_ram_3fcb67da = sVar10 + (ushort)((uVar6 & 3) != 0);
    uVar6 = (uint)_DAT_ram_3fcb67da;
    if (*(ushort *)(param_1 + 0x2c) < uVar6) {
      uVar6 = FUN_ram_4205073e(*(undefined2 *)(_DAT_ram_3fcb5ce8 + 0xc));
      if ((uVar6 & 1) != 0) {
        uVar12 = *(ushort *)(_DAT_ram_3fcb5ce8 + 0xc);
        uVar6 = FUN_ram_4205073e((uint)uVar12);
        uVar6 = FUN_ram_4205073e(uVar6 & 0x3e);
        iVar16 = _DAT_ram_3fcb5ce8;
        uVar6 = uVar6 | uVar12 & 0xffffc0ff;
        *(char *)(_DAT_ram_3fcb5ce8 + 0xc) = (char)uVar6;
        *(char *)(iVar16 + 0xd) = (char)(uVar6 >> 8);
      }
      _DAT_ram_3fcb5ce4 = *(short *)(param_1 + 0x2c);
      uVar6 = FUN_ram_4205073e(*(undefined2 *)(_DAT_ram_3fcb5ce8 + 0xc));
      if ((uVar6 & 2) != 0) {
        _DAT_ram_3fcb5ce4 = _DAT_ram_3fcb5ce4 + -1;
      }
      FUN_ram_42051e98(_DAT_ram_3fcb5ce0,_DAT_ram_3fcb5ce4);
      sVar10 = _DAT_ram_3fcb5ce4;
      uVar6 = FUN_ram_4205073e(*(undefined2 *)(_DAT_ram_3fcb5ce8 + 0xc));
      _DAT_ram_3fcb67da = sVar10 + (ushort)((uVar6 & 3) != 0);
      uVar6 = (uint)_DAT_ram_3fcb67da;
    }
    *(uint *)(param_1 + 0x28) = _DAT_ram_3fcb67e4 + uVar6;
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) - (short)uVar6;
    FUN_ram_420526c4(param_1);
    if (*(short *)(_DAT_ram_3fcb5ce0 + 8) != 0) {
      _DAT_ram_3fcb67d4 = _DAT_ram_3fcb5ce0;
      _DAT_ram_3fcb5ce0 = 0;
    }
    uVar6 = FUN_ram_4205073e(*(undefined2 *)(_DAT_ram_3fcb5ce8 + 0xc));
    if ((uVar6 & 1) != 0) {
      DAT_ram_3fcb67d8 = DAT_ram_3fcb67d8 | 0x20;
    }
    uVar12 = *(ushort *)(param_1 + 0x1e);
    if ((uVar12 & 1) == 0) {
      uVar12 = uVar12 | 1;
      goto LAB_ram_42053b8e;
    }
    uVar12 = uVar12 & 0xfffe;
  }
  uVar12 = uVar12 | 2;
LAB_ram_42053b8e:
  *(ushort *)(param_1 + 0x1e) = uVar12;
  return;
}

