
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4209dfa8(undefined4 param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint3 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  short sVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [4];
  byte *pbStack_68;
  int iStack_64;
  undefined1 *puStack_50;
  int iStack_48;
  int iStack_44;
  
  iVar7 = FUN_ram_4209c13c(_DAT_ram_3fcc4b14,_DAT_ram_3fcc4964);
  uVar17 = 0x67;
  if (iVar7 != 0x18) {
    uVar17 = 0x5f;
  }
  if (param_3 < (uint)(uVar17 != 0x5f) * 8 + 99) {
    return 0;
  }
  iVar14 = 99;
  if (iVar7 == 0x18) {
    iVar14 = 0x6b;
  }
  iVar14 = param_2 + iVar14;
  if (*(char *)(param_2 + 1) != '\x03') {
    return 0;
  }
  uVar13 = CONCAT21(*(undefined2 *)(param_2 + 2),*(undefined1 *)(param_2 + 3)) & 0xffff;
  if (param_3 - 4 < uVar13) {
    return 0;
  }
  if (uVar13 < uVar17) {
    return 0;
  }
  if ((*(char *)(param_2 + 4) != -2) && (*(char *)(param_2 + 4) != '\x02')) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 6);
  uVar6 = CONCAT21(*(ushort *)(param_2 + 5),bVar1) & 7;
  uVar16 = (*(ushort *)(param_2 + 5) & 0xff) << 8;
  uVar15 = bVar1 | uVar16;
  if ((2 < (uVar6 - 1 & 0xffff)) && (iVar8 = FUN_ram_4209c5ae(_DAT_ram_3fcc4b14), iVar8 == 0)) {
    return 0xffffffff;
  }
  iVar8 = FUN_ram_4209c5ae(_DAT_ram_3fcc4b14);
  if ((iVar8 != 0) && ((bVar1 & 7) != 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3fcc4b14 & 0xc18580) == 0) {
    if ((((_DAT_ram_3fcc4b0c == 8) && (iVar8 = FUN_ram_4209c5ae(), iVar8 == 0)) && (uVar6 != 2)) &&
       (((_DAT_ram_3fcc4b10 == 8 || ((bVar1 & 8) != 0)) && (uVar6 != 3)))) {
      return 0xffffffff;
    }
  }
  else if ((uVar6 != 3) && (iVar8 = FUN_ram_4209c5ae(), iVar8 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3fcc4a8c != 0) &&
     (iVar8 = FUN_ram_4039c0e0(param_2 + 9,&DAT_ram_3fcc4a84,8), iVar8 < 1)) {
    return 0xffffffff;
  }
  if ((uVar15 >> 7 & 0x41) == 0) {
    return 0xffffffff;
  }
  if ((int)(uVar15 << 0x14) < 0) {
    return 0xffffffff;
  }
  uVar16 = uVar16 & 0x100;
  if (uVar16 != 0) {
    uVar9 = FUN_ram_4209c13c(_DAT_ram_3fcc4b14,_DAT_ram_3fcc4964);
    FUN_ram_4039c11e(&puStack_7c,param_2 + 0x51,uVar9);
    if (_DAT_ram_3fcc4a3c == 0) {
LAB_ram_4209e2f6:
      if (_DAT_ram_3fcc4a38 == 0) {
        return 0xffffffff;
      }
      (*(code *)&SUB_ram_40010488)(param_2 + 0x51,0,uVar9);
      FUN_ram_4209c60a(0x3fcc4968,_DAT_ram_3fcc49c0,_DAT_ram_3fcc4b14,uVar6,param_2,uVar13 + 4,
                       param_2 + 0x51);
      iVar8 = FUN_ram_4039c0e0(&puStack_7c,param_2 + 0x51,uVar9);
      if (iVar8 != 0) {
        return 0xffffffff;
      }
    }
    else {
      (*(code *)&SUB_ram_40010488)(param_2 + 0x51,0,uVar9);
      FUN_ram_4209c60a(0x3fcc49d0,_DAT_ram_3fcc4a28,_DAT_ram_3fcc4b14,uVar6,param_2,uVar13 + 4,
                       param_2 + 0x51);
      iVar8 = FUN_ram_4039c0e0(&puStack_7c,param_2 + 0x51,uVar9);
      if (iVar8 != 0) goto LAB_ram_4209e2f6;
      _DAT_ram_3fcc4a3c = 0;
      _DAT_ram_3fcc4a38 = 1;
      FUN_ram_4039c11e(0x3fcc4968,0x3fcc49d0,0x68);
    }
    FUN_ram_4039c11e(&DAT_ram_3fcc4a84,param_2 + 9,8);
    _DAT_ram_3fcc4a8c = 1;
    FUN_ram_4039c11e(0x3fcc4a90,param_2 + 9,8);
  }
  if (iVar7 == 0x18) {
    uVar11 = *(undefined1 *)(param_2 + 0x69);
    bVar2 = *(byte *)(param_2 + 0x6a);
  }
  else {
    uVar11 = *(undefined1 *)(param_2 + 0x61);
    bVar2 = *(byte *)(param_2 + 0x62);
  }
  uVar12 = (uint)bVar2 | (CONCAT11(bVar2,uVar11) & 0xff) << 8;
  if (uVar13 - uVar17 < uVar12) {
    return 0xffffffff;
  }
  if (((_DAT_ram_3fcc4b54 == 2) && ((int)(uVar15 << 0x13) < 0)) && (iVar7 != 0)) {
    if (uVar16 == 0) {
      return 0xffffffff;
    }
    if (_DAT_ram_3fcc4a38 == 0) {
      return 0xffffffff;
    }
    if (uVar6 == 1) {
      if (_DAT_ram_3fcc49c4 == 0x10) {
        FUN_ram_4039c11e(&puStack_7c,param_2 + 0x31);
        FUN_ram_4039c11e(auStack_6c,0x3fcc4980,0x10);
        iVar7 = FUN_ram_4209f76e(&puStack_7c,0x20,0x100,iVar14,uVar12);
        if (iVar7 != 0) {
          return 0xffffffff;
        }
        goto LAB_ram_4209e220;
      }
LAB_ram_4209e3a8:
      iVar7 = FUN_ram_4209c5dc(_DAT_ram_3fcc4b14);
      if (iVar7 == 0) {
        return 0xffffffff;
      }
    }
    else if (1 < (uVar6 - 2 & 0xffff)) goto LAB_ram_4209e3a8;
    if (uVar12 < 8) {
      return 0xffffffff;
    }
    if ((bVar2 & 7) != 0) {
      return 0xffffffff;
    }
    uVar12 = uVar12 - 8;
    iVar7 = FUN_ram_4209f960(0x3fcc4980,_DAT_ram_3fcc49c4,uVar12 >> 3,iVar14,param_2 + 0x6b);
    if (iVar7 != 0) {
      return 0xffffffff;
    }
    FUN_ram_4039c11e(iVar14,param_2 + 0x6b,uVar12);
    *(char *)(param_2 + 0x61) = (char)(uVar12 >> 8);
    *(char *)(param_2 + 0x62) = (char)uVar12;
  }
LAB_ram_4209e220:
  iVar7 = param_2 + 4;
  if ((bVar1 & 8) != 0) {
    if ((bVar1 & 0x30) != 0) {
      return 0xffffffff;
    }
    if (uVar16 == 0) {
      if (3 < (byte)(DAT_ram_3fcc4c44 + 1U)) {
        DAT_ram_3fcc4c44 = DAT_ram_3fcc4c44 + '\x01';
        FUN_ram_42085168(0xf);
        return 0xffffffff;
      }
      DAT_ram_3fcc4c44 = DAT_ram_3fcc4c44 + '\x01';
      FUN_ram_4209d884(0x3fcc4924,param_1,iVar7,uVar6,iVar14,uVar12);
      return 1;
    }
    FUN_ram_4209d7a8(8);
    uVar11 = *(undefined1 *)(param_2 + 6);
    uVar3 = *(undefined2 *)(param_2 + 5);
    iVar14 = FUN_ram_4209f364(iVar14,uVar12,&puStack_7c);
    if (iVar14 < 0) goto LAB_ram_4209e27e;
    if (puStack_7c == (undefined1 *)0x0) {
      if (iStack_74 != 0) goto LAB_ram_4209e3d4;
      iVar14 = _DAT_ram_3fcc4b60;
      if (_DAT_ram_3fcc4b5c == 0) {
joined_r0x4209e3d0:
        if (iVar14 == 0) goto LAB_ram_4209e3d4;
      }
    }
    else {
      if (_DAT_ram_3fcc4b5c != 0) {
        if (iStack_78 == _DAT_ram_3fcc4b68) {
          iVar14 = FUN_ram_4039c0e0();
          goto joined_r0x4209e3d0;
        }
        goto LAB_ram_4209e274;
      }
LAB_ram_4209e3d4:
      if (((iStack_74 == 0) || (_DAT_ram_3fcc4b60 == 0)) ||
         (iVar14 = FUN_ram_4209c678((_DAT_ram_3fcc4b14 & 0x860) != 0,_DAT_ram_3fcc4b60,
                                    _DAT_ram_3fcc4b6c,iStack_74,uStack_70), iVar14 == 0)) {
        if (_DAT_ram_3fcc4b54 != 1) {
          if (_DAT_ram_3fcc4b54 != 2) goto LAB_ram_4209e418;
          if (_DAT_ram_3fcc4b64 == 0) {
joined_r0x4209e5da:
            if (iStack_48 == 0) goto LAB_ram_4209e418;
          }
          else if ((iStack_48 != 0) && (_DAT_ram_3fcc4b70 == iStack_44)) {
            iStack_48 = FUN_ram_4039c0e0();
            goto joined_r0x4209e5da;
          }
          FUN_ram_4209f744(0x3fcc4924,0x11);
          goto LAB_ram_4209e27e;
        }
        if (((iStack_74 != 0) && (_DAT_ram_3fcc4b60 == 0)) && (_DAT_ram_3fcc4b20 != 0))
        goto LAB_ram_4209e274;
LAB_ram_4209e418:
        uVar4 = CONCAT21(uVar3,uVar11);
        uVar17 = (uint)uVar4;
        if (((pbStack_68 != (byte *)0x0) && (-1 < (int)(uVar17 << 0x13))) ||
           (iVar14 = FUN_ram_4039c0e0(0x3fcc4a60,param_2 + 0x11,0x20), iVar14 != 0))
        goto LAB_ram_4209e27e;
        if (_DAT_ram_3fcc4b0c == 2) {
          sVar10 = 0x2000;
LAB_ram_4209e46e:
          if (*(short *)(param_2 + 7) != sVar10) goto LAB_ram_4209e27e;
        }
        else if (_DAT_ram_3fcc4b0c == 8) {
          sVar10 = 0x1000;
          goto LAB_ram_4209e46e;
        }
        _DAT_ram_3fcc4a80 = 1;
        FUN_ram_4209d1ca(iVar7);
        _DAT_ram_3fcc4c3c = (ushort)uVar4;
        _DAT_ram_3fcc4c38 = 0;
        if (pbStack_68 != (byte *)0x0) {
          FUN_ram_4209d1ca(iVar7,0);
          iVar7 = FUN_ram_4209d70e(0x3fcc4924,pbStack_68,iStack_64,uVar17 & 0xffff);
          if (iVar7 == -1) goto LAB_ram_4209e27e;
        }
        if ((DAT_ram_3fcc4c42 == '\0') || (iVar7 = FUN_ram_4209d212(&puStack_7c), iVar7 != -1)) {
          if (puStack_50 != (undefined1 *)0x0) {
            FUN_ram_4209f6d2(0x3fcc4924,*puStack_50);
            DAT_ram_3fcc4c40 = *puStack_50;
          }
          if (((DAT_ram_3fcc4b74 != '\0') && ((_DAT_ram_3fcc4c3c & 0x40) != 0)) &&
             (_DAT_ram_3fcc4c04 != 0)) {
            FUN_ram_4209def0(4);
          }
          iVar7 = FUN_ram_4209c13c(_DAT_ram_3fcc4b14,_DAT_ram_3fcc4964);
          uVar9 = 0x5f;
          if (iVar7 == 0x18) {
            uVar9 = 0x67;
          }
          iVar14 = thunk_FUN_ram_4209f54c(0x3fcc4924,3,0,uVar9,&uStack_84,&puStack_80);
          if (iVar14 != 0) {
            _DAT_ram_3fcc4c3e = _DAT_ram_3fcc4c3e | 0x2000;
            uVar11 = 0xfe;
            if (_DAT_ram_3fcc4b54 == 2) {
              uVar11 = 2;
            }
            uVar17 = uVar6 | uVar17 & 0x200 | 0x108;
            *puStack_80 = uVar11;
            puStack_80[1] = (char)(uVar17 >> 8);
            puStack_80[2] = (char)uVar17;
            if (_DAT_ram_3fcc4b54 == 2) {
              puStack_80[3] = 0;
              puStack_80[4] = 0;
            }
            else {
              puStack_80[3] = *(undefined1 *)(param_2 + 7);
              puStack_80[4] = *(undefined1 *)(param_2 + 8);
            }
            FUN_ram_4039c11e(puStack_80 + 5,param_2 + 9,8);
            if (iVar7 == 0x18) {
              puStack_80[0x65] = 0;
              puStack_80[0x66] = 0;
            }
            else {
              puStack_80[0x5d] = 0;
              puStack_80[0x5e] = 0;
            }
            FUN_ram_4209d38c(0x3fcc4924,0x3fcc4968,_DAT_ram_3fcc49c0,uVar6,0x3fcc4b4e,0x888e,iVar14,
                             uStack_84,puStack_80 + 0x4d);
            thunk_FUN_ram_4209f5ca(iVar14);
            return 1;
          }
        }
        goto LAB_ram_4209e27e;
      }
    }
LAB_ram_4209e274:
    FUN_ram_4209f76c(0x3fcc4924,0x11);
    goto LAB_ram_4209e27e;
  }
  if (uVar16 == 0) {
    return 1;
  }
  (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcc4c08,0,0x34);
  iVar8 = _DAT_ram_3fcc4b10;
  bVar1 = *(byte *)(param_2 + 6);
  uVar17 = (uint)bVar1;
  uVar5 = *(ushort *)(param_2 + 5);
  if (_DAT_ram_3fcc4b54 == 2) {
    FUN_ram_4209f364(iVar14,uVar12,&puStack_7c);
    iVar14 = _DAT_ram_3fcc4b10;
    if ((pbStack_68 == (byte *)0x0) || (-1 < (int)((uVar17 | (uVar5 & 0xff) << 8) << 0x13)))
    goto LAB_ram_4209e6d0;
    uVar17 = iStack_64 - 2;
    _DAT_ram_3fcc4c38 = uVar17;
    _DAT_ram_3fcc4c08 = FUN_ram_4209c8dc(_DAT_ram_3fcc4b10);
    if (_DAT_ram_3fcc4c08 == 0) goto LAB_ram_4209e6d0;
    _DAT_ram_3fcc4c10 = 6;
    uVar13 = FUN_ram_4209c726(iVar14);
    if (uVar17 != uVar13) goto LAB_ram_4209e6d0;
    _DAT_ram_3fcc4c14 = *pbStack_68 & 3;
    _DAT_ram_3fcc4c0c = FUN_ram_4209d6fa(0x3fcc4924,*pbStack_68 >> 2 & 1);
    if (0x20 < iStack_64 - 2U) goto LAB_ram_4209e6d0;
    FUN_ram_4039c11e(0x3fcc4c18,pbStack_68 + 2);
    FUN_ram_4209d212(&puStack_7c);
LAB_ram_4209e84c:
    iVar14 = 0;
  }
  else {
    uVar16 = (uint)*(byte *)(param_2 + 8) | (*(ushort *)(param_2 + 7) & 0xff) << 8;
    uVar13 = uVar12;
    _DAT_ram_3fcc4c38 = uVar16;
    if (((uVar6 != 2) || (uVar13 = uVar12 - 8, 7 < uVar12)) &&
       (_DAT_ram_3fcc4c08 = FUN_ram_4209c8dc(_DAT_ram_3fcc4b10), _DAT_ram_3fcc4c08 != 0)) {
      _DAT_ram_3fcc4c10 = 6;
      uVar15 = FUN_ram_4209c726(iVar8);
      if ((uVar16 == uVar15) && ((int)uVar16 <= (int)uVar13)) {
        _DAT_ram_3fcc4c14 = (uVar17 & 0x30) >> 4;
        if (uVar6 == 1) {
          if (_DAT_ram_3fcc49c4 == 0x10) {
            FUN_ram_4039c11e(&puStack_7c,param_2 + 0x31);
            FUN_ram_4039c11e(auStack_6c,0x3fcc4980,0x10);
            if (uVar12 < 0x21) {
              FUN_ram_4039c11e(0x3fcc4c18,iVar14,uVar12);
              iVar14 = FUN_ram_4209f76e(&puStack_7c,0x20,0x100,0x3fcc4c18,uVar12);
              goto LAB_ram_4209e912;
            }
          }
        }
        else if (((uVar6 == 2) && ((uVar13 & 7) == 0)) && (uVar13 < 0x21)) {
          iVar14 = FUN_ram_4209f960(0x3fcc4980,_DAT_ram_3fcc49c4,uVar13 >> 3,iVar14,0x3fcc4c18);
LAB_ram_4209e912:
          if (iVar14 == 0) {
            _DAT_ram_3fcc4c0c = FUN_ram_4209d6fa(0x3fcc4924,(uVar17 & 0x40) >> 6);
            goto LAB_ram_4209e84c;
          }
        }
      }
    }
LAB_ram_4209e6d0:
    iVar14 = -1;
  }
  FUN_ram_4209d7a8(9);
  if (iVar14 == 0) {
    FUN_ram_4209d1ca(iVar7,0);
    _DAT_ram_3fcc4c3c = (ushort)CONCAT21(uVar5,bVar1);
    if (_DAT_ram_3fcc4c38 != 0) {
      FUN_ram_4209dd4c();
      iVar7 = FUN_ram_4209c13c(_DAT_ram_3fcc4b14,_DAT_ram_3fcc4964);
      uVar9 = 0x5f;
      if (iVar7 == 0x18) {
        uVar9 = 0x67;
      }
      iVar14 = thunk_FUN_ram_4209f54c(0x3fcc4924,3,0,uVar9,&puStack_80,&puStack_7c);
      if (iVar14 != 0) {
        _DAT_ram_3fcc4c3e = _DAT_ram_3fcc4c3e | 0x4000;
        uVar11 = 0xfe;
        if (_DAT_ram_3fcc4b54 == 2) {
          uVar11 = 2;
        }
        *puStack_7c = uVar11;
        puStack_7c[1] = 3;
        puStack_7c[2] = (byte)uVar6 | bVar1 & 0x30;
        if (_DAT_ram_3fcc4b54 == 2) {
          puStack_7c[3] = 0;
          puStack_7c[4] = 0;
        }
        else {
          puStack_7c[3] = *(undefined1 *)(param_2 + 7);
          puStack_7c[4] = *(undefined1 *)(param_2 + 8);
        }
        FUN_ram_4039c11e(puStack_7c + 5,param_2 + 9,8);
        if (iVar7 == 0x18) {
          puStack_7c[0x65] = 0;
          puStack_7c[0x66] = 0;
        }
        else {
          puStack_7c[0x5d] = 0;
          puStack_7c[0x5e] = 0;
        }
        FUN_ram_4209d38c(0x3fcc4924,0x3fcc4968,_DAT_ram_3fcc49c0,uVar6,0x3fcc4b4e,0x888e,iVar14,
                         puStack_80,puStack_7c + 0x4d);
        thunk_FUN_ram_4209f5ca(iVar14);
        if (_DAT_ram_3fcc4b58 == 10) {
          FUN_ram_4209d7a8();
          return 1;
        }
        FUN_ram_4209d7e6(0x3fcc4924,0x3fcc4b4e,_DAT_ram_3fcc4c3c & 0x200);
        return 1;
      }
    }
  }
LAB_ram_4209e27e:
  FUN_ram_4209f744(0x3fcc4924,1);
  return 1;
}

