
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42063f22(undefined4 param_1,int param_2,uint param_3)

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
  
  iVar7 = FUN_ram_42061e74(_DAT_ram_3fcb61ec,_DAT_ram_3fcb603c);
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
  if ((2 < (uVar6 - 1 & 0xffff)) && (iVar8 = FUN_ram_42062312(_DAT_ram_3fcb61ec), iVar8 == 0)) {
    return 0xffffffff;
  }
  iVar8 = FUN_ram_42062312(_DAT_ram_3fcb61ec);
  if ((iVar8 != 0) && ((bVar1 & 7) != 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3fcb61ec & 0xc18580) == 0) {
    if ((((_DAT_ram_3fcb61e4 == 8) && (iVar8 = FUN_ram_42062312(), iVar8 == 0)) && (uVar6 != 2)) &&
       (((_DAT_ram_3fcb61e8 == 8 || ((bVar1 & 8) != 0)) && (uVar6 != 3)))) {
      return 0xffffffff;
    }
  }
  else if ((uVar6 != 3) && (iVar8 = FUN_ram_42062312(), iVar8 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3fcb6164 != 0) &&
     (iVar8 = FUN_ram_40399d6c(param_2 + 9,&DAT_ram_3fcb615c,8), iVar8 < 1)) {
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
    uVar9 = FUN_ram_42061e74(_DAT_ram_3fcb61ec,_DAT_ram_3fcb603c);
    FUN_ram_40399daa(&puStack_7c,param_2 + 0x51,uVar9);
    if (_DAT_ram_3fcb6114 == 0) {
LAB_ram_42064270:
      if (_DAT_ram_3fcb6110 == 0) {
        return 0xffffffff;
      }
      (*(code *)&SUB_ram_40010488)(param_2 + 0x51,0,uVar9);
      FUN_ram_4206236e(0x3fcb6040,_DAT_ram_3fcb6098,_DAT_ram_3fcb61ec,uVar6,param_2,uVar13 + 4,
                       param_2 + 0x51);
      iVar8 = FUN_ram_40399d6c(&puStack_7c,param_2 + 0x51,uVar9);
      if (iVar8 != 0) {
        return 0xffffffff;
      }
    }
    else {
      (*(code *)&SUB_ram_40010488)(param_2 + 0x51,0,uVar9);
      FUN_ram_4206236e(0x3fcb60a8,_DAT_ram_3fcb6100,_DAT_ram_3fcb61ec,uVar6,param_2,uVar13 + 4,
                       param_2 + 0x51);
      iVar8 = FUN_ram_40399d6c(&puStack_7c,param_2 + 0x51,uVar9);
      if (iVar8 != 0) goto LAB_ram_42064270;
      _DAT_ram_3fcb6114 = 0;
      _DAT_ram_3fcb6110 = 1;
      FUN_ram_40399daa(0x3fcb6040,0x3fcb60a8,0x68);
    }
    FUN_ram_40399daa(&DAT_ram_3fcb615c,param_2 + 9,8);
    _DAT_ram_3fcb6164 = 1;
    FUN_ram_40399daa(0x3fcb6168,param_2 + 9,8);
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
  if (((_DAT_ram_3fcb622c == 2) && ((int)(uVar15 << 0x13) < 0)) && (iVar7 != 0)) {
    if (uVar16 == 0) {
      return 0xffffffff;
    }
    if (_DAT_ram_3fcb6110 == 0) {
      return 0xffffffff;
    }
    if (uVar6 == 1) {
      if (_DAT_ram_3fcb609c == 0x10) {
        FUN_ram_40399daa(&puStack_7c,param_2 + 0x31);
        FUN_ram_40399daa(auStack_6c,0x3fcb6058,0x10);
        iVar7 = FUN_ram_420666e8(&puStack_7c,0x20,0x100,iVar14,uVar12);
        if (iVar7 != 0) {
          return 0xffffffff;
        }
        goto LAB_ram_4206419a;
      }
LAB_ram_42064322:
      iVar7 = FUN_ram_42062340(_DAT_ram_3fcb61ec);
      if (iVar7 == 0) {
        return 0xffffffff;
      }
    }
    else if (1 < (uVar6 - 2 & 0xffff)) goto LAB_ram_42064322;
    if (uVar12 < 8) {
      return 0xffffffff;
    }
    if ((bVar2 & 7) != 0) {
      return 0xffffffff;
    }
    uVar12 = uVar12 - 8;
    iVar7 = FUN_ram_420667d2(0x3fcb6058,_DAT_ram_3fcb609c,uVar12 >> 3,iVar14,param_2 + 0x6b);
    if (iVar7 != 0) {
      return 0xffffffff;
    }
    FUN_ram_40399daa(iVar14,param_2 + 0x6b,uVar12);
    *(char *)(param_2 + 0x61) = (char)(uVar12 >> 8);
    *(char *)(param_2 + 0x62) = (char)uVar12;
  }
LAB_ram_4206419a:
  iVar7 = param_2 + 4;
  if ((bVar1 & 8) != 0) {
    if ((bVar1 & 0x30) != 0) {
      return 0xffffffff;
    }
    if (uVar16 == 0) {
      if (3 < (byte)(DAT_ram_3fcb631c + 1U)) {
        DAT_ram_3fcb631c = DAT_ram_3fcb631c + '\x01';
        FUN_ram_4203d562(0xf);
        return 0xffffffff;
      }
      DAT_ram_3fcb631c = DAT_ram_3fcb631c + '\x01';
      FUN_ram_42063764(0x3fcb5ffc,param_1,iVar7,uVar6,iVar14,uVar12);
      return 1;
    }
    FUN_ram_42063688(8);
    uVar11 = *(undefined1 *)(param_2 + 6);
    uVar3 = *(undefined2 *)(param_2 + 5);
    iVar14 = FUN_ram_42065654(iVar14,uVar12,&puStack_7c);
    if (iVar14 < 0) goto LAB_ram_420641f8;
    if (puStack_7c == (undefined1 *)0x0) {
      if (iStack_74 != 0) goto LAB_ram_4206434e;
      iVar14 = _DAT_ram_3fcb6238;
      if (_DAT_ram_3fcb6234 == 0) {
joined_r0x4206434a:
        if (iVar14 == 0) goto LAB_ram_4206434e;
      }
    }
    else {
      if (_DAT_ram_3fcb6234 != 0) {
        if (iStack_78 == _DAT_ram_3fcb6240) {
          iVar14 = FUN_ram_40399d6c();
          goto joined_r0x4206434a;
        }
        goto LAB_ram_420641ee;
      }
LAB_ram_4206434e:
      if (((iStack_74 == 0) || (_DAT_ram_3fcb6238 == 0)) ||
         (iVar14 = FUN_ram_420624ae((_DAT_ram_3fcb61ec & 0x860) != 0,_DAT_ram_3fcb6238,
                                    _DAT_ram_3fcb6244,iStack_74,uStack_70), iVar14 == 0)) {
        if (_DAT_ram_3fcb622c != 1) {
          if (_DAT_ram_3fcb622c != 2) goto LAB_ram_42064392;
          if (_DAT_ram_3fcb623c == 0) {
joined_r0x42064554:
            if (iStack_48 == 0) goto LAB_ram_42064392;
          }
          else if ((iStack_48 != 0) && (_DAT_ram_3fcb6248 == iStack_44)) {
            iStack_48 = FUN_ram_40399d6c();
            goto joined_r0x42064554;
          }
          FUN_ram_420662da(0x3fcb5ffc,0x11);
          goto LAB_ram_420641f8;
        }
        if (((iStack_74 != 0) && (_DAT_ram_3fcb6238 == 0)) && (_DAT_ram_3fcb61f8 != 0))
        goto LAB_ram_420641ee;
LAB_ram_42064392:
        uVar4 = CONCAT21(uVar3,uVar11);
        uVar17 = (uint)uVar4;
        if (((pbStack_68 != (byte *)0x0) && (-1 < (int)(uVar17 << 0x13))) ||
           (iVar14 = FUN_ram_40399d6c(0x3fcb6138,param_2 + 0x11,0x20), iVar14 != 0))
        goto LAB_ram_420641f8;
        if (_DAT_ram_3fcb61e4 == 2) {
          sVar10 = 0x2000;
LAB_ram_420643e8:
          if (*(short *)(param_2 + 7) != sVar10) goto LAB_ram_420641f8;
        }
        else if (_DAT_ram_3fcb61e4 == 8) {
          sVar10 = 0x1000;
          goto LAB_ram_420643e8;
        }
        _DAT_ram_3fcb6158 = 1;
        FUN_ram_420630aa(iVar7);
        _DAT_ram_3fcb6314 = (ushort)uVar4;
        _DAT_ram_3fcb6310 = 0;
        if (pbStack_68 != (byte *)0x0) {
          FUN_ram_420630aa(iVar7,0);
          iVar7 = FUN_ram_420635ee(0x3fcb5ffc,pbStack_68,iStack_64,uVar17 & 0xffff);
          if (iVar7 == -1) goto LAB_ram_420641f8;
        }
        if ((DAT_ram_3fcb631a == '\0') || (iVar7 = FUN_ram_420630f2(&puStack_7c), iVar7 != -1)) {
          if (puStack_50 != (undefined1 *)0x0) {
            FUN_ram_42066268(0x3fcb5ffc,*puStack_50);
            DAT_ram_3fcb6318 = *puStack_50;
          }
          if (((DAT_ram_3fcb624c != '\0') && ((_DAT_ram_3fcb6314 & 0x40) != 0)) &&
             (_DAT_ram_3fcb62dc != 0)) {
            FUN_ram_42063e6a(4);
          }
          iVar7 = FUN_ram_42061e74(_DAT_ram_3fcb61ec,_DAT_ram_3fcb603c);
          uVar9 = 0x5f;
          if (iVar7 == 0x18) {
            uVar9 = 0x67;
          }
          iVar14 = thunk_FUN_ram_4206616e(0x3fcb5ffc,3,0,uVar9,&uStack_84,&puStack_80);
          if (iVar14 != 0) {
            _DAT_ram_3fcb6316 = _DAT_ram_3fcb6316 | 0x2000;
            uVar11 = 0xfe;
            if (_DAT_ram_3fcb622c == 2) {
              uVar11 = 2;
            }
            uVar17 = uVar6 | uVar17 & 0x200 | 0x108;
            *puStack_80 = uVar11;
            puStack_80[1] = (char)(uVar17 >> 8);
            puStack_80[2] = (char)uVar17;
            if (_DAT_ram_3fcb622c == 2) {
              puStack_80[3] = 0;
              puStack_80[4] = 0;
            }
            else {
              puStack_80[3] = *(undefined1 *)(param_2 + 7);
              puStack_80[4] = *(undefined1 *)(param_2 + 8);
            }
            FUN_ram_40399daa(puStack_80 + 5,param_2 + 9,8);
            if (iVar7 == 0x18) {
              puStack_80[0x65] = 0;
              puStack_80[0x66] = 0;
            }
            else {
              puStack_80[0x5d] = 0;
              puStack_80[0x5e] = 0;
            }
            FUN_ram_4206326c(0x3fcb5ffc,0x3fcb6040,_DAT_ram_3fcb6098,uVar6,0x3fcb6226,0x888e,iVar14,
                             uStack_84,puStack_80 + 0x4d);
            thunk_FUN_ram_420661ec(iVar14);
            return 1;
          }
        }
        goto LAB_ram_420641f8;
      }
    }
LAB_ram_420641ee:
    FUN_ram_42066302(0x3fcb5ffc,0x11);
    goto LAB_ram_420641f8;
  }
  if (uVar16 == 0) {
    return 1;
  }
  (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb62e0,0,0x34);
  iVar8 = _DAT_ram_3fcb61e8;
  bVar1 = *(byte *)(param_2 + 6);
  uVar17 = (uint)bVar1;
  uVar5 = *(ushort *)(param_2 + 5);
  if (_DAT_ram_3fcb622c == 2) {
    FUN_ram_42065654(iVar14,uVar12,&puStack_7c);
    iVar14 = _DAT_ram_3fcb61e8;
    if ((pbStack_68 == (byte *)0x0) || (-1 < (int)((uVar17 | (uVar5 & 0xff) << 8) << 0x13)))
    goto LAB_ram_4206464a;
    uVar17 = iStack_64 - 2;
    _DAT_ram_3fcb6310 = uVar17;
    _DAT_ram_3fcb62e0 = FUN_ram_42062742(_DAT_ram_3fcb61e8);
    if (_DAT_ram_3fcb62e0 == 0) goto LAB_ram_4206464a;
    _DAT_ram_3fcb62e8 = 6;
    uVar13 = FUN_ram_4206255c(iVar14);
    if (uVar17 != uVar13) goto LAB_ram_4206464a;
    _DAT_ram_3fcb62ec = *pbStack_68 & 3;
    _DAT_ram_3fcb62e4 = FUN_ram_420635da(0x3fcb5ffc,*pbStack_68 >> 2 & 1);
    if (0x20 < iStack_64 - 2U) goto LAB_ram_4206464a;
    FUN_ram_40399daa(0x3fcb62f0,pbStack_68 + 2);
    FUN_ram_420630f2(&puStack_7c);
LAB_ram_420647c6:
    iVar14 = 0;
  }
  else {
    uVar16 = (uint)*(byte *)(param_2 + 8) | (*(ushort *)(param_2 + 7) & 0xff) << 8;
    uVar13 = uVar12;
    _DAT_ram_3fcb6310 = uVar16;
    if (((uVar6 != 2) || (uVar13 = uVar12 - 8, 7 < uVar12)) &&
       (_DAT_ram_3fcb62e0 = FUN_ram_42062742(_DAT_ram_3fcb61e8), _DAT_ram_3fcb62e0 != 0)) {
      _DAT_ram_3fcb62e8 = 6;
      uVar15 = FUN_ram_4206255c(iVar8);
      if ((uVar16 == uVar15) && ((int)uVar16 <= (int)uVar13)) {
        _DAT_ram_3fcb62ec = (uVar17 & 0x30) >> 4;
        if (uVar6 == 1) {
          if (_DAT_ram_3fcb609c == 0x10) {
            FUN_ram_40399daa(&puStack_7c,param_2 + 0x31);
            FUN_ram_40399daa(auStack_6c,0x3fcb6058,0x10);
            if (uVar12 < 0x21) {
              FUN_ram_40399daa(0x3fcb62f0,iVar14,uVar12);
              iVar14 = FUN_ram_420666e8(&puStack_7c,0x20,0x100,0x3fcb62f0,uVar12);
              goto LAB_ram_4206488c;
            }
          }
        }
        else if (((uVar6 == 2) && ((uVar13 & 7) == 0)) && (uVar13 < 0x21)) {
          iVar14 = FUN_ram_420667d2(0x3fcb6058,_DAT_ram_3fcb609c,uVar13 >> 3,iVar14,0x3fcb62f0);
LAB_ram_4206488c:
          if (iVar14 == 0) {
            _DAT_ram_3fcb62e4 = FUN_ram_420635da(0x3fcb5ffc,(uVar17 & 0x40) >> 6);
            goto LAB_ram_420647c6;
          }
        }
      }
    }
LAB_ram_4206464a:
    iVar14 = -1;
  }
  FUN_ram_42063688(9);
  if (iVar14 == 0) {
    FUN_ram_420630aa(iVar7,0);
    _DAT_ram_3fcb6314 = (ushort)CONCAT21(uVar5,bVar1);
    if (_DAT_ram_3fcb6310 != 0) {
      FUN_ram_42063cc6();
      iVar7 = FUN_ram_42061e74(_DAT_ram_3fcb61ec,_DAT_ram_3fcb603c);
      uVar9 = 0x5f;
      if (iVar7 == 0x18) {
        uVar9 = 0x67;
      }
      iVar14 = thunk_FUN_ram_4206616e(0x3fcb5ffc,3,0,uVar9,&puStack_80,&puStack_7c);
      if (iVar14 != 0) {
        _DAT_ram_3fcb6316 = _DAT_ram_3fcb6316 | 0x4000;
        uVar11 = 0xfe;
        if (_DAT_ram_3fcb622c == 2) {
          uVar11 = 2;
        }
        *puStack_7c = uVar11;
        puStack_7c[1] = 3;
        puStack_7c[2] = (byte)uVar6 | bVar1 & 0x30;
        if (_DAT_ram_3fcb622c == 2) {
          puStack_7c[3] = 0;
          puStack_7c[4] = 0;
        }
        else {
          puStack_7c[3] = *(undefined1 *)(param_2 + 7);
          puStack_7c[4] = *(undefined1 *)(param_2 + 8);
        }
        FUN_ram_40399daa(puStack_7c + 5,param_2 + 9,8);
        if (iVar7 == 0x18) {
          puStack_7c[0x65] = 0;
          puStack_7c[0x66] = 0;
        }
        else {
          puStack_7c[0x5d] = 0;
          puStack_7c[0x5e] = 0;
        }
        FUN_ram_4206326c(0x3fcb5ffc,0x3fcb6040,_DAT_ram_3fcb6098,uVar6,0x3fcb6226,0x888e,iVar14,
                         puStack_80,puStack_7c + 0x4d);
        thunk_FUN_ram_420661ec(iVar14);
        if (_DAT_ram_3fcb6230 == 10) {
          FUN_ram_42063688();
          return 1;
        }
        FUN_ram_420636c6(0x3fcb5ffc,0x3fcb6226,_DAT_ram_3fcb6314 & 0x200);
        return 1;
      }
    }
  }
LAB_ram_420641f8:
  FUN_ram_420662da(0x3fcb5ffc,1);
  return 1;
}

