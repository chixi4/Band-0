
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42046e7e(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  code *pcVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  int aiStack_58 [9];
  
  iVar12 = _DAT_ram_3fcb4f84;
  cVar1 = *(char *)(*(int *)(param_1 + 0x24) + 8);
  iVar16 = (int)**(char **)(param_1 + 0x10);
  uVar17 = *(uint *)(*(char **)(param_1 + 0x10) + 0x1c) >> 0x1f;
  iVar6 = FUN_ram_42040f3a();
  cVar2 = *(char *)(*(int *)(gp + -0x2b8) + 0x415);
  iVar26 = *(int *)(*(int *)(param_1 + 4) + 4);
  iVar7 = FUN_ram_42033ada(cVar1);
  if (iVar7 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07dcc0,0x3c072f20,0xa1c);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar7 = FUN_ram_42043448(*(undefined1 *)(param_2 + 4));
  if (iVar7 == 0) {
    FUN_ram_42033fd8(1,8,4,0x3c07c674);
    return 0xffffffff;
  }
  if (*(char *)(param_2 + 4) != cVar1) {
    return 0xffffffff;
  }
  iVar7 = FUN_ram_42046de2(param_2,*(char *)(*(int *)(gp + -0x2b8) + 0x415) != '\0');
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  iVar8 = *(int *)(gp + -0x2b8);
  if (*(char *)(iVar8 + 0x415) != '\0') {
    uVar21 = *(uint *)(iVar8 + 4);
    iVar19 = 0;
    if ((((uVar21 != *(byte *)(*(int *)(param_2 + 0x24) + 1)) ||
         (iVar8 = FUN_ram_40399d6c(iVar8 + 8,*(int *)(param_2 + 0x24) + 2,uVar21), iVar8 != 0)) ||
        (uVar21 == 0)) || (*(int *)(param_2 + 0x3c) != 0)) goto LAB_ram_42046fca;
    iVar8 = *(int *)(param_2 + 100);
    if (iVar8 == 0) goto LAB_ram_42047184;
    if (_DAT_ram_3fcb5344 == 0) {
      _DAT_ram_3fcb5344 = 1;
    }
    puVar9 = (uint *)FUN_ram_42040f3a();
    iVar19 = iVar7;
    if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x05') goto LAB_ram_42046fca;
    iVar19 = FUN_ram_420384d8();
    iVar25 = *(int *)(gp + -0x2b8);
    uVar21 = (uint)*(byte *)(iVar8 + 0xc);
    if ((uVar21 == *(uint *)(iVar25 + 4)) &&
       (iVar23 = FUN_ram_40399d6c(iVar25 + 8,iVar8 + 0xd,uVar21), iVar23 == 0)) {
      uVar15 = 0x3c07ce88;
    }
    else {
      iVar23 = iVar26 + 0x10;
      if ((*(char *)(iVar25 + 0x92) == '\0') ||
         (iVar10 = FUN_ram_40399d6c(iVar25 + 0x93,iVar23,6), iVar10 == 0)) {
        if (0x20 < uVar21) {
          uVar21 = 0x20;
        }
        *puVar9 = uVar21;
        FUN_ram_40399daa(puVar9 + 1,iVar8 + 0xd,0x20);
        if ((_DAT_ram_3fcb5344 & 2) == 0) {
          if (*(char *)(iVar25 + 0x92) == '\0') {
            uVar15 = FUN_ram_40399daa(iVar19 + 0x93,iVar23,6);
            iVar25 = FUN_ram_42038516(8,uVar15,DAT_ram_3fcb5145 == '\0');
            iVar19 = iVar7;
            if (iVar25 != 0) goto LAB_ram_42046fca;
          }
          FUN_ram_40399daa(puVar9 + 9,iVar8 + 6,6);
          iVar8 = FUN_ram_42038516(0x2e,puVar9,DAT_ram_3fcb5145 == '\0');
          iVar19 = iVar7;
          if (iVar8 == 0) {
            FUN_ram_420384de();
          }
        }
        else {
          iVar19 = FUN_ram_40399d6c(iVar25 + 0x93,iVar23,6);
          if ((iVar19 != 0) ||
             (iVar8 = FUN_ram_40399d6c(puVar9 + 9,iVar8 + 6,6), iVar19 = iVar7, iVar8 != 0)) {
            uVar15 = 0x3c07c580;
            goto LAB_ram_420470a0;
          }
        }
        goto LAB_ram_42046fca;
      }
      uVar15 = 0x3c07ceb4;
    }
    goto LAB_ram_420470a0;
  }
LAB_ram_42047184:
  iVar19 = 0;
LAB_ram_42046fca:
  if ((*(char *)((int)_DAT_ram_3fcdfb20 + 0xa3) == '\0') &&
     ((*(char *)(*(int *)(param_2 + 0x24) + 1) == '\0' ||
      (*(char *)(*(int *)(param_2 + 0x24) + 2) == '\0')))) {
    iVar25 = iVar7;
    iVar8 = iVar7;
    if (cVar2 == '\0') {
      if (iVar12 == 0) {
        return 0;
      }
LAB_ram_4204720a:
      if ((*(int *)(iVar12 + 0xe4) != 0) &&
         (iVar26 = FUN_ram_40399d6c(*(int *)(iVar12 + 0xe4) + 4,iVar26 + 0x10,6), iVar26 == 0))
      goto LAB_ram_42047256;
      if (cVar2 == '\0') {
        return 0;
      }
LAB_ram_4204782c:
      if (iVar19 == 0) {
        return 0;
      }
      goto LAB_ram_42047834;
    }
    iVar23 = *(int *)(param_2 + 100);
    if ((iVar23 == 0) || (*(int *)(param_2 + 0x3c) == 0)) {
      if (iVar12 != 0) goto LAB_ram_4204720a;
      goto LAB_ram_4204782c;
    }
    if (_DAT_ram_3fcb5344 == 0) {
      _DAT_ram_3fcb5344 = 2;
    }
    iVar19 = FUN_ram_42040f3a();
    if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x05') goto LAB_ram_42047202;
    bVar22 = *(byte *)(iVar23 + 0xc);
    iVar20 = iVar23 + 6;
    iVar10 = FUN_ram_420384d8();
    iVar24 = *(int *)(gp + -0x2b8);
    cVar3 = *(char *)(iVar24 + 0x92);
    if ((cVar3 == '\0') || (iVar11 = FUN_ram_40399d6c(iVar24 + 0x93,iVar20,6), iVar11 == 0)) {
      if (((uint)bVar22 == *(uint *)(iVar24 + 4)) &&
         (iVar23 = FUN_ram_40399d6c(iVar24 + 8,iVar23 + 0xd,(uint)bVar22), iVar23 == 0)) {
        if ((_DAT_ram_3fcb5344 & 1) == 0) {
          if (cVar3 == '\0') {
            uVar15 = FUN_ram_40399daa(iVar10 + 0x93,iVar20,6);
            iVar23 = FUN_ram_42038516(8,uVar15,DAT_ram_3fcb5145 == '\0');
            if (iVar23 != 0) goto LAB_ram_42047202;
          }
          FUN_ram_40399daa(iVar19 + 0x24,iVar26 + 0x10,6);
        }
        else {
          iVar19 = FUN_ram_40399d6c(iVar19 + 0x24,iVar26 + 0x10,6);
          if ((iVar19 != 0) || (iVar19 = FUN_ram_40399d6c(iVar24 + 0x93,iVar20,6), iVar19 != 0)) {
            uVar15 = 0x3c07c5b0;
            goto LAB_ram_420470a0;
          }
        }
LAB_ram_42047202:
        iVar19 = iVar7;
        if (iVar12 != 0) goto LAB_ram_4204720a;
        goto LAB_ram_42047834;
      }
      uVar15 = 0x3c07c5a0;
    }
    else {
      uVar15 = 0x3c07c590;
    }
  }
  else {
    iVar8 = 0;
LAB_ram_42047256:
    iVar25 = iVar19;
    if ((cVar2 != '\0') && ((iVar19 == 0 && (*(int *)(param_2 + 100) != 0)))) {
      return 0xffffffff;
    }
LAB_ram_42047834:
    if ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb1c + 0x24);
    }
    iVar26 = *(int *)(*(int *)(param_1 + 4) + 4);
    if ((param_3 == 0) && ((_DAT_ram_3fcb516c & 1) != 0)) {
      FUN_ram_42046c9e(param_2);
    }
    iVar19 = *(int *)(param_2 + 0x5c);
    bVar22 = 0;
    if ((iVar19 != 0) && (8 < *(byte *)(iVar19 + 1))) {
      bVar22 = *(byte *)(iVar19 + 10) >> 6 & 1;
    }
    if (((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) == 0) ||
       (((char)_DAT_ram_3fcdfb20[0x26] != '\0' && ((cVar2 == '\0' || (iVar25 == 0)))))) {
LAB_ram_4204789e:
      iVar7 = 0;
    }
    else {
      iVar23 = iVar26 + 10;
      iVar19 = FUN_ram_42046c30(iVar23);
      puVar9 = _DAT_ram_3fcdfb20;
      if (iVar19 != 0) goto LAB_ram_4204789e;
      if ((((cVar2 != '\0') && (iVar25 != 0)) && (iVar8 != 0)) &&
         ((char)_DAT_ram_3fcdfb20[0x11] == '\x03')) {
        return 0xffffffff;
      }
      if (*(char *)((int)_DAT_ram_3fcdfb20 + 0x99) == '\x01') {
        iVar19 = *(int *)(param_2 + 0x24);
        if (*(char *)((int)_DAT_ram_3fcdfb20 + 0xa2) == '\x01') {
          if (((_DAT_ram_3fcdfb20[0x1d] == (uint)*(byte *)(iVar19 + 1)) &&
              (iVar19 = FUN_ram_4039a1de(_DAT_ram_3fcdfb20 + 0x1e,iVar19 + 2), iVar19 == 0)) &&
             (iVar19 = FUN_ram_40399d6c(puVar9 + 0x27,iVar23,6), iVar19 == 0)) {
            FUN_ram_42045ab2(iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17,bVar22);
            FUN_ram_42033fd8(1,8,5,0x3c07f164);
            if ((*_DAT_ram_3fcdfb20 & 0x400) != 0) {
              uVar15 = 0x3c07f184;
              *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) =
                   *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
LAB_ram_42047334:
              FUN_ram_42033fd8(1,8,5,uVar15);
            }
LAB_ram_4204733e:
            FUN_ram_42045352(_DAT_ram_3fcdfb20 + 0x1e,cVar1,
                             *(undefined1 *)(*(int *)(param_2 + 0x24) + 1),bVar22);
            goto LAB_ram_420478a0;
          }
        }
        else if ((_DAT_ram_3fcdfb20[0x1d] == (uint)*(byte *)(iVar19 + 1)) &&
                (iVar19 = FUN_ram_4039a1de(_DAT_ram_3fcdfb20 + 0x1e,iVar19 + 2), iVar19 == 0)) {
          FUN_ram_42045ab2(iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17,bVar22);
          FUN_ram_42033fd8(1,8,5,0x3c07f198);
          if ((*_DAT_ram_3fcdfb20 & 0x400) != 0) {
            uVar15 = 0x3c07f1b0;
            *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
            goto LAB_ram_42047334;
          }
          goto LAB_ram_4204733e;
        }
        goto LAB_ram_4204789e;
      }
      if (*(char *)((int)_DAT_ram_3fcdfb20 + 0xa2) == '\x01') {
        iVar19 = FUN_ram_40399d6c(_DAT_ram_3fcdfb20 + 0x27,iVar23,6);
        if (iVar19 == 0) {
          FUN_ram_42045ab2(iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17,bVar22);
          FUN_ram_42033fd8(1,8,5,0x3c07f1c4);
          if ((*_DAT_ram_3fcdfb20 & 0x400) != 0) {
            uVar15 = 0x3c07f1d8;
            *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
            goto LAB_ram_42047334;
          }
          goto LAB_ram_4204733e;
        }
        goto LAB_ram_4204789e;
      }
      FUN_ram_42045ab2(iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17,bVar22);
    }
LAB_ram_420478a0:
    if (((_DAT_ram_3fcb50f0 != (undefined4 *)0x0) &&
        (pcVar18 = (code *)*_DAT_ram_3fcb50f0, pcVar18 != (code *)0x0)) &&
       (*(int *)(_DAT_ram_3fcdfaf0 + 4) != 0)) {
      FUN_ram_42046d24(param_2,aiStack_58);
      (*pcVar18)(aiStack_58);
    }
    pcVar18 = *(code **)(_DAT_ram_3fcb50e8 + 0x54);
    if ((pcVar18 != (code *)0x0) && (iVar7 != 0)) {
      uVar21 = 0x50;
      if (param_3 == 0) {
        uVar21 = 0x80;
      }
      if (((1 << (uVar21 >> 4) & _DAT_ram_3fcb5198) != 0) ||
         ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) != 0)) {
        uVar5 = *(undefined2 *)(param_1 + 0x16);
        iVar7 = *(int *)(*(int *)(param_1 + 4) + 4);
        cVar3 = **(char **)(param_1 + 0x10);
        uVar4 = *(undefined1 *)(*(int *)(param_1 + 0x24) + 8);
        uVar27 = FUN_ram_40393100(0);
        (*pcVar18)(uVar21 >> 4,iVar7 + 0x18,uVar5,iVar7 + 10,(int)cVar3,uVar4,(int)uVar27,
                   (int)((ulonglong)uVar27 >> 0x20));
      }
    }
    iVar7 = *(int *)(gp + -0x2b8);
    if (*(uint *)(iVar7 + 4) + 1 < 2) {
      FUN_ram_42033fd8(1,8,5,0x3c07f1ec);
      return 0;
    }
    if ((char)_DAT_ram_3fcdfb20[0x11] == '\x03') {
      return 0;
    }
    if ((((cVar2 == '\0') || (iVar25 == 0)) &&
        ((iVar8 != 0 ||
         ((*(uint *)(iVar7 + 4) != (uint)*(byte *)(*(int *)(param_2 + 0x24) + 1) ||
          (iVar19 = FUN_ram_40399d6c(iVar7 + 8,*(int *)(param_2 + 0x24) + 2), iVar19 != 0)))))) &&
       ((*(char *)(iVar7 + 0x92) == '\0' ||
        (iVar7 = FUN_ram_40399d6c(iVar7 + 0x93,iVar26 + 0x10,6), iVar7 != 0)))) {
      if (iVar8 == 0) {
        return 0;
      }
      iVar12 = FUN_ram_40399d6c(*(int *)(iVar12 + 0xe4) + 4,iVar26 + 0x10,6);
      if (iVar12 != 0) {
        return 0;
      }
    }
    if ((*(byte *)(_DAT_ram_3fcb4f84 + 0x128) & 0xfb) != 1) {
      return 0;
    }
    pcVar13 = (char *)FUN_ram_420390a6();
    if (((*pcVar13 != '\0') || (_DAT_ram_3fcb50ec != 0)) && ((*(ushort *)(param_2 + 6) & 0x10) == 0)
       ) {
      FUN_ram_42033fd8(1,4,4,0x3c07c6ec);
      DAT_ram_3fcb3fe0 = 1;
      return 0xffffffff;
    }
    if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x05') {
      iVar12 = *(int *)(_DAT_ram_3fcb4f84 + 0xe4);
      if (iVar12 == 0) goto LAB_ram_4204757a;
      if (1 < (byte)(DAT_ram_3fcb512d - 0xbU)) {
        if (*(int *)(param_2 + 0x3c) == 0) {
          if (*(char *)(iVar12 + 0x33d) == '\0') {
LAB_ram_42047506:
            if (*(int *)(param_2 + 0x34) == 0) {
              if (*(char *)(iVar12 + 0x30) == '\0') {
LAB_ram_42047510:
                iVar12 = *(int *)(iVar12 + 0x338);
                if (*(int *)(param_2 + 0x68) == 0) {
                  if (iVar12 != 0) {
LAB_ram_420475ae:
                    FUN_ram_42033fd8(1,8,4,0x3c07c654);
                    goto LAB_ram_4204757a;
                  }
                }
                else if ((iVar12 == 0) ||
                        (*(char *)(*(int *)(param_2 + 0x68) + 2) != *(char *)(iVar12 + 2)))
                goto LAB_ram_420475ae;
                goto LAB_ram_4204751a;
              }
            }
            else if ((*(char *)(iVar12 + 0x30) != '\0') &&
                    (iVar7 = FUN_ram_40399d6c(*(int *)(param_2 + 0x34),iVar12 + 0x33), iVar7 == 0))
            goto LAB_ram_42047510;
          }
        }
        else if ((*(char *)(iVar12 + 0x33d) != '\0') &&
                (iVar7 = FUN_ram_40399d6c(*(int *)(param_2 + 0x3c),iVar12 + 0x33e), iVar7 == 0))
        goto LAB_ram_42047506;
LAB_ram_4204757a:
        uVar15 = 0x3c07c71c;
        uVar14 = 4;
        goto LAB_ram_42047586;
      }
    }
LAB_ram_4204751a:
    if ((((cVar2 == '\0') || (iVar8 != 0)) || (iVar25 == 0)) ||
       (*(char *)(*(int *)(gp + -0x2b8) + 0x35f) != '\0')) {
      iVar6 = iVar26 + 0x10;
    }
    else {
      iVar6 = iVar6 + 0x24;
    }
    iVar12 = FUN_ram_4203e862(iVar6);
    iVar7 = FUN_ram_42045c42(iVar26,param_2,param_3);
    if ((DAT_ram_3fcb512d != '\x0f') || (pcVar13 = (char *)FUN_ram_420390a6(), *pcVar13 == '\0')) {
      if (iVar7 == 0) {
        if (iVar12 != 0) {
          *(uint *)(iVar12 + 0xc) = *(uint *)(iVar12 + 0xc) & 0xfffffffb;
        }
      }
      else {
        if (iVar12 == 0) {
          iVar12 = FUN_ram_4203ef48(iVar26 + 0x10,iVar16,*(undefined1 *)(param_2 + 0x60));
          if (iVar12 == 0) {
            return 0xffffffff;
          }
          FUN_ram_4203e36c(iVar12,_DAT_ram_3fcb4f84);
          *(undefined1 *)(iVar12 + 0x2f4) = 0;
          *(byte *)(iVar12 + 0x2f6) = bVar22;
          FUN_ram_4203f182(iVar12,iVar16,2);
          FUN_ram_4203f1e2(iVar12,10,0);
          FUN_ram_4203f286(iVar12,5,0);
          FUN_ram_4203f2a0(iVar12,param_2,iVar26);
          (*(code *)&SUB_ram_40010488)(iVar12 + 0x32c,0,6);
          if ((cVar2 != '\0') && (iVar25 != 0)) {
            FUN_ram_42044c4e(iVar12,iVar8);
          }
          FUN_ram_420348e2(iVar12,*(undefined1 *)(param_2 + 0x61),*(undefined1 *)(param_2 + 0x62));
          *(char *)(iVar12 + 0xab) = cVar1;
          *(undefined1 *)(iVar12 + 0xac) = 0;
          *(undefined1 *)(iVar12 + 0x28b) = *(undefined1 *)(param_2 + 0x60);
          *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 4);
          FUN_ram_4203f2d2(iVar12,param_2,param_3);
          *(bool *)(iVar12 + 0x28a) = *(char *)(param_2 + 0x54) != '\0';
          FUN_ram_4203e96e(iVar12);
          FUN_ram_420455e8(0x3fcb5040,iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17);
          if ((*(char *)(*(int *)(gp + -0x2b8) + 0x35c) == '\0') &&
             ((char)_DAT_ram_3fcdfb20[0x11] == '\x02')) {
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb1c + 0x38);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(_DAT_ram_3fcdfb1c + 0x38,0,0);
          }
        }
        else {
          uVar4 = *(undefined1 *)(iVar12 + 0xab);
          *(char *)(iVar12 + 0xab) = cVar1;
          if (((cVar2 != '\0') && (iVar25 != 0)) && (iVar8 == 0)) {
            *(undefined1 *)(iVar12 + 0xab) = uVar4;
          }
          FUN_ram_4203f182(iVar12,iVar16,2);
          if (((*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x05') && (_DAT_ram_3fcb5194 != 0)) &&
             (*(char *)(iVar12 + 0xa4) < _DAT_ram_3fcb5194)) {
            _DAT_ram_3fcb5194 = 0;
            aiStack_58[0] = (int)*(char *)(iVar12 + 0xa4);
            FUN_ram_4203bea0(0x12,aiStack_58,4);
          }
          FUN_ram_4203f1e2(iVar12,6,1);
          FUN_ram_4203f286(iVar12,5,0);
          iVar7 = *(int *)(param_2 + 0x18);
          if (iVar7 != 0) {
            *(undefined1 *)(iVar12 + 0x2f) = *(undefined1 *)(iVar7 + 2);
            *(undefined1 *)(iVar12 + 0x2e) = *(undefined1 *)(iVar7 + 3);
          }
          *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 4);
          if ((cVar2 != '\0') && (iVar25 != 0)) {
            FUN_ram_42044c4e(iVar12,iVar8);
          }
          FUN_ram_4203f2d2(iVar12,param_2,param_3);
        }
        if (*(char *)(*(int *)(gp + -0x2b8) + 0x92) != '\0') {
          iVar7 = *(int *)(gp + -0x2b8) + 0x93;
          iVar6 = FUN_ram_40399d6c(iVar7,iVar26 + 0x10,6);
          if ((iVar6 == 0) ||
             ((iVar25 != 0 && (iVar7 = FUN_ram_40399d6c(iVar7,iVar12 + 4,6), iVar7 == 0)))) {
            *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
            FUN_ram_42033fd8(1,8,4,0x3c07c778);
          }
        }
        if ((*_DAT_ram_3fcdfb20 & 0x400) != 0) {
          *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
          FUN_ram_42033fd8(1,8,4,0x3c07c794);
        }
        iVar7 = *(int *)(gp + -0x2b8);
        *(byte *)(iVar12 + 10) = *(byte *)(iVar12 + 10) | 4;
        FUN_ram_42045352(iVar7 + 8,cVar1,*(undefined1 *)(iVar7 + 4),bVar22);
      }
      return 0;
    }
    uVar15 = 0x3c07c748;
  }
LAB_ram_420470a0:
  uVar14 = 8;
LAB_ram_42047586:
  FUN_ram_42033fd8(1,uVar14,4,uVar15);
  return 0xffffffff;
}

